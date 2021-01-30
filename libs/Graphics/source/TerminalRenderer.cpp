#include "TermRenderer.hpp"
#include "IFigure.hpp"

namespace ChessEngine
{
	namespace Graphics
	{

		TermRenderer::TermRenderer(ChessEngine::Core::Board &board): m_Board(board) {}

		void TermRenderer::update()
		{
			using namespace ChessEngine::Core;

			for (auto y = 7; y >= 0; y--)
			{
				std::cout << "  " << y + 1 << " ";
				for (auto x = 0; x < 8; x++)
				{
					if (m_Board.positionIsEmpty(Position(std::make_pair(x, y))))
					{
						std::cout << ".";
						continue;
					}

					auto &figure = m_Board[Position(std::make_pair(x, y))];

					switch (figure->getType())
					{
					case FigureType::PAWN:
						std::cout << (figure->getColor() == FigureColor::WHITE ? "♟" : "♙");
						break;
					case FigureType::KNIGHT:
						std::cout << (figure->getColor() == FigureColor::WHITE ? "♞" : "♘");
						break;
					case FigureType::KING:
						std::cout << (figure->getColor() == FigureColor::WHITE ? "♛" : "♕");
						break;
					case FigureType::ROOK:
						std::cout << (figure->getColor() == FigureColor::WHITE ? "♜" : "♖");
						break;
					case FigureType::BISHOP:
						std::cout << (figure->getColor() == FigureColor::WHITE ? "♝" : "♗");
						break;
					default:
						std::cout << "?";
						break;
					}
				}
				std::cout << std::endl;
			}
		}

	} // namespace Graphics
} //namespace ChessEngine