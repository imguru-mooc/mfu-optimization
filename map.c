#include <stdio.h>
#include <stdlib.h>

int global=20;
int main()
{
	int local=10;

	int *heap =  (int*)malloc(4);

	printf("main  =%p\n", main);
	printf("global=%p\n", &global);
	printf("heap  =%p\n", heap  );
	printf("local =%p\n", &local);
	return 0;
}
