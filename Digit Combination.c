#include<stdio.h>
#include<conio.h>
void main()
{
     int l,a[8],k,j,i,temp1,temp,temp2; 
    
     printf("enter a 4 digit number\n");
     for(l=0;l<4;l++)
     scanf("%d",&a[l]);
     for(k=0;k<4;k++)
     {
                     for(j=0;j<3;j++)
                     {
                                     for(i=0;i<2;i++)
                                     {
                                                     temp=a[2];
                                                     a[2]=a[3];
                                                     a[3]=temp;
                                                     printf("%d%d%d%d\n",a[0],a[1],a[2],a[3]);
                                     }
                      temp1=a[1];
                      a[1]=a[2];
                      a[2]=a[3];
                      a[3]=temp1; 
                                   
                      }
     temp2=a[0];
     a[0]=a[1];
     a[1]=a[2];
     a[2]=a[3];
     a[3]=temp2;
     
     }
     
     getch();
     }
