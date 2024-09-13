#include<iostream>
using namespace std;

void findIndexASCII(char ch)
{
    //Ch-'A'
    if( ch>='A' && ch<='Z'){
        cout<<"Position of the "<<ch<<" is : "<<ch-'A'<<endl;        
        cout<<"ASCII value of the "<<ch<<" is : "<<int(ch)<<endl;   
    }     
    //Ch-'a'
    else if( ch>='a' && ch<='z' ){
        cout<<"Position of the "<<ch<<" is : "<<ch-'a'<<endl;        
        cout<<"ASCII value of the "<<ch<<" is : "<<int(ch)<<endl; 
    }       
    else
    {
        cout<<"ASCII value of the "<<ch<<" is : "<<int(ch)<<endl; 
    }
}


void toUpperCase(char ch[],int size)
{
     for(int i=0;i<size;i++)
     {
        if(ch[i]>'A' && ch[i]<'Z')
        {
            ch[i]=ch[i];
        }
        else if(ch[i]=='\0')
        {
            continue;
        }
        else
        {
            ch[i]= ch[i]-'a'+'A';
        }
        
     }
     cout<<ch<<endl;
}

void reverseCharArray(char ch[], int size)
{
    int start =0;
    int end = size-2; //-1 for index and -1 for '\0' NULL character 

    while(start<end)
    {
        swap(ch[start++], ch[end--]);
    }
    ch[size]='\0';
    cout<<ch<<endl;
}

bool palindromeStringArray(char ch[], int size)
{
    int start = 0;
    int end = size - 2; // Subtract 1 for the last valid index, '\0' should be excluded

    while (start < end)
    {
        if (ch[start] != ch[end]) // Remove the semicolon here
        {
            cout<<"Not Palindrome"<<endl;
            return false;  // Return false if characters don't match
        }
        start++;
        end--;
    }
    cout<<"Palindrome"<<endl;
    return true; // If the loop completes, it's a palindrome
}


int main()
{
    // findIndexASCII('A');
    // findIndexASCII('z');

    //How to take a line as input    (cin.getline(variablename, length of string, delimeter))
    // char str[1000];
    // cout<<"Enter the string with spacing"<<endl;
    // cin.getline(str,40);
    // cout<<str;

    char ch[]="ababv";
    
    int size = sizeof(ch)/sizeof(char);
    // toUpperCase(ch,size); // to convert array into upper case
    reverseCharArray(ch,size); // to reverse array 
    cout<< palindromeStringArray(ch,size); //for check pallendrome
 
}