#define _CRT_SECURE_NO_WARNINGS 1
//BIT-3-字符函数和字符串函数
#include <stdio.h>
#include <string.h>

////strlen()的使用 --- size_t strlen ( const char * str );
//int main()
//{
//	int len1= strlen("abcdef");
//	printf("%d\n", len1);//6
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	int len2 = strlen(arr);//可能没有为字符串“arr”添加字符串零终止符。
//	printf("%d\n", len2);//74
//	return 0;
//}
//自己实现
////1.计数器的方法
////2.递归
////3.指针-指针
//#include <assert.h>
//int Mystrlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// 2.函数递归
//不能创建临时变量计数器
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
// 3.指针-指针的方式
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
// 
//int main()
//{
//	int len = Mystrlen("abcdef");
//	printf("%d\n", len);//6
//
//	return 0;
//}

////size_t strlen(const char * string);
////size_t
////typedef unsigned __int64 size_t;
//int main()
//{
//	if (strlen("abc") - strlen("abcdef"))
//	{
//		printf("hehe\n");	//hehe
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

////1.2 strcpy()的使用 --- char* strcpy(char * destination, const char * source );
//// 
////int main()
////{
////	char arr1[] = "abcd";
////	char arr2[] = "efg";
////	strcpy(arr1, arr2);
////	printf("%s\n", arr1);//efg
////	return 0;
////}
// 自己实现
//#include <assert.h>
//char* Mystrcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;//'\0'
//	
//	//优化
//	//拷贝src指向的字符串到dest指向的空间
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcd";
//	//char* arr4 = "abcd";//不能拷贝，目标字符串为常量，不能被改变
//	char arr2[] = "efg";
//	//char arr3[] = { 'a','b','c' };//不能拷贝，源字符串必须以 '\0' 结束，该字符串未包含\0
//	Mystrcpy(arr1, arr2);
//	printf("%s\n", arr1);//efg
//	return 0;
//}

//1.3 strcat()的使用 --- char * strcat ( char * destination, const char * source );
//int main()
//{
//	char arr1[30] = "hello";
//	//char arr3[5] = "hello";//不能追加，空间不够
//
//	char arr2[] = "world";//源字符串必须以 '\0' 结束
//	char arr4[] = "hello\0xxxxxxxxx";
//	strcat(arr4, arr2);//从\0开始追加
//	strcat(arr1, arr2);
//	printf("%s\n", arr4);//helloworld
//	printf("%s", arr1);//helloworld
//	return 0;
//}
//
////自己实现
//#include <assert.h>
//char* Mystrcat(char* dest, const char* src)
//{
//	assert(dest!= NULL);
//	assert(src);//效果一样
//	char* ret = dest;
//	//1.找到目的字符串的\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)//调用拷贝就好
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";//源字符串必须以 '\0' 结束
//	Mystrcat(arr1, arr2);
//
//	printf("%s", arr1);//helloworld
//	return 0;
//}


