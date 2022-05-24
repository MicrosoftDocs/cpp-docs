---
description: "Learn more about: Exporting C functions for use in C or C++ language executables"
title: "Export C functions for use in C or C++ language executables"
ms.date: 05/24/2022
helpviewer_keywords: ["functions [C], exporting", "functions [C], C or C++ executables and", "__cplusplus macro", "exporting DLLs [C++], C functions in C++ executables", "exporting functions [C++], C functions in C++ executables"]
ms.assetid: b51d6e5e-37cf-4c1c-b0bf-fcf188c82f00
---
# Export C functions for use in C or C++ language executables

If you have functions in a DLL written in C, you can use a preprocessor macro to make them easy to access from both C language and C++ language code. The **`__cplusplus`** preprocessor macro indicates which language is being compiled. You may use it to declare the functions with C linkage when called from C++ language code. If you use this technique and provide header files for your DLL, these functions can be used by C and C++ users with no change.

The following code shows a header file that both C and C++ client applications can use:

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

Sometimes you may need to link C functions to your C++ executable, but the function declaration header files haven't used the above technique. You can still call the functions from C++. In the C++ source file, wrap the `#include` directive to prevent the compiler from decorating the C function names:

```cpp
extern "C" {
#include "MyCHeader.h"
}
```

## What do you want to do?

- [Export from a DLL using `.def` files](exporting-from-a-dll-using-def-files.md)

- [Export from a DLL using `__declspec(dllexport)`](exporting-from-a-dll-using-declspec-dllexport.md)

- [Export and import using `AFX_EXT_CLASS`](exporting-and-importing-using-afx-ext-class.md)

- [Determine which exporting method to use](determining-which-exporting-method-to-use.md)

- [Import into an application using `__declspec(dllimport)`](importing-into-an-application-using-declspec-dllimport.md)

- [Initialize a DLL](run-time-library-behavior.md#initializing-a-dll)

## What do you want to know more about?

- [Decorated names](reference/decorated-names.md)

- [Using `extern` to specify linkage](../cpp/extern-cpp.md)

## See also

[Exporting from a DLL](exporting-from-a-dll.md)
