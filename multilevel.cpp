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

class Male : public Dog {
  public :
  string color;
};


int main(){
  Male object1;
  cout<< object1.age << endl;
}