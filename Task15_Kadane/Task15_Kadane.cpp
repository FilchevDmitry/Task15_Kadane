#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[], int size)
{
    int max = INT_MIN, sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
        if (max < sum)
            max = sum;
        if (sum < 0)
            sum = 0;
    }
    return max;
}
int main()
{
    int a[] = { -2,1,-3,4,-1,2,1,-5,4 };
    int n = sizeof(a) / sizeof(a[0]);
    int max_sum = kadane(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;

}