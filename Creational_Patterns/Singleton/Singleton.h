#ifndef __SINGLETON__
#define __SINGLETON__

class Singleton
{
public:
    static Singleton *Instance();
protected:
    Singleton();
    ~Singleton();
private:
    static Singleton *_instance;
};

#endif