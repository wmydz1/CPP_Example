//
//  object_3.cpp
//  Work
//
//  Created by Samchen on 1/6/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

class ClxBase{
public:
    ClxBase(){
    };
    
    virtual ~ClxBase(){};
    virtual void doSomething(){
        cout<<"Do something in class ClxBase!\n";
    }
};

class ClxDerived : public ClxBase{
public:
    ClxDerived(){};
    
    ~ClxDerived(){
        cout<< "Output from the destructor of class ClxDerived ! \n";
    }
    void doSomething(){
      cout<<"Do something in class ClxDerived! \n";
    };
    
    
};

//int main(){
//    ClxBase *pTest =new ClxDerived;
//    pTest->doSomething();
//    
//    
//    delete pTest;
//    return 0;
//}