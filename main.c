#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//
//	return 0;
//}

//���0~100000֮������"ˮ�ɻ���"�����
//"ˮ�ɻ���"��ָһ��nλ��,���λ���ֵ�n�η�֮�����õ��ڸ�������
//��: 153 = 1 ^ 3 + 5 ^3 + 3^3,��153��һ��"ˮ�ɻ���"
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		//�ж�i�Ƿ���������
		//1. ����i��λ��������Ϊn

		//2. ����i��ÿһλn�η�֮��

		//3. �ж�
	}
	return 0;
}

//ǰn���   (��д)
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

//��ָ��ķ�ʽ����ӡ������Ԫ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int* p = arr;  //arr��&�벻��&��ʲô����
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//��ϰ��      ����a��ǰn���
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

//�������
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