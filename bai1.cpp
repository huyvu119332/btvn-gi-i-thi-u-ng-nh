// bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;


int main()
{
    //them setmode
    _setmode(_fileno(stdout), _O_U16TEXT);

    wcout << L"Xin chào mọi người mình tên là Huy\n";
    return 0;
}

