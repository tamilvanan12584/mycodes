#include <stdio.h>
int main()
{
  int a,b,c,i;
  printf("Select Your Choice\n");
  printf ("======================\n");
  printf("1.For Loop\n");
  printf("2.Do While Loop\n");
  printf("3.While loop\n");
  printf("=======================\n");
  printf("Enter your choice 1/2/3: ");
  scanf("%d",&c);
  switch (c)
  {         /* perform looping statements by user option using switch case */
    case 1:
    printf("=======For Looping=========");
    for(i=1;i<=100;i++) /*For Loop */
      {
      printf("This is good limited loop  %d\n", i);
      if (i==90)
        {
        printf ("=============== BREAK ================\n");
        break;
        }
      else if (i==25)
        {
        printf ("\n======== SKIP & CONTINUE FROM 75 =========\n\n");
        i=75;
        continue;
        }
      }
    break;
    case 2:
    printf("=======Do While Looping=========");
    printf("Execute looping output statements before test condition\n");
    a=10;b=25;
    do  /* do while */
    {
      a++;
      printf("a value is %d and b value is %d \n", a,b);
    } while (a<=b);
    break;
    case 3:
    printf("=========While loop===========\n");
    printf("execute condition before looping output statements\n");
    a=15;
    while (a>=0)
    {
      printf("a value is %d \n", a);
      a--;
    }
    break;
    default:
    printf("Enter Wrong Input and modified \n");
    break;
  }
  return 0;

}
