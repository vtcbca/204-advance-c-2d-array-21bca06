/*write a menu driven program to perform following task using UDF
and its different catagory.
1.Addition
2.Subtraction
3.Division
4.Modulus
5.Exit
Date:21-03-2022*/
#include<stdio.h>
#include<conio.h>
void addition(); //without function without returntype
void subtraction(int,int); //function with argument without returntype
int division(); //function without argument with returntype
int modulus(int,int); //function with argument whit returntype
int menu(); //function without argument with returntype
void main()
{
	int c,x,y,div;
	char yn;
	clrscr();
	do
	{
		c=menu();
		switch(c)
		{
			case 1:
				addition();
				break;
			case 2:
				printf("\nEnter 2 values:");
				scanf("%d%d",&x,&y);
				subtraction(x,y);
				break;
			case 3:
				div=division();
				printf("\nDivision id: %d",div);
				break;
			case 4:
				printf("\nEnter 2 value:");
				scanf("%d%d",&x,&y);
				div=modulas(x,y);
				printf("\nModulas of %d and %d is %d,x,y,div");
				break;
			case 5:
				exit(0);
			default:
				printf("Invalid choice");
		}
		printf("\n\n\tDo you want to cantinue ?(yes=y/Y,no=n/N):");
		flushall();
		scanf("%c",&yn);
		}while(yn=='y'||yn=='Y');
		getch();
}
int menu()
{
	int choice;
	printf("\nMenu");
	printf("\n____________________\n1.Addition\n2.Subtraction\n3.Division\n4.Modulus\n5.Exit\n____________________");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	return choice;
}
void addition()
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("\nAddition of %d & %d id%d",x,y,x+y);
}
void subtraction(int a,int b)
{
	printf("\nSubtraction of %d & %d is %d",a,b,a-b);
}
int division()
{
	int x,y;
	scanf("%d%d",&x,&y);
	return(x/y);
}
int modulas(int x,int y)
{
	return(x%y);
}