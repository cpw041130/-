#include <iostream>
#include<ctime>
using namespace std;
class Building
{public:
    string _kind;
    int _HP;
    Building(string kind,int HP);
    bool survive();
};
class Robot 
{public:
    string _kind;
    int _HP;
    int _power;
    double _rate;
    Robot(string kind,int HP,int power,double rate);
    void HitBuilding(Building &_kind);
    void HitRobot(Robot &_kind);
};
