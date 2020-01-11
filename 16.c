#include<stdio.h>
#include<stdlib.h>


int main()
{
    int age;

    double gpa;

    char grade;

    char name[20];



    printf("Enter age:");
    printf("your gpa:");
    scanf("%d",&age);
    scanf("%lf",&gpa);
    scanf("%d",&grade);
    scanf("%s",&name);
    fgets(name,20,stdin);



    printf("You are %d",age);
    printf("your gpa %f",gpa);






    return 0;
}


