#include<stdio.h>
#include<string.h>
int main()
{
int i,l;
char a[100];
scanf("%s\t%d",&a,&l);
for(i=0;i<l;i++)
{
printf("%c",a[i]);
}
return 0;
}
