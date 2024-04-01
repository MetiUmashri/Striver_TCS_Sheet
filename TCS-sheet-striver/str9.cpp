//QUESTION: Remove brackets from an algebraic expression


    //***********APROACH 1****************

#include<iostream>
#include<string>
#include<stack>
#include<cctype>
using namespace std;

int main()
{
    string str = "(a+b)+c";
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        if(isalpha(str[i]))
            s.push(str[i]);
    }
    while(!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    reverse(s.begin(),s.end());
    return 0;
}



        //***********APROACH 2****************

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

string answer(string input){
    string answer;
    for(int i=0;i<input.size();i++){
        if(input[i] != '(' && input[i] != ')')
            answer.push_back(input[i]);
    }
    return answer;
}

int main()
{
    string str1 = "((a+b)+b+(c+d))";
    
    cout << answer(str1);
    return 0;
}