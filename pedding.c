#include<stdio.h>

struct student{
	char lastName[13]; //13 bytes�� ũ�⸦ ���´�.
	int studentId;     // 4 bytes�� ũ�⸦ ���´�.
	short grade;       // 2 bytes�� ũ�⸦ ���´�.
};//������� 3���� ���� ����ü student�� ����.

int main()
{
	struct student pst;//struct student��� �ڷ����� ���� ���� pst�� ����.
	printf("[----- [������]   [2018038027] -----]\n");
	printf("size of student = %ld\n", sizeof(struct student));//student ����ü�� ũ�⸦ ����Ѵ�. �̶� lastName�� ũ��� 13, studentId�� ũ��� 4, grade�� ũ��� 2���� 19����Ʈ�� ũ�������� 'ä���ֱ�'�� �Ǿ 5����Ʈ ��ŭ�� ���� ä������ 24����Ʈ�� �ȴ�.
	printf("size of int = %ld\n", sizeof(int));//integer���� ũ���� 4����Ʈ�� ���
	printf("size of short = %ld\n", sizeof(short));//short���� ũ���� 2����Ʈ�� ���

	return 0;
}
