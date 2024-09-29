#include<stdio.h>
int main()
{
  char coffeetype, cupsize;
  float totaltime=0;
  printf("Which Type of Coffee do you want\n\n1.B=Black Coffee\n2.W=White Coffee\n");
  scanf(" %c",&coffeetype);
  printf("Manual or Double Cup size\n1.M=Manual Cup\n2.D=Double Cup\n");
  scanf(" %c", &cupsize);
  if (coffeetype == 'B' || coffeetype == 'b')
  {
    if (cupsize == 'M' || cupsize == 'm')
    {  
      printf("OPERATIONS |   TIME\n");
      printf("Put Water  |  20 mins\n");
      printf("Sugar      |  20 mins\n");
      printf("Mix Well   |  25 mins\n");
	    printf("Add Coffee |  15 mins\n");
	    printf("Add Milk   |     - \n");
      printf("Mix Well   |  25 mins\n");
      totaltime = 20 + 20 + 25 + 15 + 0 + 25;
      printf("Coffee Type: Black Coffee\nCup Size: Manual\nTotal Time: %f",totaltime);
    } 
    else if (cupsize == 'D' || cupsize == 'd')
    {
      printf("OPERATIONS |   TIME\n");
      printf("Put Water  |  30 mins\n");
      printf("Sugar      |  30 mins\n");
      printf("Mix Well   |  37.5 mins\n");
	    printf("Add Coffee |  22.5 mins\n");
	    printf("Add Milk   |     - \n");
      printf("Mix Well   |  37.5 mins\n");
      totaltime = (20 * (50 / 100) + 20) + (20 * (50 / 100) + 20) + (25 * (50 / 100) + 25) + (15 * (50 / 100) + 15) + 0 + (25 * (50 / 100) + 25);
      printf("Coffee Type: Black Coffee\nCup Size: Double\nTotal Time: %f",totaltime);
    }
  } else if (coffeetype == 'W' || coffeetype == 'w') 
  {
    if (cupsize == 'M' || cupsize == 'm')
    {
      printf("OPERATIONS |   TIME\n");
      printf("Put Water  |  15 mins\n");
      printf("Sugar      |  15 mins\n");
      printf("Mix Well   |  20 mins\n");
	    printf("Add Coffee |  2 mins\n");
	    printf("Add Milk   |  4 mins \n");
      printf("Mix Well   |  20 mins\n");
      totaltime = 15 + 15 + 20 + 2 + 4 + 20;
      printf("Coffee Type: White Coffee\nCup Size: Manual\nTotal Time: %f",totaltime);
    } 
    else if (cupsize == 'D' || cupsize == 'd')
    {
      printf("OPERATIONS |   TIME\n");
      printf("Put Water  |  22.5 mins\n");
      printf("Sugar      |  22.5 mins\n");
      printf("Mix Well   |  30 mins\n");
	    printf("Add Coffee |  3 mins\n");
	    printf("Add Milk   |  6 mins \n");
      printf("Mix Well   |  30 mins\n");
      totaltime = (15 * (50 / 100) + 15) + (15 * (50 / 100) + 15) + (20 * (50 / 100) + 20) + (2 * (50 / 100) + 2) + (4 * (50 / 100) + 4);
      printf("Coffee Type: White Coffee\nCup Size: Double\nTotal Time: %f",totaltime);
	}
  }
  return 0;
}
