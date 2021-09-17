#include<stdio.h>
int main()
{   int number,count=0,lastbit;
	printf("Enter the decimal number ");
	scanf("%d",&number);
	
	while(number!=0)
	{
	lastbit=number & 1;
	if(lastbit==1)
	{
		count++;
	}
	number=number>>1;
   }
   printf("the count of set bit is %d",count);
	
}
