
#include "Figure.hpp"

namespace ChessEngine
{
	namespace Core
	{
		Figure::Figure(const FigureColor &color, const FigureType &type, const int value) 
			: IFigure(), 
			m_Color(color), 
			m_Type(type), 
			m_Value(value), 
			m_MoveSet(), 
			m_Position("A1") {};

		Figure::~Figure() {}

		int Figure::getValue() const
		{
			return m_Value;
		}

		FigureType Figure::getType() const
		{
			return m_Type;
		}

		FigureColor Figure::getColor() const
		{
			return m_Color;
		}

		void Figure::updatePosition(const Position &newPosition)
		{
			m_Position = newPosition;
		}
	}
}