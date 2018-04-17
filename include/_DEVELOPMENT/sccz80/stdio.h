
// automatically generated by m4 from headers in proto subdir


#ifndef __STDIO_H__
#define __STDIO_H__

#include <stdint.h>

// DATA STRUCTURES

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef unsigned int    size_t;
#endif

typedef unsigned long   fpos_t;
typedef struct { unsigned char file[13];} FILE;

#ifndef NULL
#define NULL            ((void*)(0))
#endif

#define _IOFBF          0
#define _IOLBF          1
#define _IONBF          2

#define BUFSIZ          1      // clib does not do high level buffering

#define EOF             (-1)

extern unsigned char    _MAX_FOPEN[];
#define FOPEN_MAX       ((unsigned int)_MAX_FOPEN)

#define FILENAME_MAX    128

#define L_tmpnam        8
#define TMP_MAX         16

#ifndef SEEK_SET
#define SEEK_SET        0
#endif

#ifndef SEEK_CUR
#define SEEK_CUR        1
#endif

#ifndef SEEK_END
#define SEEK_END        2
#endif

extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

#ifdef __CPM

extern FILE *stdrdr;
extern FILE *stdpun;
extern FILE *stdlst;

#endif

#ifdef __RC2014

extern FILE *ttyin;
extern FILE *ttyout;
extern FILE *ttyerr;

#endif

#ifdef __YAZ180

extern FILE *ttyin;
extern FILE *ttyout;
extern FILE *ttyerr;

#endif

// FUNCTIONS

extern FILE __LIB__ *_fmemopen_(void **bufp,size_t *sizep,char *mode) __smallc;
extern FILE __LIB__ *_fmemopen__callee(void **bufp,size_t *sizep,char *mode) __smallc __z88dk_callee;
#define _fmemopen_(a,b,c) _fmemopen__callee(a,b,c)


extern int __LIB__ asprintf(char **ptr,char *format,...) __smallc;


