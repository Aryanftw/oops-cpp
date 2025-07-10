#include<iostream>
using namespace std;

class Hero{
  //properties
  int health;
  int level;
};

int main (){

   //creation of object
   Hero h1;
   cout<<"size : "<<sizeof(h1)<<endl;
   return 0;
}