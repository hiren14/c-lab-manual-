#include<stdio.h>
#include<conio.h>
#define MAX 10
int arr[MAX],index=-1;
// Function to insert element in array
void insert()
{
	int val;
    // get value from user
    printf("Enter value = ");
    scanf("%d",&val);
    // check array for overflow
    if(index>=MAX-1) // ?
    {
	printf(" Array is Overflow");
    }
    else // insert element in array
    {
	index++;
	arr[index] = val;
    }
}
void display()
{
	for(int i=0;i<=index;i++) //??
	{
		printf("\nArray[%d] = %d",i,arr[i]);
	}
}
void del()
{
	// check for underflow
	if(index<0)
	{
		printf("Array is Underflow");
	}
	else
	{
		index--;
	}
	display();
}
void update()
{
	int n,val;
	// get the update index value
	printf("Enter uodate index in range from 0 to %d, \n Enter your Index = ",index);
	scanf("%d",&n);
	if(n<0 || n>index)
	{
		printf("Enter update index in range of 0 to %d",index);
	}
	else
	{
		printf("\nEnter new value = ");
		scanf("%d",&val);
		arr[n]=val;
	}
	display();
}
void main()
{
	int choice;
	clrscr();
	// repetation of menu and code
	do
	{
		//print Menu
		printf("\n1-Insert\n2-Delete\n3-Update\n4-Search\n5-Dispaly\n6-Exit\nEnter your choice= ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 5:
				display();
				break;
			case 2:
				del();
				break;
			case 3:
				update();
				break;
			case 6:
				break;
			default:
				printf("Enter Proper Choice");
				break;
		}
	}while(choice!=6);
getch();
}
