
#include "Bishop.hpp"

namespace ChessEngine
{
	namespace Core
	{
		Bishop::Bishop(const std::string& color) : Figure(color, "bishop", 3)
		{
			m_MoveSet.push_back(Move(std::make_pair(1, 1)));
			m_MoveSet.push_back(Move(std::make_pair(1, -1)));
			m_MoveSet.push_back(Move(std::make_pair(-1, 1)));
			m_MoveSet.push_back(Move(std::make_pair(-1, -1)));
		}
		
		Bishop::~Bishop() {}
		
		std::vector<Position> Bishop::getPossibleMove(const Board& board)
		{
			auto possibleMove = std::vector<Position>();
			auto extend = 1;
			auto index = m_Position;

			for (auto& move : m_MoveSet) {
				do
				{
					try
					{
						index = move.apply(m_Position, extend);
						possibleMove.push_back(index);
						extend++;
					}
					catch (std::invalid_argument exception)
					{
						break;
					}
				} while (board.positionIsEmpty(index));
				extend = 1;
			}
			return possibleMove;
		}
	}
}