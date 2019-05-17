
#include "Board.hpp"

namespace ChessEngine 
{
	namespace Core
	{
		Board::Board() 
		{
			m_Board = std::map<Position, std::unique_ptr<IFigure>>();
			for (int y = 0; y < 8; y++)
			{
				for (int x = 0; x < 8; x++)
				{
					//auto pos = Position(std::make_pair(x, y));
					//m_Board[pos] = nullptr;
				}
			}
		}
	}
}