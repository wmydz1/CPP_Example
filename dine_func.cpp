//
//  dine_func.cpp
//  Work
//
//  Created by Samchen on 1/9/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <iostream>
using namespace std;

void works(int a,int b);
void works(string boy,string girl);

//int main(){
//    works(100, 200);
//    works("tom","alise");
//    
//    return 0;
//}

void works(int a,int b){
    cout<<"a + b =" <<a+b<<endl;
}
void works(string boy,string girl){
    cout<<boy<<" love "<<girl<<endl;
}