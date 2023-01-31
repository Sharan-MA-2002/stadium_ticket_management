#ifndef _MATCH_H
#define _MATCH_H

#include <string>

using namespace std;

class Match {
public:
int ID;
int Team1;
int Team2;
string city;

void createMatch();

void EditMatch();
};

#endif //_MATCH_H