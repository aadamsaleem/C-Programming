#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char str[80];
     int cons=0,vov=0,i,len,space=0,sc=0,digits=0;
     printf("enter the string\n");
     gets(str);
     len=strlen(str);
     for(i=0;str[i]!='\0';i++)
     {
                        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                        {
                                     vov++;
                         }
                       else if(str[i]==' ')
                        {
                                     space++;           
                         }
                       else  if(str[i]>64&&str[i]<91||str[i]>96&&str[i]<123)
                         {
                                     cons++;                                               
                         }
                       else  if(str[i]>47&&str[i]<58)
                         {
                                     digits++;            
                          }
                         else
                         {
                         sc++;
                         }
                         
     }
     
     printf("%d vovels\n",vov);
     printf("%d consonents\n",cons);
     printf("%d spaces\n",space);
     printf("%d special characters\n",sc);
     printf("%d digits",digits);
     getch();
}     
