#include <gforth/0.7.0/libcc.h>
#include <avcall.h>
#include <callback.h>
static av_alist alist;
static va_alist gforth_clist;
#ifndef HAS_BACKLINK
static void **saved_gforth_pointers;
#endif
static float frv;
static int irv;
static double drv;
static long long llrv;
static void * prv;
typedef void *Label;
typedef Label *Xt;

void gforth_callback_ffcall(Xt* fcall, void * alist)
{
#ifndef HAS_BACKLINK
  void **gforth_pointers = saved_gforth_pointers;
#endif
  {
    /* save global valiables */
    Cell *rp = gforth_RP;
    Cell *sp = gforth_SP;
    Float *fp = gforth_FP;
    char *lp = gforth_LP;
    va_alist clist = gforth_clist;

    gforth_clist = (va_alist)alist;

    gforth_engine(fcall, sp, rp, fp, lp, gforth_UP);

    /* restore global variables */
    gforth_RP = rp;
    gforth_SP = sp;
    gforth_FP = fp;
    gforth_LP = lp;
    gforth_clist = clist;
  }
}
#define av_start_void1(c_addr) av_start_void(alist, c_addr)
void fflib_LTX_gforth_c_av_start_void1_a_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_start_void1((void *)(sp[0]));
  gforth_SP = sp+1;
}
#define av_start_int1(c_addr) av_start_int(alist, c_addr, &irv)
void fflib_LTX_gforth_c_av_start_int1_a_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_start_int1((void *)(sp[0]));
  gforth_SP = sp+1;
}
#define av_start_float1(c_addr) av_start_float(alist, c_addr, &frv)
void fflib_LTX_gforth_c_av_start_float1_a_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_start_float1((void *)(sp[0]));
  gforth_SP = sp+1;
}
#define av_start_double1(c_addr) av_start_double(alist, c_addr, &drv)
void fflib_LTX_gforth_c_av_start_double1_a_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_start_double1((void *)(sp[0]));
  gforth_SP = sp+1;
}
#define av_start_longlong1(c_addr) av_start_longlong(alist, c_addr, &llrv)
void fflib_LTX_gforth_c_av_start_longlong1_a_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_start_longlong1((void *)(sp[0]));
  gforth_SP = sp+1;
}
#define av_start_ptr1(c_addr) av_start_ptr(alist, c_addr, void *, &prv)
void fflib_LTX_gforth_c_av_start_ptr1_a_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_start_ptr1((void *)(sp[0]));
  gforth_SP = sp+1;
}
#define av_int1(w) av_int(alist,w)
void fflib_LTX_gforth_c_av_int1_n_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_int1(sp[0]);
  gforth_SP = sp+1;
}
#define av_float1(r) av_float(alist,r)
void fflib_LTX_gforth_c_av_float1_r_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_float1(fp[0]);
  gforth_FP = fp+1;
}
#define av_double1(r) av_double(alist,r)
void fflib_LTX_gforth_c_av_double1_r_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_double1(fp[0]);
  gforth_FP = fp+1;
}
#define av_longlong1(d) av_longlong(alist,d)
void fflib_LTX_gforth_c_av_longlong1_d_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_longlong1(gforth_d2ll(sp[1],sp[0]));
  gforth_SP = sp+2;
}
#define av_ptr1(a) av_ptr(alist, void *, a)
void fflib_LTX_gforth_c_av_ptr1_a_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_ptr1((void *)(sp[0]));
  gforth_SP = sp+1;
}
#define av_call_void() av_call(alist)
void fflib_LTX_gforth_c_av_call_void__v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  av_call_void();
}
#define av_call_int() (av_call(alist), irv)
void fflib_LTX_gforth_c_av_call_int__n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[-1]=av_call_int();
  gforth_SP = sp+-1;
}
#define av_call_float() (av_call(alist), frv)
void fflib_LTX_gforth_c_av_call_float__r(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  fp[-1]=av_call_float();
  gforth_FP = fp+-1;
}
#define av_call_double() (av_call(alist), drv)
void fflib_LTX_gforth_c_av_call_double__r(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  fp[-1]=av_call_double();
  gforth_FP = fp+-1;
}
#define av_call_longlong() (av_call(alist), llrv)
void fflib_LTX_gforth_c_av_call_longlong__d(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  gforth_ll2d(av_call_longlong(),sp[-1],sp[-2]);
  gforth_SP = sp+-2;
}
#define av_call_ptr() (av_call(alist), prv)
void fflib_LTX_gforth_c_av_call_ptr__a(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[-1]=(Cell)av_call_ptr();
  gforth_SP = sp+-1;
}
#define alloc_callback1(a_ip) alloc_callback(gforth_callback_ffcall, (Xt *)a_ip)
void fflib_LTX_gforth_c_alloc_callback1_a_a(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[0]=(Cell)alloc_callback1((void *)(sp[0]));
}
#define va_start_void1() va_start_void(gforth_clist)
void fflib_LTX_gforth_c_va_start_void1__v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_start_void1();
}
#define va_start_int1() va_start_int(gforth_clist)
void fflib_LTX_gforth_c_va_start_int1__v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_start_int1();
}
#define va_start_longlong1() va_start_longlong(gforth_clist)
void fflib_LTX_gforth_c_va_start_longlong1__v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_start_longlong1();
}
#define va_start_ptr1() va_start_ptr(gforth_clist, (char *))
void fflib_LTX_gforth_c_va_start_ptr1__v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_start_ptr1();
}
#define va_start_float1() va_start_float(gforth_clist)
void fflib_LTX_gforth_c_va_start_float1__v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_start_float1();
}
#define va_start_double1() va_start_double(gforth_clist)
void fflib_LTX_gforth_c_va_start_double1__v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_start_double1();
}
#define va_arg_int1() va_arg_int(gforth_clist)
void fflib_LTX_gforth_c_va_arg_int1__n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[-1]=va_arg_int1();
  gforth_SP = sp+-1;
}
#define va_arg_longlong1() va_arg_longlong(gforth_clist)
void fflib_LTX_gforth_c_va_arg_longlong1__d(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  gforth_ll2d(va_arg_longlong1(),sp[-1],sp[-2]);
  gforth_SP = sp+-2;
}
#define va_arg_ptr1() va_arg_ptr(gforth_clist, char *)
void fflib_LTX_gforth_c_va_arg_ptr1__a(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[-1]=(Cell)va_arg_ptr1();
  gforth_SP = sp+-1;
}
#define va_arg_float1() va_arg_float(gforth_clist)
void fflib_LTX_gforth_c_va_arg_float1__r(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  fp[-1]=va_arg_float1();
  gforth_FP = fp+-1;
}
#define va_arg_double1() va_arg_double(gforth_clist)
void fflib_LTX_gforth_c_va_arg_double1__r(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  fp[-1]=va_arg_double1();
  gforth_FP = fp+-1;
}
#define va_return_void1() va_return_void(gforth_clist)
void fflib_LTX_gforth_c_va_return_void1__v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_return_void1();
}
#define va_return_int1(w) va_return_int(gforth_clist,w)
void fflib_LTX_gforth_c_va_return_int1_n_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_return_int1(sp[0]);
  gforth_SP = sp+1;
}
#define va_return_ptr1(w) va_return_ptr(gforth_clist, void *, w)
void fflib_LTX_gforth_c_va_return_ptr1_a_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_return_ptr1((void *)(sp[0]));
  gforth_SP = sp+1;
}
#define va_return_longlong1(d) va_return_longlong(gforth_clist,d)
void fflib_LTX_gforth_c_va_return_longlong1_d_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_return_longlong1(gforth_d2ll(sp[1],sp[0]));
  gforth_SP = sp+2;
}
#define va_return_float1(r) va_return_float(gforth_clist,r)
void fflib_LTX_gforth_c_va_return_float1_r_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_return_float1(fp[0]);
  gforth_FP = fp+1;
}
#define va_return_double1(r) va_return_double(gforth_clist,r)
void fflib_LTX_gforth_c_va_return_double1_r_v(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  va_return_double1(fp[0]);
  gforth_FP = fp+1;
}
