//
//  union_use.cpp
//  Work
//
//  Created by Samchen on 1/10/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

// 下一个覆盖上一个
union mima{
    unsigned long birthday;
    unsigned short ssn;
    char* pet;
};
//
//int main(){
//    mima mima_1;
//    mima_1.birthday =20010000;
//    cout<<mima_1.birthday<<endl;
//    
//    mima_1.pet ="BaoBei";
//    cout<<mima_1.pet<<endl;
//    cout<<mima_1.birthday<<endl;
//    
//    return 0;
//}
