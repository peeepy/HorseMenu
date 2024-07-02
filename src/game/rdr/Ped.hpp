#include "Entity.hpp"

namespace RDONatives
{
	class Ped : public Entity
	{
	public:
		using Entity::Entity;

		Ped GetMount();
		rage::fvector3 GetBonePosition(int bone);
	};
}