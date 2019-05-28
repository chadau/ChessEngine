
#ifndef ROOK_HPP_
#define ROOK_HPP_

#include "Figure.hpp"

namespace ChessEngine
{
	namespace Core
	{
		class Rook : public Figure
		{
		public:
			Rook(const std::string& color);
			~Rook() override;
			std::vector<Position> getPossibleMove(const Board& board) override;
		}; 
	}
}

#endif /* !ROOK_HPP_ */