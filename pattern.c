#include<stdio.h>
int main(int argc, char const *argv[])
{
	int n=4;
	for (int i =0; i <= n; ++i)
	{
		for (int j = 0; j <=(2*(n-i)-1); ++j)
		{
			printf(" ");
		}
		for (int k = 0; k < i; ++k)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}