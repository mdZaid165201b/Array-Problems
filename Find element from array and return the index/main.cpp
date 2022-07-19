#include <iostream>

using namespace std;
int findIndex(int arr[],int len,int val)
{
    for(int i = 0; i<len; i++)
    {

        if(arr[i] == val)
        {
            return i;
        }

    }
    return -1;
}
int main()
{
    int arr[5] = {2,5,4,6,8};
    int arrLen = sizeof(arr)/sizeof(arr[0]);
    cout<<findIndex(arr,arrLen,4);
    return 0;
}
