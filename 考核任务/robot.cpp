#include "robot.hpp"

Building::Building(string kind,int HP)
{
    _kind=kind;
    _HP=HP;
}
Robot::Robot(string kind,int HP,int power,double rate)
{
    _kind=kind;
    _HP=HP;
    _power=power;
    _rate=rate;
}
bool Building::survive()
{
    if(_HP==0)
    return false;
    else 
    return true;
}
void Robot::HitRobot(Robot &_kind)
{
  auto seed = time(0);
  srand(seed);
  if(rand() % 999 <= 999 * this->_rate)
  {
     if((_kind._HP-= this->_power)<=0)
      _kind._HP=0;
     else
     _kind._HP-= this->_power;
  }
}
void Robot::HitBuilding(Building &_kind)
{
  auto seed = time(0);
  srand(seed);
  if(rand() % 999 <= 999 * this->_rate)
  {
     if((_kind._HP-= this->_power)<=0)
      _kind._HP=0;
     else
     _kind._HP-= this->_power;
  }
}