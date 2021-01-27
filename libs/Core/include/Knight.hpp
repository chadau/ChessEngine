
#ifndef KNIGHT_HPP_
#define KNIGHT_HPP_

#include "Figure.hpp"

namespace ChessEngine
{
	namespace Core
	{
		class Knight : public Figure
		{
		public:
			Knight(const FigureColor &color);
			~Knight() override;
			std::vector<Position> getPossibleMove(const Board& board) override;
		};
	}
}

#endif /* !KNIGHT_HPP_ */