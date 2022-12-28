#include<stdio.h>
#include<stdlib.h>
int stack[100],choice,n,top,x;
void push();
void pop();
void display();
int main()
{
	int top=-1;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
	do
	{
		printf("Enter choice");
		scanf("%d",&choice);
		{
			switch(choice)
			{
				case 1:
					push();
					break;
				case 2:
					pop();
					break;
				case 3:
					display();
					break;
				default:
					printf("Enter valid choice");
			}
		}
	}
}
void push()
	{
		if(top>=n-1)
		{
			printf("Stack overflow");
		}
		else
		{
			printf("Enter elemnt to insert");
			scanf("%d",&n);
			top++;
			stack[top]==x;
		}
	}
	void pop()
	{
		if(top==-1)
		{
			printf("Stack underflow");
		}
		else
		{
			printf("Poped element is %d",stack[top]);
			top--;
		}
	}
	void display()
	{
		int i;
		if(top>=-1)
		{
			printf("Elements in stack are:");
			for(i=0;i<n;i++)
				printf("%d",stack[i]);
		}
		else
		{
			printf("Stack is empty");
		}
	}

