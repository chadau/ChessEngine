
#include "Pawn.hpp"

namespace ChessEngine
{
	namespace Core
	{
		Pawn::Pawn(const std::string &color) : Figure(color, "pawn", 1), m_FirstMove(true)
		{
			m_MoveSet.push_back(Move(std::make_pair(1, 1)));
			m_MoveSet.push_back(Move(std::make_pair(-1, 1)));
		}

		Pawn::~Pawn() {}

		std::vector<Position> Pawn::getPossibleMove(const Board &board)
		{
			auto possibleMove = std::vector<Position>();
			auto standardMove = Move(std::make_pair(0, 1));

			if (board.at(standardMove.apply(m_Position)) == EMPTY_CASE)
			{
				possibleMove.push_back(standardMove.apply(m_Position));
				if (m_FirstMove && board.at(standardMove.apply(m_Position)) == EMPTY_CASE)
					possibleMove.push_back(standardMove.apply(m_Position, 2));
			}
			for (auto move : m_MoveSet)
				if (board.at(move.apply(m_Position)) != EMPTY_CASE)
					possibleMove.push_back(move.apply(m_Position));
			return possibleMove;
		}

		void Pawn::updatePosition(Position& newPosition)
		{
			static bool init = true;

			Figure::updatePosition(newPosition);
			if (init)
				init = false;
			else
				m_FirstMove = false;
		}
	}
}