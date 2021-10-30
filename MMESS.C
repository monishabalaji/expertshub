#include<stdio.h>
#include<conio.h>
void main()
{
  int idly=100,dosai=50,tea=50,vadai=200;
  int mid,md,mt,mv;
  int balid,bald,balt,balv;
  clrscr();
  printf("enter monisha idly:\n");
  scanf("%d",&mid);
  balid=idly-mid;
  printf("balenced idly:%d\n",balid);
  printf("enter monisha dosai:\n");
  scanf("%d",&md);
  bald=dosai-md;
  printf("balenced dosai:%d\n",bald);
  printf("enter monisha tea:\n");
  scanf("%d",&mt);
  balt=tea-mt;
  printf("balenced tea:%d\n",balt);
  printf(" enter monisha vadai:\n");
  scanf("%d",&mv);
  balv=vadai-mv;
  printf("balenced vadai:%d\n",balv);
  getch();
}


