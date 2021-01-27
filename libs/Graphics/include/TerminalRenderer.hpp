#ifndef TERM_RENDER_HPP_
#define TERM_RENDER_HPP_

#include "IRenderer.hpp"

namespace ChessEngine
{
	namespace Graphics
	{
		class TermRenderer : public IRenderer
		{
			public: 
				/**
				 * @brief TeamRenderer ctor
				 */
				TermRenderer() = default;

				/**
				 * @brief TeamRenderer dtor
				 */
				~TermRenderer() = default;

				/**
				 * @copydoc ChessEngine::Graphics::IRenderer::update()
				 */
				void update() override;
		};
	}
}

#endif /* TERM_RENDER_HPP_ */