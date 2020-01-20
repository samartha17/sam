#include<stdio.h>
void conc(char c[100]);
void main()
{
char c[100];
scanf("%s",c);
conc(c);
}
void conc(char c[100])
{
char s[100];
int len,i,j;
len=strlen(c);
for(i=len,j=0; i>=0,j<=len; i--,j++)
{
s[j]=c[i];
}
printf("%s",s);
if(s==c)
printf("pallindrom");
else
printf("not pallindrom");
}
