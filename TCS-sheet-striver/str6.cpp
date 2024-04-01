// Question: Remove characters from a string except alphabets

/*#include <iostream>
#include <string>
#include <cctype> // For isalpha()
using namespace std;

void removeNonAlphabets(string& str) {
    int count = 0; // Initialize a counter for valid characters
    for (char c : str) {
        if (isalpha(c)) {
            str[count++] = c; // Overwrite non-alphabetic characters with alphabetic ones
        }
    }
    str.resize(count); // Resize the string to the length of valid characters
}

int main() {
    string str = "Hello123, W#orl(d!";

    removeNonAlphabets(str);

    cout << "String after removing non-alphabetic characters: " << str << endl;

    return 0;
}*/



//Another approach
 #include<iostream>
using namespace std;

    int main()
    {
        string str = "THe# al(l b@est";
        //getline(cin,str);

        string res = " ";
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z' || str[i]==' ')
                res += str[i];
            //if(str[i]>='a' && str[i]<='z')
                //res += str[i];
        }
        cout << res;
        return 0;
    }
