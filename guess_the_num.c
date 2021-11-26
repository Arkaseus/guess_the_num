#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{ int num,guess,count=1;
 char temp='y';
 while(temp=='y')
 {
    srand(time(0));
    num=rand()%10;
    printf("guess the number b/w 1 to 10\n");
    scanf("%d",&guess);
    while(guess!=num)
   { if(guess<num)
     printf("enter bigger number: ");
     else if(guess>num)
     printf("enter smaller number: ");
     count++;
     scanf("%d",&guess);   
   }
    if(guess==num)
   printf("you guessed right ! (%d attempts)\nnumber was %d\n",count,num);

   printf("\nPress 'Y' to play again: ") ;
   fflush(stdin);
   scanf("%c",&temp);
 }
}


