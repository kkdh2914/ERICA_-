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
			printf("Up\n");
		
		else
			printf("Down\n");
	}
	return count;
}

int main()
{
	int nlnput, count;

	randomize();
	printf("업다운 프로그램을 실행합니다.\n");

	do
	{
		count = run_game();
		printf("정답입니다.%d회만에 맞추셨습니다.\n, count);
		printf("다시 시작하시겠습니까? (1이면 다시, 이외의 수면 종료\n");
		scanf_s("%d", &nInput);
	} while (nInput == 1);

	printf("종료합니다.");
	return 0;
