#ifndef SMC_SCRIPTING_LEVEL_EXIT_HPP
#define SMC_SCRIPTING_LEVEL_EXIT_HPP
namespace SMC {
  namespace Scripting {
    extern struct RClass* p_rcLevel_Exit;
    void Init_LevelExit(mrb_state* p_state);
  }
}
#endif
