#include <iostream>

using namespace std;

class Vehicle {
public:
    int passangers;
    int fuelcap;
    int mpg;

    int range();
    Vehicle(int passangers, int fuelcamp, int mpg);
    ~Vehicle();
};

int Vehicle::range() {
    return mpg * fuelcap;
}

Vehicle::Vehicle(int pass, int fc, int m) {
    passangers = pass;
    fuelcap = fc;
    mpg = m;
}

Vehicle::~Vehicle() {
    printf("Destruct pas ... %i \n", passangers);
}

int main()
{
    Vehicle minivan(7, 16, 21);
    Vehicle van(5, 10, 15);
    Vehicle v(8, 10, 15);
    int range;

    cout << "Veh can run " << minivan.passangers << " passengers with distance " << minivan.range() << endl;

    return 0;
}

