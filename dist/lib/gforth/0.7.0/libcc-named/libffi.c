#include <gforth/0.7.0/libcc.h>
#define MACOSX
#include <ffi.h>
#include <stdio.h>
static void **gforth_clist;
static void *gforth_ritem;
#ifndef HAS_BACKLINK
static void **saved_gforth_pointers;
#endif
typedef void *Label;
typedef Label *Xt;
static void gforth_callback_ffi(ffi_cif * cif, void * resp, void ** args, void * ip)
{
#ifndef HAS_BACKLINK
  void **gforth_pointers = saved_gforth_pointers;
#endif
  {
    Cell *rp1 = gforth_RP;
    Cell *sp = gforth_SP;
    Float *fp = gforth_FP;
    unsigned char *lp = gforth_LP;
    void ** clist = gforth_clist;
    void * ritem = gforth_ritem;

    gforth_clist = args;
    gforth_ritem = resp;

    gforth_engine((Xt *)ip, sp, rp1, fp, lp, gforth_UP);

    /* restore global variables */
    gforth_RP = rp1;
    gforth_SP = sp;
    gforth_FP = fp;
    gforth_LP = lp;
    gforth_clist = clist;
    gforth_ritem = ritem;
  }
}
static void* ffi_types[] =
    { &ffi_type_void,
      &ffi_type_uint8, &ffi_type_sint8,
      &ffi_type_uint16, &ffi_type_sint16,
      &ffi_type_uint32, &ffi_type_sint32,
      &ffi_type_uint64, &ffi_type_sint64,
      &ffi_type_float, &ffi_type_double, &ffi_type_longdouble,
      &ffi_type_pointer };
#define ffi_type(n) (ffi_types[n])
void libffi_LTX_gforth_c_ffi_type_n_a(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[0]=(Cell)ffi_type(sp[0]);
}
static int ffi_sizes[] = { sizeof(ffi_cif), sizeof(ffi_closure) };
#define ffi_size(n1) (ffi_sizes[n1])
void libffi_LTX_gforth_c_ffi_size_n_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[0]=ffi_size(sp[0]);
}
#define ffi_prep_cif1(atypes, n, rtype, cif) \
          ffi_prep_cif((ffi_cif *)cif, FFI_DEFAULT_ABI, n, \
                       (ffi_type *)rtype, (ffi_type **)atypes)
void libffi_LTX_gforth_c_ffi_prep_cif1_anaa_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[3]=ffi_prep_cif1((void *)(sp[3]),sp[2],(void *)(sp[1]),(void *)(sp[0]));
  gforth_SP = sp+3;
}
#ifdef HAS_BACKLINK
#define ffi_call1(a_avalues, a_rvalue ,a_ip ,a_cif) \
            ffi_call((ffi_cif *)a_cif, (void(*)())a_ip, \
                     (void *)a_rvalue, (void **)a_avalues)
#else
#define ffi_call1(a_avalues, a_rvalue ,a_ip ,a_cif) \
            (saved_gforth_pointers = gforth_pointers), \
            ffi_call((ffi_cif *)a_cif, (void(*)())a_ip, \
                     (void *)a_rvalue, (void **)a_avalues)
#endif
void libffi_LTX_gforth_c_ffi_call1_aaaa_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  ffi_call1((void *)(sp[3]),(void *)(sp[2]),(void *)(sp[1]),(void *)(sp[0]));
  gforth_SP = sp+4;
}
#define ffi_prep_closure1(a_ip, a_cif, a_closure) \
             ffi_prep_closure((ffi_closure *)a_closure, (ffi_cif *)a_cif, gforth_callback_ffi, (void *)a_ip)
