#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

int main()
{
	int i, cnt = 0, min, k, bones;
	
	int arr[10] = { 0 };
	scanf("%d", &bones);

	for (i = 0; i < 10; i++) {
		scanf("%d", &k);
		arr[i] = fabs(k - bones);//奖金与猜测的差值的绝对值
	}
	min = arr[0];
	for (i = 0; i < 10; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}                  //找出最小差
	}
	for (i = 0; i < 10; i++)
	{
		if (min == arr[i])
		{
			printf("%d ", i);
			cnt++;          
		}                  //计数最小差出现次数
	}
	printf("\n");
	printf("%.1lf", bones*1.0 / cnt);
	return 0;
}