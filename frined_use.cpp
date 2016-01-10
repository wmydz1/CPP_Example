//
//  frined_use.cpp
//  Work
//
//  Created by Samchen on 1/10/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
class Lovers{
public:
    Lovers(string theName);
    void kiss(Lovers *lover);
    void ask(Lovers *lover,string something);
protected:
    string name;
    
    friend class Others; // 交友不慎
};

class Boyfriend :public Lovers{
public:
    Boyfriend(string theName);
};
class Girlfriend:public Lovers{
public:
    Girlfriend(string theName);
};

class Others{
public:
    Others(string theName);
    void kiss(Lovers *lover);
protected:
    string name;
};

Lovers::Lovers(string theName){
    name =theName;
}

void Lovers::kiss(Lovers *lover){
    cout<<name<<"亲亲我们家的"<<lover->name<<endl;
}

void Lovers::ask(Lovers *lover, string something){
    cout<<"宝贝儿"<<lover->name<<"带我"<<something<<endl;
}

Boyfriend::Boyfriend(string theName):Lovers(theName){
    
}
Girlfriend::Girlfriend(string theName):Lovers(theName){
    
}
Others::Others(string theName){
    name=theName;
}
void Others::kiss(Lovers *lover){
    cout<<name<<"亲一下"<<lover->name<<endl;
}

int main(){
    Boyfriend boyfriend("A君");
    Girlfriend girlfriend("B妞");
    
    Others others("路人甲");
    
    girlfriend.kiss(&boyfriend);
    girlfriend.ask(&boyfriend, "去逛街");
    cout<<"路人甲登场了"<<endl;
    others.kiss(&girlfriend);
}