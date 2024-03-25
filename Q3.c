#include<stdio.h>
void main()
{
  int no;
  printf("Enter a number: ");
  scanf("%d",&no);
  if(no<0)
    printf("Entered Number is NEGATIVE");
  else if(no>0)
    printf("Entered Number is POSITIVE");
  else
    printf("Entered Number is ZERO");

return 0;
}
