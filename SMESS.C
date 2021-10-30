#include<stdio.h>
#include<conio.h>
void main()
{
  int idly=100,dosai=50,tea=50,vadai=200;
  int sid,sd,st,sv;
  int balid,bald,balt,balv;
  clrscr();
  printf("enter santhosh idly:\n");
  scanf("%d",&sid);
  balid=idly-sid;
  printf("balenced idly:%d\n",balid);
  printf("enter santhosh dosai:\n");
  scanf("%d",&sd);
  bald=dosai-sd;
  printf("balenced dosai:%d\n",bald);
  printf("enter santhosh tea:\n");
  scanf("%d",&st);
  balt=tea-st;
  printf("balenced tea:%d\n",balt);
  printf(" enter santhosh vadai:\n");
  scanf("%d",&sv);
  balv=vadai-sv;
  printf("balenced vadai:%d\n",balv);
  getch();
}


