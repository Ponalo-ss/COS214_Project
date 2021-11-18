#ifndef Load_H
#define Load_H

class Load
{
public:
    Load(int loadCapacity);
    int loadCapacity;
    bool received;
    void setReceipt(bool b);  //Setter function to set "received" attribute
    virtual void receive()=0;
    virtual bool testCapacity()=0;
    virtual ~Load();

};

#endif