---
title: "Exporting C Functions for Use in C or C++ Language Executables | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["functions [C], exporting", "functions [C], C or C++ executables and", "__cplusplus macro", "exporting DLLs [C++], C functions in C++ executables", "exporting functions [C++], C functions in C++ executables"]
ms.assetid: b51d6e5e-37cf-4c1c-b0bf-fcf188c82f00
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Exporting C Functions for Use in C or C++ Language Executables

If you have functions in a DLL written in C that you want to access from a C language or C++ language module, you should use the **__cplusplus** preprocessor macro to determine which language is being compiled, and then declare these functions with C linkage if being used from a C++ language module. If you use this technique and provide header files for your DLL, these functions can be used by C and C++ users with no change.

The following code shows a header file that can be used by C and C++ client applications:

```h
// MyCFuncs.h
#ifdef __cplusplus
extern "C" {  // only need to export C interface if
              // used by C++ source code
#endif

__declspec( dllimport ) void MyCFunc();
__declspec( dllimport ) void AnotherCFunc();

#ifdef __cplusplus
}
#endif
```

If you need to link C functions to your C++ executable and the function declaration header files have not used the above technique, in the C++ source file, do the following to prevent the compiler from decorating the C function names:

```cpp
extern "C" {
#include "MyCHeader.h"
}
```

## What do you want to do?

- [Export from a DLL using .def files](../build/exporting-from-a-dll-using-def-files.md)

- [Export from a DLL using __declspec(dllexport)](../build/exporting-from-a-dll-using-declspec-dllexport.md)

- [Export and import using AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)

- [Determine which exporting method to use](../build/determining-which-exporting-method-to-use.md)

- [Import into an application using __declspec(dllimport)](../build/importing-into-an-application-using-declspec-dllimport.md)

- [Initialize a DLL](../build/run-time-library-behavior.md#initializing-a-dll)

## What do you want to know more about?

- [Decorated names](../build/reference/decorated-names.md)

- [Using extern to Specify Linkage](../cpp/using-extern-to-specify-linkage.md)

## See Also

[Exporting from a DLL](../build/exporting-from-a-dll.md)