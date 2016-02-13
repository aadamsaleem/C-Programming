#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int per=0;

    void swap(char*p,char*q)
    {
    char c;
    c=*p;
    *p=*q;
    *q=c;
    }

    void perm(char *a,int m,int n)
    {
    int i,j;
	if(m==n)
	{
	for(i=0;i<=n;i++)
	{
		printf("%c",a[i]);

	}
	per++;
	}

	else
	{
	for(j=n;j<=m;j++)
	{
	swap(a+j,a+n);
	 perm(a,m,n+1);
	swap(a+j,a+n);
	}
	}
	printf("\n");
    }

    void main()
    {
    char a[10];

    clrscr();

    printf("\nENTER THE STRING  ");
    gets(a);

    perm(a,strlen(a)-1,0);

    printf("\n%d",per);
    getch();
    return 0;

    }