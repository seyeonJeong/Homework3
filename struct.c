#include<stdio.h>


struct student1{
	char lastName;
	int studentId;
	char grade;
};//��� ���� 3���� ���� ����ü student1 ����

typedef struct{
	char lastName;
	int  studentId;
	char grade;
} student2;//typedef�� ����Ͽ� ����ü ��� ���� 3���� ���� ����ü student2 ����

int main(){
	struct student1 st1 = {'A', 100, 'A'};//struct student1�̶�� �ڷ����� ���� ���� st1�� �����Ͽ� ������ ��������� A,100,A�� ����
	printf("[----- [������]   [2018038027] -----]\n");
	printf("st1.lastName = %c\n", st1.lastName);//.�� �̿��Ͽ� ����ü���� ��� ������ ȣ���Ͽ� st1������ ����� lastName�����
	printf("st1.studentId = %d\n", st1.studentId);//.�� �̿��Ͽ� ����ü���� ��� ������ ȣ���Ͽ� st1������ ����� studentId�� ���
	printf("st1.grade = %c\n", st1.grade);//.�� �̿��Ͽ� ����ü���� ��� ������ ȣ���Ͽ� st1������ ����� grade�� ���

	student2 st2 = {'B', 200, 'B'};//stdent2��� �ڷ����� ���� ���� st2�� �����Ͽ� ������ ��������� B,200,B�� ����. �̶� typedef�� ����߱� ������ struct��� �ڷ����� �������� �ʾƵ� �ȴ�.

	printf("\nst2.lastName = %c\n", st2.lastName);//.�� �̿��Ͽ� ����ü���� ��������� ȣ���Ͽ� st2������ ����� lastName�� ���
	printf("st2.studentId = %d\n", st2.studentId);//.�� �̿��Ͽ� ����ü���� ��������� ȣ���Ͽ� st2������ ����� studentId�� ���
	printf("st2.grade = %c\n", st2.grade);//.�� �̿��Ͽ� ����ü���� ��������� ȣ���Ͽ� st2������ ����� student2�� grade�� ���


	student2 st3;//student2��� �ڷ����� ���� ���� st3�� ����.

	st3 = st2;//���� ġȯ�� �̿��Ͽ� ���� st3�� st2�� ����, �̶� ���� ġȯ�� st3�� ������ ��������� st2�� ��������� ���� �������ִ� �Ͱ� ����.
	printf("\nst3.lastName = %c\n", st3.lastName);//.�� �̿��Ͽ� ����ü���� ��������� ȣ���Ͽ� st3������ ����� lastName�� ���� ���
	printf("st3.studentId = %d\n", st3.studentId);//.�� �̿��Ͽ� ����ü���� ��������� ȣ���Ͽ� st3������ ����� studentId�� ���� ���
	printf("st3.grade = %c\n", st3.grade);//.�� �̿��Ͽ� ����ü���� ��������� ȣ���Ͽ� st3������ ����� grade�� ���� ���.

	/* equality test
	if(st3==st2)//gcc���� ������ �ʴ� �����̱� ������ ����� �� ����.
		printf("equal\n");
	else
		printf("not equal\n");
	*/
	return 0;
}
