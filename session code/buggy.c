#include<stdio.h>
#include<stdlib.h>

void buggy()
{
	int *intptr;
	int i;
	intptr = (int *)malloc(sizeof(int)*10);

	printf("MALLOC checking : address = %08x and size = %d\n",intptr,sizeof(int)*5);

	for(i=0;i<=4;i++)
	{
		*intptr = 100;
		printf("value at ptr intptr = %d\n",(*intptr));
		*intptr++;
		printf("value at ptr intptr = %d\n",(*intptr));
	}
}

int main()
{
	buggy();
	return 0;
}
