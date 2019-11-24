//@saulpanders
//written: 9/12/16
//testPostfixCalc.cpp

#include "postfixCalculator.h"
#include "postfixCalculator.cpp"
#include <stack>
#include <iostream>
using namespace std;

int main(){
  postfixCalculator p;
   p.push(20);
   p.push(10);
   p.subtract();
   p.push(-3);
   p.push(10);  
   p.subtract();
   p.subtract();
   p.push(2);
   p.subtract();
   
   cout<< p.top()<< " is the answer"<<endl;

  return 0;
}
