#include<stdio.h>
int main()
{
  int num;

  printf("Enter Number Here : ");
  scanf("%d",&num);

int sum = 0;

  while(num != 0)
    {
      int digit= num% 10;
      sum = sum + digit;
      num = num/10;
    }
 
printf("%d",sum);

return 0;
}