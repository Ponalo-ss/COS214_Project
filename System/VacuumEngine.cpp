#include "VacuumEngine.h"

VacuumEngine::VacuumEngine(int num1,int num2,int num3,int num4):Engine(num1,num2,num3,num4)
{
    status=false;
}

bool VacuumEngine::testEngine()
{
    if(fGradient>=30 && fGradient<60)  //Flow gradi3ent between 30 and 40
    {
        status=true;
        if(pressure>=50 && pressure<100 && status)  //oil pressure  between 30 and 100 
        {
            if(temp>=200 && temp<350 && status)  //Temperature between 200 and 350
            {
            }
            else
            {
                cout<<"Vacumm Engine  had abnormal Temperature"<<endl;
                status=false;
            }

        }
        else
        {
            cout<<"Vacuum Engine  had abnormal Oil pressure"<<endl;
            status=false;
        }
    }
    else
    {
        cout<<"Vacuum Engine  had abnormal flow gradient"<<endl;
        status=false;
    }
    return status;
}

VacuumEngine::~VacuumEngine()
{
}
