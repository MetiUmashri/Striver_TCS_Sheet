//Question: Find the ASCII value of a character

#include<iostream>
using namespace std;

int main()
{
    char a = 'a';
    cout << int(a) << endl;
    return 0;
}

/*
    char a = 'a';
    int asciiValue = static_cast<int>(a);

   -> Converting the character variable a to an integer using static_cast<int>(a). 
   -> This is a safe and well-defined conversion because every character in C++ has an associated ASCII value, and converting it to an integer gives you that value.
    -> static_cast performs compile-time type checking to ensure that the conversion is valid and safe. It's preferred over C-style casts ((type) expression) because it provides more type safety and is easier to search for in your codebase.
    -> It's important to note that static_cast is not always appropriate. 
*/