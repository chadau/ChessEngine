
#include "Knight.hpp"

namespace ChessEngine
{
	namespace Core
	{
		Knight::Knight(std::string color) : Figure(color, "knight", 3)
		{
			m_MoveSet.push_back(Move(std::make_pair(1, 2)));
			m_MoveSet.push_back(Move(std::make_pair(2, 1)));
			m_MoveSet.push_back(Move(std::make_pair(2, -1)));
			m_MoveSet.push_back(Move(std::make_pair(1, -2)));
			m_MoveSet.push_back(Move(std::make_pair(-1, -2)));
			m_MoveSet.push_back(Move(std::make_pair(-2, -1)));
			m_MoveSet.push_back(Move(std::make_pair(-2, 1)));
			m_MoveSet.push_back(Move(std::make_pair(-1, 2)));
		}

		ChessEngine::Core::Knight::~Knight() {}

		std::vector<Position> Knight::getPossibleMove(const Board& board)
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