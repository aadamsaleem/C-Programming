#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int **init(int **a, int r, int c)
{
	int i,j,x;
	randomize();
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			x=rand()%2;
			if(x==0)
				a[i][j]=rand()%100;
			else
				a[i][j]=(-1)*rand()%100;
		}
	}
	return a;

}

void display(int **a, int r, int c)
{
	int i,j;
	for(i=1; i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
void sub(int **a, int r, int c)
{
	int i,j,k,l,m,n,cmp=-32565,p,q,t,s,temp;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			for(k=1;k<=r;k++)
			{
				for(l=1;l<=c;l++)
				{
					temp=0;
					for(m=j-1;m<k;m++)
					{
						for(n=i-1;n<l;n++)
						{
							temp += a[m][n];
						}
					}
					if(temp > cmp)
					{
						cmp = temp;
						p = n-1;
						q = i-1;
						t = k;
						s = l;
					}
				}
			}
		}
	}
	printf("\n Max = %d\n \n",cmp);
	for(i=p;i<t;i++)
	{
		for(j=q;j<s;j++)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int r,c,i,j,**a;
	clrscr();
	printf("\nEnter the size of row...");
	scanf("%d",&r);
	printf("\nEnter the size of column...");
	scanf("%d",&c);

	a=init(a,r,c);
	display(a,r,c);
	sub(a,r,c);
	getch();
}