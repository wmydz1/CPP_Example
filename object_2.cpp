//
//  object_2.cpp
//  Work
//
//  Created by Samchen on 1/6/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

//class Pet{
//public:
//    Pet(string theName);
//    
//    virtual void eat();
//    virtual void sleep();
//    virtual void play() =0;
//protected:
//    string name;
//};
//
//class Cat :public Pet{
//public:
//    Cat(string theName);
//    
//    void climb();
//    void play();
//    
//};
//
//
//
//class Dog:public Pet{
//public:
//    Dog(string theName);
//    
//    void bark();
//    void play();
//};
//
//
//
//Pet::Pet(string theName){
//    name=theName;
//}
//
//void Pet::eat(){
//    cout<< name<<" 动物正在吃东西!\n";
//}
//void Pet::sleep(){
//    cout<<name<<" 动物正在睡大觉!\n";
//}
//
//Cat::Cat(string theName) : Pet(theName){
//    
//}
//void Cat::climb(){
//    cout<<name<<"正在爬树!\n";
//}
//void Cat::play(){
//    cout<<name<<"玩毛线球!\n";
//}
//
//Dog::Dog(string theName) :Pet(theName){
//    
//}
//
//void Dog::bark(){
//    cout<<name<<"旺旺 \n";
//}
//void Dog::play(){
//    cout<<name<<"正在接球\n";
//}
//
//int main(){
////    Dog dog("宝贝");
////    dog.play();
////    
////    Cat cat("小萌猫");
////    cat.climb();
////    
////    Pet *pet =&cat;
////    pet->sleep();
//    
//    Dog *dog = new Dog("我的宝贝");
//    dog->bark();
//    dog->sleep();
//    dog->play();
//    
//    cout<<"----------"<<endl;
//    
//    delete dog;
//    dog=NULL;
//    
//    
//    return 0;
//}
//
//
//
