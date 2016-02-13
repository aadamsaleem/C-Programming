#include<stdio.h>
#include<conio.h>
void main()
{
char a[30], b[10][10], *p, ch[1];
int i= -1;
int j, k,e;
int u=0;
do
{
printf("\t \t******Enter A String******\n");
gets(a);
p=a;
while(*p!='\0')
{
i++;
j=0;
while(*p!=' '&& *p!='\0')
{
b[i][j]=*p;
j++;
p++;
}
b[i][j]='\0';
if(*p!='\0')
p++;
}
printf("\t \t***The Words As Stored In A 2D Array Are***\n");
for(k=0;k<=i;k++)
{
for(e=0;b[k][e]!='\0';e++)
{
printf("%c",b[k][e]);
}
printf("\n");
}
getch();
i=-1;
j=0;
k=0;
e=0;
u=0;
printf("\t \t***Do You Want to do this again, Enter y/n***");
gets(ch);
}
while(*ch!='n');

}
