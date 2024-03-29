
#include "Figure.hpp"

namespace ChessEngine
{
	namespace Core
	{
		Figure::Figure(const std::string& color, const std::string& type, const int value, Position &position) 
			: IFigure(), 
			m_Color(color), 
			m_Type(type), 
			m_Value(value), 
			m_MoveSet(), 
			m_Position(position) {};

		Figure::~Figure() {}

		int Figure::getValue() const
		{
			return m_Value;
		}

		std::string Figure::getType() const
		{
			return m_Type;
		}

		std::string Figure::getColor() const
		{
			return m_Color;
		}

		void Figure::updatePosition(Position &newPosition)
		{
			m_Position = newPosition;
		}
	}
}