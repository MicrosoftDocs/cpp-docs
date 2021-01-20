---
description: "Learn more about: Linker support for delay-loaded DLLs"
title: "Linker support for delay-loaded DLLs"
ms.date: "01/19/2021"
helpviewer_keywords: ["delayed loading of DLLs, linker support"]
---
# Linker support for delay-loaded DLLs

The MSVC linker supports the delayed loading of DLLs. This feature relieves you of the need to use the Windows SDK functions `LoadLibrary` and `GetProcAddress` to implement DLL delayed loading.

Without delayed load, the only way to load a DLL at run time is by using `LoadLibrary` and `GetProcAddress`; the operating system loads the DLL when the executable or DLL using it gets loaded.

With delayed load, when you implicitly link a DLL, the linker provides options to delay the DLL load until the program calls a function in that DLL.

An application can delay load a DLL using the [`/DELAYLOAD` (Delay Load Import)](delayload-delay-load-import.md) linker option with a helper function. (A default helper function implementation is provided by Microsoft.) The helper function loads the DLL on demand at runtime by calling `LoadLibrary` and `GetProcAddress` for you.

Consider delay loading a DLL if:

- Your program might not call a function in the DLL.

- A function in the DLL might not get called until late in your program's execution.

The delayed loading of a DLL can be specified during the build of either an EXE or DLL project. A DLL project that delays the loading of one or more DLLs itself shouldn't call a delay-loaded entry point in `DllMain`.

The following articles describe delay loading DLLs:

- [Specify DLLs to delay load](specifying-dlls-to-delay-load.md)

- [Explicitly unload a delay-loaded DLL](explicitly-unloading-a-delay-loaded-dll.md)

- [Load all imports for a delay-loaded DLL](loading-all-imports-for-a-delay-loaded-dll.md)

- [Bind delay-loaded imports](binding-imports.md)

- [Error handling and notification](error-handling-and-notification.md)

- [Dump delay-loaded imports](dumping-delay-loaded-imports.md)

- [Constraints of delay loading DLLs](constraints-of-delay-loading-dlls.md)

- [Understand the helper function](understanding-the-helper-function.md)

- [Develop your own helper function](developing-your-own-helper-function.md)

## See also

[Create C/C++ DLLs in Visual Studio](../dlls-in-visual-cpp.md)<br/>
[MSVC linker reference](linking.md)
