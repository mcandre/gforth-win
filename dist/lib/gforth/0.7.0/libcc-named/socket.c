#include <gforth/0.7.0/libcc.h>
#include <netdb.h>
void socket_LTX_gforth_c_gethostbyname_a_a(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[0]=(Cell)gethostbyname((void *)(sp[0]));
}
#include <unistd.h>
void socket_LTX_gforth_c_gethostname_an_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[1]=gethostname((void *)(sp[1]),sp[0]);
  gforth_SP = sp+1;
}
#include <errno.h>
#define get_errno() errno
void socket_LTX_gforth_c_get_errno__n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[-1]=get_errno();
  gforth_SP = sp+-1;
}
#include <sys/types.h>
#include <sys/socket.h>
void socket_LTX_gforth_c_socket_nnn_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[2]=socket(sp[2],sp[1],sp[0]);
  gforth_SP = sp+2;
}
void socket_LTX_gforth_c_close_n_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[0]=close(sp[0]);
}
void socket_LTX_gforth_c_connect_nan_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[2]=connect(sp[2],(void *)(sp[1]),sp[0]);
  gforth_SP = sp+2;
}
void socket_LTX_gforth_c_send_nann_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[3]=send(sp[3],(void *)(sp[2]),sp[1],sp[0]);
  gforth_SP = sp+3;
}
void socket_LTX_gforth_c_recv_nann_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[3]=recv(sp[3],(void *)(sp[2]),sp[1],sp[0]);
  gforth_SP = sp+3;
}
void socket_LTX_gforth_c_listen_nn_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[1]=listen(sp[1],sp[0]);
  gforth_SP = sp+1;
}
void socket_LTX_gforth_c_bind_nan_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[2]=bind(sp[2],(void *)(sp[1]),sp[0]);
  gforth_SP = sp+2;
}
void socket_LTX_gforth_c_accept_naa_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[2]=accept(sp[2],(void *)(sp[1]),(void *)(sp[0]));
  gforth_SP = sp+2;
}
#include <stdio.h>
void socket_LTX_gforth_c_fdopen_na_a(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[1]=(Cell)fdopen(sp[1],(void *)(sp[0]));
  gforth_SP = sp+1;
}
#include <fcntl.h>
void socket_LTX_gforth_c_fcntl_nnn_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[2]=fcntl(sp[2],sp[1],sp[0]);
  gforth_SP = sp+2;
}
#include <arpa/inet.h>
void socket_LTX_gforth_c_htonl_n_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[0]=htonl(sp[0]);
}
void socket_LTX_gforth_c_htons_n_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[0]=htons(sp[0]);
}
void socket_LTX_gforth_c_ntohl_n_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[0]=ntohl(sp[0]);
}
#define fileno1(file) fileno((FILE*)(file))
void socket_LTX_gforth_c_fileno1_a_n(GFORTH_ARGS)
{
  Cell MAYBE_UNUSED *sp = gforth_SP;
  Float MAYBE_UNUSED *fp = gforth_FP;
  sp[0]=fileno1((void *)(sp[0]));
}
