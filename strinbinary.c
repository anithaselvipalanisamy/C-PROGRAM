#include<stdio.h>
#include<string.h>
int main()
{
char s[10];int i,c=0;
scanf("%s",&s);
for(i=0;i<10;i++)
{
if((s[i]==0) && (s[i]==1))
{
c++;}
}
if(c!=0)
{
printf("\nit is numeric");
}
else
{
printf("not numeric");
}
return 0;
}
