//
//  2.cpp
//  Work
//
//  Created by Samchen on 1/8/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//


#include<iostream>
#include<math.h>
#include<string.h>
#include<algorithm>

using namespace std;
int f[40];

void func(){
    memset(f,0,sizeof(f));
    f[0]=0;
    f[1]=f[2]=1;
    for(int i=3;i<36;i++)
        f[i]=f[i-1]+f[i-2];
}
//int main(){
//    int n;
//    func();
//    while(cin>>n){
//        cout<<f[n]<<endl;
//    }
//    return 0;	
//} 


