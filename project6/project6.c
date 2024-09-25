#include <stdio.h>

int main(){

char firstname[50];
char lasttname[50];
char middlename[50];
char gender[50];

int age;


printf("First Name, Middle name, Last name:");
scanf("%49s %49s %49s", firstname, middlename, lasttname );
printf("age:");
scanf("%d",&age);
printf("Gender:");
scanf("%s",gender);

printf("///// ----- ///// ----- ///// -----\n");
printf("Student name: %s %s %s\n",firstname,middlename,lasttname);
printf("Age: %d\n",age);
printf("Gender: %s\n",gender);
printf("///// ----- ///// ----- ///// -----\n");

}