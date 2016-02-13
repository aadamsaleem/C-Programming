# include <stdio.h>  
# include <conio.h>  
int main()  
{  
int n, i, j, c, a[13][13], sum ;    
printf("Enter the size of the magic square : ") ;  
scanf("%d", &n) ;  
if (n % 2 == 0)  
{  
printf("\nMagic square is not possible") ;  
goto end ;  
}  
printf("\nThe magic square for %d x %d is :\n\n", n, n) ;  
j = (n + 1) / 2 ;  
i = 1 ;  
for(c = 1 ; c <= n * n ; c++)  
{  
a[i][j] = c ;  
if(c % n == 0)  
{  
i = (i + 1);  
goto loop ;  
}  
if(i == 1)  
i = n ;  
else  
i = i - 1 ;  
if(j == n)  
j = 1;  
else  
j = j + 1 ;  
loop : ;  
}  
sum=0;
for (i = 1 ; i <= n ; i++)
{
sum = a[1][i] + sum ;
}
for (i = 1 ; i <= n ; i++)  
{  
for (j = 1 ; j <= n ; j++)  
{  
printf("%4d  ", a[i][j]) ;  
}  
printf("   = %d", sum);
printf("\n\n") ;  
}  
for (i = 1 ; i <= n ; i++)
printf("%4c  ", 25);
printf("\n\n");
for (i = 1 ; i <= n ; i++)
printf("%4d  ", sum);
printf("\n\n");
end : ;  
getch() ;
return 0;  
}   
