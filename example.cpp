//
//  example.cpp
//  Work
//
//  Created by Samchen on 1/6/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class BaseClass{
public:
    BaseClass();
    ~BaseClass();
    
    void doSomething();
};
class SubClass : public BaseClass{
public:
    SubClass();
    ~SubClass();
};
// 基类构造器
BaseClass::BaseClass(){
    cout<<"进入基类构造器"<<endl;
    cout<<"我在基类构造器里面干了某些事 "<<endl;
}
// 基类析构器
BaseClass::~BaseClass(){
    cout<<"进入基类析构器....."<<endl;
    cout<<"我在基类析构器里面也干了某些事"<<endl;
}

// 基类方法
void BaseClass::doSomething(){
    cout<<"基类 我干了一些好事"<<endl;
}

// 子类构造器
SubClass::SubClass(){
    cout<<"进入子类构造器"<<endl;
    cout<<"我在子类构造器还干了某些事"<<endl;
}

// 子类析构器
SubClass::~SubClass(){
    cout<<"进入子类析构器"<<endl;
    cout<<"我在子类析构器里面也干了某些事"<<endl;
}




//int main(){
//    
//    SubClass subclass;
//    subclass.doSomething();
//    cout<<"完事,收工"<<endl;
//    
//    
//    return 0;
//}
