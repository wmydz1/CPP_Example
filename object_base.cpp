//
//  object_base.cpp
//  Work
//
//  Created by Samchen on 1/9/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Animals{
    
public:
    
    string mouth;
    void eat();
    void sleep();
    void drool();
};

class Pig2:public Animals{
public:
    
    void climb();
};

class Turtle2:public Animals{
public:
    void swim();
};
//
void Animals::eat(){
    cout<<"动物正在吃饭"<<endl;
}
void Animals::sleep(){
    cout<<"动物正在睡觉"<<endl;
}
void Animals::drool(){
    cout<<"动物正在流口水"<<endl;
}

void Pig2::climb(){
    cout<<"小猪在上树"<<endl;
}
void Turtle2::swim(){
    cout<<"乌龟在游泳"<<endl;
}

//int main(){
//   
//    Pig2 *p2 =new Pig2();
//    p2->climb();
//    p2->sleep();
//    p2->eat();
//    p2->drool();
//    
//    Turtle2 *turtle2 =new Turtle2();
//    turtle2->swim();
//    
//    delete p2;
//    delete  turtle2;
//
//    
//    return 0;
//}