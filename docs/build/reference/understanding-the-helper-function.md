---
description: "Learn more about the delay load helper function"
title: "Understand the delay load helper function"
ms.date: "01/19/2021"
helpviewer_keywords: ["delayed loading of DLLs, helper function", "__delayLoadHelper2 function", "delayimp.lib", "__delayLoadHelper function", "delayhlp.cpp", "delayimp.h", "helper functions"]
---
# Understand the delay load helper function

The helper function for linker-supported delayed loading is what actually loads the DLL at runtime. You can modify the helper function to customize its behavior: Instead of using the supplied helper function in *`delayimp.lib`*, write your own function and link it to your program. One helper function serves all delay loaded DLLs.

You can provide your own version of the helper function if you want to do specific processing based on the names of the DLL or imports.

The helper function takes these actions:

- Checks the stored handle to the library to see if it has already been loaded

- Calls `LoadLibrary` to attempt to load the DLL

- Calls `GetProcAddress` to attempt getting the address of the procedure

- Returns to the delay import load thunk to call the now-loaded entry point

The helper function can call back to a notification hook in your program after each of the following actions:

- When the helper function starts up

- Just before `LoadLibrary` is called in the helper function

- Just before `GetProcAddress` is called in the helper function

- If the call to `LoadLibrary` in the helper function fails

- If the call to `GetProcAddress` in the helper function fails

- After the helper function is done processing

Each of these hook points can return a value that alters normal processing of the helper routine in some manner, except the return to the delay import load thunk.

The default helper code can be found in *`Delayhlp.cpp`* and *`Delayimp.h`* (in the VC *`include`* directory) and is compiled in *`Delayimp.lib`* (in the VC *`lib`* directory). You'll need to include this library in your compilations unless you write your own helper function.

The following articles describe the helper function:

- [Changes in the DLL delayed loading helper function since Visual C++ 6.0](changes-in-the-dll-delayed-loading-helper-function-since-visual-cpp-6-0.md)

- [Calling conventions, parameters, and return type](calling-conventions-parameters-and-return-type.md)

- [Structure and constant definitions](structure-and-constant-definitions.md)

- [Calculate necessary values](calculating-necessary-values.md)

- [Explicitly unload a delay-loaded DLL](explicitly-unloading-a-delay-loaded-dll.md)

## See also

[Linker support for delay-loaded DLLs](linker-support-for-delay-loaded-dlls.md)
