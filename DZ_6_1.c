

#include <stdio.h>
void print_num(int num) 
{
if (num >= 10)
print_num(num / 10);
printf("%d ", num % 10);

}

int main()
{
int n;
printf("Vvedite chislo: \t");
	scanf("%d", &n);
	printf("Cifry chisla otdelno: \t");
	print_num(n);
return 0;
}
