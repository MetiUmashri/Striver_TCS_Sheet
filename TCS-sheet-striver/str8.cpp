//QUESTION: reverse a string
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello World";

    //another approach
    string str2 = "hello world";
    int n = str2.length();
    cout << "Approach 1" << endl;
    for(int i=n-1;i>=0;i--)
        cout << str2[i];
    cout  << endl;

    reverse(str.begin(),str.end());
     cout << "Approach 2" << endl;
    cout << str << endl;
    return 0;
}



