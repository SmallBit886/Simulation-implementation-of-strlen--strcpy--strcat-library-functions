#define _CRT_SECURE_NO_WARNINGS 1
//BIT-3-�ַ��������ַ�������
#include <stdio.h>
#include <string.h>

////strlen()��ʹ�� --- size_t strlen ( const char * str );
//int main()
//{
//	int len1= strlen("abcdef");
//	printf("%d\n", len1);//6
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	int len2 = strlen(arr);//����û��Ϊ�ַ�����arr������ַ�������ֹ����
//	printf("%d\n", len2);//74
//	return 0;
//}
//�Լ�ʵ��
////1.�������ķ���
////2.�ݹ�
////3.ָ��-ָ��
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
// 2.�����ݹ�
//���ܴ�����ʱ����������
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
// 3.ָ��-ָ��ķ�ʽ
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

////1.2 strcpy()��ʹ�� --- char* strcpy(char * destination, const char * source );
//// 
////int main()
////{
////	char arr1[] = "abcd";
////	char arr2[] = "efg";
////	strcpy(arr1, arr2);
////	printf("%s\n", arr1);//efg
////	return 0;
////}
// �Լ�ʵ��
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
//	//�Ż�
//	//����srcָ����ַ�����destָ��Ŀռ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcd";
//	//char* arr4 = "abcd";//���ܿ�����Ŀ���ַ���Ϊ���������ܱ��ı�
//	char arr2[] = "efg";
//	//char arr3[] = { 'a','b','c' };//���ܿ�����Դ�ַ��������� '\0' ���������ַ���δ����\0
//	Mystrcpy(arr1, arr2);
//	printf("%s\n", arr1);//efg
//	return 0;
//}

//1.3 strcat()��ʹ�� --- char * strcat ( char * destination, const char * source );
//int main()
//{
//	char arr1[30] = "hello";
//	//char arr3[5] = "hello";//����׷�ӣ��ռ䲻��
//
//	char arr2[] = "world";//Դ�ַ��������� '\0' ����
//	char arr4[] = "hello\0xxxxxxxxx";
//	strcat(arr4, arr2);//��\0��ʼ׷��
//	strcat(arr1, arr2);
//	printf("%s\n", arr4);//helloworld
//	printf("%s", arr1);//helloworld
//	return 0;
//}
//
////�Լ�ʵ��
//#include <assert.h>
//char* Mystrcat(char* dest, const char* src)
//{
//	assert(dest!= NULL);
//	assert(src);//Ч��һ��
//	char* ret = dest;
//	//1.�ҵ�Ŀ���ַ�����\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)//���ÿ����ͺ�
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";//Դ�ַ��������� '\0' ����
//	Mystrcat(arr1, arr2);
//
//	printf("%s", arr1);//helloworld
//	return 0;
//}


