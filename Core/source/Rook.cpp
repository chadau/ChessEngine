
#include "Rook.hpp"

namespace ChessEngine
{
	namespace Core
	{
		Rook::Rook(const std::string& color) : Figure(color, FigureType::ROOK, 5)
		{
			m_MoveSet.push_back(Move(std::make_pair(-1, 0)));
			m_MoveSet.push_back(Move(std::make_pair(1, 0)));
			m_MoveSet.push_back(Move(std::make_pair(0, 1)));
			m_MoveSet.push_back(Move(std::make_pair(0, -1)));
		}

		Rook::~Rook() {}

		std::vector<Position> Rook::getPossibleMove(const Board& board)
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