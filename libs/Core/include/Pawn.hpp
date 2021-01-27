
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
            Pawn(const FigureColor &color);
			~Pawn() override;
            std::vector<Position> getPossibleMove(const Board &board) override;
			void updatePosition(const Position& newPosition) final;

		private:
			bool m_FirstMove;
			bool m_Init;
        };
    }
}

#endif /* !PAWN_HPP_ */