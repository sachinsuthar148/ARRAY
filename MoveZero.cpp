#include <iostream>
#include <vector>
#include <array>
using namespace std;

void moveZero(int arr[], int n)
{
    // Brute Force approch
    vector<int> temp;
    // Finding non zero elements
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            temp.push_back(arr[i]); // Pushing non zero element to array
        }
    }
    // Adding Non zero element to main array
    for (int i = 0; i< temp.size(); i++)
    {
        arr[i] = temp[i];
    }

    int nonzero = temp.size();

    // Adding zeros  to end of the array
    for (int i = nonzero; i < n; i++)
    {
        arr[i] = 0;
    }
}

void moveZero2(int arr[], int n)
{
    int j= -1;
    
    //Finding first zero element
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0)
        {
            j=i;
            break;
        }
    }

    //Moving the non zero element

    for(int i=j+1; i<n;i++)
    {
        if(arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{

    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int size = sizeof(arr) / sizeof(int);

    moveZero2(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}