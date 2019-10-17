#include<stdio.h>
void main()
{ int a[100],search,i,n;
printf("Enter number of elemrnts requried in an array \n");
scanf("%d",&n);

printf("Enter the list of elements \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

printf("Enter a number to search: ");
scanf("%d",&search);

for(i=0;i<n;i++)
{
	if(a[i]==search)
	{
		printf("\n NUMBER FOUND");
		printf("\n Number %d is present at postion : %d",search,i+1);
		break;
	}
}
//	printf("\n Value of i : %d",i);
	if(i==n)
	{
		printf("\n Number %d not Found ",search);
	}

	
}
