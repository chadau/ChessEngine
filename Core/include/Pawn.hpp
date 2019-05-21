
#ifndef PAWN_HPP_
#define PAWN_HPP_

#include "Figure.hpp"

namespace ChessEngine
{
    namespace Core
    {
        class Pawn : public Figure
        {
        public:
            Pawn(const std::string &color);
			~Pawn() override;
            std::vector<Position> getPossibleMove(const Board &board) override;

		private:
			bool m_FirstMove;
        };
    }
}

#endif /* !PAWN_HPP_ */