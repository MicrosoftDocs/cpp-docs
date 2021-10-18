---
title: "/DEPENDENTLOADFLAG (Set default dependent load flags)"
description: "The /DEPENDENTLOADFLAG option sets default dependent load flags for DLLs loaded by this module."
ms.date: "01/22/2020"
f1_keywords: ["dependentloadflag"]
helpviewer_keywords: ["LINK tool [C++], dependent load flags", "-DEPENDENTLOADFLAG linker option", "linker [C++], DEPENDENTLOADFLAG", "DEPENDENTLOADFLAG linker option", "/DEPENDENTLOADFLAG linker option"]
---
# /DEPENDENTLOADFLAG (Set default dependent load flags)

::: moniker range="msvc-140"

The **/DEPENDENTLOADFLAG** option requires Visual Studio 2017 or later.

::: moniker-end

::: moniker range=">=msvc-150"

Sets the default load flags used when the operating system resolves the statically linked imports of a module.

## Syntax

> **/DEPENDENTLOADFLAG**[__:__*load_flags*]

### Arguments

*load_flags*<br/>
An optional integer value that specifies the load flags to apply when resolving statically linked import dependencies of the module. The default value is 0. For a list of supported flag values, see the `LOAD_LIBRARY_SEARCH_*` entries in [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw).

## Remarks

When the operating system resolves the statically linked imports of a module, it uses the [default search order](/windows/win32/dlls/dynamic-link-library-search-order). Use the **/DEPENDENTLOADFLAG** option to specify a *load_flags* value that changes the search path used to resolve these imports. On supported operating systems, it changes the static import resolution search order, similar to what [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexa) does when using `LOAD_LIBRARY_SEARCH` parameters. For information on the search order set by *load_flags*, see [Search order using LOAD_LIBRARY_SEARCH flags](/windows/win32/dlls/dynamic-link-library-search-order#search-order-using-load_library_search-flags).

This flag can be used to make one [DLL planting attack](/windows/win32/dlls/dynamic-link-library-security) vector more difficult. For example, consider an app that has statically linked a DLL:

- An attacker could plant a DLL with the same name earlier in the import resolution search path, such as the application directory. Protected directories are more difficult - but not impossible - for an attacker to change.

- If the DLL is missing from the application, %windows%\system32, and %windows% directories, import resolution falls through to the current directory. An attacker could plant a DLL there.

In both cases, if you specify the link option `/DEPENDENTLOADFLAG:0x800` (the value of the flag `LOAD_LIBRARY_SEARCH_SYSTEM32`), then the module search path is limited to the %windows%\system32 directory. It offers some protection from planting attacks on the other directories. For more information, see [Dynamic-Link Library Security](/windows/win32/dlls/dynamic-link-library-security).

To see the value set by the **/DEPENDENTLOADFLAG** option in any DLL, use the [DUMPBIN](dumpbin-reference.md) command with the [/LOADCONFIG](loadconfig.md) option.

The **/DEPENDENTLOADFLAG** option is new in Visual Studio 2017. It applies only to apps running on Windows 10 RS1 and later Windows versions. This option is ignored by other operating systems that run the app.

### To set the DEPENDENTLOADFLAG linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the option in **Additional Options**.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

- [MSVC linker reference](linking.md)
- [MSVC linker options](linker-options.md)
- [Link an executable to a DLL implicitly](../linking-an-executable-to-a-dll.md#linking-implicitly)
- [Determine which linking method to use](../linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)
- [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw)
- [Dynamic-Link Library Search Order](/windows/win32/Dlls/dynamic-link-library-search-order)
- [Dynamic-Link Library Security](/windows/win32/dlls/dynamic-link-library-security)

::: moniker-end
