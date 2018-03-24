#include <stdio.h>
#include <math.h>
int main()
{
  int a,b,c;
  printf("Enter Value of a: ");
  scanf("%d",&a);
  printf("Enter Value of b: ");
  scanf("%d",&b);
  printf("====================================\n");
  printf("       Operators Usages             \n");
  printf("====================================\n");
  printf("a+b= %d\n",a+b);
  printf("a-b= %d\n",a-b);
  printf("axb= %d\n",a*b);
  printf("a/b= %d\n",a/b);
  if (a>b)
  {
  printf("a>b = True a is big");
    }
  else if (a<b)
  {
  printf("b>a = True b is big");
    }
  else if (a=b)
  {
  printf("a=b a and b is equal");
      }
return 0;
  }
