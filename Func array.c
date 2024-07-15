// a C program allows a user to select a task from two subprograms 
// with a user defined function 
// that computes the sum of a list of 5 numbers
// and another user defined function to compute product of a list of 5 numbers
// and third function to display the list of 5 numbers
#include<stdio.h>

// function definition

int sum(int x[]);
int product(int x[]);
int display(int x[]);

int main()
{
    // function call
    
    int lista[5];
	int sum_answer,prod_answer,task=1;
    int i;
    
 	for(i=0;i<5;i++)
	 {
	 	 printf("Enter value of number %d :",i+1);
		 scanf("%d",&lista[i]);
	 }

    
    while(task !=4) 
	{
		printf("\n -----MENU--- \n");
    	printf("1: Calculate sum  \n");
		printf("2: Calculate product  \n");
		printf("3: Display the list of numbers \n");
		printf("4: Exit               \n");
		printf("Enter a Task to execute from menu :");
		scanf("%d",&task);
    
    switch(task)
    {
		case 1: { 	  sum_answer = sum(lista);//function call
		
				      display(lista);
						
				  	  printf("sum = %d \n\n",sum_answer);
				  
					
					break;
				}
		case 2:{ 
					prod_answer = product(lista);  //function call
				  	  
				  	  display(lista);
    
    				   	printf("product = %d \n\n",prod_answer);
					break;
				}
		case 3:{   
			
				printf("\n I \t \t List a\n");
				
					display(lista);
				
				break;
		 		 }			
		
		
		
		
		case 4:{   printf("Program has terminated...\n");
				break;
		 		 }	
	     default:
		 	 {
		 	     printf("Wrong choice---Try again.....\n");
		 	     break;
		 	  }	
	} // end of swith
       
	} // end of while

    // signal to operating system everything works fine
    return 0;
}  // enfd of main()

//-------------------------------------------------------
// first user defined function to calculate sum

int sum(int x[5])
{
    int i,sum=0;
    
    i=0;
    while(i<5)
	{
	sum = sum + x[i];
	++i;	
	}
    
    return sum;
}
//---------------------------------------------------------
// second user defined function to calculate sum

int product(int x[])
{
    int i,prod=1;
    
    i=0;
    while(i<5)
	{
		prod = prod  * x[i];
		++i;
	}
    
    return prod;
}
//----------------------------------------------------------

// second user defined function to calculate sum
int display(int x[])
{
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("\n %d \t  \t %d \n",i+1,x[i]);		
	}
	
	return 0;
}


