#define _CRT_SECURE_NO_WARNINGS

// ִ�п�ݼ���Ctrl + F5 ִ�С�F10 ��ִ��

//extern int var; //������Ҫʹ���ⲿ����
//func();//(���ú���)

	   // ͷ�ļ�����
#include <stdio.h> // pritf()������scanf()��������׼�������ͷ�ļ�
#include <string.h> // strlen()����ͷ�ļ�

// #defin �����ʶ������
#define MAX 1000
// enum ����ö�ٳ���
enum Sex
{
	MALE,
	FENALE,
	SECRET
};

//��������
// ������Ӻ���
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


// main() ��������������C���ԵĴ������壬�������п�ʼ�����ҽ���1�� main()������
int main() // �������� main()
{
	// "�ڴ����������������"

	printf("hello world"); // printf�⺯�������������ӡ���� ��ʹ�ÿ⺯��ʱҪ����������ʼ������ͷ�ļ���

	printf("\n");

	printf("%d\n", sizeof(char)); // ��ӡ(��%�������͡�, ��ӡ���ݣ�; sizeof()��������������ʾ�����ڵĴ�С 
	// printf(sizeof(char)); �����

	// �������: �������� [�Զ���]��������, һ�������庯���µ���ʼ����ʼ�� (���������ִ�Сд)
	// �ֲ�����--�������ڶ���ı��� (�ֲ�������ȫ�ֱ�����ͻʱ���ֲ���������)
	short age = 20;
	double salarly = 1000000.5;

	// ������ʹ��
	// Example 1
	age = age + 1;
	printf("age = %d\n", age);
	// Example 2: ����
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d %d", &num1, &num2); //scanf()�������������������룬�����ν�����һ������
	sum = num1 + num2;
	printf("%d\n", sum);


	// ����
	// ���泣��
	//   ����a[c]"c"һ��Ϊ���泣�� (��C99֮ǰ����������Ĵ�Сʹ�ñ���ָ����C99�����˱䳤����ĸ��Viso��Ŀǰ�Բ�����)
	// const ���εĳ�����
	const anum = 100; // ���������г����ԣ��������޸�
	// define ����ı�ʶ��������main()������ǰ���壬�������
	int a = MAX;
	printf("%d\n", a);
	// ö�ٳ���
	enum Sex s = SECRET;

	// �ַ����Ĵ洢
	char arr1[] = "abcdef"; // ��abcdef�ַ����洢��arr������,�ַ�������\0 (���鹲��7���ַ�) -> a b c d e f \0
	char arr2[] = { 'a','b','c','d','e','f' }; // ���鹲��6���ַ� -> a b c d e f ...???... ֱ������\0
	char arr3[] = { 'a','b','c','d','e','f', '\0' };
	printf("%s\n", arr1); // abcdef
	printf("%s\n", arr2); // abcdef����������������������vv?'K (���̶�)
	printf("%s\n", arr3); // abcdef

	// �ַ����ĳ���
	printf("%d\n", strlen(arr1)); //����Ϊ6, ��7���ַ�
	printf("%d\n", strlen(arr2)); // ����Ϊ��38������6���ַ�
	printf("%d\n", strlen(arr3)); // ����Ϊ6, ��7���ַ�
	// ת���ַ�������1���ַ�

	// ѡ���������߼�
	int input = 0; // Step 0. ����������ʼ����
	printf("Step 1. ��ʼ���\n");
	printf("Step 2. ѡ����ʾ (1/0)\n");
	scanf("%d", &input); //�ṩһ����ַ&,����������ִ������input��
	// ���� if...;else ѡ�����
	if (input == 1)
		printf("����ѡ��a��������\n");
	else
		printf("����ѡ��b��������\n");

	// ѭ���������߼�
	// ��������ѭ��
	int count = 0; // Step 0. ����������ʼ��������ֵ|��һ����0��0��ʼ�ۼ�
	printf("Step 1. ��ʼ���\n");
	// �ҵ�ѭ���ṹ������(print ��count++��ѭ��)
	while (count < 5) //����� 0 1 2 3 4 ��5����
	{
		printf("����...-> �����ۼ� \t %d \n", count);
		count++; // �����ۼ�
	}
	if (count = 5)
		printf("����ѭ��,���ж����������\n");


	//������Ӻ���
	int number1 = 0;
	int number2 = 0;
	int result = 0;

	scanf("%d%d", &number1, &number2);
	result = Add(number1, number2);

	printf("%d\n", sum);

	// ���鶨�崴��
	int in1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int in2[10] = { 0 }; //����ȫ��ʼ����ʣ��Ļ�Ĭ�ϳ�ʼ��Ϊ0
	char ch1[] = { 'a', 'b', 'c' };
	char ch2[] = { 0 };

	// �������ʹ��
	// ��ӡ�±�Ϊn�ĵ�n+1��Ԫ��(����Խ�����)
	printf("%d\n", in1[8]);
	// ����������ֵ
	int i = 0;
	while (i < 10)
	{
		scanf("%d", &in2[i]);
		i++;
	}
	// ��������е�ֵ
	i = 0;
	while (i < 10)
	{
		printf("%d", in2[i]);
		i++;
	}





	// ����0��������, ����ʼ��������һ��`
	return 0;
}

/*

[ָʾ����-ת���ַ�]
1. \n ����
2. \0 �ַ����Ľ�����־
3. \t �ո�
4. \?\?��'\''��"\"" , \\...��������ĸ�� ??) -> ]����ӡ���š�б��
5. '\abc' �˽�������ת��Ϊ10�������ֵ�ASCII(c^0 + c^1 + c^2...)
6. '\xab' ʮ����������ת��Ϊ10�������ֵ�ASCII

[������ӡ]
1. %d 10�����з��ŵ�����
2. %s �ַ���
3. %c �ַ�
*/
