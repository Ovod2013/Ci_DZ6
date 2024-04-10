
#include <stdio.h>

void printOdds(void);
int f = 0;

int main()
{
printf("Vvedite ryad chisel, v kontse '0': \t");
printOdds();
return 0;
}

void printOdds(void)
{
int a;

scanf("%d", &a);
if (f==0)
	{
	printf("Iz nix nechetnye chisla: \t\t");
	f=1;
	}

if (a % 2 != 0) printf("%d ", a);
if (a == 0)
return;

printOdds();
}

