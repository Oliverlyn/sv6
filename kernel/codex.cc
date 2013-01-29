#include "codex.hh"
#include "benchcodex.hh"
#include "cpu.hh"

void
initcodex(void)
{
  codex_trace_start();
  benchcodex::init();
}

unsigned int
codex::current_tid(void)
{
  // XXX: we don't inline this, so we don't have to include
  // cpu.hh in codex.hh.
  return myid();
}

bool codex::g_codex_trace_start = false;
unsigned int codex::g_atomic_section = 0;