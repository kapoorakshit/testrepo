#include <stdio.h>
#include <stdlib.h>

int main()
{ int x,y,n;
  printf("enter the 3 digit number");
  scanf("%d",&n);
  printf("%d\n",n);
  x=n%100;
  printf("%d\n",x);
  y=n/100;
  printf("%d",y);
    printf("Hello world!\n");
    return 0;
}
