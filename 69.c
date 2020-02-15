#include<stdio.h>
#include<stdlib.h>
#include<string.h>

union myunion {

int myint;

char mychar;


}myunion;







int main ()
{


myunion.myint =4;

myunion.mychar =9;

printf("%i /n",myunion.mychar);



return 0;


}

