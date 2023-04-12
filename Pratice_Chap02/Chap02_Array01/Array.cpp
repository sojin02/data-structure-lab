#include<cstdio>

//Algorithm
//1차원 배열에서 최대값을 찾는 함수

int findMaxValue(int a[], int len)  // 배열a의 요소를 복사하여 비교 len은 다음 인수
{
	int maxValue = a[0];
	for (int i = 1; i < len; i++) {
		if (maxValue < a[i]) {
			maxValue = a[i];
		}
	}
	return maxValue;
}

//2차원 영상 배열에서 최대 밝기 값을 찾는 함수
int findMaxPixel(int a[4][5], int h, int w)
{
	int maxValue = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (maxValue < a[i][j])
				maxValue = a[i][j];
		}
	}
	return maxValue;
}

int main()
{
	int array[10] = { 1, 5, 7, 10, 11, 14, 16, 18, 33, 44 };

	int image[4][5] = { {14, 16, 55, 78, 10},
						{54, 87, 6, 7, 10},
						{88, 20, 65, 98, 2},
						{2, 10, 7, 1, 3} };

	int maxValue = findMaxValue(array, 10);
	printf("배열의 최대 값 = %d\n", maxValue);

	int maxPixel = findMaxPixel(image, 4, 5);
	printf("영상의 최대 밝기 = %d\n", maxPixel);

	return 0;
}