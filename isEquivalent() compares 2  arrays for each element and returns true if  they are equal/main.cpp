#include <iostream>

using namespace std;
bool isEquivalent(int arr1[],int arr2[],int arr1Len,int arr2Len){
    bool isEqual = true;
    for(int i = 0;i<arr1Len;i++){
        for(int j = 0; j<arr2Len; j++){
            // if(arr1[i] == arr2[j]){ isEqual = true;}
            // else{
            //     isEqual = false;

            // }
            (arr1[i] == arr2[j]) ? isEqual = true: isEqual = false;

        }
    }
    return isEqual;
}
int main()
{
    int arr1[7] = {1,2,3,3,4,4,5};
    int arr2[5] = {2,1,3,4,5};
    int arr1Len = sizeof(arr1)/sizeof(arr1[0]);
    int arr2Len = sizeof(arr2)/sizeof(arr2[0]);
    if(isEquivalent(arr1,arr2,arr1Len,arr2Len)){
        cout<<"Both arrays are equivalent.";
    }
    else{
        cout<<"Both arrays are not equal!!!";
    }

    return 0;
}
