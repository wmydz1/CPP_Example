//
//  operation_user.cpp
//  Work
//
//  Created by Samchen on 1/11/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class Data{
public:
    Data();
    Data(int newa,int newb);

    Data operator+(Data &data);
    void printInfo();
private:
    int a,b;
};
Data::Data(){
    a=0;
    b=0;
}
Data::Data(int newa,int newb){
    a=newa;
    b=newb;
}

Data Data::operator+(Data &data){
    Data d ;
    
    d.a =a+data.a;
    d.b =b+data.b;
    
    return d;
}
void Data::printInfo(){
    cout<<"a is "<<a<<",b is "<<b<<endl;
}


int main(){
    Data d1(100,200);
    Data d2(300,400);
    Data d3 ;
    d3=d1+d2;
    d3.printInfo();
    
    return 0;
}