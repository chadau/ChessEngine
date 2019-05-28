// ChessEngine.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
#include "Board.hpp"
#include "Pawn.hpp"
#include "Knight.hpp"
#include "King.hpp"

int main()
{
	ChessEngine::Core::Position pos("B8");
	ChessEngine::Core::Move move(std::make_pair(-1, -1));
	ChessEngine::Core::Pawn pawn("white");
	ChessEngine::Core::Board board;

	board.putFigure(ChessEngine::Core::Position("D4"), std::make_unique<ChessEngine::Core::King>("white"));
	auto&& king = board["D4"];
	auto moves = king->getPossibleMove(board);
	board.displayBoard();
	auto &&truc = board.at(ChessEngine::Core::Position("B3"));
}
