#include<stdio.h>
#include<conio.h>
struct f
{
int rn,m;
char nm[20];
}o[5],o1;
int main()
{
FILE *p1,*p2;
int i,j;
p1=fopen("i.dat","w+");
p2=fopen("o.dat","w+");
for(i=0;i<5;i++)
{
printf("enter roll \n");
scanf("%d",&o[i].rn);
printf("entr name \n");
scanf("%s",o[i].nm);
printf("enter marks \n");
scanf("%d",&o[i].m);
fprintf(p1,"%d %s %d \n",o[i].rn,o[i].nm,o[i].m);
}
rewind(p1);
for(i=0;i<5;i++)
{
for(j=i+1;j<5;j++)
{
if(o[i].m>o[j].m)
{
o1=o[i];
o[i]=o[j];
o[j]=o1;
}}}
for(i=0;i<5;i++)
{
if(o[i].m>310)
{
fprintf(p2," %d %s %d \n",o[i].rn,o[i].nm,o[i].m);
}}
return 0;
getch();
}

