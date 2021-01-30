
#include "Position.hpp"
#include <regex>
#include <cctype>

namespace ChessEngine
{
	namespace Core
	{
		Position::Position(const std::string &chessPositon)
		{
			m_ChessPosition = chessPositon;
			m_CartesianPosition = Position::chessPositionToCartesianPosition(chessPositon);
		}

		Position::Position(const std::pair<int, int> &cartesianPosition)
		{
			m_ChessPosition = Position::cartesianPositionToChessPosition(cartesianPosition);
			m_CartesianPosition = cartesianPosition;
		}

		Position::Position(const Position &position)
		{
			m_ChessPosition = position.m_ChessPosition;
			m_CartesianPosition = position.m_CartesianPosition;
		}
		
		#define CHESS_TO_CARTESIAN (17)
		std::pair<int, int> Position::chessPositionToCartesianPosition(const std::string &chessPosition)
		{
			std::regex patternPosition("[a-hA-H][1-8]");
			std::pair<int, int> cartesianPosition;
			
			if (!(chessPosition.size() == 2 && std::regex_search(chessPosition, patternPosition)))
				throw std::invalid_argument("Position: Argument is not a chess position valid.");
			cartesianPosition.first = std::toupper(chessPosition[0]) - CHESS_TO_CARTESIAN - '0';
			cartesianPosition.second = chessPosition[1] - '0' - 1;
			return cartesianPosition;
		}
		#undef CHESS_TO_CARTESIAN
		


		#define CARTESIAN_TO_CHESS (17)
		std::string Position::cartesianPositionToChessPosition(const std::pair<int, int> &cartesianPosition)
		{
			std::string chessPosition;
			
			if (!(((cartesianPosition.first - 7) * (cartesianPosition.first - 0) <= 0) &&
				((cartesianPosition.second - 7) * (cartesianPosition.second - 0) <= 0)))
				throw std::invalid_argument("Position: Argument is not a chess position valid.");
			chessPosition += cartesianPosition.first + CARTESIAN_TO_CHESS + '0';
			chessPosition += cartesianPosition.second + '0' + 1;
			return chessPosition;
		}
		#undef CARTESIAN_TO_CHESS
		
		std::pair<int, int> Position::getPosition() const
		{
			return m_CartesianPosition;
		}
		
		std::string Position::getChessPosition() const
		{
			return m_ChessPosition;
		}
		
		void Position::setPosition(const std::string &chessPosition)
		{
			m_CartesianPosition = Position::chessPositionToCartesianPosition(chessPosition);
			m_ChessPosition = chessPosition;
		}
		
		void Position::setPosition(const std::pair<int, int> &chessPosition)
		{
			m_ChessPosition = cartesianPositionToChessPosition(chessPosition);
			m_CartesianPosition = chessPosition;
		}

		Position& Position::operator=(const Position& other)
		{
			m_ChessPosition = other.m_ChessPosition;
			m_CartesianPosition = other.m_CartesianPosition;
			return *this;
		}
	}
}
