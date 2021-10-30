#include<stdio.h>
#include<conio.h>
void main()
{
  int idly=100,dosai=50,tea=50,vadai=200;
  int ssid,ssd,sst,ssv;
  int mid,md,mt,mv;
 // int balid,bald,balt,balv;
  clrscr();
  printf("enter sridhar idly:\n");
  scanf("%d",&ssid);
  printf("enter sridhar dosai:\n");
  scanf("%d",&ssd);
  printf("enter sridhar tea:\n");
  scanf("%d",&sst);
  printf(" enter sridhar vadai:\n");
  scanf("%d",&ssv);
  idly=idly-ssid;
 // printf("balanced idly:%d\n",balid);
  dosai=dosai-ssd;
 // printf("balence dosai:%d\n",bald);
  tea=tea-sst;
 // printf("balence tea:%d\n",balt);
  vadai=vadai-ssv;
 // printf("balence vadai:%d\n",balv);
  printf("enter monisha idly:\n");
  scanf("%d",&mid);
  printf("enter monisha dosai:\n");
  scanf("%d",&md);
  printf("enter monisha tea:\n");
  scanf("%d",&mt);
  printf(" enter monisha vadai:\n");
  scanf("%d",&mv);
  idly=idly-mid;
  printf(" idly:%d\n",idly);
  dosai=dosai-md;
  printf(" dosai:%d\n",dosai);
  tea=tea-mt;
  printf(" tea:%d\n",tea);
  vadai=vadai-mv;
  printf(" vadai:%d\n",vadai);
  getch();
}



