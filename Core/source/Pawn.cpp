
#include "Pawn.hpp"

namespace ChessEngine
{
	namespace Core
	{
		Pawn::Pawn(const std::string &color) : Figure(color, "pawn", 1)
		{
			m_MoveSet.push_back(Move(std::make_pair(1, 1)));
			m_MoveSet.push_back(Move(std::make_pair(1, -1)));
		}

		std::vector<Position> Pawn::getPossibleMove(const Board &Board)
		{
			 
			return std::vector<Position>();
		}
	}
}