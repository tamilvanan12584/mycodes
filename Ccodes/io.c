#include <stdio.h>
int main()
{
int age;
char name[50], loca[50];
printf("Enter Your Name :\n");
scanf("%[^\n]s",&name);
printf("Enter your Age : \n");
scanf("%d",&age);
printf("Enter your City : \n");
scanf("%s",&loca);
printf("\n\n\n");
printf("===================================\n");
printf("YOUR BASIC PROFILE\n");
printf("===================================\n");
printf("Your Name: %s \nYour Age: %d \nYour Location: %s \nYour Year of Birth: %d\n", name,age,loca,2018-age);
printf("===================================\n");
return 0;
}
