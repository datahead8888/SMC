#ifndef SMC_SCRIPTING_ENEMY_HPP
#define SMC_SCRIPTING_ENEMY_HPP
#include "../../scripting.hpp"

namespace SMC {
	namespace Scripting {
		extern struct RClass* p_rcEnemy;
		void Init_Enemy(mrb_state* p_state);
	}
}
#endif