extern void __LIB__ clearerr(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ fclose(FILE *stream) __smallc __z88dk_fastcall;


extern FILE __LIB__ *fdopen(int fd,const char *mode) __smallc;
extern FILE __LIB__ *fdopen_callee(int fd,const char *mode) __smallc __z88dk_callee;
#define fdopen(a,b) fdopen_callee(a,b)


extern int __LIB__ feof(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ ferror(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ fflush(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ fgetc(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ fgetpos(FILE *stream,fpos_t *pos) __smallc;
extern int __LIB__ fgetpos_callee(FILE *stream,fpos_t *pos) __smallc __z88dk_callee;
#define fgetpos(a,b) fgetpos_callee(a,b)


extern char __LIB__ *fgets(char *s,int n,FILE *stream) __smallc;
extern char __LIB__ *fgets_callee(char *s,int n,FILE *stream) __smallc __z88dk_callee;
#define fgets(a,b,c) fgets_callee(a,b,c)


extern int __LIB__ fileno(FILE *stream) __smallc __z88dk_fastcall;


extern void __LIB__ flockfile(FILE *stream) __smallc __z88dk_fastcall;


extern FILE __LIB__ *fmemopen(void *buf,size_t size,char *mode) __smallc;
extern FILE __LIB__ *fmemopen_callee(void *buf,size_t size,char *mode) __smallc __z88dk_callee;
#define fmemopen(a,b,c) fmemopen_callee(a,b,c)


extern FILE __LIB__ *fopen(const char *filename,const char *mode) __smallc;
extern FILE __LIB__ *fopen_callee(const char *filename,const char *mode) __smallc __z88dk_callee;
#define fopen(a,b) fopen_callee(a,b)


extern int __LIB__ fprintf(FILE *stream,char *format,...) __smallc;


extern int __LIB__ fputc(int c,FILE *stream) __smallc;
extern int __LIB__ fputc_callee(int c,FILE *stream) __smallc __z88dk_callee;
#define fputc(a,b) fputc_callee(a,b)


extern int __LIB__ fputs(char *s,FILE *stream) __smallc;
extern int __LIB__ fputs_callee(char *s,FILE *stream) __smallc __z88dk_callee;
#define fputs(a,b) fputs_callee(a,b)


extern size_t __LIB__ fread(void *ptr,size_t size,size_t nmemb,FILE *stream) __smallc;
extern size_t __LIB__ fread_callee(void *ptr,size_t size,size_t nmemb,FILE *stream) __smallc __z88dk_callee;
#define fread(a,b,c,d) fread_callee(a,b,c,d)


extern FILE __LIB__ *freopen(char *filename,char *mode,FILE *stream) __smallc;
extern FILE __LIB__ *freopen_callee(char *filename,char *mode,FILE *stream) __smallc __z88dk_callee;
#define freopen(a,b,c) freopen_callee(a,b,c)


extern int __LIB__ fscanf(FILE *stream,char *format,...) __smallc;


extern int __LIB__ fseek(FILE *stream,long offset,int whence) __smallc;
extern int __LIB__ fseek_callee(FILE *stream,long offset,int whence) __smallc __z88dk_callee;
#define fseek(a,b,c) fseek_callee(a,b,c)


extern int __LIB__ fsetpos(FILE *stream,fpos_t *pos) __smallc;
extern int __LIB__ fsetpos_callee(FILE *stream,fpos_t *pos) __smallc __z88dk_callee;
#define fsetpos(a,b) fsetpos_callee(a,b)


extern uint32_t __LIB__ ftell(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ ftrylockfile(FILE *stream) __smallc __z88dk_fastcall;


extern void __LIB__ funlockfile(FILE *stream) __smallc __z88dk_fastcall;


extern size_t __LIB__ fwrite(void *ptr,size_t size,size_t nmemb,FILE *stream) __smallc;
extern size_t __LIB__ fwrite_callee(void *ptr,size_t size,size_t nmemb,FILE *stream) __smallc __z88dk_callee;
#define fwrite(a,b,c,d) fwrite_callee(a,b,c,d)


extern int __LIB__ getc(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ getchar(void) __smallc;


extern int __LIB__ getdelim(char **lineptr,size_t *n,int delim,FILE *stream) __smallc;
extern int __LIB__ getdelim_callee(char **lineptr,size_t *n,int delim,FILE *stream) __smallc __z88dk_callee;
#define getdelim(a,b,c,d) getdelim_callee(a,b,c,d)


extern int __LIB__ getline(char **lineptr,size_t *n,FILE *stream) __smallc;
extern int __LIB__ getline_callee(char **lineptr,size_t *n,FILE *stream) __smallc __z88dk_callee;
#define getline(a,b,c) getline_callee(a,b,c)


extern char __LIB__ *gets(char *s) __smallc __z88dk_fastcall;


extern int __LIB__ obstack_printf(struct obstack *ob,char *format,...) __smallc;


extern int __LIB__ obstack_vprintf(struct obstack *ob,char *format,void *arg) __smallc;
extern int __LIB__ obstack_vprintf_callee(struct obstack *ob,char *format,void *arg) __smallc __z88dk_callee;
#define obstack_vprintf(a,b,c) obstack_vprintf_callee(a,b,c)


extern FILE __LIB__ *open_memstream(char **bufp,size_t *sizep) __smallc;
extern FILE __LIB__ *open_memstream_callee(char **bufp,size_t *sizep) __smallc __z88dk_callee;
#define open_memstream(a,b) open_memstream_callee(a,b)


extern void __LIB__ perror(char *s) __smallc __z88dk_fastcall;


extern int __LIB__ printf(char *format,...) __smallc;


extern int __LIB__ putc(int c,FILE *stream) __smallc;
extern int __LIB__ putc_callee(int c,FILE *stream) __smallc __z88dk_callee;
#define putc(a,b) putc_callee(a,b)


extern int __LIB__ putchar(int c) __smallc __z88dk_fastcall;


extern int __LIB__ puts(char *s) __smallc __z88dk_fastcall;


extern void __LIB__ rewind(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ scanf(char *format,...) __smallc;


extern int __LIB__ snprintf(char *s,size_t n,char *format,...) __smallc;


extern int __LIB__ sprintf(char *s,char *format,...) __smallc;


extern int __LIB__ sscanf(char *s,char *format,...) __smallc;


extern int __LIB__ ungetc(int c,FILE *stream) __smallc;
extern int __LIB__ ungetc_callee(int c,FILE *stream) __smallc __z88dk_callee;
#define ungetc(a,b) ungetc_callee(a,b)


extern int __LIB__ vasprintf(char **ptr,char *format,void *arg) __smallc;
extern int __LIB__ vasprintf_callee(char **ptr,char *format,void *arg) __smallc __z88dk_callee;
#define vasprintf(a,b,c) vasprintf_callee(a,b,c)


extern int __LIB__ vfprintf(FILE *stream,char *format,void *arg) __smallc;
extern int __LIB__ vfprintf_callee(FILE *stream,char *format,void *arg) __smallc __z88dk_callee;
#define vfprintf(a,b,c) vfprintf_callee(a,b,c)


extern int __LIB__ vfscanf(FILE *stream,char *format,void *arg) __smallc;
extern int __LIB__ vfscanf_callee(FILE *stream,char *format,void *arg) __smallc __z88dk_callee;
#define vfscanf(a,b,c) vfscanf_callee(a,b,c)


extern int __LIB__ vprintf(char *format,void *arg) __smallc;
extern int __LIB__ vprintf_callee(char *format,void *arg) __smallc __z88dk_callee;
#define vprintf(a,b) vprintf_callee(a,b)


extern int __LIB__ vscanf(char *format,void *arg) __smallc;
extern int __LIB__ vscanf_callee(char *format,void *arg) __smallc __z88dk_callee;
#define vscanf(a,b) vscanf_callee(a,b)


extern int __LIB__ vsnprintf(char *s,size_t n,char *format,void *arg) __smallc;
extern int __LIB__ vsnprintf_callee(char *s,size_t n,char *format,void *arg) __smallc __z88dk_callee;
#define vsnprintf(a,b,c,d) vsnprintf_callee(a,b,c,d)


extern int __LIB__ vsprintf(char *s,char *format,void *arg) __smallc;
extern int __LIB__ vsprintf_callee(char *s,char *format,void *arg) __smallc __z88dk_callee;
#define vsprintf(a,b,c) vsprintf_callee(a,b,c)


extern int __LIB__ vsscanf(char *s,char *format,void *arg) __smallc;
extern int __LIB__ vsscanf_callee(char *s,char *format,void *arg) __smallc __z88dk_callee;
#define vsscanf(a,b,c) vsscanf_callee(a,b,c)



extern void __LIB__ clearerr_unlocked(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ fclose_unlocked(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ feof_unlocked(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ ferror_unlocked(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ fflush_unlocked(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ fgetc_unlocked(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ fgetpos_unlocked(FILE *stream,fpos_t *pos) __smallc;
extern int __LIB__ fgetpos_unlocked_callee(FILE *stream,fpos_t *pos) __smallc __z88dk_callee;
#define fgetpos_unlocked(a,b) fgetpos_unlocked_callee(a,b)


extern char __LIB__ *fgets_unlocked(char *s,int n,FILE *stream) __smallc;
extern char __LIB__ *fgets_unlocked_callee(char *s,int n,FILE *stream) __smallc __z88dk_callee;
#define fgets_unlocked(a,b,c) fgets_unlocked_callee(a,b,c)


extern int __LIB__ fileno_unlocked(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ fprintf_unlocked(FILE *stream,char *format,...) __smallc;


extern int __LIB__ fputc_unlocked(int c,FILE *stream) __smallc;
extern int __LIB__ fputc_unlocked_callee(int c,FILE *stream) __smallc __z88dk_callee;
#define fputc_unlocked(a,b) fputc_unlocked_callee(a,b)


extern int __LIB__ fputs_unlocked(char *s,FILE *stream) __smallc;
extern int __LIB__ fputs_unlocked_callee(char *s,FILE *stream) __smallc __z88dk_callee;
#define fputs_unlocked(a,b) fputs_unlocked_callee(a,b)


extern size_t __LIB__ fread_unlocked(void *ptr,size_t size,size_t nmemb,FILE *stream) __smallc;
extern size_t __LIB__ fread_unlocked_callee(void *ptr,size_t size,size_t nmemb,FILE *stream) __smallc __z88dk_callee;
#define fread_unlocked(a,b,c,d) fread_unlocked_callee(a,b,c,d)


extern FILE __LIB__ *freopen_unlocked(char *filename,char *mode,FILE *stream) __smallc;
extern FILE __LIB__ *freopen_unlocked_callee(char *filename,char *mode,FILE *stream) __smallc __z88dk_callee;
#define freopen_unlocked(a,b,c) freopen_unlocked_callee(a,b,c)


extern int __LIB__ fscanf_unlocked(FILE *stream,char *format,...) __smallc;


extern int __LIB__ fseek_unlocked(FILE *stream,long offset,int whence) __smallc;
extern int __LIB__ fseek_unlocked_callee(FILE *stream,long offset,int whence) __smallc __z88dk_callee;
#define fseek_unlocked(a,b,c) fseek_unlocked_callee(a,b,c)


extern int __LIB__ fsetpos_unlocked(FILE *stream,fpos_t *pos) __smallc;
extern int __LIB__ fsetpos_unlocked_callee(FILE *stream,fpos_t *pos) __smallc __z88dk_callee;
#define fsetpos_unlocked(a,b) fsetpos_unlocked_callee(a,b)


extern uint32_t __LIB__ ftell_unlocked(FILE *stream) __smallc __z88dk_fastcall;


extern size_t __LIB__ fwrite_unlocked(void *ptr,size_t size,size_t nmemb,FILE *stream) __smallc;
extern size_t __LIB__ fwrite_unlocked_callee(void *ptr,size_t size,size_t nmemb,FILE *stream) __smallc __z88dk_callee;
#define fwrite_unlocked(a,b,c,d) fwrite_unlocked_callee(a,b,c,d)


extern int __LIB__ getc_unlocked(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ getchar_unlocked(void) __smallc;


extern int __LIB__ getdelim_unlocked(char **lineptr,size_t *n,int delim,FILE *stream) __smallc;
extern int __LIB__ getdelim_unlocked_callee(char **lineptr,size_t *n,int delim,FILE *stream) __smallc __z88dk_callee;
#define getdelim_unlocked(a,b,c,d) getdelim_unlocked_callee(a,b,c,d)


extern int __LIB__ getline_unlocked(char **lineptr,size_t *n,FILE *stream) __smallc;
extern int __LIB__ getline_unlocked_callee(char **lineptr,size_t *n,FILE *stream) __smallc __z88dk_callee;
#define getline_unlocked(a,b,c) getline_unlocked_callee(a,b,c)


extern char __LIB__ *gets_unlocked(char *s) __smallc __z88dk_fastcall;


extern int __LIB__ printf_unlocked(char *format,...) __smallc;


extern int __LIB__ putc_unlocked(int c,FILE *stream) __smallc;
extern int __LIB__ putc_unlocked_callee(int c,FILE *stream) __smallc __z88dk_callee;
#define putc_unlocked(a,b) putc_unlocked_callee(a,b)


extern int __LIB__ putchar_unlocked(int c) __smallc __z88dk_fastcall;


extern int __LIB__ puts_unlocked(char *s) __smallc __z88dk_fastcall;


extern void __LIB__ rewind_unlocked(FILE *stream) __smallc __z88dk_fastcall;


extern int __LIB__ scanf_unlocked(char *format,...) __smallc;


extern int __LIB__ ungetc_unlocked(int c,FILE *stream) __smallc;
extern int __LIB__ ungetc_unlocked_callee(int c,FILE *stream) __smallc __z88dk_callee;
#define ungetc_unlocked(a,b) ungetc_unlocked_callee(a,b)


extern int __LIB__ vfprintf_unlocked(FILE *stream,char *format,void *arg) __smallc;
extern int __LIB__ vfprintf_unlocked_callee(FILE *stream,char *format,void *arg) __smallc __z88dk_callee;
#define vfprintf_unlocked(a,b,c) vfprintf_unlocked_callee(a,b,c)


extern int __LIB__ vfscanf_unlocked(FILE *stream,char *format,void *arg) __smallc;
extern int __LIB__ vfscanf_unlocked_callee(FILE *stream,char *format,void *arg) __smallc __z88dk_callee;
#define vfscanf_unlocked(a,b,c) vfscanf_unlocked_callee(a,b,c)


extern int __LIB__ vprintf_unlocked(char *format,void *arg) __smallc;
extern int __LIB__ vprintf_unlocked_callee(char *format,void *arg) __smallc __z88dk_callee;
#define vprintf_unlocked(a,b) vprintf_unlocked_callee(a,b)


extern int __LIB__ vscanf_unlocked(char *format,void *arg) __smallc;
extern int __LIB__ vscanf_unlocked_callee(char *format,void *arg) __smallc __z88dk_callee;
#define vscanf_unlocked(a,b) vscanf_unlocked_callee(a,b)



#endif
