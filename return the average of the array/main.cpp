#include <iostream>

using namespace std;


double getAverage(int arr[],int len)
{
    int sum = 0;
    for(int  i = 0; i<len; i++)
    {
        sum+=arr[i];
    }
    double avg = double(sum)/double(len);
    cout<<avg;
}

int main()
{
    int arr[] = {99,48,34,57,65,23,54,22,43,21};
    int len = sizeof(arr)/sizeof(arr[0]);
    getAverage(arr,len);
    return 0;
}
