#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define randomize() srand((unsigned)time(NULL))
#define random(n) (rand() % (n))

int run_game() {
	int nRandom, count, nInput;
	for (nRandom = random(100), count = 1;; ++count)
	{
		printf("Please enter a number\n");

		scanf("%d",&nInput);

		if (nRandom == nInput)
			break;

		if (nRandom > nInput)
			printf("Up\n");
		
		else
			printf("Down\n");
	}
	return count;
}

int main()
{
	int nInput, count;

	randomize();
	printf("업다운 프로그램을 실행합니다.\n");

	do
	{
		count = run_game();
		printf("정답입니다.%d회만에 맞추셨습니다.\n", count);
		printf("다시 시작하시겠습니까? (1이면 다시, 이외의 수면 종료\n");
		scanf("%d", &nInput);
	} while (nInput == 1);

	printf("종료합니다.");
	
	return 0;
}
