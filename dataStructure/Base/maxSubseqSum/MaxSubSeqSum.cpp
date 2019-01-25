// 最大子序列和
#include <iostream>
using namespace std;
double maxSubSeqSum1(double *array, int n);
double maxSubSeqSum2(double array[], int n);
double maxSubSeqSum3(double array[], int left, int right);
double maxSubSeqSum4(double array[], int n);

int main()
{
    double array[] = {10, -3, 4, 6, -5, 7, -1, 1};
    int length;
    double n1, n2, n3, n4;

    length = sizeof(array) / sizeof(array[0]);
    n1 = maxSubSeqSum1(array, length);
    cout << "max sub seq sum: " << n1 << ".\n";

    n2 = maxSubSeqSum2(array, length);
    cout << "max sub seq sum: " << n2 << ".\n";

    n3 = maxSubSeqSum3(array, 0, length-1);
    cout << "max sub seq sum: " << n3 << ".\n";

    n4 = maxSubSeqSum4(array, length);
    cout << "max sub seq sum: " << n4 << ".\n";
    return 0;
}

//计算并返回所最大子序列的和：穷举遍历
double maxSubSeqSum1(double array[], int n)
{
	//用来存储最大子序列的和
	int maxSum = 0;
	//i标记子序列的头
	for (int i = 0; i < n; i++)
	{
		//j标记子序列的尾
		for (int j = i; j < n; j++)
		{
			//用来存储当前头尾计算的求和结果
			int thisSum = 0;
			//将子序列的值依次加入求和结果
			for (int k = i; k <= j; k++)
			{
				thisSum += array[k];
			}
			//存储两者的最大值
			if(thisSum > maxSum)
				maxSum = thisSum;
		}
	}
	return maxSum;
}

// 穷举法优化
double maxSubSeqSum2(double array[], int n) 
{
    double sum, max;
    int i, j;

    max = 0;
    for (i=0; i<n; i++) 
    {
        sum = 0;
        for (j=i; j<n; j++)
        {
            sum += array[j];
            if (sum > max) 
            {
                max = sum;
            }
        }
    }
    return max;
}

// 分治法
double maxSubSeqSum3(double array[], int left, int right) 
{
    if (left == right) 
    {
        return array[left];
    }
    // 计算中点
    int center = (left + right) / 2;

    // 计算左半边最大子序列和
    double leftMaxSum = maxSubSeqSum3(array, left, center);
    // 计算右半边最大子序列和
    double rightMaxSum = maxSubSeqSum3(array, center+1, right);
    // 左边与右边最大子序列和比较
    double lrMaxSum = max(leftMaxSum, rightMaxSum);

    // 计算跨越中心点的最大子序列和，从中点往两边算起
    double lcMaxSum, lcCurSum = 0;
    // 从center向左处理左半边
    for (int i=center; i>=left; i--)
    {
        lcCurSum += array[i];
        lcMaxSum = max(lcCurSum, lcMaxSum);
    }
    // 从center向右处理右半边
    double crMaxSum, crCurSum = 0;
    for (int j=center+1; j<=right; j++)
    {
        crCurSum += array[j];
        crMaxSum = max(crCurSum, crMaxSum);
    }

    double maxSum = max(lrMaxSum, lcMaxSum + crMaxSum);

    return maxSum;
}


// 在线处理
double maxSubSeqSum4(double array[], int n)
{
    int i;
    double thisSum, maxSum = 0;
    
    for (i=0;i<n;i++)
    {
        thisSum += array[i];
        if (thisSum > maxSum) 
        {
            maxSum = thisSum;
        } 
        else if (thisSum < 0) 
        {
            thisSum = 0;
        }
    }
    return maxSum;
}
