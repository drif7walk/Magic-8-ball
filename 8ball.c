#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* ball2str(int num)
{
	switch (num + 1)
	{
		case 1: return "It is certain.";
		case 2: return "It is decidedly so.";
		case 3:	return "Without a doubt.";
		case 4:	return "Yes definitely.";
		case 5: return "You may rely on it.";
		case 6: return "As I see it, yes.";
		case 7: return "Most likely.";
		case 8: return "Outlook good.";
		case 9: return "Yes.";
		case 10: return "Signs point to yes.";
		case 11: return "Reply hazy try again.";
		case 12: return "Ask something else.";
		case 13: return "Better not tell you now.";
		case 14: return "Cannot predict that.";
		case 15: return "Concentrate and ask again.";
		case 16: return "Don't count on it.";
		case 17: return "My reply is no.";
		case 18: return "My sources say no.";
		case 19: return "Outlook not so good.";
		case 20: return "Very doubtful.";
		default:
			return "u wot m8? ill friggidy #shrek u";
	}
}

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
	printf("%s", ball2str(sum % 20));
}		
