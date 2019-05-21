
#ifndef POSITION_HPP_
#define POSITION_HPP_

#include <utility>
#include <iostream>

#define CHESS_TO_CARTESIAN (17)
#define CARTESIAN_TO_CHESS (17)

namespace ChessEngine
{
    namespace Core
    {
        /**
         * class Position
         * brief 
         * Position on the board
         *
         */
        class Position
        {
            public:
            Position(const std::string &chessPosition);
            Position(const std::pair<int, int> &cartesianPosition);
			Position(const Position& position);
            ~Position() = default;
            std::pair<int, int> getPosition() const;
            std::string getChessPosition() const;
            void setPosition(const std::string &chessPosition);
            void setPosition(const std::pair<int, int> &chessPosition);
			Position& operator=(const Position& other);
            
            private:
            static std::pair<int, int> chessPositionToCartesianPosition(const std::string &chessPosition);
            static std::string cartesianPositionToChessPosition(const std::pair<int, int> &cartesianPosition);
            
            private:
            std::string m_ChessPosition;
            std::pair<int, int> m_CartesianPosition;
        };
    }
}


/*
** Specialization of std::less for use Position on board like a key of the std::map
*/
namespace std
{
	template<> struct less<ChessEngine::Core::Position>
	{
		bool operator() (const ChessEngine::Core::Position& lhs, const ChessEngine::Core::Position& rhs) const
		{
			return lhs.getChessPosition() > rhs.getChessPosition();
		}
	};
}

#endif /* !POSITION_HPP_ */