//Exercice-4

#include <stdio.h>

int minimum(int no1,int no2);
int maximum(int no1,int no2);
int multiply(int no1,int no2);

int main()
{
  int no1, no2;
  printf("Enter a value for no1:");
  int num1,num2;

  printf("Enter a value for no1:");
  scanf("%d",&no1);
  printf("Enter a value for no2:");
  scanf("%d",&no2);

  printf("%d",minimum(no1,no2));
  printf("%d",maximum(no1,no2));
  printf("%d",multiply(no1,no2));

  return 0;
}

//call functions
int minimum(int no1,int no2)
{
  if(no1>no2)
    return no2;
  else
    return no1;
}

int maximum(int no1,int no2)
{
  if(no1>no2)
    return no1;
  else
    return no2;
}

int multiply(int no1,int no2)
{
  return(no1 * no2);
}