//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",&arr[9] - &arr[3]);
//	return 0;
//}
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
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
//	//5��5�еľ���
//	int arr[5][5] = { {1,2,3,4,5},
//					  {2,3,4,5,6},
//					  {3,4,5,6,7},
//					  {4,5,6,7,8},
//					  {5,6,7,8,9} };
//	int res = search(11,arr,5,5);
//	if (res == 1)
//		printf("�ҵ��ˣ�\n");
//	else
//		printf("�Ҳ�����\n");
//	return 0;
//}
//�ṹ��
//struct�ṹ��ؼ��� Stu ��ǩ struct Stu�ṹ������
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	Stu s1 = { "����",18,"13345671234","��" };//�ֲ�����
//	struct Stu s2 = {"����",19,"213123412","Ů"};
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
//	//�ֱ��ӡ
//	printf("%s\n",t.ch);
//
//}
//typedef struct Stu
//{
//	//��Ա����
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
//	Stu s = { "����",18,"13345671234","��" };//�ֲ�����
//	//
//	Print1(s);
//	Print2(&s);
//	return 0;
//}


//���Ͼ���
//int Search(int n,int arr[3][3],int col,int row)
//{
//	//��ʼ�ӵ�1�У���col���ж�
//	int i = 0;//��
//	int j = col - 1;//��
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
//		printf("�ҵ���\n");
//	}
//	else 
//		printf("�Ҳ���\n");
//	return 0;
//}

//���������ֽ����С���ֽ���ĸ�����һ��С�������жϵ�ǰ�������ֽ���
//��ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У������ݵĸ�λ���������ڴ�ĵ͵�ַ�У�
//С�ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ�У������ݵĸ�λ, ���������ڴ�ĸߵ�ַ�С�
//Ϊʲô���д�С��ģʽ֮���أ�������Ϊ�ڼ����ϵͳ�У����������ֽ�Ϊ��λ�ģ�ÿ����ַ��Ԫ����Ӧ��һ
//���ֽڣ�һ���ֽ�Ϊ8bit��������C�����г���8bit��char֮�⣬����16bit��short�ͣ�32bit��long�ͣ�Ҫ����
//��ı������������⣬����λ������8λ�Ĵ�����������16λ����32λ�Ĵ����������ڼĴ�����ȴ���һ����
//�ڣ���ô��Ȼ������һ�����������ֽڰ��ŵ����⡣��˾͵����˴�˴洢ģʽ��С�˴洢ģʽ��
//����һ�� 16bit �� short �� x �����ڴ��еĵ�ַΪ 0x0010 �� x ��ֵΪ 0x1122 ����ô 0x11 Ϊ���ֽڣ� 0x22
//Ϊ���ֽڡ����ڴ��ģʽ���ͽ� 0x11 ���ڵ͵�ַ�У��� 0x0010 �У� 0x22 ���ڸߵ�ַ�У��� 0x0011 �С�С
//��ģʽ���պ��෴�����ǳ��õ� X86 �ṹ��С��ģʽ���� KEIL C51 ��Ϊ���ģʽ���ܶ��ARM��DSP��ΪС
//��ģʽ����ЩARM��������������Ӳ����ѡ���Ǵ��ģʽ����С��ģʽ��
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;//char*ǿ��ת��a�ĵ�ַ����
//	if (*p == 1)
//	{
//		printf("С\n");
//	}
//	else
//	{
//		printf("��\n");
//	}
//	return 0;
//}
//ָ�����;���ָ������ò������ܷ��ʼ����ֽڣ�char* 1����int* 4����double* 8��
//10000000000000000000000010000000 -128
//11111111111111111111111101111111 
//11111111111111111111111110000000  