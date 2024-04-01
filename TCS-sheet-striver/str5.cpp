//Question: Remove spaces from a string

#include<iostream>
#include<string>//make sure to include this header function as resize() is usesd in the code
using namespace std;

int main()
{
    string str = "The above code";
    int j=0;
    //this variable 'j' is used to keep in track of the position where non-space characters should be moved to within the string
    // It helps in removing spaces from the string in-place without using any additional space
    for(int t=0;t<str.length();t++)
    {
        if(str[t] != ' ')
            str[j++] = str[t];
    }
    str.resize(j);//terminate the string after the last non-space character
    cout << str;
    return 0;
}