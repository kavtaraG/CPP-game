#include <iostream>
#include <algorithm>

enum game{rock, paper, scisors};

namespace player1{
	char selection1;
	void playerOne(int win, int draw, int loss);

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

	player1::playerOne(0, 0, 0);
	player2::playerTwo();

	return 0;
};

void player1::playerOne(int win, int draw, int loss){
	game play1;
	play1 = rock;

	game play2;
	play2 = paper;

	game play3;
	play3 = scisors;

	int winGame = 0;
	int drawGame = 0;
	int lossGame = 0;

	int count = 0;
	do
	{
		count++;
		switch (player1::selection1)
		{
		case 'R'|'r':
			
			if(player1::selection1 = player2::selection2){
				
				if('R'|'r'){
					std::cout << play1+1 << " " << "Rock wins\n";
					std::cout << winGame++ << " Win" << "\n";
					
					break;

					if('P'|'p'){
					std::cout << play2+1 << " " << "Paper wins\n";
					std::cout << lossGame++ << " Loss" << "\n";
					
					break;
				};
				};
				
				
			};
			break;
		case 'P'|'p':

			if(player1::selection1 = player2::selection2){
				
				if('P'|'p'){
					std::cout << play2+1 << " " << "Paper wins\n";
					std::cout << "Win chanses 50%\n";
					break;

					if('S'|'s'){
					std::cout << play3+1 << " " << "Scisors wins\n";
					std::cout << "Win chanses 50%\n";
					break;
				};
				};
			}
			break;
		case 'S'|'s':


			if(player1::selection1 = player2::selection2){
				
				if('S'|'s'){
					std::cout << play3+1 << " " << "Scixors wins\n";
					std::cout << "Win chanses 50%\n";
					break;

					if('R'|'r'){
					std::cout << play1+1 << " " << "Rock wins\n";
					std::cout << "Win chanses 50%\n";
					break;
				};
				};
			}
			break;
		
			default:
			std::cout << "Its a draw\n";
			break;
		}
	} while (count < 3);
	
	return;
};

void player2::playerTwo(){
	return;
};