/*suppose yu are going to make a simple calculator
Prepare 4 functions:-add(),subtract(),multiply(),and divide()
Each function takes two parameters and return the value 
after applying the corresponding operations to those values */

#include <stdio.h>

int add(int a,int b){
		int s;
		s=a+b;
		return s;
	}

int subtract(int a,int b){
		int s;
		s=a-b;
		return s;
	}

float multiply(float x,float y){
		float m;
		m=x*y;
		return m;
	}

float divide(float x,float y){
		float d;
		d=x/y;
		return d;
	}

int main()
{
	int a,b,opt;
	float x,y;
	printf("Enter the number:\n1 for addition\n2 for subtraction\n3 for mutiplication\n4 for division\n:");
	scanf("%d",&opt);
	
	switch(opt){
		case 1:
		printf("Enter your first number: ");
		scanf("%d",&a);
		printf("Enter the second number:");
		scanf("%d",&b);
		printf("%d+%d=%d",a,b,add(a,b));
		break;

		case 2:
		printf("Enter your first number: ");
		scanf("%d",&a);
		printf("Enter the second number:");
		scanf("%d",&b);
		printf("%d-%d=%d",a,b,subtract(a,b));
		break;

		case 3:
		printf("Enter your first number: ");
		scanf("%f",&x);
		printf("Enter the second number:");
		scanf("%f",&y);
		printf("%f*%f=%.2f",x,y,multiply(x,y));
		break;
		
		case 4:
		printf("Enter your first number: ");
		scanf("%f",&x);
		printf("Enter the second number:");
		scanf("%f",&y);
		printf("%f/%f=%.2f",x,y,divide(x,y));
		break;

		default:
		printf("Invalid Choice!");
		break;
	}
	return 0;	
}
