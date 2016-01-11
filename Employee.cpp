//
//  Employee.cpp
//  Work
//
//  Created by Samchen on 1/11/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

class Date{
    
public:
    Date(int year, int  month, int day, int  hour,int  minute,int second);
    int  year, month, day, hour, minute, second;
};
class Employee{
    Employee(int num,string sex,Date birthday,int idCard);
public:
    int num;
    string sex;
    Date birthday;
    int  idCard;
    
    void saveObj(int theNum,string theSex,Date theBirthday,int theIdCard);
    void showObj();
};

void Employee::saveObj(int theNum,string theSex,Date theBirthday,int theIdCard){
    num =theNum;
    sex =theSex;
    birthday =theBirthday;
    idCard =theIdCard;
}
void Employee::showObj(){
   int date=  birthday.year;
    cout<<"num is "<<num<<" ,sex is "<<sex<<" ,birthday is "<< date<<" ,idCaid is"<<idCard<<endl;
}


//
//int main(){
//    
//    return 0;
//}