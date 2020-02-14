#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{

int id;

   char name[20];

   float percentage;




};




int main ()
{


struct student record1;

record1.id =1;

strcpy(record1.name,"John");

record1.percentage=70.20;


printf("id=%d  name=%s   percentage =%f",record1.id,record.name,record.percentage);




return 0;


}

