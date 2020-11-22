#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	a = 91;

	printf("An int variable occupies %lu bytes of storage\n", sizeof(a));

	_getch();
	return(0);
}