//Question: Remove all vowels from the string

#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string removeVowels(string str) {
    string result = "";
    for (char c : str) {
        if (!isVowel(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = removeVowels(input);
    cout << "String after removing vowels: " << result << endl;

    return 0;
}
