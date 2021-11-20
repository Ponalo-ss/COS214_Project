#include "MerlinEngine.h"

MerlinEngine::MerlinEngine(int num1 ,int num2,int num3,int num4):Engine(num1,num2,num3,num4)
{
}

bool MerlinEngine::testEngine()
{
    EngineStore* storage=new EngineStore();
    storage->storeMemento(this->createMemento());    //store the Initial Temp and fuel of engine before testing
    fuel-=25; 
    temp+=4;
    if(fGradient>=30 && fGradient<40)  //Flow gradi3ent between 30 and 40
    {
        status=true;
        if(pressure>=30 && pressure<50 && status)  //oil pressure  between 30 and 50 
        {
            fuel-=25;
            temp+=4;
            if(temp>=200 && temp<250 && status)  //Temperature between 200 and 250
            {
                fuel-=25;
            }
            else
            {
                cout<<"Merlin Engine  had abnormal Temperature"<<endl;
                status=false;
            }

        }
        else
        {
            cout<<"Merlin Engine  had abnormal Oil pressure"<<endl;
            status=false;
        }
    }
    else
    {
        cout<<"Merlin Engine  had abnormal flow gradient"<<endl;
        status=false;
    }

    retrieveMemento(storage->retrieve());     //restore the original fuel and temperature values
    //cout<<"Engine fuel is refilled and allowed to cool down"<<endl;
    return status;
}

MerlinEngine::~MerlinEngine()
{
}