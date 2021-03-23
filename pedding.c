#include<stdio.h>

struct student{
	char lastName[13]; //13 bytes의 크기를 갖는다.
	int studentId;     // 4 bytes의 크기를 갖는다.
	short grade;       // 2 bytes의 크기를 갖는다.
};//멤버변수 3개를 갖는 구조체 student를 선언.

int main()
{
	struct student pst;//struct student라는 자료형을 갖는 변수 pst를 선언.
	printf("[----- [정세연]   [2018038027] -----]\n");
	printf("size of student = %ld\n", sizeof(struct student));//student 구조체의 크기를 출력한다. 이때 lastName의 크기는 13, studentId의 크기는 4, grade의 크기는 2여서 19바이트의 크기이지만 '채워넣기'가 되어서 5바이트 만큼의 값이 채워져서 24바이트가 된다.
	printf("size of int = %ld\n", sizeof(int));//integer형의 크기인 4바이트가 출력
	printf("size of short = %ld\n", sizeof(short));//short형의 크기인 2바이트가 출력

	return 0;
}
