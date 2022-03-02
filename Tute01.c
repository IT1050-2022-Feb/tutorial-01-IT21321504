//Exercice-1

#include <stdio.h>
int main()
{
  int sub1, sub2; 
  float avg;


  printf("Enter sub1 marks:");
  scanf("%d",&sub1);


  printf("Enter sub2 marks:");
  scanf("%d",&sub2);

  avg=(sub1+sub2)/2;

  printf("Average is %.2f",avg);


  return 0;
}
