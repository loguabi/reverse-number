#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=0;
clrscr();
printf("Enter a number to reverse\n");
scanf("%d",&n);
while(n!=0)
{
i=i*10;
i=i+n%10;
n=n/10;
}
printf("Reverse of entered number is = %d\n", i);
getch();
}
