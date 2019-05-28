
#ifndef BISHOP_HPP_
#define BISHOP_HPP_

#include "Figure.hpp"

namespace ChessEngine
{
	namespace Core
	{
		class Bishop : public Figure
		{
		public:
			Bishop(const std::string& color);
			~Bishop() override;
			std::vector<Position> getPossibleMove(const Board& board) override;
		};
	}
}

#endif /* !BISHOP */