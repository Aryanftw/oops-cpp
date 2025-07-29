#include<iostream>
using namespace std;

class Animal {
  public :
  int age;
  int weight;
};

class Dog : public Animal {
  public :
  int height;
  string breed;
};