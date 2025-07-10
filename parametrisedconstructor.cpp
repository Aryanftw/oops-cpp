#include<iostream>
using namespace std;

class Hero{
   int health;
   char level;

   public:
   Hero(int health,char level){
      this->health = health;
      this->level = level;
   }


};

int main(){
  Hero h1(10,'A');
  cout<<"The health of the protagonist is :";

}