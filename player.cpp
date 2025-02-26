#include "player.h"
#include <iostream>
#include <math.h>
#include <string>

player::player(string N, double M, int P) : name(N), money(M), position(P) {}


string player::getname() const {
	return name;
}

double player::getmoney() const {
	return money;
}
int player::getposotion() const {
	return position;
}

void player::setname(string N) { name = N; }
void player::setmoney(double M) { money = M; }
void player::setposition(int P) { position=P; }