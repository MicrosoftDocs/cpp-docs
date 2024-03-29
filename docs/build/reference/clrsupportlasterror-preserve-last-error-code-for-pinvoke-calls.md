---
description: "Learn more about: /CLRSUPPORTLASTERROR (Preserve Last Error Code for PInvoke Calls)"
title: "/CLRSUPPORTLASTERROR (Preserve Last Error Code for PInvoke Calls)"
ms.date: 09/19/2022
f1_keywords: ["VC.Project.VCLinkerTool.CLRSupportLastError", "/CLRSUPPORTLASTERROR"]
helpviewer_keywords: ["/CLRSUPPORTLASTERROR linker option", "-CLRSUPPORTLASTERROR linker option"]
ms.assetid: b7057990-4154-4b1d-9fc9-6236f7be7575
---
# `/CLRSUPPORTLASTERROR` (Preserve Last Error Code for PInvoke Calls)

**`/CLRSUPPORTLASTERROR`**, which is on by default, preserves the last error code of functions called through the P/Invoke mechanism, which allows you to call native functions in DLLS, from code compiled with **`/clr`**.

## Syntax

> **`/CLRSUPPORTLASTERROR`**\
> **`/CLRSUPPORTLASTERROR:NO`**\
> **`/CLRSUPPORTLASTERROR:SYSTEMDLL`**

## Remarks

Preserving the last error code implies a decrease in performance.  If you don't want to incur the performance cost of preserving the last error code, link by using **`/CLRSUPPORTLASTERROR:NO`**.

You can minimize the performance penalty by linking with **`/CLRSUPPORTLASTERROR:SYSTEMDLL`**, which only preserves the last error code for functions in system DLLs.

> [!NOTE]
> Preserving the last error isn't supported for unmanaged functions that are consumed by CLR code in the same module.

- For more information, see [`/clr` (Common Language Runtime Compilation)](clr-common-language-runtime-compilation.md).

### To set this linker option in the Visual Studio development environment

1. Open the **Property Pages** dialog box for the project. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Advanced** property page.

1. Modify the **Preserve Last Error Code for PInvoke Calls** property. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## Examples

The following sample defines a native DLL with one exported function that modifies last error.

```cpp
// CLRSUPPORTLASTERROR_dll.cpp
// compile with: /LD
#include <windows.h>
#include <math.h>

#pragma unmanaged
__declspec(dllexport) double MySqrt(__int64 n) {
   SetLastError(DWORD(-1));
   return sqrt(double(n));
}
```

The following sample consumes the DLL, demonstrating how to use **`/CLRSUPPORTLASTERROR`**.

```cpp
// CLRSUPPORTLASTERROR_client.cpp
// compile with: /clr CLRSUPPORTLASTERROR_dll.lib /link /clrsupportlasterror:systemdll
// processor: x86
#include <windows.h>
#include <wininet.h>
#include <stdio.h>
#include <math.h>

#pragma comment(lib, "wininet.lib")

double MySqrt(__int64 n);

#pragma managed
int main() {
   double   d = 0.0;
   __int64 n = 65;
   HANDLE  hGroup = NULL;
   GROUPID groupID;
   DWORD   dwSet = 127, dwGet = 37;

   SetLastError(dwSet);
   d = MySqrt(n);
   dwGet = GetLastError();

   if (dwGet == DWORD(-1))
      printf_s("GetLastError for application call succeeded (%d).\n",
             dwGet);
   else
      printf_s("GetLastError for application call failed (%d).\n",
             dwGet);

   hGroup = FindFirstUrlCacheGroup(0, CACHEGROUP_SEARCH_ALL,
                           0, 0, &groupID, 0);
   dwGet = GetLastError();
   if (dwGet == 183)
      printf_s("GetLastError for system call succeeded (%d).\n",
             dwGet);
   else
      printf_s("GetLastError for system call failed (%d).\n",
             dwGet);
}
```

```Output
GetLastError for application call failed (127).
GetLastError for system call succeeded (183).
```

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
