#define _CRT_SECURE_NO_WARNINGS

// 执行快捷键：Ctrl + F5 执行、F10 逐步执行

//extern int var; //生命需要使用外部变量
//func();//(调用函数)

	   // 头文件调用
#include <stdio.h> // pritf()函数头文件

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

	// 返回0正常返回, 与起始数据类型一致
	return 0;
}

/*

[指示内容]
1. \n 换行

[辅助打印]
1. %d 10进制的整数
2. %s 字符串

*/
