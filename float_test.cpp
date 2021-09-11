// float_test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double sum;
    int i;
    sum = 0;
    for (i = 0; i < 10000; i++)
    {
        sum += (float)0.1;
    }
    //cout << sum;
    printf("%.10lf", sum);
    return 0;
}
