#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h> // �����
#include <time.h> // ʱ���

void menu()
{
	printf("1. Play\n");
	printf("0. exist\n");
}

void game()
{
	// ���������
	int ret = rand() % 10 + 1; // ������ 0~9 -> +1 1~10
	printf("%d\n", ret);

	// ������
	while (1)
	{
		int guess = 0;
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}

	}

}


int main()
{

	// ��֧��� (ѡ��ṹ)

	// if ���:
	// ������ʽΪ�棬ִ�����
	/*
	�﷨�ṹ��
	if(���ʽ)
		 ���;

	if(���ʽ)
		 ���1;
	else
		 ���2;

	if(���ʽ1)
		 ��� 1;
	else if(���ʽ2)
		 ��� 2;
	else
		 ��� 3;
	*/

	// ��� "����" ���㣬ִ����䣬��������
	int age = 19;

	if (age < 18)
		printf("δ����\n");

	// ��� "����" ���㣬ִ����䣬����ִ�� elese �����
	if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");

	// Ĭ��ֻ��ִ��һ����䣬������Ҫ���ϴ�����{�����}
	if (age < 18)
	{
		printf("δ����\n");
		printf("���ܺȾ�\n");
	}
	else
	{
		printf("����\n");
		printf("��������\n");
	}

	// ʵ�ֶ�������֧
	int age_1 = 0;
	scanf("%d", &age_1);
	if (age_1 < 18)
		printf("����\n");
	else if (age_1 >= 18 && age_1 <= 30)
		printf("����\n");
	else if (age_1 >= 31 && age_1 <= 45)
		printf("����\n");
	else if (age_1 >= 46 && age_1 < 60)
		printf("׳��\n");
	else if (age_1 >= 60 && age_1 < 90)
		printf("����\n");
	else
		printf("������\n");

	// else ֻ������� if ƥ�䣬����Ҫ�Ӵ�����޶�����

	// ʲô�������
	int a = 0;
	int b = 2;
	if (1 == a)
		if (2 == b)
			printf("hehe\n");
		else
			printf("haha\n");
	// ���haha
	if (1 == a)
	{
		if (2 == b)
			printf("hehe\n");
	}
	else
		printf("haha\n");


	// Example �ж��Ƿ�Ϊ����: ��2��1�����2��0

	int num_eif_1 = 0;
	scanf("%d", &num_eif_1);
	if (0 == (num_eif_1 % 2))
		printf("%d ��������\n", num_eif_1);
	else
		printf("%d ������\n", num_eif_1);

	// Example ���1-100֮�������

	int num_eif_2 = 0;

	while (num_eif_2 < 100)
	{
		if (1 == num_eif_2 % 2)
		{
			printf("%d\t", num_eif_2);
		}
		num_eif_2++;
	}
	printf("\n");

	int i_1 = 1;
	while (i_1 <= 100)
	{
		printf("%d\t", i_1);
		i_1 += 2;
	}
	printf("\n");

	// switch ��䣺���������α��ʽ
	int day = 0;
	scanf("%d", &day);
	printf("����%d\n", day);

	switch (day)
	{
	case 1:
		printf("����1\n");
		break;
	case 2:
		printf("�ܶ�\n");
		break;
	case 3:
		printf("����3\n");
		break;

	default:
		printf("�������\n");
		break;
	}

	// switch ����Ƕ�ף�ע�� break �����÷�Χ
	int n = 1;
	int m = 2;

	switch (n) // 0 -> 1
	{
	case 1:
		m++; // 1-> m = 3
	case 2:
		n++; // 2 -> n = 2
	case 3:
		switch (n) // 3 -> n =2 
		{
		case 1:
			n++;
		case 2: // 4 -> m = 4, n = 3
			m++;
			n++;
			break; // �� break ��Ƕ�� Switch�е�break����������Ȼִ��
		}
	case 4:
		m++; // ------------> m =5 
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n); // m = 5, n = 4


	// ѭ�����

	// while ѭ��
	/*
	while(���ʽ)
	{
		ѭ�����;
	}
	*/

	// ��ӡ 1 2 3 4 5 6 7 8 9 10
	int num_ewhile_1 = 1;

	while (num_ewhile_1 <= 10)
	{
		printf("%d\t", num_ewhile_1);
		num_ewhile_1++;
	}
	printf("\n");

	// ѭ�������� break
	int num_ewhile_2 = 1;

	while (num_ewhile_2 <= 10)
	{
		if (num_ewhile_2 == 5)
			break;
		printf("%d\t", num_ewhile_2); // 1 2 3 4
		num_ewhile_2++;
	}
	printf("\n");

	// ѭ�������� continue

	// ��ѭ��
	/*
	int num_ewhile_3 = 1;

	while (num_ewhile_3 <= 10)
	{
		if (num_ewhile_3 == 5)
			continue; // ֱ�ӵ�while����û���� ++ ����
		printf("%d\t", num_ewhile_3);
		num_ewhile_3++;
	}
	printf("\n");

	*/

	int num_ewhile_3 = 0;

	while (num_ewhile_3 < 10)
	{
		num_ewhile_3++; // �� 0 ��ʼ, ȥ��= ��д i++
		if (num_ewhile_3 == 5)
			continue;
		printf("%d\t", num_ewhile_3); // 1 2 3 4 6 7 8 9 10
	}
	printf("\n");


	// getchar ȷ������
	//char password[20] = {0};
	//char check = 'w';
	//printf("���������룺>");
	//scanf("%s", password);
	//printf("��ȷ������(Y/N)��");
	//scanf("%s", &check);
	//if (check == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("ȷ��ʧ��\n");
	//}

	//char password[20] = { 0 };
	//printf("���������룺>");
	//scanf("%s", password);
	//getchar();// ���� ���뻺�����е� \n
	//printf("��ȷ������(Y/N)��");
	//int ch = getchar();
	//if (ch == 'Y')
	//{
	//	printf("ȷ�ϳɹ�\n");
	//}
	//else
	//{
	//	printf("ȷ��ʧ��\n");
	//}

	char password_2[20] = { 0 };
	printf("���������룺>");
	scanf("%s", password_2);
	int temp = 0;
	while ((temp = getchar()) != '\n')
	{
		;
	}
	printf("��ȷ������(Y/N)��");
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}


	// for ѭ��

	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d\t", i);
	}
	printf("\n");

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int l = 0;
	for (l = 0; l < 10; l++)
	{
		printf("%d\t", arr[l]);
	}
	printf("\n");


	// break
	int i1 = 0;
	for (i1 = 1; i1 <= 10; i1++)
	{
		if (5 == i1)
			break;
		printf("%d\t", i1); // 1 2 3 4
	}
	printf("\n");

	// continue
	int i2 = 0;
	for (i2 = 1; i2 <= 10; i2++)
	{
		if (5 == i2)
			continue;
		printf("%d\t", i2); // 1 2 3 4 6 7 8 9 10
	}
	printf("\n");



	// do while
	int i3 = 1;
	do
	{
		printf("%d\t", i3);
		i3++;
	} while (i3 <= 10);
	printf("\n");

	// break
	int i4 = 1;
	do
	{
		if (5 == i4)
			break;
		printf("%d\t", i4); // 1 2 3 4
		i4++;
	} while (i4 <= 10);
	printf("\n");

	// continue
	int i5 = 0;
	do
	{
		i5++;
		if (5 == i5)
			continue;
		printf("%d\t", i5); // 1 2 3 4 6 7 8 9 10
	} while (i5 < 10);
	printf("\n");

	// Example
	// ����n�Ľ׳�

	// ���� һ��
	int i_eloop1 = 0;
	int testnum = 0;
	int receive = 0;
	scanf("%d", &testnum);

	for (i_eloop1 = testnum; i_eloop1 > 1; i_eloop1--)
	{
		receive = i_eloop1 - 1;
		testnum *= receive;
		receive = i_eloop1;
	}
	printf("%d\n", testnum);

	// ��������
	int i_eloop2 = 0;
	int n1 = 0;
	int res = 1;

	scanf("%d", &n1);

	for (i_eloop2 = 1; i_eloop2 <= n1; i_eloop2++)
	{
		res = res * i_eloop2;
	}
	printf("%d\n", res);


	// ���� 1! + 2! + 3! .... + n!

	int n_n = 0;
	int i_i = 0;
	int rec = 1;
	int rec2 = 0;

	scanf("%d", &n_n);

	for (i_i = 1; i_i <= n_n; i_i++)
	{
		rec = rec * i_i;
		rec2 += rec;
	}
	printf("%d", rec2);

	// ���ֲ��� / �۰����

	// ��һ�����������в����ض���Ԫ��
	// left = 0; right = 9
	// mid = (left + right) /2 -> ����ȡ��
	int array1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(array1) / sizeof(array1[0]); // Ԫ�ظ���
	int left = 0; // ��һ���±�
	int right = size - 1; //���һ��Ԫ���±�


	int k = 0;
	scanf("%d", &k);

	while (left <= right)
	{
		// int mid = (left + right) / 2; // ����ȡ�� �ҵ��м�Ԫ���±� mid 
		int mid = (right - left) / 2 + left; // better
		// �����м�Ԫ��ֵ arr[mid]
		if (array1[mid] < k)
		{
			left = mid + 1;
		}
		else if (array1[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ���,�±���%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("�Ҳ���\n");

	// ��ʾ����ַ���������ƶ����м���

	char array_1[] = "Welcome to bit !!!!!";
	char array_2[] = "####################";

	int left2 = 0;
	int right2 = strlen(array_1) - 1;

	while (left <= right2)
	{
		array_2[left2] = array_1[left2];
		array_2[right2] = array_1[right2];
		printf("%s\n", array_2);
		Sleep(100);
		left2++;
		right2--;
		system("cls"); // windows ��������������Ļ�⺯��
	}
	printf("%s\n", array_2);

	// ģ���û���¼����
	int r = 0;
	//��������
	char pass[20] = { 0 };
	printf("���������ĵ�½���룺\t");
	scanf("%s", &pass);

	//��������
	for (r = 1; r <= 3; r++)
	{
		char input[20] = { 0 };
		printf("���������ĵ�¼����:\t");
		scanf("%s", &input);

		if (0 == strcmp(input, pass))
		{
			printf("����ɹ�\n");
			break;
		}
		else
		{
			printf("����ʧ�ܣ� ��������%d�����룬����������%d��\n", r, 3 - r);
		}
	}
	if (r > 3)
	{
		printf("�������볬��3�����룬�����Զ��˳�");
	}


	// ��������Ϸ
	// ����������� // rand()
	srand((unsigned int)time(NULL)); // ����ʱ��� time() �⺯��--> ʱ���ڱ任������


	int choice = 0;
	int con = 1;

	while (con)
	{
		menu();
		printf("��ѡ��>>\t");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			con = 0;
			break;
		default:
			printf("ѡ����� ����ѡ��\n");
			break;
		}
	}

	// ��ӡ100~200 ֮�������

	int i10 = 0;
	int j10 = 0;
	int count = 0; // ����

	for (i10 = 100; i10 <= 200; i10++)
	{
		int flag = 1; // ����������
		for (j10 = 2; j10 < i10; j10++) //  // �ж� i �Ƿ�Ϊ������ʹ�� 2~i - 1֮��������� i
		{
			if (i % j10 == 0) // һ���� 0 ����������
			{
				flag = 0; //ʹ������Ϊ 0
				break; // �����ڲ�ѭ��������һ��i
			}
		}
		if (1 == flag) // ��������0������i������
		{
			count++;
			printf("%d ", i10); // ���i
		}
	}
	printf("\ncount = %d", count);


	//��ӡ100~200 ֮������� �� 
	//�Ż�1�����i������������ô2~��ƽ��iһ����һ������
	//�Ż�2���ų�����ż��
	int i_i10 = 0;
	int j_j10 = 0;
	int count_c = 0; // ����

	for (i_i10 = 101; i_i10 <= 200; i_i10 += 2)
	{
		int flag = 1; // ����������
		for (j_j10 = 2; j_j10 <= sqrt(i_i10); j_j10++) // �ж� i �Ƿ�Ϊ������ʹ�� 2~i - 1֮��������� i 
									  // sqrt() �⺯�� #include <math.h>
		{
			if (i_i10 % j_j10 == 0) // һ���� 0 ����������
			{
				flag = 0; //ʹ������Ϊ 0
				break; // �����ڲ�ѭ��������һ��i
			}
		}
		if (1 == flag) // ��������0������i������
		{
			count_c++;
			printf("%d ", i_i10); // ���i
		}
	}
	printf("\ncount = %d", count_c);



	int year = 0;
	int c = 0;

	for (year = 1000; year <= 2000; year++)
	{
		if ((year % 4 == 0) && (year % 100 != 0))
		{
			c++;
			printf("%d\t", year);
		}

		if (year % 400 == 0)
		{
			c++;
			printf("%d\t", year);
		}

	}
	printf("count = %d\n", c);




	// �����Լ�� -> շת���

	int m10 = 0;
	int n10 = 0;
	int r10 = 0;
	scanf("%d %d", &m10, &n10);

	while (r10 = m10 % n10)
	{
		m10 = n10;
		n10 = r10;
	}
	printf("%d\n", n10);


	// �žų˷���

	int i_i_i = 0;
	int j_j_j = 0;

	for (i_i_i = 1; i_i_i <= 9; i_i_i++)
	{
		for (j_j_j = 1; j_j_j <= i_i_i; j_j_j++)
		{
			printf("%d * %d = %2d\t", i_i_i, j_j_j, i_i_i * j_j_j);
		}
		printf("\n");
	}

	// �����ֵ

	int arr_arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int max_max = arr_arr[0];

	int i_i_i_i = 0;

	for (i_i_i_i = 1; i_i_i_i < 10; i_i_i_i++)
	{
		if (arr_arr[i_i_i_i] > max_max)
		{
			max_max = arr_arr[i_i_i_i];
		}
	}
	printf("\n%d\n", max_max);


	return 0;
}

/*
[Statement]
1. ���ʽ���
2. �����������
3. ������䣺�����ж����/��֧��䣺if ��䡢switch���
		   ѭ��ִ����䣺do while ��䡢while��䡢for���
		   ת����䣺return��䡢break ��䡢continue��䡢go to ���
4. �������
5. �����

����������C - C++ ��̡�
*/