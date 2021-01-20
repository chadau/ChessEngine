
#ifndef FIGURE_HPP_
#define FIGURE_HPP_

#include "IFigure.hpp"
#include "Move.hpp"

namespace ChessEngine
{
	namespace Core
	{
		class Figure : public IFigure
		{
		public:
			Figure(const std::string &color, const FigureType &type, const int value);
			~Figure() override;
			int getValue() const override;
			FigureType getType() const override;
			std::string getColor() const override;
			void updatePosition(const Position& newPosition) override;

		private:
			const int m_Value;
			const FigureType m_Type;
			const std::string m_Color;

		protected:
			std::vector<Move> m_MoveSet;
			Position m_Position;
		};
	}
}

#endif /* !FIGURE_HPP_ */
