#include<bits/stdc++.h>
using namespace std;

//Data hiding 

class Student {

  private:
    string name;
    int age;
    int marks;
 
  public:
    int getAge(){
      return this->age;
    }

    Student(){
    cout << "Object created";
  }
};

int main(){
  Student first;
  return 0;
}