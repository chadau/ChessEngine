#ifndef RENDERER_HPP_
#define RENDERER_HPP_

namespace ChessEngine 
{
	namespace Graphics
	{
		class IRenderer
		{
			public:
			/**
			 * @brief update the display.
			 */
				virtual void update() = 0;
		};
	} /* namespace Graphics */
} /* namespace Core */

#endif /* RENDERER_HPP_ */