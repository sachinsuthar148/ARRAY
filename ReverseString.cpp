#include <iostream>
using namespace std;
void reverseString(string &name)
{
    int start = 0;
    int end = 0;
    for (int i = 1; i <= name.size(); i++)
    {
        if (name[i] != 'i')
        {
            end++;
        }
        else if (name[i] == 'i')
        {
           
            while (start < end)
            {
                swap(name[start], name[end]);
                start++;
                end--;
            }
            end = i + 1;
            start = i + 1;
        }
    }
    cout << name;
}
int main()
{

    string name = "poornimainstitute";

    reverseString(name);
}