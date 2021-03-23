#include <stdio.h>
#include <stdlib.h>

int main()
{
	int list[5];//5개의 원소를 갖는 integer형 배열 선언
	int *plist[5];//integer형 포인터 5개를 갖는 배열 선언

	list[0] = 10; //list[0]의 값에 10을 대입
	list[1] = 11; //list[1]의 값에 11을 대입

	printf("[----- [정세연]   [2018038027] -----]\n");


	plist[0] = (int*)malloc(sizeof(int));//heap 영역에서 4바이트만큼의 크기를 할당한 후 plist[0]에 그 주소를 대입

	printf("list[0] \t= %d\n", list[0]);//list[0]의 값이 0이 출력
	printf("address of list \t= %p\n", list);//list는 list[0]의 주소와 같기 때문에 list[0]의 주소가 출력
	printf("address of list[0] \t= %p\n", &list[0]);//list[0]의 주소가 출력
	printf("address of list + 0 \t= %p\n", list+0);//list+0은 list[0]이므로 list[0]의 주소가 출력된다.
	printf("address of list + 1 \t= %p\n", list+1);//list+1은 list의 주소에 4를 더한 값, 즉 list[1]의 주소가 출력된다.
	printf("address of list + 2 \t= %p\n", list+2);//list+2는 list의 주소에 8을 더한 값, 즉 list[2]의 주소가 출력된다.
	printf("address of list + 3 \t= %p\n", list+3);//list+3는 list의 주소에 12를 더한 값, 즉 list[3]의 주소가 출력된다.
	printf("address of list + 4 \t= %p\n", list+4);//list+4는 list의 주소에 16을 더한 값, 즉 list[4]의 주소가 출력된다.
	printf("address of list[4] \t= %p\n", &list[4]);//list[4]의 주소가 출력된다. list+4와 같은 값이 출력된다.

	free(plist[0]);//동적할당을 해제

}