void libffi_LTX_gforth_c_ffi_prep_closure1_aaa_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[2]=ffi_prep_closure1((void *)(sp[2]),(void *)(sp[1]),(void *)(sp[0]));
  gforth_SP = sp+2;
}
#define ffi_2fetch(a_addr) (*(long long *)a_addr)
void libffi_LTX_gforth_c_ffi_2fetch_a_d(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  gforth_ll2d(ffi_2fetch((void *)(sp[0])),sp[0],sp[-1]);
  gforth_SP = sp+-1;
}
#define ffi_2store(d,a_addr) ((*(long long *)a_addr) = (long long)d)
void libffi_LTX_gforth_c_ffi_2store_da_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  ffi_2store(gforth_d2ll(sp[2],sp[1]),(void *)(sp[0]));
  gforth_SP = sp+3;
}
#define ffi_arg_int() (*(int *)(*gforth_clist++))
void libffi_LTX_gforth_c_ffi_arg_int__n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[-1]=ffi_arg_int();
  gforth_SP = sp+-1;
}
#define ffi_arg_long() (*(long *)(*gforth_clist++))
void libffi_LTX_gforth_c_ffi_arg_long__n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[-1]=ffi_arg_long();
  gforth_SP = sp+-1;
}
#define ffi_arg_longlong() (*(long long *)(*gforth_clist++))
void libffi_LTX_gforth_c_ffi_arg_longlong__d(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  gforth_ll2d(ffi_arg_longlong(),sp[-1],sp[-2]);
  gforth_SP = sp+-2;
}
void libffi_LTX_gforth_c_ffi_arg_long__d(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  gforth_ll2d(ffi_arg_long(),sp[-1],sp[-2]);
  gforth_SP = sp+-2;
}
#define ffi_arg_ptr() (*(char **)(*gforth_clist++))
void libffi_LTX_gforth_c_ffi_arg_ptr__a(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[-1]=(Cell)ffi_arg_ptr();
  gforth_SP = sp+-1;
}
#define ffi_arg_float() (*(float *)(*gforth_clist++))
void libffi_LTX_gforth_c_ffi_arg_float__r(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  fp[-1]=ffi_arg_float();
  gforth_FP = fp+-1;
}
#define ffi_arg_double() (*(double *)(*gforth_clist++))
void libffi_LTX_gforth_c_ffi_arg_double__r(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  fp[-1]=ffi_arg_double();
  gforth_FP = fp+-1;
}
#define ffi_ret_int1(w) (*(int*)(gforth_ritem) = w)
void libffi_LTX_gforth_c_ffi_ret_int1_n_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  ffi_ret_int1(sp[0]);
  gforth_SP = sp+1;
}
#define ffi_ret_longlong1(d) (*(long long *)(gforth_ritem) = d)
void libffi_LTX_gforth_c_ffi_ret_longlong1_d_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  ffi_ret_longlong1(gforth_d2ll(sp[1],sp[0]));
  gforth_SP = sp+2;
}
#define ffi_ret_dlong1(d) (*(long *)(gforth_ritem) = d)
void libffi_LTX_gforth_c_ffi_ret_dlong1_d_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  ffi_ret_dlong1(gforth_d2ll(sp[1],sp[0]));
  gforth_SP = sp+2;
}
void libffi_LTX_gforth_c_ffi_ret_dlong1_n_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  ffi_ret_dlong1(sp[0]);
  gforth_SP = sp+1;
}
#define ffi_ret_ptr1(w) (*(char **)(gforth_ritem) = w)
void libffi_LTX_gforth_c_ffi_ret_ptr1_a_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  ffi_ret_ptr1((void *)(sp[0]));
  gforth_SP = sp+1;
}
#define ffi_ret_float1(r) (*(float *)(gforth_ritem) = r)
void libffi_LTX_gforth_c_ffi_ret_float1_r_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  ffi_ret_float1(fp[0]);
  gforth_FP = fp+1;
}
#define ffi_ret_double1(r) (*(double *)(gforth_ritem) = r)
void libffi_LTX_gforth_c_ffi_ret_double1_r_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  ffi_ret_double1(fp[0]);
  gforth_FP = fp+1;
}
