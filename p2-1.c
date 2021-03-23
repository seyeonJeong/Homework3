#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100//전처리기 지시자 define을 이용해 매크로 이름에 100의 값을 정의
float sum(float list[], int);//float의 값을 return하는 함수, 배열의 합을 구한다.
float input[MAX_SIZE], answer;//배열과 변수를 전역으로 선언함.
int i;//전역변수 i를 선언
int main()
{
	for(i=0; i<MAX_SIZE; i++)//i=0부터 100(매크로)까지 1씩 증가시킨다.
		input[i] =i;//input[i]에 i라는 값을 대입.
	printf("[----- [정세연]   [2018038027] -----]\n");
	/*for checking call by reference */
	printf("address of input = %p\n", input);//배열의 이름은 input[0]의 주소이기 떄문에 input[0]의 주소 출력

	answer = sum(input, MAX_SIZE);//answer의 값은 sum함수의 return 값.
	printf("The sum is: %f\n", answer);//sum함수에서 return한 값을 출력.

}

float sum(float list[], int n)//input[],MAX_SIZE의 값을 받아 함수에 대입 배열의 합을 구하는 함수.
{
	printf("value of list = %p\n", list);//list는 input의 값을 받았으므로, input의 주소가 출력된다.(input을 포인트하고있다.)
	printf("address of list = %p\n\n", &list);//list가 할당된 메모리의 주소가 출력

	int i;//integer형 변수 i를 선언
	float tempsum =0;//float형 변수 tempsum을 선언 후 초기화
	for(i=0; i<n; i++)//i=0부터 n까지 1씩 더해준다 여기에서 n은 매개변수 이므로 MAX_SIZE의 값을 받아온다.
		tempsum +=list[i];//list의 값들을 tempsum에 더해준다.
	return tempsum;//tempsum의 값을 main함수로 return한다.
}

