// Increases size of array dynamically using realloc

#include <stdlib.h>
#include <stdio.h>

int main()	{

	int* marks;

	marks = (int*)malloc(3 * sizeof(int));

	for (int i = 0; i < 3; i++)	{
		scanf("%d", (marks + i));
	}
		for (int i = 0; i < 3; i++)	{
		printf("%d\n", *(marks + i));
	}

	marks = realloc(marks, 5 * sizeof(int));

	marks[3] = 13;
	marks[4] = 15;

	for (int i = 0; i < 5; i++)	{
		printf("%d\n", *(marks + i));
	}

	return 0;
}

/*
How program works:
Source code - Preprocess - Compiler - Exe file - Output
*/