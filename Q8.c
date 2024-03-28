#include <stdio.h>

int main(void)
{
  const int level1 = 30;               
  const int level2 = 50;              
  const double discount1 = 0.10;       
  const double discount2 = 0.15;       
  const double unit_price = 5.0;     
  int quantity = 0;
  int total = 0;              
  int a1 = 0;                 
  int a2 = 0;             

  printf("Enter the quantity that you require: ");
  scanf("%d", &quantity);

  if (quantity > 50)                     
  {
    total = level1;
    a1 = level2 - level1;
    a2 = quantity - level2;
  }
  else if (quantity > 30)               
  {
    total = level1;
    a1 = quantity - level1;
  }
  else
    total = quantity;

  printf("The total price for %d items is $%.2lf\n", quantity,
    unit_price*(total + (1.0 - discount1)*a1 + (1.0 - discount2)*a2));
  return 0;
}
