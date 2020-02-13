#include<stdio.h>
#include<stdlib.h>
#include<string.h>






int main ()
{


 char string1 []="hello";
 char string2 []="world";
 char string3 []="C";




strcpy(string1,string3);

strcat(string1,string2);


int length_string1 = strlen(string1);

printf("strcpy %s",string3);

printf("strcat %s",string2);

printf("strlen %s",string2);


return 0;


}

