#include<cstdio>
#define MAX_SIZE 10
#define _CRT_SECURE_NO_WARNINGS

//�迭�� �Ķ���ͷ� �޴� �Լ�

void sub(int x, int arr[])
{
	x = 10;
	arr[0] = 10;
}

int main()
{
	int var;
	int list[MAX_SIZE];

	var=0;
	list[0] = 0;
	sub(var, list);
	printf("var=%d, list[0]=%d", var, list[0]);
	return 0;
}