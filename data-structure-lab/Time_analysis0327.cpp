#include<cstdio> //ǥ�� ����� ��� ����
#include<cstdlib> //ǥ�� ���̺귯�� ��� ����
#include<ctime> //time�� ���õ� �������


int sum_of_N(int n)  //O�� n O(n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + 1;
	}
	return sum;
}

int sum_of_N2(int n) //O�� 1�̶�µ�? , O(1)

[
	return (n * (n + 1)) / 2;
]
def sum_sqad(n):
	partialSum = 0
	for i in range(n): //range n - for���� n�� �ݺ��Ѵٴ� �� 
		partislSum += i*i*i
	return partialSum


int main()
{
	clock_t start, finish; //���۽ð�, ������ �ð�
	double duration; //�ɸ� �ð�

	start = clock(); //���� ������ start�� ����
	//����ð��� �����ϰ��� �ϴ� �ڵ� ���
	int a = 10 + 20; //������ �ϴ� �ð� �����


	finish = clock(); //���� �ð��� finish�� ����
	duration = (double)(finish - start) / CLOCKS_PER_SEC;  //�빮�ڷ� ���� ����? ����� �����ϸ� ��. - start, finish�� ����� sec������ �ٲٰٴ�.
	//double ���� clock_t���� ���������� �ٲ��ذ���. �׷��� �Ʒ��� %f�� ������..
	printf("%f�� �ɷȽ��ϴ�.\n", duration);
	return 0;
} 

//F10�� ����� �α׸� �� �� ����. 
//����Ʈ+F5 ����, F5 ����� �߰��κ�? ����, F10 ���پ� ����� �ϴ� ��. 