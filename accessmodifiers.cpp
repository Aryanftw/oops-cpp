#include<iostream>
using namespace std;

class Hero{
  public:
  int health;
  char level;
};

int main(){
    Hero h1;
    h1.health = 50;
    h1.level = 'A';
    return 0;
}