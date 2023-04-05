#include<cstdio> //표준 입출력 헤더 파일
#include<cstdlib> //표준 라이브러리 헤더 파일
#include<ctime> //time과 관련된 헤더파일


int sum_of_N(int n)  //O더 n O(n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + 1;
	}
	return sum;
}

int sum_of_N2(int n) //O더 1이라는데? , O(1)

[
	return (n * (n + 1)) / 2;
]
def sum_sqad(n):
	partialSum = 0
	for i in range(n): //range n - for문을 n번 반복한다는 말 
		partislSum += i*i*i
	return partialSum


int main()
{
	clock_t start, finish; //시작시간, 끝나는 시각
	double duration; //걸린 시간

	start = clock(); //현재 시작을 start에 저장
	//실행시간을 측정하고자 하는 코드 출력
	int a = 10 + 20; //덧셈을 하는 시간 세어보기


	finish = clock(); //현재 시각을 finish에 저장
	duration = (double)(finish - start) / CLOCKS_PER_SEC;  //대문자로 적힌 무언가? 상수로 생각하면 됨. - start, finish의 상수를 sec단위로 바꾸겟다.
	//double 위의 clock_t형을 더블형으로 바꿔준것임. 그래서 아래도 %f로 쓴것임..
	printf("%f초 걸렸습니다.\n", duration);
	return 0;
} 

//F10이 디버깅 로그를 볼 수 있음. 
//쉬프트+F5 꺼짐, F5 디버깅 중간부분? 원만, F10 한줄씩 디버깅 하는 것. 