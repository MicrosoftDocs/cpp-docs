---
description: "Learn more about: Specifying DLLs to Delay Load"
title: "Specifying DLLs to Delay Load"
ms.date: "11/04/2016"
helpviewer_keywords: ["DELAYLOAD linker option", "delayed loading of DLLs", "delayed loading of DLLs, specifying", "/DELAYLOAD linker option"]
ms.assetid: 94cbecfe-7a42-40d1-a618-9f2786bac0d8
---
# Specifying DLLs to Delay Load

You can specify which DLLs to delay load with the [/delayload](delayload-delay-load-import.md):`dllname` linker option. If you do not plan to use your own version of a helper function, you must also link your program with delayimp.lib (for desktop applications) or dloadhelper.lib (for store apps).

The following is a simple example of delay loading a DLL:

```
// cl t.cpp user32.lib delayimp.lib  /link /DELAYLOAD:user32.dll
#include <windows.h>
// uncomment these lines to remove .libs from command line
// #pragma comment(lib, "delayimp")
// #pragma comment(lib, "user32")

int main() {
   // user32.dll will load at this point
   MessageBox(NULL, "Hello", "Hello", MB_OK);
}
```

Build the DEBUG version of the project. Step through the code using the debugger and you will notice that user32.dll is loaded only when you make the call to `MessageBox`.

## See also

[Linker Support for Delay-Loaded DLLs](linker-support-for-delay-loaded-dlls.md)
