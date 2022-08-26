#define _CRT_SECURE_NO_WARNINGS

// 执行快捷键：Ctrl + F5 执行、F10 逐步执行

//extern int var; //生命需要使用外部变量
//func();//(调用函数)

	   // 头文件调用
#include <stdio.h> // pritf()函数、scanf()函数，标准输入输出头文件
#include <string.h> // strlen()函数头文件

// #defin 定义标识符常量
#define MAX 1000
// enum 定义枚举常量
enum Sex
{
	MALE,
	FENALE,
	SECRET
};

//建立函数
// 创建相加函数
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}


// main() 函数，主函数：C语言的代码主体，程序运行开始（有且仅有1个 main()函数）
int main() // 数据类型 main()
{
	// "在此输入主体代码内容"

	printf("hello world"); // printf库函数，用来输出打印内容 （使用库函数时要在主体外起始处调用头文件）

	printf("\n");

	printf("%d\n", sizeof(char)); // 打印(“%数据类型”, 打印内容）; sizeof()操作符，用来表示函数内的大小 
	// printf(sizeof(char)); 错误的

	// 定义变量: 数据类型 [自定义]变量名词, 一般在主体函数下的起始并初始化 (变量名区分大小写)
	// 局部变量--在主体内定义的变量 (局部变量与全局变量冲突时，局部变量优先)
	short age = 20;
	double salarly = 1000000.5;

	// 变量的使用
	// Example 1
	age = age + 1;
	printf("age = %d\n", age);
	// Example 2: 运算
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d %d", &num1, &num2); //scanf()函数，用来操作端输入，并依次进行下一步操作
	sum = num1 + num2;
	printf("%d\n", sum);


	// 常量
	// 字面常量
	//   数组a[c]"c"一般为字面常量 (在C99之前不允许数组的大小使用变量指定，C99引入了变长数组的概念，Viso中目前仍不允许)
	// const 修饰的常变量
	const anum = 100; // 常变量具有常属性，不允许被修改
	// define 定义的标识符常量，main()主函数前定义，主题调用
	int a = MAX;
	printf("%d\n", a);
	// 枚举常量
	enum Sex s = SECRET;

	// 字符串的存储
	char arr1[] = "abcdef"; // 把abcdef字符串存储到arr数组中,字符串隐藏\0 (数组共有7个字符) -> a b c d e f \0
	char arr2[] = { 'a','b','c','d','e','f' }; // 数组共有6个字符 -> a b c d e f ...???... 直到遇到\0
	char arr3[] = { 'a','b','c','d','e','f', '\0' };
	printf("%s\n", arr1); // abcdef
	printf("%s\n", arr2); // abcdef烫烫烫烫烫烫烫烫烫烫烫vv?'K (不固定)
	printf("%s\n", arr3); // abcdef

	// 字符串的长度
	printf("%d\n", strlen(arr1)); //长度为6, 共7个字符
	printf("%d\n", strlen(arr2)); // 长度为（38），共6个字符
	printf("%d\n", strlen(arr3)); // 长度为6, 共7个字符
	// 转义字符整体算1个字符

	// 选择语句基本逻辑
	int input = 0; // Step 0. 定义输入起始变量
	printf("Step 1. 起始语句\n");
	printf("Step 2. 选项提示 (1/0)\n");
	scanf("%d", &input); //提供一个地址&,将输入的数字存入变量input中
	// 简历 if...;else 选择语句
	if (input == 1)
		printf("输入选项a的输出结果\n");
	else
		printf("输入选项b的输出结果\n");

	// 循环语句基本逻辑
	// 计数条件循环
	int count = 0; // Step 0. 定义输入起始变量条件值|第一个是0从0开始累计
	printf("Step 1. 起始语句\n");
	// 找到循环结构，创立(print 与count++的循环)
	while (count < 5) //共输出 0 1 2 3 4 【5】句
	{
		printf("过程...-> 条件累计 \t %d \n", count);
		count++; // 条件累计
	}
	if (count = 5)
		printf("结束循环,用判断语句输出结果\n");


	//调用相加函数
	int number1 = 0;
	int number2 = 0;
	int result = 0;

	scanf("%d%d", &number1, &number2);
	result = Add(number1, number2);

	printf("%d\n", sum);

	// 数组定义创建
	int in1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int in2[10] = { 0 }; //不完全初始化，剩余的会默认初始化为0
	char ch1[] = { 'a', 'b', 'c' };
	char ch2[] = { 0 };

	// 数组基本使用
	// 打印下表为n的第n+1个元素(不能越界访问)
	printf("%d\n", in1[8]);
	// 给数组输入值
	int i = 0;
	while (i < 10)
	{
		scanf("%d", &in2[i]);
		i++;
	}
	// 输出数组中的值
	i = 0;
	while (i < 10)
	{
		printf("%d", in2[i]);
		i++;
	}





	// 返回0正常返回, 与起始数据类型一致`
	return 0;
}

/*

[指示内容-转义字符]
1. \n 换行
2. \0 字符串的结束标志
3. \t 空格
4. \?\?，'\''，"\"" , \\...避免三字母词 ??) -> ]、打印引号、斜杠
5. '\abc' 八进制数字转换为10进制数字的ASCII(c^0 + c^1 + c^2...)
6. '\xab' 十六进制数字转换为10进制数字的ASCII

[辅助打印]
1. %d 10进制有符号的整数
2. %s 字符串
3. %c 字符
*/
