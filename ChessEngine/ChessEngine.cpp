// ChessEngine.cpp : définit le point d'entrée de l'application.
//

#include <iostream>
#include "Board.hpp"
#include "Pawn.hpp"
#include "Knight.hpp"
#include "King.hpp"
#include "Rook.hpp"
#include "Bishop.hpp"
#include "IFigure.hpp"

int main()
{
	ChessEngine::Core::Position pos("B8");
	ChessEngine::Core::Move move(std::make_pair(-1, -1));
	ChessEngine::Core::Board board;

	board.putFigure(ChessEngine::Core::Position("D4"), std::make_unique<ChessEngine::Core::Bishop>(ChessEngine::Core::FigureColor::BLACK));
	board.putFigure(ChessEngine::Core::Position("F6"), std::make_unique<ChessEngine::Core::Pawn>(ChessEngine::Core::FigureColor::WHITE));

	board.displayBoard();
}
