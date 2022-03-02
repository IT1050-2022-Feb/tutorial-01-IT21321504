//Exercice-2

#include <stdio.h>

int main()
{
  int dist,amount;

  printf("Enter the distance:");
  scanf("%d",& dist);

  if (dist<=30)
    amount = dist * 50;
  else
    amount = 30 * 50 +(dist-30)*40;


  printf("Amouunt =%d",amount); //display amount

  return 0;

}
