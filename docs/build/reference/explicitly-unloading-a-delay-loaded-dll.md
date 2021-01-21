---
description: "Learn more about: Explicitly unloading a delay-loaded DLL"
title: "Explicitly unload a delay-loaded DLL"
ms.date: "01/19/2021"
helpviewer_keywords: ["/DELAY:UNLOAD linker option", "DELAY:UNLOAD linker option", "__FUnloadDelayLoadedDLL2", "delayed loading of DLLs, unloading"]
---
# Explicitly unload a delay-loaded DLL

The [`/delay:unload`](delay-delay-load-import-settings.md) linker option allows your code to explicitly unload a DLL that was delay loaded. By default, when your code unloads the DLL, the delay-loaded imports remain in the import address table (IAT). However, if you use **`/delay:unload`** on the linker command line, the helper function supports the explicit unloading of the DLL by a `__FUnloadDelayLoadedDLL2` call, and resets the IAT to its original form. The now-invalid pointers get overwritten. The IAT is a field in the [`ImgDelayDescr`](calling-conventions-parameters-and-return-type.md) structure that contains the address of a copy of the original IAT, if one exists.

## Example

### Code

```C
// link with /link /DELAYLOAD:MyDLL.dll /DELAY:UNLOAD
#include <windows.h>
#include <delayimp.h>
#include "MyDll.h"
#include <stdio.h>

#pragma comment(lib, "delayimp")
#pragma comment(lib, "MyDll")
int main()
{
    BOOL TestReturn;
    // MyDLL.DLL will load at this point
    fnMyDll();

    //MyDLL.dll will unload at this point
    TestReturn = __FUnloadDelayLoadedDLL2("MyDll.dll");

    if (TestReturn)
        printf_s("\nDLL was unloaded");
    else
        printf_s("\nDLL was not unloaded");
}
```

### Comments

Important notes on unloading a delay-loaded DLL:

- You can find the implementation of the `__FUnloadDelayLoadedDLL2` function in the file *`delayhlp.cpp`*, in the VC *`include`* directory.

- The *`name`* parameter of the `__FUnloadDelayLoadedDLL2` function must exactly match (including case) what the import library contains. (That string is also in the import table in the image.) You can view the contents of the import library by using [`DUMPBIN /DEPENDENTS`](dependents.md). If you prefer a case-insensitive string match, you can update `__FUnloadDelayLoadedDLL2` to use one of the case-insensitive CRT string functions, or a Windows API call.

For more information, see [Unload a delay-loaded DLL](unloading-a-delay-loaded-dll.md).

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md)
