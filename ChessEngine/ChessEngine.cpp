// ChessEngine.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
#include "Move.hpp"

int main()
{
	ChessEngine::Core::Position pos("B8");
	ChessEngine::Core::Move move(std::make_pair(1, -1));

	std::cout << pos.getChessPosition() << std::endl;
	std::cout << "{" << pos.getPosition().first << "," << pos.getPosition().second << "}" << std::endl;
	std::cout << "{" << move.apply(pos, 2).getPosition().first << "," << move.apply(pos, 2).getPosition().second << "}" << std::endl;
}
