#include<iostream>
using namespace std;
int smallest(int arr[], int size)
{   
    int small = INT16_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
        }
    }
    return small;
}
int largest(int arr[], int size)
{   
    int largest = 0;
    for(int i=0;i<size;i++)
    {
        if(largest<arr[i])
        {
            largest = arr[i];
        }
    }
    return largest;
}

int secondLargest(int arr[], int size)
{
    int first = 0;
    int second = 0;
    for(int i=0;i<size;i++)
    {   
        if(first<arr[i])
        {
            second = first;
            first = arr[i];
        }

        else if(arr[i]<first && arr[i]>second)
        {
            second = arr[i];
        }
        // cout<<"FIrst"<<first<<endl;
        // cout<<"Second"<<second<<endl;
    }
    return second;
}
int secondSmallest(int arr[], int size)
{
    int first = INT32_MAX;
    int second = INT32_MAX;
    for(int i=0;i<size;i++)
    {   
        if(arr[i]<first)
        {
            first = arr[i];
            // second = first;?
        }

        else if(arr[i]>first && arr[i]<second)
        {
            second = arr[i];
        }
        // cout<<endl;
        // cout<<"FIrst : "<<first<<endl;
        // cout<<"Second"<<second<<endl;
    }
    return second;
}

/*
int secondLargest(int n, int a )
{
    int first = INT_MIN8;
    int second = INT_MIN8;
    for(int i=0;i<n; i++)
    {
        if(first < a[i])
        {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] < first) {
            second = a[i];
        }
    }
    return second;
}

 int secondsmallest(int n, vector<int> a )
{
    int first = a[0];
    int second = INT_MIN;
    for(int i=0;i<n; i++)
    {
        if(a[i] < first )
        {
            second = first;
            first = a[i];
        } else if (a[i] != second && a[i] < second) {
            second = a[i];
        }
    }
    return second;
}



vector<int> getSecondOrderElements(int n, vector<int> a) {
   vector<int> ans;
   ans.push_back(secondLargest(n,a));
   ans.push_back(secondsmallest(n,a));

   return ans;
} */





int main()
{
    int arr[]={1,652,999,23,3,43};
    
    int size = sizeof(arr)/sizeof(int);
    
    cout<<"Smallest:"<<smallest(arr,size)<<endl;
    cout<<"Largest:"<<largest(arr,size)<<endl;
    cout<<"Second Largest:"<<secondLargest(arr,size)<<endl;
    cout<<"Second Smallest:"<<secondSmallest(arr,size)<<endl;
 
}