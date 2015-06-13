/* sys_config.h.  Generated from sys_config.h.in by configure.  */
/* sys_config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if failed storage trace checks should abort the simulation */
#define ABORT_ON_TRACE_FAILURE 1

/* Define to 1 if std::thread uses pthreads and pthread_sigmask is available
   */
#define CAN_USE_SIGMASK_ON_STD_THREAD 1

/* Define if storage trace checks should be disabled */
/* #undef DISABLE_TRACE_CHECKS */

/* Define to 1 if IEEE 754 software emulation should be used */
/* #undef EMULATE_IEEE754 */

/* Define to enable the banked memory model */
#define ENABLE_MEM_BANKED 1

/* Define to enable the cdma memory model */
#define ENABLE_MEM_CDMA 1

/* Define to enable the ddr memory model */
#define ENABLE_MEM_DDR 1

/* Define to enable the parallel memory model */
#define ENABLE_MEM_PARALLEL 1

/* Define to enable the serial memory model */
#define ENABLE_MEM_SERIAL 1

/* Define to enable the zlcdma memory model */
#define ENABLE_MEM_ZLCDMA 1

/* Define to 1 if /dev/ptmx is supported */
#define HAVE_DEV_PTMX 1

/* Define to 1 if dirfd(DIR*) is available. */
#define HAVE_DIRFD 1

/* Define to 1 if `d_fd' is a member of `DIR'. */
/* #undef HAVE_DIR_D_FD */

/* Define to 1 if you have the `fdopendir' function. */
#define HAVE_FDOPENDIR 1

/* Define to 1 if you have the `fsync' function. */
#define HAVE_FSYNC 1

/* define if the compiler supports GCC C++ ABI name demangling */
#define HAVE_GCC_ABI_DEMANGLE 1

/* Define to 1 if you have the `getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the `getpt' function. */
#define HAVE_GETPT 1

/* Define to 1 if you have the `getrusage' function. */
#define HAVE_GETRUSAGE 1

/* Define to 1 if you have the `grantpt' function. */
#define HAVE_GRANTPT 1

/* Define to 1 if you have the <history.h> header file. */
/* #undef HAVE_HISTORY_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have a readline compatible library */
#define HAVE_LIBREADLINE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `nanosleep' function. */
#define HAVE_NANOSLEEP 1

/* Define to 1 if you have the `posix_openpt' function. */
#define HAVE_POSIX_OPENPT 1

/* Define to 1 if termios.h is available */
#define HAVE_POSIX_TERMIOS 1

/* Define to 1 if /proc/self/statm should be used for memory statistics */
/* #undef HAVE_PROC_STATM */

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Define to 1 if you have the `pthread_sigmask' function. */
#define HAVE_PTHREAD_SIGMASK 1

/* Define to 1 if you have the `ptsname' function. */
#define HAVE_PTSNAME 1

/* Define to 1 if you have the <readline.h> header file. */
/* #undef HAVE_READLINE_H */

/* Define if your readline library has \`add_history' */
#define HAVE_READLINE_HISTORY 1

/* Define to 1 if you have the <readline/history.h> header file. */
#define HAVE_READLINE_HISTORY_H 1

/* Define to 1 if you have the <readline/readline.h> header file. */
#define HAVE_READLINE_READLINE_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if `d_ino' is a member of `struct dirent'. */
#define HAVE_STRUCT_DIRENT_D_INO 1

/* Define to 1 if `d_type' is a member of `struct dirent'. */
#define HAVE_STRUCT_DIRENT_D_TYPE 1

/* Define to 1 if `ru_maxrss' is a member of `struct rusage'. */
#define HAVE_STRUCT_RUSAGE_RU_MAXRSS 1

/* Define to 1 if `st_atimespec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMESPEC */

/* Define to 1 if `st_blksize' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1

/* Define to 1 if `st_blocks' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_BLOCKS 1

/* Define to 1 if `st_ctimespec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_CTIMESPEC */

/* Define to 1 if `st_mtimespec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_MTIMESPEC */

/* Define to 1 if `tm_gmtoff' is a member of `struct tm'. */
#define HAVE_STRUCT_TM_TM_GMTOFF 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the `tcgetattr' function. */
#define HAVE_TCGETATTR 1

/* Define to 1 if you have the `tcsetattr' function. */
#define HAVE_TCSETATTR 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unlockpt' function. */
#define HAVE_UNLOCKPT 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if __builtin_unreachable() is available. */
#define HAVE___BUILTIN_UNREACHABLE 1

/* Define to 1 if assertions should be disabled. */
/* #undef NDEBUG */

/* Define to the location of the `objdump' utility for MIPS (no MT). */
/* #undef OBJDUMP_MIPS32 */

/* Define to the location of the `objdump' utility for MIPSel (no MT). */
/* #undef OBJDUMP_MIPS32EL */

/* Define to the location of the `objdump' utility for MT-Alpha. */
/* #undef OBJDUMP_MTALPHA */

/* Define to the location of the `objdump' utility for MT-SPARC. */
/* #undef OBJDUMP_MTSPARC */

/* Define to the location of the `objdump' utility for OpenRISC 1000 (no MT).
   */
/* #undef OBJDUMP_OR1K */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "microgrids@svp-home.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "mgsim"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "mgsim 3.4.90-5937"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "mgsim"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.4.90-5937"

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to the value by which to divide rusage.ru_maxrss to obtain kilobytes
   */
#define RUSAGE_MAX_RSS_DIVIDER 1

/* Define to 1 if rusage.ru_maxrss stays 0, eg on Linux 2.x */
/* #undef RUSAGE_MAX_RSS_EMPTY */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define when building a simulator using the MIPS (no MT) core model. */
/* #undef TARGET_MIPS32 */

/* Define when building a simulator using the MIPSel (no MT) core model. */
/* #undef TARGET_MIPS32EL */

/* Define when building a simulator using the MT-Alpha core model. */
#define TARGET_MTALPHA 1

/* Define when building a simulator using the MT-SPARC core model. */
/* #undef TARGET_MTSPARC */

/* Define when building a simulator using the OpenRISC 1000 (no MT) core
   model. */
/* #undef TARGET_OR1K */

/* Define to unique_ptr if available, otherwise auto_ptr */
#define UNIQUE_PTR unique_ptr

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define if storage trace checks should fail verbosely */
#define VERBOSE_TRACE_CHECKS 1

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */
