// ChessEngine.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
#include "Board.hpp"
#include "IFigure.hpp"

int main()
{
	//ChessEngine::Core::Position pos("B8");
	//ChessEngine::Core::Move move(std::make_pair(1, -1));
	ChessEngine::Core::Board board;
	std::unique_ptr<ChessEngine::Core::IFigure> test = nullptr;
	std::map <int, std::unique_ptr<ChessEngine::Core::IFigure>> map;



	std::cout << map.size() << std::endl;

	//std::cout << pos.getChessPosition() << std::endl;
	//std::cout << "{" << pos.getPosition().first << "," << pos.getPosition().second << "}" << std::endl;
	//std::cout << "{" << move.apply(pos, 2).getPosition().first << "," << move.apply(pos, 2).getPosition().second << "}" << std::endl;
}
