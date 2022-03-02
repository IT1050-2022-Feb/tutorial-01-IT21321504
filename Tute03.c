//Exercice-3

#include <stdio.h>
int main()
{
  int n;
  int count =0, sum =0;

  printf("Enter a number:");
  scanf("%d",&n);

  while(count<=n)
    {
      sum= count + sum;
      count++;
    }

  printf("%d",sum);

  return 0;
}

