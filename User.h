#ifndef _USER_H
#define _USER_H

#include <string>

class User {
public: 
    int ID;
    std::string Name;
    long PhoneNumber;
    std::string Password;
    
    void ChooseLunch();
    void Register();
    void Reserve();
};

#endif //_USER_H 