#include<stdio.h>
#include<conio.h>
void main()
{
  int idly=100,dosai=50,tea=50,vadai=200;
  int aid,ad,at,av;
  int balid,bald,balt,balv;
  clrscr();
  printf("enter azagus idly:\n");
  scanf("%u",&aid);
  balid=idly-aid;
  printf("balenced idly:%d\n",balid);
  printf("enter azhgus dosai:\n");
  scanf("%u",&ad);
  bald=dosai-ad;
  printf("balenced dosai:%d\n",bald);
  printf("enter azhagus tea:\n");
  scanf("%u",&at);
  balt=tea-at;
  printf("balenced tea:%d\n",balt);
  printf(" enter azhagus vadai:\n");
  scanf("%u",&av);
  balv=vadai-av;
  printf("balenced vadai:%d\n",balv);
  getch();
}


