#ifndef CPP_DECL
#define CPP_DECL

#if defined(__cplusplus)
#define __BEGIN_DECLS extern "C" {
#define __END_DECLS   }
#else
#define __BEGIN_DECLS
#define __END_DECLS
#endif

#endif /*CPP_DECL*/
