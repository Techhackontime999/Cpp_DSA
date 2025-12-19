#include <iostream>
using namespace std;

class Level
{
public:
    int levelNo;
    int totalLevel;
    int totalStars;
    int playerDiedCount;
    void levelDetails()
    {
        cout << "Level: " << this->levelNo << " in " << this->totalLevel << " , Wining Gift: " << this->totalStars << " *" << " , Player Died Count: " << this->playerDiedCount << endl;
        return;
    }
};
class Weapon
{
public:
    string name;
    int firingPerSecond;
    float price;
    void weaponDetails()
    {
        cout << "Name: " << this->name << " , Power(fire/sec): " << this->firingPerSecond << " , Price: " << this->price << endl;
        return;
    }
};
class Dress
{
public:
    int dressCode;
    string name;
    string color;
    float price;
    void dressDetails()
    {
        cout << "Dress code: " << this->dressCode << " , Name: " << this->name << " , Color: " << this->color << " , Price: " << this->price << endl;
        return;
    }
};
class Button
{
public:
    bool ispressed;
    Button()
    {
        this->ispressed = false;
    }
};
class Remote
{
public:
    Button leftButton;
    Button rightButton;
    Button forwardButton;
    Button backwardButton;

    Remote()
    {
        this->leftButton.ispressed = false;
        this->rightButton.ispressed = false;
        this->forwardButton.ispressed = false;
        this->backwardButton.ispressed = false;
    }
    void moveLeft()
    {
        cout << "player is moving Left..." << endl;
        return;
    }
    void moveRight()
    {
        cout << "player is moving Right..." << endl;
        return;
    }
    void moveForward()
    {
        cout << "player is moving Forward..." << endl;
        return;
    }
    void moveBackward()
    {
        cout << "player is moving Backward..." << endl;
        return;
    }
    void decision()
    {
        if (this->leftButton.ispressed)
        {
            moveLeft();
            return;
        }
        else if (this->rightButton.ispressed)
        {
            moveRight();
            return;
        }
        else if (this->forwardButton.ispressed)
        {
            moveForward();
            return;
        }
        else if (this->backwardButton.ispressed)
        {
            moveBackward();
            return;
        }
        else
        {
            cout << "Currently not any button is pressed." << endl;
            return;
        }
    }
};

// class Result
// {

// };

// class Jump
// {
// };
// class Postion{

// };
// class Player : public Weapon, Dress, Level
// {
//     Weapon Weapon;

// public:
// };
// class Ground
// {
//     int width;
//     int breath;
//     // Level level;
//     Ground()
//     {
//     }
//     void groundDetails()
//     {

//     }
// };
// class Game
// {
//     Remote r;
//     int arr[7][7];
//     Game(){
//         r.leftButton.ispressed=true;
//     }

// };

int main()
{

    // Remote work test start
    // Remote r;
    // r.leftButton.ispressed=true;
    // r.decision();
    // r.rightButton.ispressed=true;
    // r.decision();
    //  r.forwardButton.ispressed=true;
    // r.decision();
    //   r.backwardButton.ispressed=true;
    // r.decision();
    // Remote work test end
    // level work test start
    // Level l;
    // l.levelNo=01;
    // l.playerDiedCount=30;
    // l.totalLevel=10;
    // l.totalStars=5;
    // l.levelDetails();
    // level work test end
    // weapons work test start
    // Weapon w;
    // w.name="AK47";
    // w.firingPerSecond=10;
    // w.price=300700;
    // w.weaponDetails();
    // weapons work test end
    // Dress work test start
    // Dress d;
    // d.name="Modi coat";
    // d.color="Black & White";
    // d.price=3500;
    // d.dressCode=01;
    // d.dressDetails();
    // Dress work test end
    Remote r;
    


 

    return 0;
}