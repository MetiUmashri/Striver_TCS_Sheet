//Question: Count number of vowels, consonants, spaces in String
#include<iostream>
using namespace std;

int main()
{
    string str = "The Name is Oj";
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' ||  str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u')
            cnt1++;
        else if(str[i]==' ')
            cnt2++;
        else 
            cnt3++;
    }
    cout << "Vowel count is " << " " << cnt1 << " " <<  "Consonant count is" << " " << cnt3 << " " << "Space count is" << " " << cnt2;
    return 0;
}