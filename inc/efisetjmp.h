#ifndef GNU_EFI_SETJMP_H
#define GNU_EFI_SETJMP_H

#include "eficompiler.h"
#include "efisetjmp_arch.h"

#include "cppdecl.h"

__BEGIN_DECLS

extern UINTN setjmp(jmp_buf *env) __attribute__((returns_twice));
extern VOID longjmp(jmp_buf *env, UINTN value) __attribute__((noreturn));

__END_DECLS

#endif /* GNU_EFI_SETJMP_H */
