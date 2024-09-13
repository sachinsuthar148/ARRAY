#include<iostream>
using namespace std;

void leftShift(int arr[], int n)
{
    int temp= arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]= arr[i];
    }
    arr[n-1]=temp;
}

void leftDShift(int arr[], int n, int d)
{
     d = d%n;
    int rest = n-d;
    int temp[rest];
    for(int i=0;i<rest;i++)
    {
        temp[i]= arr[i];    //putting element to temp array
    } 
    for(int i=d;i<n;i++)
    {
        arr[i-d] = arr[i];
    }

    for(int i= n-d; i<n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }

}

void leftShift3(int arr[], int n, int d)
{
    for(int i=0;i<n;i++)
    {
        // arr[(i+d)%n] = arr[i];
        arr[i]=arr[i+d%n];
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};

    // leftShift(arr,5);
    int arr2[7]={1,2,3,4,5,6,7};
    // leftDShift(arr2,7,3);
    leftShift3(arr2,7,4);
    
    for(int i=0;i<7;i++)
    {
        cout<<arr2[i]<<" ";
    }
    
}