#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "C:/lib/std_lib_facilities_4.h"
#include <vector>
#include "MyString.h"
using namespace std;


int main()
{
    char word[20] = "hello";
    char word2[3] = "hi";
    cout << strLen(word) << endl;
    strCpy(word, word2);
    cout << word << endl;
    char word3[40] = "greetings";
    strCat(word3, ", Programmer!");
    cout << word3 << endl;
    strReverse(word3);
    cout << word3 << endl;
    strToUpper(word3);
    cout << word3 << endl;
    cout << strCmp("aaA", "aaC") << endl;
    cout << strStr("I like Linux !!!", "Linux") << endl;
    char* newstr = strCatNew("Hi, ", "fellas");
    cout << newstr << endl;
    char* newstr2 = strReverseNew("Go reverse");
    cout << newstr2 << endl;
    char* alphabet = strToUpperNew(".!kukW,");
    cout << alphabet << endl;
    char* alphabet2 = strToLowerNew(alphabet);
    cout << alphabet2 << endl;

}
