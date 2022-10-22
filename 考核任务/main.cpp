#include "robot.hpp"
#include "robot.cpp"
//这里四个参数分别为 机器人类型 生命值 攻击力 命中率
Robot B_guard("Guard", 600, 5, 0.7);
Robot R_guard("Guard", 600, 5, 0.7);
Robot B_infantry("Infantry", 200, 5, 0.8);
Robot R_infantry("Infantry", 200, 5, 0.8);
Robot B_hero("Hero", 250, 100, 0.5);
Robot R_hero("Hero", 250, 100, 0.5);
//参数为 建筑物类型 生命值
Building B_outpost("Outpost", 2000);
Building R_outpost("Outpost", 2000);
Building B_base("Base", 5000);
Building R_base("Base", 5000);
int main()
{
    //生成一个种子用于随机数的生成
    auto seed = time(0);
    srand(seed);
    int i = 0;
    while (1)
    {
        switch(rand()%30)
        {
            case 0:B_guard.HitRobot(R_guard);break;
            case 1:B_guard.HitRobot(R_infantry);break;
            case 2:B_guard.HitRobot(R_hero);break;
            case 3:B_guard.HitBuilding(R_outpost);break;
            case 4:B_guard.HitBuilding(R_outpost);break;
            case 5:R_guard.HitRobot(B_guard);break;
            case 6:R_guard.HitRobot(B_infantry);break;
            case 7:R_guard.HitRobot(B_hero);break;
            case 8:R_guard.HitBuilding(B_outpost);break;
            case 9:R_guard.HitBuilding(B_base);break;
            case 10:B_infantry.HitRobot(R_guard);break;
            case 11:B_infantry.HitRobot(R_infantry);break;
            case 12:B_infantry.HitRobot(R_hero);break;
            case 13:B_infantry.HitBuilding(R_outpost);break;
            case 14:B_infantry.HitBuilding(R_outpost);break;
            case 15:R_infantry.HitRobot(B_guard);break;
            case 16:R_infantry.HitRobot(B_infantry);break;
            case 17:R_infantry.HitRobot(B_hero);break;
            case 18:R_infantry.HitBuilding(B_outpost);break;
            case 19:R_infantry.HitBuilding(B_base);break;
            case 20:B_hero.HitRobot(R_guard);break;
            case 21:B_hero.HitRobot(R_infantry);break;
            case 22:B_hero.HitRobot(R_hero);break;
            case 23:B_hero.HitBuilding(R_outpost);break;
            case 24:B_hero.HitBuilding(R_outpost);break;
            case 25:R_hero.HitRobot(B_guard);break;
            case 26:R_hero.HitRobot(B_infantry);break;
            case 27:R_hero.HitRobot(B_hero);break;
            case 28:R_hero.HitBuilding(B_outpost);break;
            case 29:R_hero.HitBuilding(B_base);break;
        }
        i++;
        //胜利判断条件
        if (!(B_base.survive()))
        {
            cout << "蓝方基地摧毁，红方获胜" << endl;
            break;
        }
        else if (!(R_base.survive()))
        {
        cout << "红方基地摧毁，蓝方获胜" << endl;
        break;
        }
    
        if (i % 100 == 0)
        {
        cout <<"当前循环次数为"<<i<<endl;
        cout <<"B_Outpost HP:"<< B_outpost._HP<<endl;
        cout <<"R_Outpost HP:"<< R_outpost._HP<<endl;
        cout <<"R_Guard HP:"<< R_guard._HP <<endl;
        cout <<"B_Guard HP:"<<R_guard._HP<<endl;
        cout <<"R_Base HP:"<<R_base._HP<<endl;
        cout <<"B_Base HP:"<<B_base._HP<<endl;
        cout << endl;
        }
    }
}