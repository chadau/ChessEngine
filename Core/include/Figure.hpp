
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
			Figure(const std::string &color, const std::string &type, const int value);
			~Figure() override = default;
			int getValue() const override;
			std::string getType() const override;
			std::string getColor() const override;

		private:
			const int m_Value;
			const std::string m_Type;
			const std::string m_Color;

		protected:
			std::vector<Move> m_MoveSet;
		};
	}
}

#endif /* !FIGURE_HPP_ */
