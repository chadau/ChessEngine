
#ifndef MOVE_HPP_
#define MOVE_HPP_

#include <utility>
#include "Position.hpp"

namespace ChessEngine
{
    namespace Core
    {
        /**
         * class Move
         * brief
         * define move on the board for a figure
         * It's a vector calcul apply to the current position.
         */
        class Move
        {
            public:
            Move(std::pair<int, int> move);
            ~Move() = default;
            virtual Position apply(Position currentPosition, int extendMove = 1);
            
            private:
            std::pair<int, int> m_Vector;
        };
    }
}

#endif /* !MOVE_HPP_ */