//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",&arr[9] - &arr[3]);
//	return 0;
//}
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
//int search(int n, int arr[5][5], int row,int col)
//{
//	int i = 0;
//	int j = col - 1;
//	while (j > 0 && i < row)
//	{
//		if (n < arr[i][j])
//		{
//			i--;
//		}
//		else if (n > arr[i][j])
//		{
//			j++;
//		}
//		else if (n == arr[i][j])
//		{
//			return 1;
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	//5行5列的矩阵
//	int arr[5][5] = { {1,2,3,4,5},
//					  {2,3,4,5,6},
//					  {3,4,5,6,7},
//					  {4,5,6,7,8},
//					  {5,6,7,8,9} };
//	int res = search(11,arr,5,5);
//	if (res == 1)
//		printf("找到了！\n");
//	else
//		printf("找不到！\n");
//	return 0;
//}
//结构体
//struct结构体关键字 Stu 标签 struct Stu结构体类型
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	Stu s1 = { "张三",18,"13345671234","男" };//局部变量
//	struct Stu s2 = {"李四",19,"213123412","女"};
//	return 0;
//}
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct s s;
//	char *pc;
//};
//int main()
//{
//	char arr[] = "hello\n";
//	struct T t = { "hehe",{2,'s',"hi",3.14},arr };
//	//分别打印
//	printf("%s\n",t.ch);
//
//}
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu s)
//{
//	printf("name:%s\n", s.name);
//	printf("age:%d\n", s.age);
//	printf("tele:%d\n", s.tele);
//	printf("sex:%s\n", s.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%d\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "张三",18,"13345671234","男" };//局部变量
//	//
//	Print1(s);
//	Print2(&s);
//	return 0;
//}


//杨氏矩阵
//int Search(int n,int arr[3][3],int col,int row)
//{
//	//初始从第1行，第col列判断
//	int i = 0;//行
//	int j = col - 1;//列
//	while (i < row && j > 0)
//	{
//		if (n < arr[i][j])
//		{
//			i--;//i--
//		}
//		else if (n > arr[i][j])
//		{
//			j++;//j++
//		}
//		else if (n == arr[i][j])
//			return 1;
//			break;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1, 2, 3} ,{2, 3, 4},{4, 5, 6} };
//	int res = Search(1,arr,3,3);
//	if (res == 1)
//	{
//		printf("找到了\n");
//	}
//	else 
//		printf("找不到\n");
//	return 0;
//}

//请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序
//大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中；
//小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位, ，保存在内存的高地址中。
//为什么会有大小端模式之分呢？这是因为在计算机系统中，我们是以字节为单位的，每个地址单元都对应着一
//个字节，一个字节为8bit。但是在C语言中除了8bit的char之外，还有16bit的short型，32bit的long型（要看具
//体的编译器），另外，对于位数大于8位的处理器，例如16位或者32位的处理器，由于寄存器宽度大于一个字
//节，那么必然存在着一个如果将多个字节安排的问题。因此就导致了大端存储模式和小端存储模式。
//例如一个 16bit 的 short 型 x ，在内存中的地址为 0x0010 ， x 的值为 0x1122 ，那么 0x11 为高字节， 0x22
//为低字节。对于大端模式，就将 0x11 放在低地址中，即 0x0010 中， 0x22 放在高地址中，即 0x0011 中。小
//端模式，刚好相反。我们常用的 X86 结构是小端模式，而 KEIL C51 则为大端模式。很多的ARM，DSP都为小
//端模式。有些ARM处理器还可以由硬件来选择是大端模式还是小端模式。
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;//char*强制转换a的地址类型
//	if (*p == 1)
//	{
//		printf("小\n");
//	}
//	else
//	{
//		printf("大\n");
//	}
//	return 0;
//}
//指针类型决定指针解引用操作符能访问几个字节：char* 1个，int* 4个，double* 8个
//10000000000000000000000010000000 -128
//11111111111111111111111101111111 
//11111111111111111111111110000000  