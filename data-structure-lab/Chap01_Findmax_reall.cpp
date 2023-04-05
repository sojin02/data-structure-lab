#include <stdio.h>

int findArrayMax(int score[], int n)
{
	int tmp = score[0];
	for (int i = 1; i < n; i++) {
		if (score[i] > tmp) {
			tmp = score[i];
		}
	}
	return tmp;
}

void main()
{
	int score[5] = { 10, 20, 150, 100, 32 };
	int out;