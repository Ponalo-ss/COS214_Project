#include "Rocket.h"

Rocket::Rocket()
{
}

void Rocket::addMerlinEngine(Engine* e)
{
   // numEngines++;
    MerlinEngines.push_back(e);
}

void Rocket::addVacuumEngine(Engine* e)
{
    //numEngines++;
    VacuumEngines.push_back(e);
}

bool Rocket::stage1Test()
{
    cout<<"Stage 1:Merlin engines static fire test is initiated!"<<endl;
    bool ok=false;
    int index=1;
    vector<Engine*>::iterator it;
    for(it=MerlinEngines.begin();it!=MerlinEngines.end();it++)
    {
        //Turning the engine on
        TurnOn* TO=new TurnOn(*it);
        TO->execute();
        if((*it)->testEngine())
        {
            cout<<"Merlin Engine "<<index++<<" is fully functional"<<endl;
        }
        else
        {
            cout<<"Merlin engine "<<index++<<" is faulty and needs to be repaired or replaced"<<endl;
            return false;
        }
        TO->undo();
    }
    return true;
}

bool Rocket::stage2Test()
{
    cout<<endl;
    cout<<"Stage 2:Vacuum Engine static Test is initiated."<<endl;
    bool ok=false;
    int index=1;
    vector<Engine*>::iterator it;
    for(it=VacuumEngines.begin();it!=VacuumEngines.end();it++)
    {
        TurnOn* TO=new TurnOn(*it);
        TO->execute();
        if((*it)->testEngine())
        {
            cout<<"Vacuum Engine "<<index++<<" is fully functional"<<endl;
        }
        else
        {
            TO->undo();
            cout<<"Vacuum engine "<<index++<<" is faulty and needs to be repaired or replaced"<<endl;
            return false;
        }
    }
    return true;
}

Rocket::~Rocket()
{
}
