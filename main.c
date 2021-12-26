#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	while(1)
		{
			printf("hello \n \a");
			usleep(1000000);
		}
}
