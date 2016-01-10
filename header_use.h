//
//  header_use.h
//  Work
//
//  Created by Samchen on 1/9/16.
//  Copyright (c) 2016 Samchen. All rights reserved.
//

#ifndef __Work__header_use__
#define __Work__header_use__

#include <stdio.h>
#include <iostream>
using namespace std;
class Rational{
public:
    // num = 分子
    //denom= 分母
    Rational(int num,int denom);
    Rational operator+(Rational rhs);
    Rational operator-(Rational rhs);
    Rational operator*(Rational rhs);
    Rational operator/(Rational rhs);
private:
    void normalize(); // 负责对分数的简化处理
    
    int numerator; // 分子
    int denominator;//分母
    friend ostream& operator <<(ostream &os,Rational f);
};


#endif /* defined(__Work__header_use__) */
