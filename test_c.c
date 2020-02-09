#include <stdio.h> 

int main(void)
{
	float aver(float a[],int num);
	float a1[5], a2[10];
	for (int i = 0; i <= 4; i++)
	{
		printf("请输入第%d个学生的成绩：", i + 1);
		scanf_s("%f",&a1[i]);
	}
	printf("第一组平均分是%f",aver(a1,5));

	return 0;
}

float aver(float a[], int num)
{
	float sum=0;
	for (int i=0; i <= num - 1; i++)
		sum = sum + a[i];
	return sum/num;
}
