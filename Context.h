#ifndef Context_H
#define Context_H
#include "Load.h"

class Context
{
    public:
        Context(Load* l);
        ~Context();
        bool testCapacity();
        bool loadReceipt();
        void setReceipt(bool b); //Setter function used in Load
    private:
        Load* strategy;
};

#endif