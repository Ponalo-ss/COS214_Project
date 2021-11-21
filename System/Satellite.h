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
    void setDistanceToOrbit(double dis); //new
    void Communicate(); //communication between satellites
    string sendSignal(); //new -communicstion between user and satellite
    void setStatus(string s); //new
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

void Satellite::statusChange()
{
    //Communicating to user
    
    /*assuming states will be:
    -on earth
]   -on orbit
    -spreaded out 
    -in Position

    as well as communicating to user respectively
       */
    
    if(status=="on Earth" && distance==distanceToOrbit)
    {
        setStatus("on orbit");
    }
    else{
        cout<<"Could not change the state because the Falcon haven't reached the orbit"<<endl;
    }
    
    if(status== "on orbit")
    {
        setStatus("spreaded out");
    }
    else if(status =="spreaded out")
    {
        setStatus("in Position")
    }
    else if(status== "in Position")
    {
        cout<<"Satellite already in Position."
    }
    
}
#endif