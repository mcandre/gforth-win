/* engine/config.h.  Generated from config.h.in by configure.  */
/* engine/config.h.in.  Generated from configure.in by autoheader.  */

/* assembler comment start string */
#define ASMCOMMENT "# "

/* an integer type that is as long as a pointer */
#define CELL_TYPE int

/* default for environment variable GFORTHSYSTEMPREFIX */
#define DEFAULTSYSTEMPREFIX ""

/* a directory separator character */
#define DIRSEP '/'

/* an integer type that is twice as long as a pointer */
#define DOUBLE_CELL_TYPE long long

/* an unsigned integer type that is twice as long as a pointer */
#define DOUBLE_UCELL_TYPE unsigned long long

/* Define if you want to use explicit symmetric division for better
   performance */
/* #undef FORCE_CDIV */

/* defined if the platform does not need FORCE_REG */
/* #undef FORCE_REG_UNNECESSARY */

/* force (1) or forbid (0) use of a workaround for a gcc performance bug */
/* #undef GCC_PR15242_WORKAROUND */

/* Define to 1 if you have the <alloca.h> header file. */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the `atanh' function. */
#define HAVE_ATANH 1

/* Define to 1 if you have the declaration of `sys_siglist', and to 0 if you
   don't. */
#define HAVE_DECL_SYS_SIGLIST 0

/* Define to 1 if you have the `dlopen' function. */
#define HAVE_DLOPEN 1

/* Define to 1 if you have the `ecvt' function. */
#define HAVE_ECVT 1

/* Define to 1 if you have the `expm1' function. */
#define HAVE_EXPM1 1

/* Define to 1 if your system has a working POSIX `fnmatch' function. */
#define HAVE_FNMATCH 1

/* Define to 1 if you have the <fnmatch.h> header file. */
#define HAVE_FNMATCH_H 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if you have the `ftello' function. */
#define HAVE_FTELLO 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `avcall' library (-lavcall). */
#define HAVE_LIBAVCALL 1

/* Define to 1 if you have the `ffi' library (-lffi). */
#define HAVE_LIBFFI 1

/* Define to 1 if you have the `ltdl' library (-lltdl). */
#define HAVE_LIBLTDL 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `log1p' function. */
#define HAVE_LOG1P 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mmap' function. */
#define HAVE_MMAP 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the `pow10' function. */
/* #undef HAVE_POW10 */

/* Define to 1 if you have the `rint' function. */
#define HAVE_RINT 1

/* Define to 1 if the system has the type `stack_t'. */
/* #undef HAVE_STACK_T */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strsignal' function. */
#define HAVE_STRSIGNAL 1

/* Define to 1 if you have the `strtoul' function. */
#define HAVE_STRTOUL 1

/* Define to 1 if you have the `sysconf' function. */
#define HAVE_SYSCONF 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the `sys_siglist' function. */
/* #undef HAVE_SYS_SIGLIST */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the `wcwidth' function. */
#define HAVE_WCWIDTH 1

/* Define LTDL_LIBRARY_PATH for 64 bit Linux */
/* #undef LTDL_LIBRARY_PATH */

/* an environment variable value needed by libtool on some MacOS X versions */
/* #undef MACOSX_DEPLOYMENT_TARGET */

/* attribute for possibly unused variables */
#define MAYBE_UNUSED __attribute__((unused))

/* default value for no_dynamic */
#define NO_DYNAMIC_DEFAULT 0

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "https://savannah.gnu.org/bugs/?func=addbug&group=gforth"

/* Define to the full name of this package. */
#define PACKAGE_NAME "gforth"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "gforth 0.7.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gforth"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.7.0"

/* a path separator character */
#define PATHSEP ':'

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `char *', as computed by sizeof. */
#define SIZEOF_CHAR_P 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `int128_t', as computed by sizeof. */
#define SIZEOF_INT128_T 0

/* The size of `intptr_t', as computed by sizeof. */
#define SIZEOF_INTPTR_T 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `uint128_t', as computed by sizeof. */
#define SIZEOF_UINT128_T 0

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 4

/* statement for skipping 16 bytes */
#define SKIP16 asm(".skip 16")

/* 1 if off_t fits in a Cell */
#define SMALL_OFF_T 0

/* number of registers in the default stack cache state for gforth-fast and
   gforth-native */
#define STACK_CACHE_DEFAULT_FAST 1

/* number of registers in the maximum stack cache state for gforth-fast and
   gforth-native */
#define STACK_CACHE_REGS 1

/* Define if you want a Gforth without OS */
/* #undef STANDALONE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* an integer type that is 4 bytes long */
#define TETRABYTE_TYPE int

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */

/* an integer type that is 2 bytes long */
#define WYDE_TYPE short

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */
