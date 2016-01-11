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

void rs( const char *s )
{
    if ( *s )
    {
        rs( s+1 );
        printf("%c",*s );
    }
}
//int main()
//{
//    const char *s="hello";
//
//    rs(s);
//    printf("\n");
//    return 0;
//}