#pragma once
#include "game/rdr/Player.hpp"

namespace RDONatives
{
	class ESP
	{
	public:
		static void Draw();
		static void DrawPlayer(Player& plyr, ImDrawList* const draw_list);
	};
}