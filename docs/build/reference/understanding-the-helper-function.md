---
description: "Learn more about: Understanding the Helper Function"
title: "Understanding the Helper Function"
ms.date: "11/04/2016"
helpviewer_keywords: ["delayed loading of DLLs, helper function", "__delayLoadHelper2 function", "delayimp.lib", "__delayLoadHelper function", "delayhlp.cpp", "delayimp.h", "helper functions"]
ms.assetid: 6279c12c-d908-4967-b0b3-cabfc3e91d3d
---
# Understanding the Helper Function

The helper function for linker-supported delayed loading is what actually loads the DLL at run time. You can modify the helper function to customize its behavior by writing your own function and linking it to your program instead of using the supplied helper function in Delayimp.lib. One helper function serves all delay loaded DLLs.

You can provide your own version of the helper function if you want to do specific processing based on the names of the DLL or imports.

The helper function performs the following actions:

- Checks the stored handle to the library to see if it has already been loaded

- Calls **LoadLibrary** to attempt loading of the DLL

- Calls **GetProcAddress** to attempt getting the address of the procedure

- Returns to the delay import load thunk to call the now-loaded entry point

The helper function can call back to a notification hook in your program after each of the following actions:

- When the helper function starts up

- Just before **LoadLibrary** is called in the helper function

- Just before **GetProcAddress** is called in the helper function

- If the call to **LoadLibrary** in the helper function failed

- If the call to **GetProcAddress** in the helper function failed

- After the helper function is done processing

Each of these hook points can return a value that will alter normal processing of the helper routine in some manner except the return to the delay import load thunk.

The default helper code can be found in Delayhlp.cpp and Delayimp.h (in vc\include) and is compiled in Delayimp.lib (in vc\lib). You will need to include this library in your compilations unless you write your own helper function.

The following topics describe the helper function:

- [Changes in the DLL Delayed Loading Helper Function Since Visual C++ 6.0](changes-in-the-dll-delayed-loading-helper-function-since-visual-cpp-6-0.md)

- [Calling Conventions, Parameters, and Return Type](calling-conventions-parameters-and-return-type.md)

- [Structure and Constant Definitions](structure-and-constant-definitions.md)

- [Calculating Necessary Values](calculating-necessary-values.md)

- [Unloading a Delay-Loaded DLL](explicitly-unloading-a-delay-loaded-dll.md)

## See also

[Linker Support for Delay-Loaded DLLs](linker-support-for-delay-loaded-dlls.md)
