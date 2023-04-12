#include<cstdio>

//Algorithm
//1���� �迭���� �ִ밪�� ã�� �Լ�

int findMaxValue(int a[], int len)  // �迭a�� ��Ҹ� �����Ͽ� �� len�� ���� �μ�
{
	int maxValue = a[0];
	for (int i = 1; i < len; i++) {
		if (maxValue < a[i]) {
			maxValue = a[i];
		}
	}
	return maxValue;
}

//2���� ���� �迭���� �ִ� ��� ���� ã�� �Լ�
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
	printf("�迭�� �ִ� �� = %d\n", maxValue);

	int maxPixel = findMaxPixel(image, 4, 5);
	printf("������ �ִ� ��� = %d\n", maxPixel);

	return 0;
}