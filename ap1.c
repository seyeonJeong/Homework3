#include <stdio.h>
#include <stdlib.h>

int main() {

	int list[5]; //5개의 원소를 가지는 integer형 배열 선언
	int *plist[5] = {NULL,};//integer형 포인터 5개를 가지는 배열 선언, 초기화

	plist[0] = (int *)malloc(sizeof(int));//integer의 크기인 4바이트를 heap에서 가져와 list[0]에 주소를 저장

	list[0] =1; //list[0]에 1를 넣음
	list[1] =100;//list[1]에 100을 넣음

	*plist[0] = 200;//plist[0]이 가리키고 있는 곳에 200을 넣음

	printf("[----- [정세연]   [2018038027] -----]\n");

	printf("value of list[0] = %d\n", list[0]);//list[0]=1이기 때문에 1이 나온다
	printf("address of list[0]      =%p\n",&list[0]);//list[0]의 주소가 나온다.
	printf("value of list           =%p\n", list);//배열의 이름도 list[0]의 주소이므로 list[0]의 주소가 나온다.
	printf("address of list (&list) =%p\n", &list);//list의 주소는 list[0]의 주소와 같으므로 list[0]의 주소가 나온다.

	printf("--------------------------------------------\n\n");
	printf("value of list[1]   =%d\n", list[1]);//list[1]=100이기 때문에 100이 나온다.
	printf("address of list[1] =%p\n", &list[1]);//list[1]의 주소가 나온다.
	printf("value of *(list+1) =%d\n", *(list+1));//list[0]에 1을 더한 값이 가라키는 값은 integer의 크기인 4만큼 더하면 list[1]의 값이나온다.
	printf("address of list+1  =%p\n", list+1);//list[0]의 주소에 integer형의 크기인 4를 더해준 주소가 나온다(list[1]의 주소)


	printf("--------------------------------------------\n\n");

	printf("value of *plist[0] =%d\n", *plist[0]);//plist[0]이 가리키고 있는 값인 200이 출력
	printf("&plist[0]          =%p\n", &plist[0]);//plist[0]의 주소가 출력.
	printf("&plist             =%p\n", &plist);//plist는 plist[0]과 같은 표현이기 때문에 plist[0]의 주소가 출력.
	printf("plist              =%p\n", plist);//plist는 배열이므로 주소가 저장되어있다. 그러므로 plist[0]의 주소가 출력.
	printf("plist[0]           =%p\n", plist[0]);//malloc을 통해 할당된 heap영역의 주소가 plist[0]에 저장되어 있으므로 가리키고있는 주소가 출력.
	printf("plist[1]           =%p\n", plist[1]);//값이 들어있지 않기 때문에 NULL로 출력
	printf("plist[2]           =%p\n", plist[2]);//값이 들어있지 않기 때문에 NULL로 출력
	printf("plist[3]           =%p\n", plist[3]);//값이 들어있지 않기 때문에 NULL로 출력
	printf("plist[4]           =%p\n", plist[4]);//값이 들어있지 않기 때문에 NULL로 출력

	free(plist[0]);//동적할당을 해제

}
