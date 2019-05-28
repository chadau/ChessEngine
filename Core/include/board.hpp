
#ifndef BOARD_HPP_
#define BOARD_HPP_

#include <map>
#include <memory>
#include "Position.hpp"

constexpr auto EMPTY_POSITION = (nullptr);

namespace ChessEngine
{
	namespace Core
	{
		class IFigure;

		class Board
		{
		public:
			Board();
			~Board();
			void displayBoard();
			void putFigure(Position &position, std::unique_ptr<IFigure> &&figure);
			void moveFigure(const Position& origin, Position& destination);
			std::unique_ptr<IFigure>& at(const Position& figurePosition);
			const std::unique_ptr<IFigure>& at(const Position& figurePosition) const;
			std::unique_ptr<IFigure>& operator[](const Position& index);
			std::unique_ptr<IFigure>& operator[](const std::string& index);
			bool positionIsEmpty(const Position& position) const;
			bool positionIsEmpty(const std::string& position) const;

		private:
			void hitFigure(Position& position);

		private:
			std::map<Position, std::unique_ptr<IFigure>> m_Board;
		};
	}
}

#endif /* !BOARD_HPP_ */
