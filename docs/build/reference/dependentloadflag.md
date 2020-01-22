---
title: "/DEPENDENTLOADFLAG (Set default dependent load flags)"
description: "The /DEPENDENTLOADFLAG option sets default dependent load flags for DLLs loaded by this module."
ms.date: "01/22/2020"
f1_keywords: ["dependentloadflag"]
helpviewer_keywords: ["LINK tool [C++], dependent load flags", "-DEPENDENTLOADFLAG linker option", "linker [C++], DEPENDENTLOADFLAG", "DEPENDENTLOADFLAG linker option", "/DEPENDENTLOADFLAG linker option"]
---
# /DEPENDENTLOADFLAG (Set default dependent load flags)

::: moniker range="vs-2015"

The **/DEPENDENTLOADFLAG** option requires Visual Studio 2017 or later.

::: moniker-end

::: moniker range=">=vs-2017"

Sets the default load flags used when the imports of the module are resolved.

## Syntax

> **/DEPENDENTLOADFLAG**[__:__*load_flags*]

### Arguments

*load_flags*<br/>
An optional integer value that specifies the load flags to apply when resolving import dependencies of the module. The default value is 0. For a list of supported values, see the `LOAD_LIBRARY_SEARCH_*` entries in [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw).

## Remarks

When the operating system resolves the imports of a module, it uses the [default search order](/windows/win32/dlls/dynamic-link-library-search-order). This behavior is similar to the behavior of [LoadLibrary](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibrarya). The **/DEPENDENTLOADFLAG** option specifies a *load_flags* value that changes the search path used to resolve imports. On supported operating systems, it makes import resolution behave more like [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexa). For information on the search order set by *load_flags*, see [Search order using LOAD_LIBRARY_SEARCH flags](/windows/win32/dlls/dynamic-link-library-search-order#search-order-using-load_library_search-flags).

This flag can be used to make [DLL planting attacks](/windows/win32/dlls/dynamic-link-library-security) more difficult. For example, consider an app that imports a dependent DLL. An attacker could plant a DLL with the same name earlier in the import resolution search path, such as the application directory. If you specify the link option `/DEPENDENTLOADFLAG:0x800` (the value of the flag `LOAD_LIBRARY_SEARCH_SYSTEM32`), then the module search path is limited to the %windows%\system32 directory. Protected directories are more difficult - but not impossible - for an attacker to change.

**/DEPENDENTLOADFLAG** is no substitute for defense in depth. For more information, see [Dynamic-Link Library Security](/windows/win32/dlls/dynamic-link-library-security).

The **/DEPENDENTLOADFLAG** option is new in Visual Studio 2017. It applies only to apps running on Windows 10 RS1 and later versions. This option is ignored by other operating systems that run the app.

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
