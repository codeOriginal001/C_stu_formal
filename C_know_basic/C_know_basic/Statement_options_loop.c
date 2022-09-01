#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h> // 随机数
#include <time.h> // 时间戳

void menu()
{
	printf("1. Play\n");
	printf("0. exist\n");
}

void game()
{
	// 生成随机数
	int ret = rand() % 10 + 1; // 余数是 0~9 -> +1 1~10
	printf("%d\n", ret);

	// 猜数字
	while (1)
	{
		int guess = 0;
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}

	}

}


int main()
{

	// 分支语句 (选择结构)

	// if 语句:
	// 如果表达式为真，执行语句
	/*
	语法结构：
	if(表达式)
		 语句;

	if(表达式)
		 语句1;
	else
		 语句2;

	if(表达式1)
		 语句 1;
	else if(表达式2)
		 语句 2;
	else
		 语句 3;
	*/

	// 如果 "条件" 满足，执行语句，否则跳过
	int age = 19;

	if (age < 18)
		printf("未成年\n");

	// 如果 "条件" 满足，执行语句，否则执行 elese 下语句
	if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");

	// 默认只能执行一条语句，否则需要加上大括号{代码块}
	if (age < 18)
	{
		printf("未成年\n");
		printf("不能喝酒\n");
	}
	else
	{
		printf("成年\n");
		printf("适量饮酒\n");
	}

	// 实现多条件分支
	int age_1 = 0;
	scanf("%d", &age_1);
	if (age_1 < 18)
		printf("少年\n");
	else if (age_1 >= 18 && age_1 <= 30)
		printf("青年\n");
	else if (age_1 >= 31 && age_1 <= 45)
		printf("中年\n");
	else if (age_1 >= 46 && age_1 < 60)
		printf("壮年\n");
	else if (age_1 >= 60 && age_1 < 90)
		printf("老年\n");
	else
		printf("老寿星\n");

	// else 只和最近的 if 匹配，否则要加代码块限定区域

	// 什么都不输出
	int a = 0;
	int b = 2;
	if (1 == a)
		if (2 == b)
			printf("hehe\n");
		else
			printf("haha\n");
	// 输出haha
	if (1 == a)
	{
		if (2 == b)
			printf("hehe\n");
	}
	else
		printf("haha\n");


	// Example 判断是否为奇数: 除2余1，或除2余0

	int num_eif_1 = 0;
	scanf("%d", &num_eif_1);
	if (0 == (num_eif_1 % 2))
		printf("%d 不是奇数\n", num_eif_1);
	else
		printf("%d 是奇数\n", num_eif_1);

	// Example 输出1-100之间的奇数

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

	// switch 语句：必须是整形表达式
	int day = 0;
	scanf("%d", &day);
	printf("星期%d\n", day);

	switch (day)
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("周二\n");
		break;
	case 3:
		printf("星期3\n");
		break;

	default:
		printf("输入错误\n");
		break;
	}

	// switch 允许嵌套，注意 break 的作用范围
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
			break; // 此 break 是嵌套 Switch中的break，结束后仍然执行
		}
	case 4:
		m++; // ------------> m =5 
		break;
	default:
		break;
	}
	printf("m = %d, n = %d\n", m, n); // m = 5, n = 4


	// 循环语句

	// while 循环
	/*
	while(表达式)
	{
		循环语句;
	}
	*/

	// 打印 1 2 3 4 5 6 7 8 9 10
	int num_ewhile_1 = 1;

	while (num_ewhile_1 <= 10)
	{
		printf("%d\t", num_ewhile_1);
		num_ewhile_1++;
	}
	printf("\n");

	// 循环中遇到 break
	int num_ewhile_2 = 1;

	while (num_ewhile_2 <= 10)
	{
		if (num_ewhile_2 == 5)
			break;
		printf("%d\t", num_ewhile_2); // 1 2 3 4
		num_ewhile_2++;
	}
	printf("\n");

	// 循环中遇见 continue

	// 死循环
	/*
	int num_ewhile_3 = 1;

	while (num_ewhile_3 <= 10)
	{
		if (num_ewhile_3 == 5)
			continue; // 直接到while，而没进行 ++ 操作
		printf("%d\t", num_ewhile_3);
		num_ewhile_3++;
	}
	printf("\n");

	*/

	int num_ewhile_3 = 0;

	while (num_ewhile_3 < 10)
	{
		num_ewhile_3++; // 从 0 开始, 去掉= 先写 i++
		if (num_ewhile_3 == 5)
			continue;
		printf("%d\t", num_ewhile_3); // 1 2 3 4 6 7 8 9 10
	}
	printf("\n");


	// getchar 确认密码
	//char password[20] = {0};
	//char check = 'w';
	//printf("请输入密码：>");
	//scanf("%s", password);
	//printf("请确认密码(Y/N)：");
	//scanf("%s", &check);
	//if (check == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("确认失败\n");
	//}

	//char password[20] = { 0 };
	//printf("请输入密码：>");
	//scanf("%s", password);
	//getchar();// 清理 输入缓冲区中的 \n
	//printf("请确认密码(Y/N)：");
	//int ch = getchar();
	//if (ch == 'Y')
	//{
	//	printf("确认成功\n");
	//}
	//else
	//{
	//	printf("确认失败\n");
	//}

	char password_2[20] = { 0 };
	printf("请输入密码：>");
	scanf("%s", password_2);
	int temp = 0;
	while ((temp = getchar()) != '\n')
	{
		;
	}
	printf("请确认密码(Y/N)：");
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}


	// for 循环

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
	// 计算n的阶乘

	// 方法 一：
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

	// 方法二：
	int i_eloop2 = 0;
	int n1 = 0;
	int res = 1;

	scanf("%d", &n1);

	for (i_eloop2 = 1; i_eloop2 <= n1; i_eloop2++)
	{
		res = res * i_eloop2;
	}
	printf("%d\n", res);


	// 计算 1! + 2! + 3! .... + n!

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

	// 二分查找 / 折半查找

	// 在一个有序数组中查找特定的元素
	// left = 0; right = 9
	// mid = (left + right) /2 -> 向下取整
	int array1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(array1) / sizeof(array1[0]); // 元素个数
	int left = 0; // 第一个下标
	int right = size - 1; //最后一个元素下标


	int k = 0;
	scanf("%d", &k);

	while (left <= right)
	{
		// int mid = (left + right) / 2; // 向下取整 找到中间元素下标 mid 
		int mid = (right - left) / 2 + left; // better
		// 锁定中间元素值 arr[mid]
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
			printf("找到了,下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到\n");

	// 演示多个字符向从两端移动向中间汇聚

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
		system("cls"); // windows 控制命令清理屏幕库函数
	}
	printf("%s\n", array_2);

	// 模拟用户登录场景
	int r = 0;
	//设置密码
	char pass[20] = { 0 };
	printf("请设置您的登陆密码：\t");
	scanf("%s", &pass);

	//输入密码
	for (r = 1; r <= 3; r++)
	{
		char input[20] = { 0 };
		printf("请输入您的登录密码:\t");
		scanf("%s", &input);

		if (0 == strcmp(input, pass))
		{
			printf("输入成功\n");
			break;
		}
		else
		{
			printf("输入失败， 您已输入%d次密码，还可以输入%d次\n", r, 3 - r);
		}
	}
	if (r > 3)
	{
		printf("您已输入超过3次密码，程序自动退出");
	}


	// 猜数字游戏
	// 随机数生成器 // rand()
	srand((unsigned int)time(NULL)); // 引入时间戳 time() 库函数--> 时刻在变换的数字


	int choice = 0;
	int con = 1;

	while (con)
	{
		menu();
		printf("请选择：>>\t");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			con = 0;
			break;
		default:
			printf("选择错误 重新选择\n");
			break;
		}
	}

	// 打印100~200 之间的素数

	int i10 = 0;
	int j10 = 0;
	int count = 0; // 计数

	for (i10 = 100; i10 <= 200; i10++)
	{
		int flag = 1; // 代表是素数
		for (j10 = 2; j10 < i10; j10++) //  // 判断 i 是否为素数：使用 2~i - 1之间的数除以 i
		{
			if (i % j10 == 0) // 一旦余 0 代表不是素数
			{
				flag = 0; //使承受量为 0
				break; // 跳出内层循环，到下一个i
			}
		}
		if (1 == flag) // 若都不是0，代表i是素数
		{
			count++;
			printf("%d ", i10); // 输出i
		}
	}
	printf("\ncount = %d", count);


	//打印100~200 之间的素数 ： 
	//优化1：如果i不是素数，那么2~开平方i一定有一个因子
	//优化2：排除所有偶数
	int i_i10 = 0;
	int j_j10 = 0;
	int count_c = 0; // 计数

	for (i_i10 = 101; i_i10 <= 200; i_i10 += 2)
	{
		int flag = 1; // 代表是素数
		for (j_j10 = 2; j_j10 <= sqrt(i_i10); j_j10++) // 判断 i 是否为素数：使用 2~i - 1之间的数除以 i 
									  // sqrt() 库函数 #include <math.h>
		{
			if (i_i10 % j_j10 == 0) // 一旦余 0 代表不是素数
			{
				flag = 0; //使承受量为 0
				break; // 跳出内层循环，到下一个i
			}
		}
		if (1 == flag) // 若都不是0，代表i是素数
		{
			count_c++;
			printf("%d ", i_i10); // 输出i
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




	// 求最大公约数 -> 辗转相除

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


	// 九九乘法表

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

	// 求最大值

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
1. 表达式语句
2. 函数调用语句
3. 控制语句：条件判断语句/分支语句：if 语句、switch语句
		   循环执行语句：do while 语句、while语句、for语句
		   转向语句：return语句、break 语句、continue语句、go to 语句
4. 复合语句
5. 空语句

《高质量的C - C++ 编程》
*/