#include <iostream>

using namespace std;

class drink {
public:
    const int cost;
    drink() { };
    virtual ~drink() { };
    virtual int sq2come = 0;
    virtual int for_health = 0;
};

class alcohol_drink : public drink {
public:
    static int sq2come;
    alcohol_drink(int cost, int sq2come) {
        this->cost = cost;
        this->sq2come = sq2come;
    }
};

class non_alcohol_drink : public drink {
public:
    const int for_health;
    non_alcohol_drink(int cost, int for_health) {
        this->cost = cost;
        this->for_health = for_health;
    }
};

class customer {
public:
    const int health;
    customer(int health) {
        this->health = health;
    }
    void order(drink d) {

    }
};

class squirrell {
public:
    void come(customer c) {
        if (c.health <= sq2come) {
            cout << "Squirrell comes!" << endl;
            break;
        }
    }
};

int main()
{

    return 0;
}
