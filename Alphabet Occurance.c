#include<stdio.h>
void main()
{
     char str[80];
     int count[36]={0},i=0;
     printf("Enter a string(in lower case) :\n\n");
     gets(str);
     printf("\n\n");
     while(str[i]!='\0')
     {                           if(str[i]>='a'&&str[i]<='z')
                                 ++count[(int)(str[i]-'a')];
                                 if(str[i]>='0'&&str[i]<='9')
                                 ++count[(int)str[i]-'0'+26];
                                 
                                 i++;
     }     
                                   printf("The number of occurances of each characters and digits are:\n\n");
                                   printf("a b c d e f g h i j k l m n o p q r s t u v w x y z 0 1 2 3 4 5 6 7 8 9 \n");
                                    for(i=0;i<36;i++)
                                    {
                      
                                                      printf("%d ",count[i]);                 
                                     }
     getch();
}
