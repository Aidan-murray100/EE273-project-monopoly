#pragma once
#include <string>
#include <iostream>

using namespace std;

class player {

private:

	string name;
	double money;
	int position;

public:
	player(string name, double money);

	string getstring() const;
	double getmoney() const;
	int getposotion() const;

	void setstring(string n);
	void setmoney(double m);
	void setposition(int p);



		
	




};