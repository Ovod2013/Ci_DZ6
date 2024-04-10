
#include <stdio.h>
void pr(int a, int b);
void obr(int a, int b);

int main()
{
int a, b;
printf("Vvedite dva chisla, A i B: \t");
scanf("%d%d", &a, &b);
if (a<=b)
{
	printf("Cifry ot A do B otdelno: \t");
	pr(a, b);
	return 0;
}

if (a>b)
{
	printf("Cifry ot B do A otdelno: \t");
	obr(b, a);
	return 0;
}
return 0;
}

void pr(int a, int b)
{
if (a <= b)
printf("%d ", a);
pr(a+1, b);
//printf("%d _", a);
}

void obr(int a, int b) 
{
if (b >= a)
printf("%d ", b);
obr(a, b-1);
//printf("%d _", b);
}
