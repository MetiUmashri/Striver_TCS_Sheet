//QUESTION: find the length of the last word in a string
//LEETCODE 'EASY' QUESTION

#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    string str = "Hello World ";
    int n = str.length();
    int i=0;
    int cnt=0;
    while(i<n)
    {
        if(isalpha(str[i]))
        {
            cnt++;
        }
        else{
            if (i > 0 && isalpha(str[i - 1])) {
                cnt = 0; // Reset the count for a new word
            }
        }
        i++;
    }
    cout << cnt;
    return 0;
}
