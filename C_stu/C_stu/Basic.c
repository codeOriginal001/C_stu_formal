#define _CRT_SECURE_NO_WARNINGS

// ִ�п�ݼ���Ctrl + F5 ִ�С�F10 ��ִ��

//extern int var; //������Ҫʹ���ⲿ����
//extern int Add(int, int); // �����ⲿ��������
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

//#define ���崴����
#define Time(x, y) ((x)*(y)) // �������
#define MAX_Return(x, y) ((x)>(y) ? (x):(y)) //���ؽϴ���

// �����ṹ������
struct Stu
{
	char name[20];
	int age;
	float score;
};

// ��Žṹ�������ַ
void print(struct Stu* ps)
{
	// Method 1
	printf("%s %d, %f\n", (*ps).name, (*ps).age, (*ps).score);
	// Method 2
	printf("%s %d, %f\n", ps->name, ps->age, ps->score);
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

	printf("%d\n", result);

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
		printf("%d\n", in2[i]);
		i++;
	}

	// ������������Ԫ�ظ����������ܴ�С/(��һ��Ԫ����ռ��)��С
	int element_num = sizeof(in1);
	int first_element = sizeof(in1[0]);
	int result_elemnet_num = element_num / first_element;
	printf("%d\n", result_elemnet_num);

	// �ж��������Ƿ����
	char ch3[] = { "abcdef" };
	char ch3_1[] = "abcdef";
	char ch3_2[] = "abcdef";

	if (strcmp(ch3, ch3_1) == 0)
	{
		printf("{ \"abcdef\" } �� \"abcdef\" ���\n "); // ���
	}
	else
	{
		printf("{ \"abcdef\" } �� \"abcdef\" �����\n ");
	}

	if (strcmp(ch3_1, ch3_2) == 0)
	{
		printf("���\n"); // ���
	}
	else
	{
		printf("�����\n");
	}


	// ������ǰ��++�������++
	// ��++ ��ʹ��
	int ao1 = 0;
	int bo1 = 0;
	bo1 = ++ao1;
	printf("ǰ�ã�a = %d, b = %d \n", ao1, bo1); // a =1 b=1
	printf("ǰ�ã�a = %d\n", --ao1); // a = 0
	printf("ǰ�ã�a = %d\n", ao1); // a = 0
	// ����++ ��ʹ�ã���++
	int ao2 = 0;
	int bo2 = 0;
	bo2 = ao2++;
	printf("���ã�a = %d, b = %d \n", ao2, bo2); // a = 1, b= 0
	printf("���ã�a = %d \n", ao2++); // a = 1
	printf("���ã�a = %d \n", ao2); // a = 2


	//����������
	int m = 10;
	int m_1 = 0;
	int m_2 = 0;

	(m > 5) ? (m_1 = 1) : (m_1 = -1);
	m_2 = (m > 5 ? 1 : -1);

	printf("%d %d %d\n", m, m_1, m_2);

	// ���ű��ʽ�����������μ���, ȡ���һ�����
	int a_m = 3;
	int b_m = 5;
	int c_m = 0;

	int d_m = (a_m += 2, b_m = b_m - c_m + a_m, c_m = a_m + b_m); // a =  5, b = 10, c = =15

	printf("%d\n", d_m); // 15


	// #define �����
	int a_a = 10;
	int a_b = 5;

	int a_c = Time(a_a, a_b + 5); // ���ú�
	int a_d = MAX_Return(a_a, a_b);//���ú�

	printf("%d\n", a_c);
	printf("%d\n", a_d);

	// ָ�����
	int a_e = 10; // 4���ֽ�
	int* pa = &a_e; // pa�Ǵ���������ŵ�ַ��ָ�����

	char a_f = 'w';
	char* pc = &a_f;
	// �ڴ� - ��� = ��ַ = ָ�룻ָ����ǵ�ַ����ַ�����ڴ浥Ԫ�ı��
	// int* , char* ������һ�����ͣ�����ָ�����ͣ��� 
	// int char ˵������paָ��Ķ�����int���ͣ�*˵��pa��ָ�����
	// ��ͷ���ָ��һ�����ָ�����

	*pa = 20; // * �ǽ����ò�������*pa ����ͨ��pa�д�ŵĵ�ַ���ҵ� pa ָ��Ŀռ�
	// �������ǽ� a ��ֵ��Ϊ��20
	printf("%d\n", a_e);


	// �ṹ�壺�������Ӷ���
	//��������
	struct Stu s1 = { "����", 20, 90.00 };
	struct Stu s2 = { "����", 22, 100.00 };
	struct Stu s3 = { "",0,0 };

	printf("%s %d %f\n", s1.name, s1.age, s1.score); // . ������ �ṹ����� . �ṹ���Ա

	// ͨ����ַ��ӡ
	print(&s2);

	// ��ṹ�����������
	scanf(" %s %d %f", s3.name, &(s3.age), &(s3.score));
	print(&s3);

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
4. %f ������
5. %zu 10�����޷��ŵ�����

[������]
1. /(����)��������������Ҫ��һλ��С��������ִ�е�����������
2. 0��ʾ�٣���0��ʾ��
3. sizeof ��һ�������������Ǻ���
4. �����ַ��������� == ���ж��Ƿ���ȣ���Ҫʹ��strcmp
*/
