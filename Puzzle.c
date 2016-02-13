#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
  void display(char d[3][3])
      {
	 int i,j;
     system("cls");
     for(i=0;i<3;i++)
	 {
	    for(j=0;j<3;j++)
	    {
	       printf("%c\t",d[i][j]);
	    }
	    printf("\n\n");
	 }
      }
      int check(char d[3][3])
      {
	 char a[9];
	 int i,j,f,k;
	 k=0;
	 j=0;
	 i=0;
	 f=1;
	 while(i<8)
	 {
	    a[i]=i+1+48;
	    i++;
	 }
	 a[i]=' ';
	// for(i=0;i<9;i++)
	// printf("%c ",a[i]);
	// getch();
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
	if(d[i][j]!=a[k])
	return 1;
	k++;
	}}
	if(i==2 && j==2)
	return 0;
	}

int main()
{
  static char b[3][3],key,k;
      static int k1,i,a[9],j,r,c,run,num;
     // int a[9]={1,2,3,4,5,6,7,9,8};
      time_t t;
      srand((unsigned)time(&t));
      run=1;
      
      while(i<9)
      {
	    num=rand()%10;
	    if(num==0)
	    num++;

	       if(num!=a[0] &&  num!=a[1] &&  num!=a[2] &&  num!=a[3] &&  num!=a[4] &&  num!=a[5] &&  num!=a[6] &&  num!=a[7] &&  num!=a[8])
	       {
		  a[i]=num;
		  i++;
	       }
      }

      for(i=0;i<3;i++)
      {
	 for(j=0;j<3;j++)
	 {
	    if(a[k1]==9)
	    {
	    b[i][j]=' ';
	    r=i;
	    c=j;
	    }
	    else
	    b[i][j]=48+a[k1];
	    k1++;
	    printf("%c\t",b[i][j]);
	 }
	 printf("\n\n");
      }
      while(run==1)
      {
	    k=getch();
	    //printf("%d",k);
	    key=getch();
	    //printf("%d",key);
	    if(key==77 && c!=0)
	    {
	       b[r][c]=b[r][c-1];
	       b[r][c-1]=' ';
	       c=c-1;
	       display(b);
	       run=check(b);
	    }
	    if(key==72 && r!=2)
	    {
	       b[r][c]=b[r+1][c];
	       b[r+1][c]=' ';
	       r=r+1;
	       display(b);
	       run=check(b);
	    }
	    if(key==75 && c!=2)
	    {
	       b[r][c]=b[r][c+1];
	       b[r][c+1]=' ';
	       c=c+1;
	       display(b);
	       run=check(b);
	    }
	    if(key==80 && r!=0)
	    {
	       b[r][c]=b[r-1][c];
	       b[r-1][c]=' ';
	       r=r-1;
	       display(b);
	       run=check(b);
	    }
      }
      printf("\nWON");
      return 0;
}
