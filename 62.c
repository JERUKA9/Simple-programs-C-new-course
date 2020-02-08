#include<stdio.h>
#include<stdlib.h>


int main ()
{

int value= 30;

int *pointer_p;

pointer_p = &value;


printf("value adress is %p",&value);

printf("value is %x",&value);

printf("value of pointer %d",*pointer_p);





return 0;


}

