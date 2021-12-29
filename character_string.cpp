#include <iostream>
using namespace std;

// 문제1 ) 문자열 길이를 출력하는 함수
int StrLen(const char* str)
{
    int count = 0;
    while (str[count] != '\0')
    {
        count++;
    }
    return count;
}

// 문제2) 문자열 복사 함수
char* StrCpy(char* destination, char* source)
{
    int count = 0;
    while (source[count] != '\0')
    {
        destination[count] = source[count];
        count++;
    }
    destination[count] = '\0';
    return destination;
}

#pragma warning(disable: 4996)

// 문제3 ) 문자열을 덧붙이는 함수
char* StrCat(char* destination, char* source)
{
    int len = StrLen(destination);
    int i = 0;
    while (source[i] != '\0')
    {
        destination[len + i] = source[i];
        i++;
    }
    destination[len + i] = '\0';
    return destination;
}


// 문제4 ) 문자열을 비교하는 함수
int StrCmp(char* a, char* b)
{
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0')
    {
        if (a[i] > b[i])
            return 1;
        else if (a[i] < b[i])
            return -1;
        i++;
    }
    return 0;

}

// 문제 5 ) 문자열 뒤집기
void RevStr(char* str)
{
    int len = StrLen(str);
    for (int i = 0; i < len / 2; i++)
    {
        int temp = str[i];
        str[i] = str[len -1 - i];
        str[len -1 - i] = temp;
    }
    str[len] = '\0';
    cout << str << endl;
}

int main()
{
    const int BUF_SIZE = 100;
    char a[BUF_SIZE] = "Hello";
    char b[BUF_SIZE] = "Hello";
   
    RevStr(a);

    return 0;
}
