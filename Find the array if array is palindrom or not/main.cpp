#include <iostream>

using namespace std;

bool checkPalindrom(int arr[], int len)
{
    int totalIndex = len-1;
    bool isEqual = true;
    for(int j = 0; j<len; j++)
    {
        if(arr[j] == arr[totalIndex-j])
        {
            isEqual = true;
        }
        else
        {
            return false;
        }
    }
    return isEqual;
}

int main()
{
    int arr[9] = {1,2,3,4,5,4,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    checkPalindrom(arr,len) ? cout<<"Palindrom" : cout<<"Not Palindrom";
    return 0;
}
