#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    vector<int>a = { -2,1,-3,4,-1,2,1,-8,4 };
    int max = INT_MIN, sum = 0;
    int start = 0,temp=0;
    int end = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (max < sum)
        {
            max = sum;
            end = i;
            start = temp;
           
        }
        if (sum < 0)
        {
            sum = 0;
            temp = i+1;
        } 
    }
    cout << max<<" "<<start <<" "<<end<< endl;
    return 0;

}