#include<iostream>
using namespace std;
class Hero{
  int health;
  char level;
  
  public:
  int gethealth(){
    return health;
  }
  
  char getlevel(){
    return level;
  }

  void sethealth(int h){
    health = h;
  }

  void setlevel(char ch){
    level = ch;
  }
  
};

int main(){
  Hero h1;
  h1.sethealth(70);
  h1.setlevel('A');
  cout<<"the health of hero is "<<h1.gethealth()<<" and their level is "<<h1.getlevel()<<endl;
  return 0;

}
  

