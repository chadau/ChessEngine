
#ifndef BOARD_HPP_
#define BOARD_HPP_

#include <map>
#include <memory>
#include "IFigure.hpp"
#include "Position.hpp"

namespace ChessEngine
{
	namespace Core
	{
		class Board
		{
		public:
			Board();
			~Board() = default;

		private:
			std::map<Position, std::unique_ptr<IFigure>> m_Board;
		};
	}
}

#endif /* !BOARD_HPP_ */
