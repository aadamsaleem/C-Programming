#include <stdio.h>

//#define n 4

//static int a[n][n];
int count=0, n, **a;

void init()
{
	int i, j;
	a=(int **)malloc(sizeof(int *)*n);
	for(i=0; i<n; i++)
		a[i]=(int *)malloc(sizeof(int)*n);
	for(i=0; i<n; i++)
	for(j=0; j<n; j++)
		a[i][j]=0;
}

int check(int r, int c)
{
	int y, x;

	for(x=c, y=0; y<n; y++)
	{
		if(a[y][x]==1)
			return 0;
	}
	for(y=0; y<n; y++)
	{
		x=r+c-y;
		if(x<0||x>=n)
			continue;
		if(a[y][x]==1)
			return 0;
	}
	for(y=0; y<n; y++)
	{
                x=c+y-r;
                if(x<0||x>=n)
                        continue;
                if(a[y][x]==1)
                        return 0;
        }
	return 1;
}

void display()
{
	int i, j;
//	printf("*");
//	for(i=1; i<n; i++)
//		printf("********");
	for(i=0; i<n; i++)
	{
		printf("\n\n\n");
		for(j=0; j<n; j++)
			printf("%d\t", a[i][j]);
	}
	printf("\n");
//	getchar();
}


void fill(int l)
{
	int i;
	if(l==n)
	{
		display();
		count++;
		return;
	}
	for(i=0; i<n; i++)
	{
		if(check(l,i)==1)
		{
			a[l][i]=1;
			fill(l+1);
		}
		a[l][i]=0;
	}
}

void main()
{
	printf("Enter the order of the puzzle: ");
	scanf("%d", &n);
	init();
	printf("Empty Board:\n");
	display();
	printf("\n\nSolutions:\n");
	fill(0);
	printf("A total of %d solutions.\n", count);
	return;
}
