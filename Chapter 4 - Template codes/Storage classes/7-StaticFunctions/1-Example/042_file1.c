#include <stdio.h>
#include <unistd.h>

int num;

int func_1();
int main()
{
	while (1)
	{
		num++;
		func_2();
		sleep(1);
	}

	return 0;
}
