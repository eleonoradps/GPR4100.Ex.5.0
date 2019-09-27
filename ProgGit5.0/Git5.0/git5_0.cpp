#include <iostream>
#include <time.h>

// exercice 5.0

int main() {

	unsigned seed;
	int choice;
	int computer;
	char answer;

	std::cout << "Rock, paper, scissors game. \n Here are the choices : \n";
	std::cout << "1.Rock \n";
	std::cout << "2.Paper \n";
	std::cout << "3.Scissors \n";
	std::cout << "Enter your choice \n";
	std::cin >> choice;

	if (choice == 1) // rock
	{
		std::cout << "You picked rock. \n";
	}
	else if (choice == 2) // paper
	{
		std::cout << "You picked paper \n";
	}
	else if (choice == 3) // scissors
	{
		std::cout << "You picked scissors \n";
	}


	seed = time(NULL);
	srand(seed);

	computer = rand() % 3 + 1; // computer's choice

	if (computer == 1) 
	{
		answer = 1;
		std::cout << "Computer picked rock \n";
	}
	else if (computer == 2)
	{
		answer = 2;
		std::cout << "Computer picked paper \n";
	}
	else if (computer == 3) 
	{
		answer = 3;
		std::cout << "Computer picked scissors \n";
	}

	if ((choice == 1 && computer == 3) || (choice == 2 && computer == 1) || (choice == 3 && computer == 2)) 
	{
		std::cout << "You win! \n";
	}
	else 
	{
		std::cout << "You lose... \n";
	}
	return EXIT_SUCCESS;
}