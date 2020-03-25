#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 2,4,5,6,7,8,9,10,11,12 };
//	int temp = 0;
//	int i = 0;
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
//	{
//		printf("%-2d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
//	{
//		printf("%-2d ", arr2[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9 };
//	
//}
//#include<stdio.h>
//void print(int arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//void reverse(int arr[],int len)
//{
//	int i = 0;
//	for (i = 0; i < len/2; i++)
//	{
//		 int temp =  arr[i];
//		 arr[i] = arr[len - i - 1];
//		 arr[len - i - 1] = temp;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr,len);
//	reverse(arr,len);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
#include<stdio.h>
void sort(int arr[],int len)
{
	int j = 0;
	for (j = 0; j < len - 1; j++)
	{
		int flag = 1;
		int i = 0;
		for (i = 0; i < len - 1 - j; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int len = sizeof(arr)/sizeof(arr[0]);
	sort(arr,len);
	for (int i = 0; i<len; i++)
	{
		printf("%d ", arr[i]);
	}
//	return 0;
//}
//#include<stdio.h>
//void sort(int arr[])
//{
//    int temp;
//    int j = 0;
//    int len = sizeof(arr) / sizeof(arr[0]);
//    for (j = 0; j < len - 1; j++)
//    {
//        int i = 0;
//        for (i = 0; i < len - 1 - i; i++)
//        {
//            if (arr[i] > arr[i + 1])
//            {
//                int temp = arr[i];
//                arr[i] = arr[i + 1];
//                arr[i + 1] = temp;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    sort(arr);
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}