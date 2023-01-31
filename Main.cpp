#include <iostream>
#include <string>
#include "Lunch.h"
#include "Match.h"
#include "order.h"
#include "Stadium.h"
#include "Ticket.h"
#include "User.h"

using namespace std;

/**
Lunch implementation
*/
void Lunch::Add() {
  cout << "User adds Snack details." << endl;
}

void Lunch::chooseLunch() {
  cout << "User edits Snack details." << endl;
}

/**
Match implementation
*/
void Match::createMatch() {
  cout << "User selects football match" << endl;
  cout<<"( or )"<<endl;
}

void Match::EditMatch() {
  cout << "User Edits football match details" << endl;
}

/**
order implementation
*/
void order::createorder() {
  cout << "User creates order and adds Payment Details." << endl;
  cout<<"( or )"<<endl;
}

void order::cancelorder() {
  cout << "User cancels the order." << endl;
}

/**
Stadium implementation
*/
void Stadium::Addstadium() {
  cout << "User selects stadium" << endl;
  cout<<"( or )"<<endl;
}

void Stadium::Editstadium() {
  cout << "User edits stadium details" << endl;
}

/**
Ticket implementation
*/
void Ticket::AddSeat() {
cout<<"User selects seat."<<endl;
cout<<"( or )"<<endl;
}

void Ticket::editSeat() {
cout<<"User edits seat details."<<endl;
}

/**
User implementation
*/
void User::Register() {
cout<<"Payment successfull."<<endl;
}

void User::Reserve() {
cout<<"Seats Reserved Successfully."<<endl;
}

void User::ChooseLunch() {
cout<<"Food Ordered Successfully."<<endl;
}

int main() {
    cout<<"Users registers himself."<<endl;
    cout<<"User logs into a website as a registered user"<<endl;
    cout<<endl;

  Match match;
  match.createMatch();
  match.EditMatch();
  cout<<endl;

  Stadium stadium;
  stadium.Addstadium();
  stadium.Editstadium();
  cout<<endl;

  Ticket ticket;
  ticket.AddSeat();
  ticket.editSeat();
  cout<<endl;

  Lunch lunch;
  lunch.Add();
  lunch.chooseLunch();
  cout<<endl;

  order ord;
  ord.createorder();
  ord.cancelorder();
  cout<<endl;

  User user;
  user.Register();
  user.Reserve();
  user.ChooseLunch();

  return 0;
}
