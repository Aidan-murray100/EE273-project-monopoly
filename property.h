#pragma once
#include <string>
#include <iostream>

using namespace std;

class property {

private:

	string pname;
	int cost;
	int pposition;
	int rent;

public:
	property(string pname, int cost, int ppostion, int rent);

	string getpname() const;
	int getcost() const;
	int getpposotion() const;
	int getrent() const;

	void setpname(string pn);
	void setcost(int c);
	void setpposition(int pp);
	void setrent(int r);

};
