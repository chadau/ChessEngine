
#ifndef BOARD_HPP_
#define BOARD_HPP_

#include <map>
#include "IFigure.hpp"
#include "Position.hpp"

namespace ChessEngine::Core
{
    class Board
    {
        private:
        std::map<Position, IFigure> m_Board;
    }
}

#endif /* !BOARD_HPP_ */
