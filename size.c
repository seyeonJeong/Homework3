#include<stdio.h>
#include<stdlib.h>

void main()
{
	int **x;
	printf("[----- [정세연]   [2018038027] -----]\n");
	/* 32비트의 컴파일러를 사용하고 있어서 포인터의 크기가 4바이트 입니다. */
	printf("sizeof(x) = %lu\n", sizeof(x));//x는 이중포인터이므로 포인터의 크기인 4바이트가 출력
	printf("sizeof(x) = %lu\n", sizeof(*x));//*x도 마찬가지로 포인터의 역할을 하므로 4바이트가 출력
	printf("sizeof(**x) = %lu\n",sizeof(**x));//**x는 integer형의 값이 나오므로 4바이트가 출력.
}
