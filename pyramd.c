/*formation of pyramid of numbers*/
#include<stdio.h>
void main()
{
     int n,i,j,k,l;
     printf("enter a number to see pyramid of numbers :\n");
     scanf("%d",&n);
    
     for(i=1;i<=n;i++)
     {
                     for(j=1;j<=n-i;j++)
                     {
                                      printf("\t"); 
                     }
                     for(k=1;k<=i;k++)
                     {
                                      printf("%d",k);
                                       printf("\t"); 
                     }
                     if(i>1)
                     {
                     for(l=i-1;l>=1;l--)
                     {         
                                      printf("%d",l);
                                       printf("\t"); 
                     }
                     }
     printf("\n\n");   
}               
 getch();    
}
