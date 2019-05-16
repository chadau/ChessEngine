
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
        
        Position Move::apply(Position currentPosition, int extendMove)
        {
            auto newPosition = currentPosition.getPosition();
            
            newPosition.first = newPosition.first + (m_Vector.first * extendMove);
            newPosition.second = newPosition.second + (m_Vector.second * extendMove);
            return Position(newPosition);
        }
    }
}