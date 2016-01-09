//
//  type_convert.cpp
//  Work
//
//  Created by Samchen on 1/9/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
// 强制类型转换
//class Company{
//public:
//    Company(string theName,string product);
//    virtual void printInfo();
//protected:
//    string name;
//    string product;
//};
//
//class TechCompany:public Company{
//public:
//    TechCompany(string theName,string product);
//    virtual void printInfo();
//};
//
//Company::Company(string theName,string product){
//    name =theName;
//    this->product =product;
//}
//
//void Company::printInfo(){
//    cout<<"The Company's Name is "<<name<<" , working for "<<product<<endl;
//}
//
//TechCompany::TechCompany(string theName,string product):Company(theName,product){
//    
//}
//void TechCompany::printInfo(){
//    cout<<name<<" produces a lot of "<<product<<endl;
//}
//int main(){
//   Company *company =new TechCompany("Apple","iPhone");
////   company->printInfo();
////     TechCompany *techCompany  =new TechCompany("Apple","iPhone");
//    TechCompany *techCompany  =(TechCompany *)company;
//    techCompany->printInfo();
//    delete company;
//    
//  
////    delete techCompany;
//    company=NULL;
//    techCompany =NULL;
//    
//}