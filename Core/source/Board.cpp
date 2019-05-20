
#include "Board.hpp"
#include "IFigure.hpp"

namespace ChessEngine 
{
	namespace Core
	{
		Board::Board() 
		{
			m_Board = std::map<Position, std::unique_ptr<IFigure>>();
			for (auto y = 0; y < 8; y++)
			{
				for (auto x = 0; x < 8; x++)
					m_Board[Position(std::make_pair(x, y))] = nullptr;
			}
		}

		Board::~Board() {};
	}
}