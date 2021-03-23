#include <stdio.h>

void print1(int *ptr, int rows);//return 값이 없는 매개변수 두개를 가진 함수

int main()
{
	int one[] = {0, 1, 2, 3, 4};//정수형 배열 one 선언
	printf("[----- [정세연]   [2018038027] -----]\n");
	printf("one     =%p\n", one);//one배열의 이름은 one[0]의 주소이므로 one[0]의 주소 출력
	printf("&one    =%p\n", &one);//one의 주소는 one[0]의 주소이므로 one[0]의 주소 출력
	printf("&one[0] =%p\n", &one[0]);//one[0]의 주소가 출력된다.
	printf("\n");

	print1(&one[0], 5);//print1의 함수를 호출하고 print1 함수에 one[0]의 주소와 5를 대입한다.

	return 0;
}

void print1(int *ptr, int rows)//one배열의 각각의 주소와 값들을 출력하는 함수이다,one[0]의 주소값을 포인터 변수의 형태로 매개변수화 하여 값을 출력함.
{/* print out a one-dimensional array using a pointer */

	int i;//integer형 변수 선언
	printf("Address \t Contents\n");//Address와 contents를 출력
	for(i=0; i<rows;i++)//i=0부터 rows에 매개된 수 만큼 1씩 더한다.
		printf("%p \t  %5d\n", ptr + i, *(ptr + i));//매개변수인 포인터 ptr을 이용하여 i만큼의 값을 더하여 주소와 값을 출력 이때 주소는 4bytes씩 증가
	printf("\n");
}
