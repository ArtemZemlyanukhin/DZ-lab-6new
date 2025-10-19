#include <stdio.h>
#include <locale.h>
#include <math.h>
task();
main()
{
	setlocale(LC_CTYPE, "RUS");
	task();
}
task()
{
	int N;
	printf("Введите число N\n");
	scanf("%d", &N);
	if (N % 10 == 5 || N / 10 % 10 == 5 || N / 100 == 5) {
		printf("5 входит в число %d\n",N);
	}
	else {
		printf("5 не входит в число %d\n",N);

	}
	system("pause");
}
