/*++

Copyright (c) 1998  Intel Corporation

Module Name:

    efilibplat.h

Abstract:

    EFI to compile bindings




Revision History

--*/
#ifndef GNU_EFI_X86_64_EFILIBPLAT_H
#define GNU_EFI_X86_64_EFILIBPLAT_H

#include "cppdecl.h"

__BEGIN_DECLS

VOID
InitializeLibPlatform (
    IN EFI_HANDLE           ImageHandle,
    IN EFI_SYSTEM_TABLE     *SystemTable
    );

__END_DECLS

#endif /* GNU_EFI_X86_64_EFILIBPLAT_H */
