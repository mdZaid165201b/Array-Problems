#include <iostream>

using namespace std;

int * rotate(int arr[], int length) {
  int temp = arr[length - 1];
  int elem = arr[0];
  for (int i = 0; i < length; i++) {
    int elem2 = arr[i + 1];
    arr[i + 1] = elem;
    elem = elem2;
  }
  arr[0] = temp;

  return arr;
}

void print(int arr[],int length){
    for(int i = 0;i < length; i++)
        cout<<arr[i]<<" ";
}


int main() {
  int arr[5] = {1,2,3,4,5};
  int length = sizeof(arr)/sizeof(arr[0]);
  int *arr2 = rotate(arr, length);
  print(arr2,length);
  return 0;
}
