
#include "Pawn.hpp"

namespace ChessEngine
{
	namespace Core
	{
		Pawn::Pawn(const std::string &color) : Figure(color, "pawn", 1), m_FirstMove(true), m_Init(true)
		{
			m_MoveSet.push_back(Move(std::make_pair(1, 1)));
			m_MoveSet.push_back(Move(std::make_pair(-1, 1)));
			if (getColor() == "black")
				for (auto &move : m_MoveSet)
					move *= Move(std::make_pair(1, -1));
		}

		Pawn::~Pawn() {}

		std::vector<Position> Pawn::getPossibleMove(const Board &board)
		{
			auto possibleMove = std::vector<Position>();
			auto standardMove = Move(std::make_pair(0, 1)) * (this->getColor() == "black" ? Move(std::make_pair(1, -1)) : Move(std::make_pair(1, 1)));

			if (board.at(standardMove.apply(m_Position)) == EMPTY_POSITION)
			{
				possibleMove.push_back(standardMove.apply(m_Position));
				if (m_FirstMove && board.at(standardMove.apply(m_Position)) == EMPTY_POSITION)
					possibleMove.push_back(standardMove.apply(m_Position, 2));
			}
			for (auto &move : m_MoveSet)
				if (board.at(move.apply(m_Position)) != EMPTY_POSITION)
					possibleMove.push_back(move.apply(m_Position));
			return possibleMove;
		}

		void Pawn::updatePosition(Position& newPosition)
		{
			Figure::updatePosition(newPosition);
			if (m_Init)
				m_Init = false;
			else
				m_FirstMove = false;
		}
	}
}