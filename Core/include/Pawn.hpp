
#ifndef PAWN_HPP_
#define PAWN_HPP_

#include <vector>
#include "IFigure.hpp"

namespace ChessEngine
{
    namespace Core
    {
        class Pawn : public IFigure
        {
            public:
            Pawn();
            ~Pawn() = default;
            std::vector<Move> getPossibleMove() override;
            
            private:
            std::vector<Move> m_MoveSet;
            const int m_value;
        };
    }
}

#endif /* !PAWN_HPP_ */