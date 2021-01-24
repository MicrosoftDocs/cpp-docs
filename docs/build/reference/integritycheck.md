---
description: "Learn more about: /INTEGRITYCHECK"
title: "/INTEGRITYCHECK"
ms.date: "12/28/2017"
f1_keywords: ["/INTEGRITYCHECK"]
helpviewer_keywords: ["-INTEGRITYCHECK editbin options", "/INTEGRITYCHECK editbin options", "INTEGRITYCHECK editbin options"]
---
# /INTEGRITYCHECK

Specifies that the digital signature of the binary image must be checked at load time.

> **/INTEGRITYCHECK**[**:NO**]

## Remarks

In the header of the DLL file or executable file, this option sets a flag that requires a digital signature check by the memory manager to load the image in Windows. Versions of Windows prior to Windows Vista ignore this flag. This option must be set for 64-bit DLLs that implement kernel-mode code, and is recommended for all device drivers. For more information, see [Kernel-Mode Code Signing Requirements](/windows-hardware/drivers/install/kernel-mode-code-signing-requirements--windows-vista-and-later-).

## See also

[EDITBIN Options](editbin-options.md)
