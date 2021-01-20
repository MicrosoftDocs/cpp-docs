---
description: "Learn more about loading all imports for a delay-loaded DLL"
title: "Load all imports for a delay-loaded DLL"
ms.date: "01/19/2021"
helpviewer_keywords: ["__HrLoadAllImportsForDll linker option"]
---
# Load all imports for a delay-loaded DLL

The `__HrLoadAllImportsForDll` function, which is defined in *`delayhlp.cpp`*, tells the linker to load all imports from a DLL that was specified with the [`/delayload`](delayload-delay-load-import.md) linker option.

Loading all imports allows you to put error handling in one place in your code and not have to use exception handling around the actual calls to the imports. It also avoids a situation where your application fails part way through a process as a result of the helper code failing to load an import.

Calling `__HrLoadAllImportsForDll` doesn't change the behavior of hooks and error handling. For more information, see [Error handling and notification](error-handling-and-notification.md).

The DLL name passed to `__HrLoadAllImportsForDll` is compared to the name stored inside the DLL itself and is case sensitive.

The following example shows how to call `__HrLoadAllImportsForDll`:

```C
if (FAILED(__HrLoadAllImportsForDll("delay1.dll"))) {
   printf ( "failed on snap load, exiting\n" );
   exit(2);
}
```

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md)
