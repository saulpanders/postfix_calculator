//@saulpanders
//written: 9/12/16
//postfixCalculator.h

#ifndef POSTFIXCALCULATOR_H
#define POSTFIXCALCULATOR_H

#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

class postfixCalculator{
 public:
  postfixCalculator();
  ~postfixCalculator();
  bool isEmpty();
  void add();
  void multiply();
  void divide();
  void negate();
  void subtract();
  void push(int x);
  void pop();
  int top();
  

 private:

  stack<int> theStack;
  

};

#endif
