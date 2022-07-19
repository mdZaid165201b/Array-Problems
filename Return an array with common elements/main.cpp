#include <iostream>

using namespace std;
//count for no of common element present in the array.
int commonCount(int arr1[],int arr2[], int arr1Len, int arr2Len){
    int commonCount = 0;

    for(int i = 0;i<arr1Len;i++){
        for(int j = 0;j<arr2Len;j++){
            if(arr1[i] == arr2[j]){
                commonCount++;
                break;
            }
        }
    }
    return commonCount;
}
int *commonArray(int arr1[],int arr2[], int arr1Len, int arr2Len,int commonCount){

    //assigning common values to new Array
    int *newArray = new int(commonCount);
    int l = 0;
    for(int i = 0;i<arr1Len;i++){
        for(int j = 0;j<arr2Len;j++){
            if(arr1[i] == arr2[j]){
                newArray[l] = arr1[i];
                l++;
                break;
            }
        }
    }

    return newArray;
}
void print(int arr[],int len){
    for(int i = 0;i<len;i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr1[6] = {2,4,5,6,7,8};
    int arr2[7] = {1,2,4,10,9,7,12};
    int arr1Len = sizeof(arr1)/sizeof(arr1[0]);
    int arr2Len = sizeof(arr2)/sizeof(arr2[0]);
    int commonElementsLength  = commonCount(arr1,arr2,arr1Len,arr2Len);
    int *newCommonArray = commonArray(arr1,arr2,arr1Len,arr2Len,commonElementsLength);
    print(newCommonArray,commonElementsLength);
    return 0;
}
