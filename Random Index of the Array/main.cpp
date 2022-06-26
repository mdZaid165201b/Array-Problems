#include <iostream>
#include<time.h>
using namespace std;

int getRandomIndex(int arr[],int len)
{
    srand((unsigned)time(NULL));
    return 1+rand()%len;
}


int main()
{
    int arr[] = {1,45,55,22,33,474,55,88};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<getRandomIndex(arr,len);
    return 0;
}
