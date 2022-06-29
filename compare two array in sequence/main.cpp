#include <iostream>

using namespace std;

bool isEqual(int arr1[],int arr2[],int len1,int len2)
{

    bool isTrue = false;
    for(int i = 0; i<len1; i++)
    {
        for(int j = i; j<len2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                isTrue = true;
                break;
            }
            else
            {
                isTrue = false;
                return isTrue;
            }
        }
    }
    return isTrue;

}


int main()
{
    int arr1[] = {5,2,4,6,7,8,9};
    int arr1Len = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {5,2,4,6,7,8,9};
    int arr2Len = sizeof(arr2)/sizeof(arr2[0]);

    if(isEqual(arr1,arr2,arr1Len,arr2Len))
    {
        cout<<"Both arrays are equal";
    }
    else
    {
        cout<<"Both array are not equal!!!";
    }
    return 0;
}
