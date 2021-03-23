#include<stdio.h>


struct student1{
	char lastName;
	int studentId;
	char grade;
};//멤버 변수 3개를 갖는 구조체 student1 선언

typedef struct{
	char lastName;
	int  studentId;
	char grade;
} student2;//typedef를 사용하여 구조체 멤버 변수 3개를 갖는 구조체 student2 선언

int main(){
	struct student1 st1 = {'A', 100, 'A'};//struct student1이라는 자료형을 갖는 변수 st1을 선언하여 각각의 멤버변수에 A,100,A를 대입
	printf("[----- [정세연]   [2018038027] -----]\n");
	printf("st1.lastName = %c\n", st1.lastName);//.을 이용하여 구조체에서 멤버 변수를 호출하여 st1변수에 저장된 lastName을출력
	printf("st1.studentId = %d\n", st1.studentId);//.을 이용하여 구조체에서 멤버 변수를 호출하여 st1변수에 저장된 studentId를 출력
	printf("st1.grade = %c\n", st1.grade);//.을 이용하여 구조체에서 멤버 변수를 호출하여 st1변수에 저장된 grade를 출력

	student2 st2 = {'B', 200, 'B'};//stdent2라는 자료형을 갖는 변수 st2를 선언하여 각각의 멤버변수에 B,200,B를 대입. 이때 typedef를 사용했기 때문에 struct라는 자료형은 선언하지 않아도 된다.

	printf("\nst2.lastName = %c\n", st2.lastName);//.을 이용하여 구조체에서 멤버변수를 호출하여 st2변수에 저장된 lastName을 출력
	printf("st2.studentId = %d\n", st2.studentId);//.을 이용하여 구조체에서 멤버변수를 호출하여 st2변수에 저장된 studentId를 출력
	printf("st2.grade = %c\n", st2.grade);//.을 이용하여 구조체에서 멤버변수를 호출하여 st2변수에 저장된 student2의 grade를 출력


	student2 st3;//student2라는 자료형을 갖는 변수 st3를 선언.

	st3 = st2;//구조 치환을 이용하여 변수 st3에 st2를 대입, 이때 구조 치환은 st3의 각각의 멤버변수에 st2의 멤버변수의 값을 대입해주는 것과 같음.
	printf("\nst3.lastName = %c\n", st3.lastName);//.을 이용하여 구조체에서 멤버변수를 호출하여 st3변수에 저장된 lastName의 값을 출력
	printf("st3.studentId = %d\n", st3.studentId);//.을 이용하여 구조체에서 멤버변수를 호출하여 st3변수에 저장된 studentId의 값을 출력
	printf("st3.grade = %c\n", st3.grade);//.을 이용하여 구조체에서 멤버변수를 호출하여 st3변수에 저장된 grade의 값을 출력.

	/* equality test
	if(st3==st2)//gcc에서 허용되지 않는 문장이기 때문에 사용할 수 없다.
		printf("equal\n");
	else
		printf("not equal\n");
	*/
	return 0;
}
