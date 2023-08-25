#include <iostream>
#include <algorithm>

enum game{rock, paper, scisors};

namespace player1{
	char selection1;
	void playerOne();

};

namespace player2{
	char selection2;
	void playerTwo();

};

int main()
{


	std::cout << "Rules\n";
	std::cout << "Player one, please enter your choise: \n";
	std::cin >> player1::selection1;
	std::cout << "\n";

	std::cout << "Payer two, plese enter your choise: \n";
	std::cin >> player2::selection2;
	std::cout << "\n";

	player1::playerOne();
	player2::playerTwo();

	return 0;
};

void player1::playerOne(){
	game play1;
	play1 = rock;

	game play2;
	play2 = paper;

	game play3;
	play3 = scisors;

	int count = 0;
	do
	{
		count++;
		switch (player1::selection1)
		{
		case 'R'|'r':
			if(('R'|'r')){
				std::cout << play1+1 << " " << "Rock wins\n";
				std::cout << "Win chanses 50%\n";

				if('P'|'p'){
					std::cout << play2+1 << " " << "Paper wins\n";
					std::cout << "Win chanses 50%\n";
				};
			};
			break;
		case 'P'|'p':

			if('P'|'p'){
				std::cout << play2+1 << " " << "Paper wins\n";
				std::cout << "Win chanses 50%\n";

				if('S'|'s'){
					std::cout << play3+1 << " " << "Scisors wins\n";
					std::cout << "Win chanses 50%\n";
				};
			};
			break;
		case 'S'|'s':

			if('S'|'s'){
				std::cout << play3+1 << " " << "Scixors wins\n";
				std::cout << "Win chanses 50%\n";

				if('R'|'r'){
					std::cout << play1+1 << " " << "Rock wins\n";
					std::cout << "Win chanses 50%\n";
				};
			};
			break;
		
		default:
		std::cout << "Invalid input\n";
			break;
		}
	} while (count < 3);
	
	return;
};

void player2::playerTwo(){
	return;
};