//sample code to check output 
#include<stdio.h>

void modify(int *a)
{
*a=10;
a=NULL;
}
int main()
{
int x=5;
int *p=&x; //assume p=0XFFFF
printf("%p %u\n",p,x); //5

modify(p);
printf("%p %u\n",p,x);//10
return 0;
}

//to make p NULL from above code
/*
#include<stdio.h>

void modify(int *a)
{
*a=10;
a=NULL;
}
int main()
{
int x=5;
int *p=&x; //assume p=0XFFFF
int **y=&p;

printf("%p %u\n",p,x);

modify(p);
*y=NULL;

printf("%p %u\n",p,x);
return 0;
}
