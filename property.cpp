#include "property.h"
#include <iostream>
#include <math.h>
#include <string>

property::property(string PN, int C, int PP, int R) : pname(PN), cost(C), pposition(PP), rent(R) {}


string property::getpname() const {
	return pname;
}

int property::getcost() const {
	return cost;
}
int property::getpposotion() const {
	return pposition;
}
int property::getrent() const {
	return rent;
}

void property::setpname(string PN) { pname = PN; }
void property::setcost(int C) { rent = C; }
void property::setpposition(int PP) { pposition = PP; }
void property::setrent(int R) { rent = R; }