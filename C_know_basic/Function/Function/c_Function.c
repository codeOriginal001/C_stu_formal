#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // �����
#include <time.h> // ʱ���
#include <windows.h> // ʹ�����������
#include <math.h>

// ���� - �ҳ��������������ֵ
int findmax(int x_1, int x_2)
{
	if (x_1 > x_2)
	{
		return x_1;
	}
	else
	{
		return x_2;
	}

}

int findmax2(int x_1, int x_2)
{
	return	(x_1 > x_2) ? x_1 : x_2;
}

// ���� - �����������α���������
void swapnumError(int x_1, int x_2)
{
	int temp = 0;
	temp = x_1;
	x_1 = x_2;
	x_2 = temp;
}

void swapnum(int* px_1, int* px_2)
{
	int temp = 0;
	temp = *px_1;
	*px_1 = *px_2;
	*px_2 = temp;
}

// ����������ʱ��ʵ�ʲ��� ���� ��ʽ��������ʽ���� ��Ϊ ʵ�ʲ�������ʱ���� (���Լ������ĵ�ַ)
// ���Զ� ��ʽ���� ���޸��ǲ�Ӱ�� ʵ�ʲ��� ��

int main()
{
	// �����ַ�������
	char arr1[20] = { 0 };
	char arr2[] = "copy arr1 from arr2";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	
	
	//�滻�ַ��������е��ַ�
	char arr[] = "??, change";
	printf("%s\n", arr);
	memset(arr, 'H', 2);
	printf("%s\n", arr);
	// memset(*ptr, value, num)
	// Sets the first num bytes of the block of memory by ptr to the specified value 

	// ʹ�ú���
	int a = 0;
	int b = 0;
	int r1 = 0;
	int r2 = 0;

	scanf("%d %d", &a, &b);

	//��ֵ����
	r1 = findmax(a, b);
	r2 = findmax2(a, b);


	printf("%d\n", r1);
	printf("%d\n", r2);

	printf("a = %d, b = %d \n", a, b);
	// ���ݵ�ַ����ַ����
	swapnum(&a, &b);
	printf("a = %d, b = %d \n", a, b);

	// �ռ�




	return 0;
}