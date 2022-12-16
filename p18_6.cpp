//18.6
#include <iostream> 
#include <string> 

using namespace std; 

class RationalNum 
{ 
private: 
  int numerator; 
  int denominator; 
public: 
  RationalNum(int numerator, int denominator) 
  { 
    this->numerator = numerator; 
    this->denominator = denominator; 
  } 

  
  int getNumerator() 
  { 
    return numerator; 
  } 

  
  int getDenominator() 
  { 
    return denominator; 
  }
  
  void setNumerator(int num) 
  { 
    this->numerator = num; 
  } 

  // method to set denominator 
  void setDenominator(int den) 
  { 
    this->denominator = den; 
  } 

  // method to add two numbers 
  RationalNum add(int num1, int num2) 
  { 
    RationalNum newNum(this->numerator + (num1 * (this->denominator / num2)), this->denominator); 
    return newNum; 
  } 

  // method to subtract two numbers 
  RationalNum subtract(int num1, int num2) 
  { 
    RationalNum newNum(this->numerator - (num1 * (this->denominator / num2)), this->denominator); 
    return newNum; 
  } 

  // method to multiply two numbers 
  RationalNum multiply(int num1, int num2) 
  { 
    RationalNum newNum(this->numerator * (num1), this->denominator * (num2)); 
    return newNum; 
  } 

  // method to divide two numbers 
  RationalNum divide(int num1, int num2) 
  { 
    RationalNum newNum(this->numerator * (num2), this->denominator * (num1)); 
    return newNum; 
  } 

  // method to compare two numbers 
  int compare(int num1, int num2) 
  { 
    int ratio1 = this->numerator * (this->denominator / num2); 
    int ratio2 = num1 * (this->denominator / num2); 
    if (ratio1 > ratio2) return 0; 
    else if (ratio1 < ratio2) return 1; 
    else return 2; 
  } 

  
  int getRemainder(int num1, int num2) 
  { 
    int num = this->numerator * (this->denominator / num2); 
    return (int(num / num1) % num1); 
  } 
}; 


int main() 
{ 
  RationalNum num1(5, 6); 
  RationalNum num2(3, 4); 
    RationalNum num3 = num1.add(num2.getNumerator(), num2.getDenominator());
  cout << "numerator = " << num3.getNumerator() << " denominator = " << num3.getDenominator() << endl; 
  
  
  num3 = num1.subtract(num2.getNumerator(), num2.getDenominator());
  cout << "numerator = " << num3.getNumerator() << " denominator = " << num3.getDenominator() << endl; 
  
  
  num3 = num1.multiply(num2.getNumerator(), num2.getDenominator());
  cout << "numerator = " << num3.getNumerator() << " denominator = " << num3.getDenominator() << endl; 
  

  ///*
  num3 = num1.divide(num2.getNumerator(), num2.getDenominator());
  cout << "numerator = " << num3.getNumerator() << " denominator = " << num3.getDenominator() << endl; // prints RationalNum { numerator: 10, denominator: 18 } 
  
  
  cout << num1.compare(num2.getNumerator(), num2.getDenominator()); 
  cout << num1.getRemainder(num2.getNumerator(), num2.getDenominator()); 

  num1.setNumerator(12); 
  num3 = num1.add(num2.getNumerator(), num2.getDenominator());
    cout << "numerator = " << num3.getNumerator() << " denominator = " << num3.getDenominator() << endl; // prints '12/6+3/4' 
  //*/
  return 0; 
}