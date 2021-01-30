#ifndef TERM_RENDER_HPP_
#define TERM_RENDER_HPP_

#include "IRenderer.hpp"
#include "Board.hpp"

namespace ChessEngine
{
	namespace Graphics
	{
		class TermRenderer : public IRenderer
		{
			public: 
				/**
				 * @brief TeamRenderer ctor
				 * @param board chess board
				 */
				TermRenderer(ChessEngine::Core::Board &board);

				/**
				 * @brief TeamRenderer dtor
				 */
				~TermRenderer() = default;

				/**
				 * @copydoc ChessEngine::Graphics::IRenderer::update()
				 */
				void update() override;

			private:
				Core::Board &m_Board;
		};
	}
}

#endif /* TERM_RENDER_HPP_ */