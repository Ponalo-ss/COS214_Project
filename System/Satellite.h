#ifndef Satellite_H
#define Satellite_H
#include "User.h"
#include <string>

class Satellite
{
private:
    /* data */
    string name;
    string status;

    User* user;
    int distance;
    int area;

public:
    Satellite(User*,string,int);
    virtual void update()=0;
    virtual void registerSatellite(User*)=0;
    virtual bool testDistance();
    void statusChange();
    ~Satellite();
};

Satellite::Satellite(User* Name, string Status, int dist)
{
    this->name= Name;
    this->status= Status;
    this->distance= dist;
}

Satellite::~Satellite()
{
}

bool Satellite::testDistance()
{

}

void Setallite:statusChange()
{
    
}
#endif