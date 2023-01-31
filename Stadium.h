#ifndef _STADIUM_H
#define _STADIUM_H

#include <string>

using namespace std;

class Stadium {
public:
int ID;
string Name;
string Address;
int Seats;
int Park;

void Addstadium();

void Editstadium();
};

#endif //_STADIUM_H 