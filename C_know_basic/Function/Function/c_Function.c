#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 随机数
#include <time.h> // 时间戳
#include <windows.h> // 使用命令符命令
#include <math.h>

// 函数 - 找出两个整数中最大值
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

// 函数 - 交换两个整形变量的内容
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

// 当函数调用时，实际参数 传给 形式参数，形式参数 成为 实际参数的临时拷贝 (有自己独立的地址)
// 所以对 形式参数 的修改是不影响 实际参数 的

int main()
{
	// 拷贝字符串数组
	char arr1[20] = { 0 };
	char arr2[] = "copy arr1 from arr2";
	strcpy(arr1, arr2);
	printf("%s\n", arr1);
	
	
	//替换字符串数组中的字符
	char arr[] = "??, change";
	printf("%s\n", arr);
	memset(arr, 'H', 2);
	printf("%s\n", arr);
	// memset(*ptr, value, num)
	// Sets the first num bytes of the block of memory by ptr to the specified value 

	// 使用函数
	int a = 0;
	int b = 0;
	int r1 = 0;
	int r2 = 0;

	scanf("%d %d", &a, &b);

	//传值调用
	r1 = findmax(a, b);
	r2 = findmax2(a, b);


	printf("%d\n", r1);
	printf("%d\n", r2);

	printf("a = %d, b = %d \n", a, b);
	// 传递地址；传址调用
	swapnum(&a, &b);
	printf("a = %d, b = %d \n", a, b);

	// 空间




	return 0;
}