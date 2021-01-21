
#ifndef IFIGURE_HPP_
#define IFIGURE_HPP_

#include <vector>
#include "Position.hpp"
#include "Board.hpp"

namespace ChessEngine
{
	namespace Core
	{
		/**
		 * @enum FigureType
		 * @brief Type of figure in the game
		 */
		enum class FigureType
		{
			PAWN = 0,
			KING,
			QUEEN,
			ROOK,
			BISHOP,
			KNIGHT,
			COUNT /*!< COUNT is the total number of type */
		};

		/**
		 * @enum FigureColor
		 * @brief Color available for figure
		 */
		enum class FigureColor
		{
			BLACK = 0,
			WHITE,
			COUNT /*!< COUNT is the total number of color */
		};

		/**
		 * @interface IFigure
		 * @brief virtual pure class to implement a figure for the Core
		 */
		class IFigure
		{
		public:
			/**
			 * @brief IFigure ctr
			 */
			IFigure() = default;

			/**
			 * @brief IFigure dtr
			 */
			virtual ~IFigure() = 0;

			/**
			 * @brief calculate the possible move on the board for the figure
			 * @param board chess board
			 * @return std::vector of possible move
			 */
			virtual std::vector<Position> getPossibleMove(const Board &board) = 0;

			/**
			 * @brief get the value of the figure
			 * @return value of the figure
			 */
			virtual int getValue() const = 0;

			/**
			 * @brief get the value type of the figure
			 * @return the figure type
			 */
			virtual FigureType getType() const = 0;

			/**
			 * @brief get the color of the figure
			 * @return the color figure
			 */
			virtual FigureColor getColor() const = 0;

			/**
			 * @brief change the actual position
			 * @param newPosition the new position
			 */
			virtual void updatePosition(const Position &newPosition) = 0;
		};
	} // namespace Core
} // namespace ChessEngine

#endif /* !IFIGURE_HPP_ */
