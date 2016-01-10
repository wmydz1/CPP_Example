//
//  object_1.cpp
//  Work
//
//  Created by Samchen on 1/6/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class animal{
public:
    void sleep(){
        cout<<"animal sleep"<<endl;
    }
    virtual  void breathe(){
        cout<<"animal breathe"<<endl;
    }
};

class fish:public animal{
public:
    void breathe(){
        cout<<"fish bubble"<<endl;
    }
};
//int main(){
////    fish fh;
////    animal *pAn =&fh;
////    pAn->breathe();
//    
//    fish *f =new fish();
//    f->breathe();
//    delete f;
//    f=NULL;
//    return 0;
//}