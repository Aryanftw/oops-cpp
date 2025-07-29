#include<iostream>
using namespace std;

class Animal {
  public :
  int age;
  int weight;

  void bark(){
    cout << "Barking" << endl;
  }
};

class Human {
  public :
  int height;
  string name;

  void speak(){
    cout << "Speaking" << endl;
  }
};


class Hybrid : public Animal , public Human{
  public:
   Hybrid(){
    cout << "HYBRID INHERITANCE" << endl;
   }
};


int main(){
  Hybrid obj1;
  obj1.bark();
  obj1.speak();
  return 0;
}