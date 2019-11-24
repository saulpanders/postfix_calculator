//@saulpanders
//written: 9/12/16
//postfixCalculator.cpp

#include "postfixCalculator.h"
#include <stack>
#include <cstdlib>
using namespace std;

postfixCalculator:: postfixCalculator(){// didn't know if a constructor was necessary
  
}

postfixCalculator:: ~postfixCalculator(){//  same for the destructor
}

bool postfixCalculator:: isEmpty(){
  return theStack.empty();
}
void postfixCalculator::add(){
  int sum= top();
  pop();
  sum= sum+top();
  pop();
  push(sum);
  
}

void postfixCalculator:: multiply(){
  int product=top();
  pop();
  product=product*top();
  pop();
  push(product);
}

void postfixCalculator:: divide(){
  int quotient= top();
  pop();
  quotient= top()/quotient;
  pop();
  push(quotient);
}

void postfixCalculator:: negate(){
  int neg= top();
  pop();
  neg= -1*(neg);
  push(neg);
}

void postfixCalculator:: subtract(){
  int difference= top();
  pop();
  difference= top()-difference;
  pop();
  push(difference);
  
}

void postfixCalculator:: push(int x){
  theStack.push(x);
}

void postfixCalculator:: pop(){
  if (isEmpty()==true){
    cout<<"error, the stack is empty. cannot call pop() on empty stack"<<endl;
    exit(-1);
  }
  else  theStack.pop();
}

int postfixCalculator:: top(){
  if(isEmpty()==true){
    cout<< "error, the stack is empty. cannot call top() on empty stack"<<endl;
    exit(-1);
  }
  return theStack.top();
}



