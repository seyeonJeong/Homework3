#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100//��ó���� ������ define�� �̿��� ��ũ�� �̸��� 100�� ���� ����
float sum(float list[], int);//float�� ���� return�ϴ� �Լ�, �迭�� ���� ���Ѵ�.
float input[MAX_SIZE], answer;//�迭�� ������ �������� ������.
int i;//�������� i�� ����
int main()
{
	for(i=0; i<MAX_SIZE; i++)//i=0���� 100(��ũ��)���� 1�� ������Ų��.
		input[i] =i;//input[i]�� i��� ���� ����.
	printf("[----- [������]   [2018038027] -----]\n");
	/*for checking call by reference */
	printf("address of input = %p\n", input);//�迭�� �̸��� input[0]�� �ּ��̱� ������ input[0]�� �ּ� ���

	answer = sum(input, MAX_SIZE);//answer�� ���� sum�Լ��� return ��.
	printf("The sum is: %f\n", answer);//sum�Լ����� return�� ���� ���.

}

float sum(float list[], int n)//input[],MAX_SIZE�� ���� �޾� �Լ��� ���� �迭�� ���� ���ϴ� �Լ�.
{
	printf("value of list = %p\n", list);//list�� input�� ���� �޾����Ƿ�, input�� �ּҰ� ��µȴ�.(input�� ����Ʈ�ϰ��ִ�.)
	printf("address of list = %p\n\n", &list);//list�� �Ҵ�� �޸��� �ּҰ� ���

	int i;//integer�� ���� i�� ����
	float tempsum =0;//float�� ���� tempsum�� ���� �� �ʱ�ȭ
	for(i=0; i<n; i++)//i=0���� n���� 1�� �����ش� ���⿡�� n�� �Ű����� �̹Ƿ� MAX_SIZE�� ���� �޾ƿ´�.
		tempsum +=list[i];//list�� ������ tempsum�� �����ش�.
	return tempsum;//tempsum�� ���� main�Լ��� return�Ѵ�.
}

