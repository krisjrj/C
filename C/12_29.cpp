//数据结构
//数组nums包含从0到n的所有整数，但其中缺了一个。
//请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？
#include<stdio.h>
int missingNumber(int* nums, int numsSize) 
{
	int i = 0;//nums中的下标位置
	int res = numsSize;//不能是0，否则多按位异或一次0
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
	n = sizeof(num) / sizeof(num[0]);//求numsSize
	int p = missingNumber(num, n);
	printf("缺失的数字是：%d\n", p);
	return 0;
}
