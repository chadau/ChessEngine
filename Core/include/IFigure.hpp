
#ifndef IFIGURE_HPP_
#define IFIGURE_HPP_

#include <vector>
#include "Move.hpp"

namespace ChessEngine
{
    namespace Core
    {
        class IFigure
        {
            public:
            virtual std::vector<Move> getPossibleMove() = 0;
        };
    }
}

#endif /* !IFIGURE_HPP_ */
