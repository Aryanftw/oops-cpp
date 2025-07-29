//inherits the properties of another class(sub class inherits the properties of parent class)

#include<bits/stdc++.h>
using namespace std;

class Human{
  public:
    int age;
    int height;
    int weight;
};

//private data members of any class can not be inherited

class Male : public Human{
  //public is the mode of inheritance 
   public:
    string color;

};

int main(){
  Male object1;
  cout<< object1.height << endl;
}
 

//Types : 
// |->Single  
// |->Multi level
// |->Multiple
// |->Hybrid
// |->Heirarchical