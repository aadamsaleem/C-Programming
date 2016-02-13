#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
      char str[50];
      int i,p2;
      float p1;
      printf("Enter the Expression having Operands(0-9) and Operators(+,-,*,/,^):\n");
      gets(str);
      i=0;
      while(str[i]!='\0')
      {
      if(i==0)
      p1=str[i]-48;
      if(str[i+1]=='+')
      {
                     p2=str[i+2]-48;
                     p1=p1+p2;
      }
      if(str[i+1]=='-')
      {
                     p2=str[i+2]-48;
                     p1=p1-p2;
      }
      if(str[i+1]=='*')
      {
                     p2=str[i+2]-48;
                     p1=p1*p2;
      }
      if(str[i+1]=='/')
      {
                     p2=str[i+2]-48;
                     p1=(float)p1/p2;
      } if(str[i+1]=='^')
      {
                     p2=str[i+2]-48;
                     p1=pow(p1,p2);
      }

     i=i+2;
     }
     printf("\n");
     printf("The Answer is %f.",p1);
     getch();
}
