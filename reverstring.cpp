//
//  reverstring.cpp
//  Work
//
//  Created by Samchen on 1/11/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//


#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

void Reverse(string &s)
{
    static string copy_str = string(s.length(), '\0');
    static int index;
    
    if (index == s.length())
    {
        s = string(copy_str);
        return;
    }
    
    copy_str[index] = s[s.length()-index-1];
    index++;
    
    Reverse(s);
}

//int main()
//{
//    string s = "abcdefg";
//    Reverse(s);
//    
//    cout << s << endl;
//    
//    return 0;
//}