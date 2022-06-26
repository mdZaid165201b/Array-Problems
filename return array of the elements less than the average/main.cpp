#include <iostream>

using namespace std;


double getAverage(int arr[],int len)
{
    int sum = 0;
    for(int i = 0; i<len; i++)
    {
        sum+=arr[i];
    }
    double avg= double(sum/len);
    return avg;
}
int getCount(int arr[],int len)
{
    double avg  = getAverage(arr,len);
    int count = 0;
    for(int i =0; i<len; i++)
    {
        if(double(arr[i])<avg)
        {
            count++;
        }
    }
    return count;
}
int *getArray(int arr[],int len)
{
    double avg = getAverage(arr,len);
    int *newArr = new int(getCount(arr,len));
    for(int i= 0; i<len; i++)
    {
        if(double(arr[i])<avg)
        {
            newArr[i] = arr[i];
        }
    }
    return newArr;

}

int main()
{
    int arr[] = {2,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int *newArr = getArray(arr,len);
    for(int i = 0; i<getCount(arr,len); i++)
    {
        cout<<newArr[i]<<endl;
    }


    return 0;
}
