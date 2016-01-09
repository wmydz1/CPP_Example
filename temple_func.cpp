//
//  temple_func.cpp
//  Work
//
//  Created by Samchen on 1/9/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
template <class T>
void change(T &a,T &b){
    T temp =a;
    a=b;
    b=temp;
}
//int main(){
//    string a ="dog";
//    string b= "cat";
//    
//    change(a, b);
//    cout<<"a is "<<a<<" ,b is "<<b<<endl;
//    return 0;
//}
