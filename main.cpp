#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int room[2][10] = { {102,107,109,112,115,116,123,125,127,130},
				{12,43,23,12,20,15,16,23,12,15} };

int main(void) {
	setlocale(LC_ALL, "Russian");
	int i, j, flag = 0, num;
	const int min = 1;
	const int max = 10;

	srand((unsigned)time(0));

	for (int i = 1; i < 2; i++) {
		for (int j = 0; j < 10; j++){
			room[i][j] = (int)((double)rand() / (RAND_MAX + 1) * (max - min) + min);
	}
}
	puts("Вместимость всех комнат гостиницы:");

	for (j = 0; j < 10; j++)
		printf("Комната #%i рассчитана на %i мест\n", room[0][j], room[1][j]);

	puts("Введите минимальное необходимое количество мест");
	scanf_s("%i", &num);

	for (j = 0; j < 10; j++)
		if (room[1][j] >= num)
		{
			flag = 1;
			printf("Комната #%i рассчитана на %i мест\n", room[0][j], room[1][j]);
		}

	if (flag == 0)
		puts("Комнат с таким количеством мест нет");
}
