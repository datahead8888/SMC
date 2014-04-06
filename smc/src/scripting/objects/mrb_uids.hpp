#ifndef SMC_SCRIPTING_UIDS_H
#define SMC_SCRIPTING_UIDS_H
#include "../scripting.hpp"

namespace SMC {
	namespace Scripting {
		extern struct RClass* p_rmUIDS;

		void Init_UIDS(mrb_state* p_state);
		void Delete_UID_From_Cache(mrb_state* p_state, int uid);
	}
}

#endif
