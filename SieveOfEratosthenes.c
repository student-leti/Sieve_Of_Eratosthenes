#include<stdio.h>

int main()
{
	int limit, p = 2;
	puts("Insert limit for primes");
	scanf("%d", &limit);
	int arrayOfNumbers[limit];
	
	for(int i = 0; i < limit; i++)
	{
		arrayOfNumbers[i] = i;
	}
	
	puts("\n");
	for(int i = 0; i < limit; i++)
	{
		printf("[%d]", arrayOfNumbers[i]);
	}

	
	while(p < limit)
	{
		for (int i = 2; i * p < limit; i++)
		{
			if(arrayOfNumbers[p] == 0) break;
			arrayOfNumbers[i * p] = 0;
		}
		p++;
	}

	puts("\n");
	for(int i = 2; i < limit; i++)
	{
		if(arrayOfNumbers[i] != 0)printf("[%d]", arrayOfNumbers[i]);
	}
	
	return 0;
}
