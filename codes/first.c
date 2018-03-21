
#include <stdio.h>
#include <conio.h>

int main()
{
	 char name[20];
	 int a,b,c;
	 char abc[10];
    printf("Enter Your Name \n");
    scanf("%[^\n]s", &name);
		printf("Enter Value of A: \n");
		scanf("%d", &a);		printf("Enter Value of B: \n");
		scanf("%d", &b);
		c=a+b;
		printf ("Your Name is %s \n  ", name);
		printf ("Sum of A and B is: %d \n", c);
  /*testing */
		return 0;
		}
