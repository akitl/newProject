#ifndef CANIN_H_
#define CANIN_H_
#include <string>

using namespace std;

class Canin
{

public:
    Canin();
    Canin(string race);
    virtual ~Canin();

    string getRace();
    void setRace(string race);

protected:
string m_race;

    
};

#endif /* ANIMAL_H_ */
