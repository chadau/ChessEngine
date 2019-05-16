
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
         * class Position class
         * brief 
         * Position on the board
         *
         */
        class Position
        {
            public:
            Position(const std::string &chessPosition);
            Position(const std::pair<int, int> &cartesianPosition);
            ~Position() = default;
            std::pair<int, int> getPosition() const;
            std::string getChessPosition() const;
            void setPosition(const std::string &chessPosition);
            void setPosition(const std::pair<int, int> &chessPosition);
            
            private:
            static std::pair<int, int> chessPositionToCartesianPosition(const std::string &chessPosition);
            static std::string cartesianPositionToChessPosition(const std::pair<int, int> &cartesianPosition);
            
            private:
            std::string m_ChessPosition;
            std::pair<int, int> m_CartesianPosition;
        };
    }
}

#endif /* !POSITION_HPP_ */