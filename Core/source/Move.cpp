
#include "Move.hpp"

namespace ChessEngine
{
    namespace Core
    {
        Move::Move(std::pair<int, int> move)
        {
			m_Vector.first = move.first;
			m_Vector.second = move.second;
        }

		Move::Move(const Move& other)
		{
			m_Vector = other.m_Vector;
		}
        
        Position Move::apply(Position currentPosition, int extendMove)
        {
            auto newPosition = currentPosition.getPosition();
            
            newPosition.first = newPosition.first + (m_Vector.first * extendMove);
            newPosition.second = newPosition.second + (m_Vector.second * extendMove);
            return Position(newPosition);
        }

		Move& Move::operator=(const Move& other)
		{
			m_Vector = other.m_Vector;
			return *this;
		}

		Move& Move::operator*=(const Move& other)
		{
			m_Vector.first *= other.m_Vector.first;
			m_Vector.second *= other.m_Vector.second;
			return *this;
		}

		Move Move::operator*(const Move& other)
		{
			auto resultMove = *this;

			resultMove *= other;
			return resultMove;
		}
    }
}