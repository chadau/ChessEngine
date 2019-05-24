// ChessEngine.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
#include "Board.hpp"
#include "Pawn.hpp"

int main()
{
	ChessEngine::Core::Position pos("B8");
	ChessEngine::Core::Move move(std::make_pair(-1, -1));
	ChessEngine::Core::Pawn pawn("white");
	ChessEngine::Core::Board board;

	std::cout << pos.getChessPosition() << std::endl;
	std::cout << "{" << pos.getPosition().first << "," << pos.getPosition().second << "}" << std::endl;
	std::cout << "{" << move.apply(pos).getPosition().first << "," << move.apply(pos).getPosition().second << "}" << std::endl;
	board.putFigure(ChessEngine::Core::Position("B2"), std::make_unique<ChessEngine::Core::Pawn>("white"));
	auto &&fig = board["B2"];
	board.putFigure(ChessEngine::Core::Position("C2"), std::make_unique<ChessEngine::Core::Pawn>("black"));
	auto&& figEn = board["C2"];
	auto movePossibleEn = figEn->getPossibleMove(board);
	auto movePossible = fig->getPossibleMove(board);
	board.displayBoard();
	std::cout << std::endl;
	board.displayBoard();
	auto &&truc = board.at(ChessEngine::Core::Position("B3"));
}
