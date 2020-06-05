#include <iostream>

unsigned int strLen(const char* str)
{
    int counter = 0;
    for (counter; str[counter] != '\0'; counter++);
    return counter;
}

void strCpy(char* dest, const char* source)
{
    int i = 0;
    int source_len = strLen(source);
    for (i; i < source_len; i++)
    {
        dest[i] = source[i];
    }
    dest[i] = '\0';
}

void strCat(char* dest, const char* source)
{
    int dest_len = strLen(dest);
    int source_len = strLen(source);
    int q = dest_len;
    for (int i = 0; i < source_len; i++, q++)
    {
        dest[q] = source[i];
    }
    dest[q] = '\0';

}

void strReverse(char* str)
{
    int len = strLen(str);
    int q = len - 1;
    for (int i = 0; i < len / 2; i++, q--)
    {
        char temp = str[i];
        str[i] = str[q];
        str[q] = temp;
    }
}

void strToUpper(char* str)
{
    int len = strLen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
}

void strToLower(char* str)
{
    int len = strLen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}

int strStr(const char* str, const char* substr)
{
    int len = strLen(str);
    int j = 0;
    for (int i = 0; i < len; i++)
    {
        while (str[i] == substr[j])
        {
            if (substr[j + 1] == '\0')
                return i - j;
            i++, j++;
        }
        if (j != 0)
        {
            i -= j;
            i++;
            j = 0;
        }
    }
    return -1;
}

int strCmp(const char* str1, const char* str2)
{
    
    int str1_len = strLen(str1);
    int str2_len = strLen(str2);
    if (str1_len > str2_len)
        return 1;
    else if (str2_len > str1_len)
        return -1;
    for (int i = 0; i < str1_len; i++)
    {
        if (str1[i] > str2[i])
            return 1;
        else if (str2[i] > str1[i])
            return -1;
    }
    return 0;
}

char* strCatNew(const char* str1, const char* str2)
{
    int str1_len = strLen(str1);
    int str2_len = strLen(str2);
    char* new_str = new char[str1_len + str2_len];
    int i = 0;
    for (i; i < str1_len; i++)
    {
        new_str[i] = str1[i];
    }
    for (int j = 0; j < str2_len; j++, i++)
        new_str[i] = str2[j];
    new_str[i] = '\0';
    return new_str;
}

char* strReverseNew(const char* str)
{
    int len = strLen(str);
    char* reversed = new char[len];
    for (int i = 0, q = len - 1; q >= 0; q--, i++)
        reversed[i] = str[q];
    reversed[len] = '\0';
    return reversed;
}

char* strToUpperNew(const char* str)
{
    int len = strLen(str);
    char* newstr = new char[len];
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            newstr[i] = str[i] - 32;
        else
            newstr[i] = str[i];
    }
    newstr[len] = '\0';
    return newstr;
}

char* strToLowerNew(const char* str)
{
    int len = strLen(str);
    char* newstr = new char[len];
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            newstr[i] = str[i] + 32;
        else
            newstr[i] = str[i];
    }
    newstr[len] = '\0';
    return newstr;
}