
#include "Board.hpp"
#include "IFigure.hpp"

namespace ChessEngine 
{
	namespace Core
	{
		Board::Board() 
		{
			m_Board = std::map<Position, std::unique_ptr<IFigure>>();
			for (auto y = 0; y < 8; y++)
			{
				for (auto x = 0; x < 8; x++)
					m_Board[Position(std::make_pair(x, y))] = nullptr;
			}
		}

		Board::~Board() {};

		void Board::displayBoard()
		{
			for (auto y = 7; y >= 0; y--)
			{
				for (auto x = 0; x < 8; x++)
				{
					if (m_Board[Position(std::make_pair(x, y))] == nullptr)
						std::cout << "#";
					else if (m_Board[Position(std::make_pair(x, y))]->getType() == "pawn")
						std::cout << "P";
				}
				std::cout << std::endl;
			}
		}

		void Board::moveFigure(const Position& origin, Position& destination)
		{
			m_Board[destination] = std::move(m_Board[origin]);
			m_Board[destination]->updatePosition(destination);
		}

		void Board::putFigure(Position& position, std::unique_ptr<IFigure>&& figure)
		{
			m_Board[position] = std::move(figure);
			m_Board[position]->updatePosition(position);
		}

		std::unique_ptr<IFigure>& Board::at(const Position& figurePosition)
		{
			return m_Board[figurePosition];
		}

		const std::unique_ptr<IFigure>& Board::at(const Position& figurePosition) const
		{
			return m_Board.at(figurePosition);
		}


		std::unique_ptr<IFigure>& Board::operator[](const Position& index)
		{
			return at(index);
		}

		std::unique_ptr<IFigure>& Board::operator[](const std::string& index)
		{
			return at(Position(index));
		}
	}
}