#include<stdio.h>
#include<stdlib.h>

void sum(int a,int b)
{
 int  sum =a+b;

 printf("sum of two numbers %d",sum);


}

int main ()
{

 int x,y;
 printf("enter two numbers");
 scanf("%d",&x);
 scanf("%d",&y);


sum(50,60);

sum(x,y);



return 0;
}

