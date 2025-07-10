#include<iostream>
using namespace std;

class Hero{
  public:
  int health;
  char b;
};

int main(){
  Hero *a = new Hero();
  a->health = 50;
  a->b = 'A';
  cout<<a->health<<" "<<a->b<<endl;
  return 0;
}