#include<iostream>
using namespace std;

void frequencyElement(int arr[], int size)
{
    int mini= INT8_MAX;
    int maxi = INT8_MIN;

    for(int i=0;i<size;i++)
    {
        maxi = max(arr[i],maxi);
        mini = min(arr[i],mini);
    }

    int* arr1;
    arr1= new int[maxi]();  //initializing the dynamic array to null or zeros

    for(int i=0;i<size;i++)
    {
        arr1[arr[i]]++;
    }

    for(int i=mini;i<maxi;i++)
    {
        if(arr1[i]>=1)
        {
            cout<<i<<" : "<<arr1[i]<<endl;
        }
    }
}


int main()
{
    int arr[]={23,54,654,23,45,6,1,32};
    int size = sizeof(arr)/sizeof(int);

    frequencyElement(arr,size);
}
