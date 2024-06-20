#include<stdio.h>
int main()
{
int val,value,a,b,c,d,e;
printf("______________________________________________________________________________\n");
printf("***ENTERYOURFAVOURITE||FRUITS||NAMES||FLOWERS||CELBRITY_NAMES|| TOMENU***\n");
printf("______________________________________________________________________________\n");
printf("__________________________________________________________________________\n");
printf("*****CAUTION:CHOOSE YOUR FAVOURITE ONE FROM THELIST AND DON'T TELL***\n");
printf("__________________________________________________________________________\n");
//USER ENTERD VALUES
char s1[10];
char s2[10];
char s3[10];
char s4[10];
char s5[10];
char s6[10];
char s7[10];
char s8[10];
char s9[10];
char s10[10];
char s[5];
// taking a sentence input from the user
printf("ENTER YOUR FAVOURITE MENU OF 10-ITEMS:\n ");
gets(s1);
gets(s2);
gets(s3);
gets(s4);
gets(s5);
gets(s6);
gets(s7);
gets(s8);
gets(s9);
gets(s10);
printf("SELECT YOUR FAVOURITE FROM THE LIST:[ENTER OK IFSELECTED]");
scanf("%s",&s);
//ORDER-1
printf("\nIF U FIND YOUR ITEM IN BELOW MENU ENTER[1]->YES||IF NOTENTER[0]->NO\n");
printf("THE MENU OF ORDER-1 IS:\n%s\n%s\n%s\n%s\n%s\n%s",s1,s5,s2,s6,s7,s3,s4,s8,s10,s9);
printf("\n\n");
scanf("%d",&a);
printf("\n\n\n%d\n\n",a);
//ORDER-2
printf("\nIF U FIND YOUR ITEM IN BELOW MENU ENTER[1]->YES||IF NOTENTER[0]->NO\n");
printf("THE MENU OF ORDER-2 IS:\n%s\n%s\n%s\n%s\n%s\n%s",s5,s7,s3,s4,s10,s8);
printf("\n\n");
scanf("%d",&b);
printf("\n\n\n%d\n\n",b);
//ORDER-3
printf("\nIF U FIND YOUR ITEM IN BELOW MENU ENTER[1]->YES||IF NOTENTER[0]->NO\n");
printf("THE MENU OF ORDER-3 IS:\n%s\n%s\n%s\n%s\n%s\n%s",s1,s4,s6,s7,s5,s9);
printf("\n\n");
scanf("%d",&c);
printf("\n\n\n%d\n\n",c);
//ORDER-4
printf("\nIF U FIND YOUR ITEM IN BELOW MENU ENTER[1]->YES||IF NOTENTER[0]->NO\n");
printf("THE MENU OF ORDER-4 IS:\n%s\n%s\n%s\n%s\n%s\n%s",s10,s5,s2,s3,s9,s6);
printf("\n\n");
scanf("%d",&d);
printf("\n\n%d\n\n\n",d);
//ORDER-5
printf("\nIF U FIND YOUR ITEM IN BELOW MENU ENTER[1]->YES||IF NOTENTER[0]->NO\n");
printf("THE MENU OF ORDER-5 IS:\n%s\n%s\n%s\n%s\n%s\n%s",s1,s5,s2,s6,s10,s8);
printf("\n\n");
scanf("%d",&e);
printf("\n\n\n%d\n\n",e);
//LOGIC PART
val=((a*10000)+(b*1000)+(c*100)+(d*10)+(e));
printf("%d",val);
if (val==10101)
{
printf("__________________________________");
printf("\n->%s IS YOUR FAVOURITE |CHOOSEN BY USER<-\n",s1);
printf("__________________________________");
}
else if (val==10011)
{
printf("__________________________________");
printf("\n->%s IS YOUR FAVOURITE |CHOOSEN BY USER<-\n",s2);
printf("__________________________________");
}
else if (val==11110)
{
printf("__________________________________");
printf("\n->%s IS YOUR FAVOURITE |CHOOSEN BY USER<-\n",s3);
printf("__________________________________");
}
else if (val==11000)
{
printf("__________________________________");
printf("\n->%s IS YOUR FAVOURITE |CHOOSEN BY USER<-\n",s4);
printf("__________________________________");
}
else if (val==11111)
{
printf("__________________________________");
printf("\n->%s IS YOUR FAVOURITE |CHOOSEN BY USER<-\n",s5);
printf("__________________________________");
}
else if (val==10111)
{
printf("__________________________________");
printf("\n->%s IS YOUR FAVOURITE |CHOOSEN BY USER<-\n",s6);
printf("__________________________________");
}
else if (val==11100)
{
printf("__________________________________");
printf("\n->%s IS YOUR FAVOURITE |CHOOSEN BY USER<-\n",s7);
printf("__________________________________");
}
else if (val==11001)
{
printf("__________________________________");
printf("\n->%s IS YOUR FAVOURITE |CHOOSEN BY USER<-\n",s8);
printf("__________________________________");
}
else if (val==10110)
{
printf("__________________________________");
printf("\n->%s IS YOUR FAVOURITE |CHOOSEN BY USER<-\n",s9);
printf("__________________________________");
}
else if (val==11011)
{
printf("__________________________________");
printf("\n->%s IS YOUR FAVOURITE |CHOOSEN BY USER<-\n",s10);
printf("__________________________________");
}
else
{
printf("wrong data\n");
printf("error");
return 0;
}}

