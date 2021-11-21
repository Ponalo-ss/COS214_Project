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
    double distance;
    double distanceToOrbit;
    double area;

public:
    Satellite(User*,string,int);
    virtual void update()=0;
    virtual void registerSatellite(User*)=0;
    virtual bool testDistance();
    void statusChange();
    void setDistanceToOrbit(double dis);
    ~Satellite();
};

Satellite::Satellite(User* Name, string Status, int dist)
{
    this->name= Name;
    this->status= Status;
    this->distance= dist;
}

void Satellite::setDistanceToOrbit(double dis)
{
    distanceToOrbit= dis;
}

Satellite::~Satellite()
{
}

bool Satellite::testDistance()
{
    if( this->distance == distanceToOrbit)
    {
        cout<<"Orbits reached"<<endl;
        cout<<"Satellites will slowly spread out equally to cover a large area"<<endl;
    
    }
    else{
        if(this->distance < distanceToOrbit)
        {
            cout<<"Orbit not yet reached"<<endl;

            int distanceLeft= distanceToOrbit - distance;

            cout<<"Falcon is still "<<distanceLeft <<" away"<<endl;
        }
        else{
            cout<<"Warning !!!"<<endl;
        }
    }

}

void Setallite::statusChange()
{
    
}
#endif