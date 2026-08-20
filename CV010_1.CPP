#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b;
    clrscr();
    printf("Enter 2 nos.");
    scanf("%d %d",&a,&b);
    if (a > b)
	printf("%d > %d",a,b);
    else
    if (a < b)
	printf("%d > %d",b,a);
    else
	printf("%d = %d",a,b);

     getch();
}



















