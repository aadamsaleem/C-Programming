#include<stdio.h>
#include<conio.h>
main()
{
	char str[80],*p1,*p2,a;
		printf("\t ***Enter the string***\n");
		gets(str);
		p1=p2=str;
		while(*p1 != '\0')
		{
			p2=p1;
			while(*p2 != ' ' && *p2 != '\0')
			{
				p2++;
			}
			p2--;
			while(p1 < p2)
			{
				a = *p1;
				*p1 = *p2;
				*p2 = a;
				p2--;
				p1++;
			}
			while(*p1 != ' ' && *p1 != '\0')
			{
				p1++;
			}
			p1++;
		}
		printf("\t >>>String with Reversed Words Is<<<\n%s",str);
		
	getch();
}



