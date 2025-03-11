#include <iostream> 
# include <cstdlib> 
#include <ctime> 
int rollDiece()
{
	return (std::rand() % 6) + 1;
}
void rollDice()
{
	int diece1 = rollDiece();
	int diece2 = rollDiece();
	int total = diece1 + diece2;
	std::cout << "Diece 1: " << diece1 << std::endl;
	std::cout << "Diece 2: " << diece2 << std::endl;
	std::cout << "Total: " << total << std::endl;
}
int main()
{
	std::srand(std::time(0));
	rollDice();
	return 0;
}