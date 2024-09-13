#include<iostream>
using namespace std;

void secondLargest(int arr[], int size)
{
    int first = __FLT_MIN__;
    int second= __FLT_MIN__;

    for(int i=0;i<size;i++)
    {
        if(arr[i]>first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i]<first)
        {
            second = arr[i];
        }
    }
    cout<<"Second Largest element is "<<second<<endl;

}

int main()
{
    int arr[5]={3,5,23,65,70};
    secondLargest(arr,5);
}