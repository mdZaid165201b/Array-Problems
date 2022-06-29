#include <iostream>

using namespace std;

bool isEquivalent(int arr1[],int len1,int arr2[],int len2)
{
    bool equal = false;
    for(int i = 0; i<len2; i++)
    {
        for(int j = 0; j<len1; j++)
        {
            if(arr2[i] == arr1[j])
            {
                equal = true;
                break;
            }
            else
            {
                equal = false;
                continue;
            }
        }
    }
    //cout<<equal;
    return equal;

}


int main()
{
    int arr1[] = {1,2,3,3,4,4,5};
    int len1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {2,1,3,4,5};
    int len2 = sizeof(arr2)/sizeof(arr2[0]);
    if(isEquivalent(arr1,len1,arr2,len2))
    {
        cout<<"Both Arrays are Equal";
    }
    else
    {
        cout<<"Both Arrays are not Equal!!!";
    }
    return 0;
}
