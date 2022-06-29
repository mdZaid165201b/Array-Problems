#include <iostream>

using namespace std;
int vowelCount(char arr[],int len)
{
    int vCount = 0;
    for(int i = 0; i<len; i++)
    {
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
        {
            vCount++;
        }
    }
    //cout<<vCount;
    return vCount;
}

char *removeVowels(char arr[],int len,int vowelCount)
{
    if(vowelCount>0)
    {
        char *newArray = new char[len-vowelCount];
        int j = 0;
        for(int i = 0; i<len; i++)
        {
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
            {
                continue;
            }
            else
            {
                newArray[j] = arr[i];
                j++;
            }
        }


        return newArray;
    }
    else
    {
        cout<<"No Vowel Found!!!";
    }

}
void print(char arr[],int len)
{
    for(int i = 0; i<len; i++)
    {
        cout<<arr[i];
    }
}

int main()
{
    char arr[] = {'Z','a','i','d'};
    int len = sizeof(arr)/sizeof(arr[0]);


    int vCount = vowelCount(arr,len);
    char *newArray =  removeVowels(arr,len,vCount);
    len = len-vCount;
    print(newArray,len);
    delete[] newArray;
    return 0;
}
