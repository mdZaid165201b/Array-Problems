#include <iostream>

using namespace std;

int getSum(int arr[],int len)
{
    int sum = 0;
    for(int i =0; i<len; i++)
    {
        sum+=arr[i];
    }
    return sum;
}


int main()
{
    int arr[] = {2,4,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<getSum(arr,len);
    return 0;
}
