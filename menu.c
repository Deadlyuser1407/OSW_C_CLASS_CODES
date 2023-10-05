#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int subtract(int,int);
int multiplication(int,int);



int main()	{
	int op1, op2, res;
	char choice;
	while(1)	{
		printf("Enter the two numbers: ");
		scanf("%d%d",&op1,&op2);
	
		printf("+: Addition\n-: Subtraction\n*: Multiplication\nq: Quit\n");
		printf("please choice anyone: ");
		scanf("%c",&choice);
		scanf("%c",&choice);
	
		switch(choice)	{
			case '+' : res = sum(op1,op2);
					printf("Result = %d\n",res);
					break;
			case '-' : res = subtract(op1,op2);
					printf("Result = %d\n",res);
					break;
			case '*' : res = multiplication(op1,op2);
					printf("Result = %d\n",res);
					break;
			case 'q' : printf("Quit");
					exit(0);
			default : printf("Invalid Input\n");
					break;
		
		}
	}
	return 0;
}

int sum(int op1, int op2)	{
	int res = op1 + op2;
	return res;
}
int subtract(int op1, int op2)	{
	int res = op1 - op2;
	return res;
}
int multiplication(int op1, int op2)	{
	int res = op1 * op2;
	return res;
}
