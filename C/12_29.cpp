//���ݽṹ
//����nums������0��n������������������ȱ��һ����
//���д�����ҳ��Ǹ�ȱʧ�����������а취��O(n)ʱ���������
#include<stdio.h>
int missingNumber(int* nums, int numsSize) 
{
	int i = 0;//nums�е��±�λ��
	int res = numsSize;//������0������ఴλ���һ��0
	for (i = 0; i < numsSize; i++)
	{
		res = res ^i ^ nums[i];
	}
	return res;
}
int main()
{
	int num[] = {5,4,3,1,2,6,7,9,0};
	int n = 0;
	n = sizeof(num) / sizeof(num[0]);//��numsSize
	int p = missingNumber(num, n);
	printf("ȱʧ�������ǣ�%d\n", p);
	return 0;
}
