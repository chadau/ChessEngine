// ChessEngine.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
//#include "Board.hpp"
//#include "Move.hpp"
#include "Pawn.hpp"

int main()
{
	ChessEngine::Core::Position pos("B8");
	ChessEngine::Core::Move move(std::make_pair(1, -1));
	ChessEngine::Core::Pawn pawn("white");
	/*ChessEngine::Core::Board board;*/

	std::cout << pos.getChessPosition() << std::endl;
	std::cout << "{" << pos.getPosition().first << "," << pos.getPosition().second << "}" << std::endl;
	std::cout << "{" << move.apply(pos, 2).getPosition().first << "," << move.apply(pos, 2).getPosition().second << "}" << std::endl;
	//auto truc = std::make_unique<ChessEngine::Core::Pawn>("white");
	//board.putFigure(ChessEngine::Core::Position("C2"), std::make_unique<ChessEngine::Core::Pawn>("white"));
	//board.displayBoard();
}
