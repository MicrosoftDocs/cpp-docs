---
description: "Learn more about: Loading All Imports for a Delay-Loaded DLL"
title: "Loading All Imports for a Delay-Loaded DLL"
ms.date: "11/04/2016"
helpviewer_keywords: ["__HrLoadAllImportsForDll linker option"]
ms.assetid: 975fcd97-1a56-4a16-9698-e1a249d2d592
---
# Loading All Imports for a Delay-Loaded DLL

The **__HrLoadAllImportsForDll** function, which is defined in delayhlp.cpp, tells the linker to load all imports from a DLL that was specified with the [/delayload](delayload-delay-load-import.md) linker option.

Loading all imports allows you to put error handling in one place in your code and not have to use exception handling around the actual calls to the imports. It also avoids a situation where your application fails partially through a process as a result of the helper code failing to load an import.

Calling **__HrLoadAllImportsForDll** does not change the behavior of hooks and error handling; see [Error Handling and Notification](error-handling-and-notification.md) for more information.

The DLL name passed to **__HrLoadAllImportsForDll** is compared to the name stored inside the DLL itself and is case sensitive.

The following example shows how to call **__HrLoadAllImportsForDll**:

```
if (FAILED(__HrLoadAllImportsForDll("delay1.dll"))) {
   printf ( "failed on snap load, exiting\n" );
   exit(2);
}
```

## See also

[Linker Support for Delay-Loaded DLLs](linker-support-for-delay-loaded-dlls.md)
