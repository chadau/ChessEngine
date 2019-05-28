
#include "King.hpp"

namespace ChessEngine
{
	namespace Core
	{
		King::King(const std::string& color) : Figure(color, "king", 0)
		{
			m_MoveSet.push_back(Move(std::make_pair(1, 1)));
			m_MoveSet.push_back(Move(std::make_pair(1, 0)));
			m_MoveSet.push_back(Move(std::make_pair(1, -1)));
			m_MoveSet.push_back(Move(std::make_pair(0, -1)));
			m_MoveSet.push_back(Move(std::make_pair(-1, 0)));
			m_MoveSet.push_back(Move(std::make_pair(-1, 1)));
			m_MoveSet.push_back(Move(std::make_pair(0, 1)));
			m_MoveSet.push_back(Move(std::make_pair(-1, -1)));
		}
		
		King::~King() {}

		std::vector<Position> King::getPossibleMove(const Board& board)
		{
			auto possibleMove = std::vector<Position>();

			for (auto& move : m_MoveSet) {
				try {
					possibleMove.push_back(move.apply(m_Position));
				} catch (std::invalid_argument exception) {}
			}
			return possibleMove;
		}
	}
}