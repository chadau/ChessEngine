
#ifndef IFIGURE_HPP_
#define IFIGURE_HPP_

#include <vector>
#include "Position.hpp"
#include "Board.hpp"

namespace ChessEngine
{
	namespace Core
	{
		class IFigure
		{
		public:
			IFigure() = default;
			virtual ~IFigure() = 0;
			virtual std::vector<Position> getPossibleMove(const Board &board) = 0;
			virtual int getValue() const = 0;
			virtual std::string getType() const = 0;
			virtual std::string getColor() const = 0;
			virtual void updatePosition(const Position &newPosition) = 0;
		};
	}
}

#endif /* !IFIGURE_HPP_ */
