#include<stdio.h>
#include<conio.h>
int ragul=1;
void main()
{

  while(ragul)
    {
     clrscr();
     printf("enter ragul status:");
     scanf("%d",&ragul);
     {
     if(ragul==0)
     {
      printf("ragul is sitting");
      ragul=1;
      getch();
      continue;
     }
     else if(ragul==1)
     {
      printf("ragul is stading");
     // break;
     }

     else
     {
      printf("invalid input");
     }

     getch();
     }
    }

}
