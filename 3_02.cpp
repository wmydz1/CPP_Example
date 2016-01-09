//
//  3_02.cpp
//  Work
//
//  Created by Samchen on 1/8/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
class Student{
public:
    Student(string name,int age,string num,double *av);
    double averageScore();
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    string getNum(){
        return num;
    }
    double* getAverageScore()
    {
        return averagesocre;
    }
private:
    string name;
    int age;
    string num;
    double averagesocre[4];
};
Student::Student(string newname,int newage,string newnum,double *newav){
    name=newname;
    age=newage;
    num=newnum;
    for(int i=0;i<4;i++)
        averagesocre[i]=newav[i];
}
double Student::averageScore(){
    double sum=0;
    for(int i=0;i<4;i++)
        sum+=averagesocre[i];
    return sum/4.0;
}
// Bob	22 31020 70	60 90 60
//int main(){
//    string name;
//    int age;
//    string num;
//    double av[4];
//    while(cin>>name>>age>>num){
//        for(int i=0;i<4;i++)
//            cin>>av[i];
//        Student *stu=new Student(name,age,num,av);
//        cout<<stu->getName()<<","<<stu->getAge()<<","<<stu->getNum()<<","<<stu->averageScore()<<endl;
//        delete stu;
//        
//    }
//    cout<<"hello"<<endl;
//    return 0;
//}
