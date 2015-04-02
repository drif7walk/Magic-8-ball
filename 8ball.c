#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** args)
{
	if (argc == 1)
	{
		fprintf(stderr, "Incorrect number of parameters.\r\n");
		return 1;
	}

	/* Input must be a valid, grammatically correct question */
	char* que = args[1];

	if ( que[0] < 65 || que[0] > 90 )
	{
		fprintf(stderr, "Question must begin with capital letter.\r\n");
		return 1;
	}

	if ( que[strlen(que)-1] != '?')
	{
		fprintf(stderr, "Not a question.\r\n");
	}


	int sum = 0;
	/* Then shift left by each character */
	for (int i = 0; i < strlen(que)-1; i++)
	{
		sum = sum + que[i];		
	}


	/* A magic number has been obtained. Apply magic formula. */
	//magic = magic ^ (magic | 42); Always produces -1 in all circumstances.
	//magic = magic & (magic ^ 42); Always makes -43
	//magic = magic ^ !magic; Also makes -1
	// Always makes -1, functions

	// Use sum as seed for random.
	srand(sum);

	// Produce answer.
	if (sum % 2 == 0)
		printf("Yes.\r\n");
	else
		printf("No.\r\n");
}		
