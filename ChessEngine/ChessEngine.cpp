// ChessEngine.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
#include "Board.hpp"
#include "Pawn.hpp"

int main()
{
	ChessEngine::Core::Position pos("B8");
	ChessEngine::Core::Move move(std::make_pair(1, -1));
	ChessEngine::Core::Pawn pawn("white");
	ChessEngine::Core::Pawn enemy("black");
	ChessEngine::Core::Board board;

	std::cout << pos.getChessPosition() << std::endl;
	std::cout << "{" << pos.getPosition().first << "," << pos.getPosition().second << "}" << std::endl;
	std::cout << "{" << move.apply(pos, 2).getPosition().first << "," << move.apply(pos, 2).getPosition().second << "}" << std::endl;
	board.putFigure(ChessEngine::Core::Position("B2"), std::make_unique<ChessEngine::Core::Pawn>("white"));
	auto &&fig = board["B2"];
	board.putFigure(ChessEngine::Core::Position("C3"), std::make_unique<ChessEngine::Core::Pawn>("black"));
	auto movePossible = fig->getPossibleMove(board);
	board.displayBoard();
	std::cout << std::endl;
	board.moveFigure(ChessEngine::Core::Position("B2"), movePossible[0]);
	board.displayBoard();
	auto &&truc = board.at(ChessEngine::Core::Position("B3"));
}
