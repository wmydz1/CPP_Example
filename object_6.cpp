//
//  object_6.cpp
//  Work
//
//  Created by Samchen on 1/6/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Animal{
public:
    string mouth;
    string name;
    
    Animal(string theName);
    void eat();
    void sleep();
    void drool();
};

class Pig : public Animal{
public:
   
     Pig(string theName);
     void climb();
};

class Turtle:public Animal{
public:
    void swim();
    Turtle(string theName);
};

// Animal
Animal::Animal(string theName){
    name =theName;
}
void Animal::eat(){
    cout<<"I'm eatting!"<<endl;
}
void Animal::sleep(){
    cout<<"I'm sleeping! Don't disturb me !"<<endl;
}
void Animal::drool(){
    cout<<"流口水! "<<endl;
}

// Pig

Pig::Pig(string theName) : Animal(theName){
    
}

void Pig::climb(){
    cout<<" 小猪在爬树 "<<endl;
}

// Turtle
Turtle::Turtle(string theName) : Animal(theName){
    
}

void Turtle::swim(){
    cout<<" 甲鱼在水里游动"<<endl;
}

//int main(){
//    Pig pig("小猪猪");
//    Turtle turtle("小甲鱼");
//    cout << pig.name<<endl;
//    cout<< turtle.name<<endl;
//    cout<<"--------------- \n";
//    pig.eat();
//    pig.climb();
//    cout<<"---------------- \n";
//    turtle.eat();
//    turtle.swim();
//}





