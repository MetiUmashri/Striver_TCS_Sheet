//simple approach with the basic test cases
/*#include<iostream>
using namespace std;

bool chk(string str, int i)
{
    if (i >str.size()/2)
        return true;
    return (str[i] == str[str.size() - i - 1] && chk(str,i+1));
}

int main()
{
    string str = "abba";
    if (chk(str, 0))
        cout << str << " " <<  "Yes is a palindrome";
    else
    cout << str << " " <<  "No is not a palindrome";
    return 0;
}*/


//approach for the test case where there is a mixture of capital letters and spaces
#include <iostream>
using namespace std;

bool isSpace(char c) {
    return c == ' ';
}

char toLower(char c) {
    if (c >= 'A' && c <= 'Z')
        return c + ('a' - 'A');
    return c;
}

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        // Skip over spaces from the left
        while (left < right && isSpace(str[left]))
            left++;
        // Skip over spaces from the right
        while (left < right && isSpace(str[right]))
            right--;
        // Check if characters at left and right positions are equal (ignoring case)
        if (toLower(str[left]) != toLower(str[right]))
            return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string str = "A man a plan a canal Pana";
    cout << (isPalindrome(str) ? "Palindrome" : "Not a Palindrome") << endl;
    return 0;
}
