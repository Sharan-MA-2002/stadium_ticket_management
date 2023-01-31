#ifndef _TICKET_H
#define _TICKET_H

#include <string>

class Ticket {
public: 
    int ID;
    std::string Name;
    int PhoneNumber;
    
    void AddSeat();
    void editSeat();
};

#endif //_TICKET_H