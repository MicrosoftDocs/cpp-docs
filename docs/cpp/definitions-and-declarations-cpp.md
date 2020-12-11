---
description: "Learn more about: Definitions and Declarations (C++)"
title: "Definitions and Declarations (C++)"
ms.date: "11/04/2016"
ms.assetid: 56b809c0-e602-4f18-9ca5-cd7a8fbaaf30
---
# Definitions and Declarations (C++)

**Microsoft Specific**

The DLL interface refers to all items (functions and data) that are known to be exported by some program in the system; that is, all items that are declared as **`dllimport`** or **`dllexport`**. All declarations included in the DLL interface must specify either the **`dllimport`** or **`dllexport`** attribute. However, the definition must specify only the **`dllexport`** attribute. For example, the following function definition generates a compiler error:

```
__declspec( dllimport ) int func() {   // Error; dllimport
                                       // prohibited on definition.
   return 1;
}
```

This code also generates an error:

```
__declspec( dllimport ) int i = 10;  // Error; this is a definition.
```

However, this is correct syntax:

```
__declspec( dllexport ) int i = 10;  // Okay--export definition
```

The use of **`dllexport`** implies a definition, while **`dllimport`** implies a declaration. You must use the **`extern`** keyword with **`dllexport`** to force a declaration; otherwise, a definition is implied. Thus, the following examples are correct:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

extern DllExport int k; // These are both correct and imply a
DllImport int j;        // declaration.
```

The following examples clarify the preceding:

```
static __declspec( dllimport ) int l; // Error; not declared extern.

void func() {
    static __declspec( dllimport ) int s;  // Error; not declared
                                           // extern.
    __declspec( dllimport ) int m;         // Okay; this is a
                                           // declaration.
    __declspec( dllexport ) int n;         // Error; implies external
                                           // definition in local scope.
    extern __declspec( dllimport ) int i;  // Okay; this is a
                                           // declaration.
    extern __declspec( dllexport ) int k;  // Okay; extern implies
                                           // declaration.
    __declspec( dllexport ) int x = 5;     // Error; implies external
                                           // definition in local scope.
}
```

**END Microsoft Specific**

## See also

[dllexport, dllimport](../cpp/dllexport-dllimport.md)
