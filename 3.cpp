//
//  3.cpp
//  Work
//
//  Created by Samchen on 1/8/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Student{
    
public:
 
    Student(string name,int age,int num, int firstyear,int secyear, int thirdyear, int fourthyear);
    int avg();
    
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getNum(){
        return num;
    }
        
private:
    
    
    string name;
    int age;
    int num;
    int firstyear;
    int secyear;
    int thirdyear;
    int fourthyear;
   
};

Student::Student(string newname,int newage,int newnum, int newfirstyear,int newsecyear, int newthirdyear, int newfourthyear){
    name=newname;
    age =newage;
    num=newnum;
    
    firstyear=newfirstyear;
    secyear=newsecyear;
    thirdyear=newthirdyear;
    fourthyear=newfourthyear;
}
int Student::avg(){
    int avg =(firstyear+secyear+thirdyear+fourthyear)/4;
    return avg;
    
}

 //测试数据 Bob 22 31020 70 60 90 60
//int main(){
//    
//    string name;
//    int age;
//    int num;
//    int firstyear;
//    int secyear;
//    int thirdyear;
//    int fourthyear;
//    
//    cin>>name>>age>>num>>firstyear>>secyear>>thirdyear>>fourthyear;
//    Student *s =new Student(name,age,num,firstyear,secyear,thirdyear,fourthyear);
//    int result =s->avg();
//    cout<<s->getName()<<","<<s->getAge()<<","<<s->getNum()<<","<<result<<endl;
//    
//    delete s;
//    return 0;
//}


