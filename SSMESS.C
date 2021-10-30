#include<stdio.h>
#include<conio.h>
void main()
{
  int idly=100,dosai=50,tea=50,vadai=200;
  int ssid,ssd,sst,ssv;
  int mid,md,mt,mv;
  int balid,bald,balt,balv;
  clrscr();
  printf("enter sridhar idly:\n");
  scanf("%d",&ssid);
  printf("enter sridhar dosai:\n");
  scanf("%d",&ssd);
  printf("enter sridhar tea:\n");
  scanf("%d",&sst);
  printf(" enter sridhar vadai:\n");
  scanf("%d",&ssv);
  balid=idly-ssid;
  printf("balanced idly:%d\n",balid);
  bald=dosai-ssd;
  printf("balence dosai:%d\n",bald);
  balt=tea-sst;
  printf("balence tea:%d\n",balt);
  balv=vadai-ssv;
  printf("balence vadai:%d\n",balv);
  printf("enter monisha idly:\n");
  scanf("%d",&mid);
  printf("enter monisha dosai:\n");
  scanf("%d",&md);
  printf("enter monisha tea:\n");
  scanf("%d",&mt);
  printf(" enter monisha vadai:\n");
  scanf("%d",&mv);
  balid=idly-mid;
  printf("balanced idly:%d\n",balid);
  bald=dosai-md;
  printf("balence dosai:%d\n",bald);
  balt=tea-mt;
  printf("balence tea:%d\n",balt);
  balv=vadai-mv;
  printf("balence vadai:%d\n",balv);
  getch();
}


