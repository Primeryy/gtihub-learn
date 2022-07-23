#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//
//	return 0;
//}

//求出0~100000之间所有"水仙花数"并输出
//"水仙花数"是指一个n位数,其各位数字的n次方之和正好等于该数本身
//如: 153 = 1 ^ 3 + 5 ^3 + 3^3,则153是一个"水仙花数"
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//判断i是否是自幂数
		//1. 计算i的位数，定义为n

		//2. 计算i的每一位n次方之和

		//3. 判断
	}
	return 0;
}

//前n项和   (自写)
//int main()
//{
//	int a = 1;
//	int z = 100;
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < z; i++)
//	{
//
//		sum = sum + a + i;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//用指针的方式来打印出数组元素
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;  //arr加&与不加&有什么区别
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//练习题      关于a的前n项和
//int i_sum(int a,int n)
//{
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = 10 * ret + a;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int k = i_sum(a,n);
//	return 0;
//}

//数组参数
//int my_str(int ar[])
//{
//	if (*ar != '\0')
//		return 1 + my_str(1 + ar);
//	else
//		return 0;
//
//}
//int main()
//{
//	int arr[6] = { 1,2,3,4,5 };
//	//int* pa = arr;
//	//int t = my_str(arr);
//	//int* p = arr;
//
//	/*printf("%d",*p);*/
//	printf("%d", *(arr+2));
//	return 0;
//}