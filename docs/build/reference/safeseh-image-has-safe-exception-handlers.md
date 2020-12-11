---
description: "Learn more about: /SAFESEH (Image has Safe Exception Handlers)"
title: "/SAFESEH (Image has Safe Exception Handlers)"
ms.date: "11/04/2016"
f1_keywords: ["/SAFESEH"]
helpviewer_keywords: ["/SAFESEH linker option", "-SAFESEH linker option", "SAFESEH linker option"]
ms.assetid: 7722ff99-b833-4c65-a855-aaca902ffcb7
---
# /SAFESEH (Image has Safe Exception Handlers)

```
/SAFESEH[:NO]
```

When **/SAFESEH** is specified, the linker will only produce an image if it can also produce a table of the image's safe exception handlers. This table specifies for the operating system which exception handlers are valid for the image.

**/SAFESEH** is only valid when linking for x86 targets. **/SAFESEH** is not supported for platforms that already have the exception handlers noted. For example, on x64 and ARM, all exception handlers are noted in the PDATA. ML64.exe has support for adding annotations that emit SEH information (XDATA and PDATA) into the image, allowing you to unwind through ml64 functions. See [MASM for x64 (ml64.exe)](../../assembler/masm/masm-for-x64-ml64-exe.md) for more information.

If **/SAFESEH** is not specified, the linker will produce an image with a table of safe exceptions handlers if all modules are compatible with the safe exception handling feature. If any modules were not compatible with safe exception handling feature, the resulting image will not contain a table of safe exception handlers. If [/SUBSYSTEM](subsystem-specify-subsystem.md) specifies WINDOWSCE or one of the EFI_* options, the linker will not attempt to produce an image with a table of safe exceptions handlers, as neither of those subsystems can make use of the information.

If **/SAFESEH:NO** is specified, the linker will not produce an image with a table of safe exceptions handlers even if all modules are compatible with the safe exception handling feature.

The most common reason for the linker not to be able to produce an image is because one or more of the input files (modules) to the linker was not compatible with the safe exception handlers feature. A common reason for a module to not be compatible with safe exception handlers is because it was created with a compiler from a previous version of Visual C++.

You can also register a function as a structured exception handler by using [.SAFESEH](../../assembler/masm/dot-safeseh.md).

It is not possible to mark an existing binary as having safe exception handlers (or no exception handlers); information on safe exception handling must be added at build time.

The linker's ability to build a table of safe exception handlers depends on the application using the C runtime library. If you link with [/NODEFAULTLIB](nodefaultlib-ignore-libraries.md) and you want a table of safe exception handlers, you need to supply a load config struct (such as can be found in loadcfg.c CRT source file) that contains all the entries defined for Visual C++. For example:

```
#include <windows.h>
extern DWORD_PTR __security_cookie;  /* /GS security cookie */

/*
* The following two names are automatically created by the linker for any
* image that has the safe exception table present.
*/

extern PVOID __safe_se_handler_table[]; /* base of safe handler entry table */
extern BYTE  __safe_se_handler_count;  /* absolute symbol whose address is
                                           the count of table entries */
typedef struct {
    DWORD       Size;
    DWORD       TimeDateStamp;
    WORD        MajorVersion;
    WORD        MinorVersion;
    DWORD       GlobalFlagsClear;
    DWORD       GlobalFlagsSet;
    DWORD       CriticalSectionDefaultTimeout;
    DWORD       DeCommitFreeBlockThreshold;
    DWORD       DeCommitTotalFreeThreshold;
    DWORD       LockPrefixTable;            // VA
    DWORD       MaximumAllocationSize;
    DWORD       VirtualMemoryThreshold;
    DWORD       ProcessHeapFlags;
    DWORD       ProcessAffinityMask;
    WORD        CSDVersion;
    WORD        Reserved1;
    DWORD       EditList;                   // VA
    DWORD_PTR   *SecurityCookie;
    PVOID       *SEHandlerTable;
    DWORD       SEHandlerCount;
} IMAGE_LOAD_CONFIG_DIRECTORY32_2;

const IMAGE_LOAD_CONFIG_DIRECTORY32_2 _load_config_used = {
    sizeof(IMAGE_LOAD_CONFIG_DIRECTORY32_2),
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    &__security_cookie,
    __safe_se_handler_table,
    (DWORD)(DWORD_PTR) &__safe_se_handler_count
};
```

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Linker** folder.

1. Select the **Command Line** property page.

1. Enter the option into the **Additional Options** box.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
