
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
			Figure(const std::string &color, const std::string &type, const int value, Position position = Position("A1"));
			~Figure() override = default;
			int getValue() const override;
			std::string getType() const override;
			std::string getColor() const override;

		protected:
			void setPosition(Position &position);

		private:
			const int m_Value;
			const std::string m_Type;
			const std::string m_Color;

		protected:
			std::vector<Move> m_MoveSet;
			Position& m_Position;
		};
	}
}

#endif /* !FIGURE_HPP_ */
