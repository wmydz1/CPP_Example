//
//  5.cpp
//  Work
//
//  Created by Samchen on 1/8/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class CRectangle{
public:
   
    void Init(int w,int h);
    int area();
    int perimeter();
    
private:
    int width ,height;
};

void CRectangle::Init(int newWidth,int newHeight){
    width=newWidth;
    height=newHeight;
}
int CRectangle::area(){
    return  width*height;
}

int CRectangle::perimeter(){
    return  (width+height)*2;
}

//int main(){
//    CRectangle *c =new CRectangle();
//    c->Init(100, 200);
//     int area= c->area();
//    int perimeter=c->perimeter();
//    cout<<"area is "<<area<<",perimeter is "<<perimeter<<endl;
//    
//}