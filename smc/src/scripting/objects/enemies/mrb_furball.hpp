#ifndef SMC_SCRIPTING_FURBALL_H
#define SMC_SCRIPTING_FURBALL_H
#include "../../scripting.hpp"

namespace SMC {
	namespace Scripting {
		extern struct RClass* p_rcFurball;
		void Init_Furball(mrb_state* p_state);
	}
}
#endif
