#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % (n))

int run_game() {
	int nRandom, count, nlnput;
	for (nRandom = random(100), count = 1;; ++count)
	{
		printf("Please enter a number\n");

		scanf_s("%d",&nlnput);

		if (nRandom = nlnput)
			break;

		if (nRandom > nlnput)
			print("Up\n");
		
		else
			printf("Down\n");
	}
	return count;
}


