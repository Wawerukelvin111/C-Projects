#include <stdio.h>
#include <string.h>

#define MAX_TASKS 10
#define MAX_LENGTH 50

char tasks[MAX_TASKS][MAX_LENGTH];
int num_tasks = 0;

void addTask() {
    char task[MAX_LENGTH];
    if (num_tasks == MAX_TASKS) {
        printf("Task list is full. Cannot add more tasks.\n");
        return;
    }
    printf("Enter the task: ");
    scanf(" %[^\n]", task); // Read the task description
    strcpy(tasks[num_tasks], task); // Copy task to tasks array
    num_tasks++;
    printf("Task added successfully.\n");
}

void removeTask() {
    int task_number;
    if (num_tasks == 0) {
        printf("Task list is empty. Nothing to remove.\n");
        return;
    }
    printf("Enter the task number to remove (1-%d): ", num_tasks);
    scanf("%d", &task_number);
    if (task_number < 1 || task_number > num_tasks) {
        printf("Invalid task number.\n");
        return;
    }
    // Remove task by shifting remaining tasks
    for (int i = task_number - 1; i < num_tasks - 1; i++) {
        strcpy(tasks[i], tasks[i + 1]);
    }
    num_tasks--;
    printf("Task removed successfully.\n");
}

void displayTasks() {
    if (num_tasks == 0) {
        printf("Task list is empty.\n");
        return;
    }
    printf("Current Tasks:\n");
    for (int i = 0; i < num_tasks; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

int main() {
    int choice;
    printf("Simple To-Do List Manager\n");
    do {
        printf("\nMenu:\n");
        printf("1. Add Task\n");
        printf("2. Remove Task\n");
        printf("3. Display Tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                removeTask();
                break;
            case 3:
                displayTasks();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number from 1 to 4.\n");
        }
    } while (choice != 4);

    return 0;
}
