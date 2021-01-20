---
description: "Learn more about specifying DLLs to delay load"
title: "Specify DLLs to delay load"
ms.date: "01/19/2021"
helpviewer_keywords: ["DELAYLOAD linker option", "delayed loading of DLLs", "delayed loading of DLLs, specifying", "/DELAYLOAD linker option"]
---
# Specify DLLs to delay load

You can specify which DLLs to delay load by using the [`/delayload:dllname`](delayload-delay-load-import.md) linker option. If you don't plan to use your own version of a helper function, you must also link your program with *`delayimp.lib`* (for desktop applications) or *`dloadhelper.lib`* (for UWP apps).

Here's a simple example of delay loading a DLL:

```cpp
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

Build the DEBUG version of the project. Step through the code using the debugger and you'll notice that *`user32.dll`* is loaded only when you make the call to `MessageBox`.

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md)
