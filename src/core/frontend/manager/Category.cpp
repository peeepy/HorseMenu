#include "Category.hpp"

namespace RDONatives
{
	void Category::Draw()
	{
		for (auto& item : m_Items)
			item->Draw();
	}
}