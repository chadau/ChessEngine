
#ifndef KING_HPP_
#define KING_HPP_

#include "Figure.hpp"

namespace ChessEngine
{
	namespace Core
	{
		class King : public Figure
		{
		public:
			King(const std::string& color);
			~King() override;
			std::vector<Position> getPossibleMove(const Board& board) override;
		};
	}
}

#endif /* !KING_HPP_ */