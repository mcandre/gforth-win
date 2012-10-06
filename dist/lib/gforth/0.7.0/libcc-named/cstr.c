#include <gforth/0.7.0/libcc.h>
void cstr_LTX_gforth_c_cstr_ann_a(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[2]=(Cell)cstr((void *)(sp[2]),sp[1],sp[0]);
  gforth_SP = sp+2;
}
void cstr_LTX_gforth_c_tilde_cstr_ann_a(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[2]=(Cell)tilde_cstr((void *)(sp[2]),sp[1],sp[0]);
  gforth_SP = sp+2;
}
