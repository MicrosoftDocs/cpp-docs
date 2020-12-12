---
description: "Learn more about: Definitions and Declarations (C)"
title: "Definitions and Declarations (C)"
ms.date: "11/04/2016"
helpviewer_keywords: ["export functions"]
ms.assetid: d150395a-89d4-4298-9ac4-08f84fe1261c
---
# Definitions and Declarations (C)

**Microsoft Specific**

The DLL interface refers to all items (functions and data) that are known to be exported by some program in the system; that is, all items that are declared as **`dllimport`** or `dllexport`. All declarations included in the DLL interface must specify either the **`dllimport`** or `dllexport` attribute. However, the definition can specify only the `dllexport` attribute. For example, the following function definition generates a compiler error:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllImport int func()    /* Error; dllimport prohibited in */
                        /* definition. */
{
   return 1;
}
```

This code also generates an error:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllImport int i = 10;      /* Error; this is a definition. */
```

However, this is correct syntax:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllExport int i = 10;      /* Okay: this is an export definition. */
```

The use of `dllexport` implies a definition, while **`dllimport`** implies a declaration. You must use the **`extern`** keyword with `dllexport` to force a declaration; otherwise, a definition is implied.

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

extern DllImport int k;   /* These are correct and imply */
Dllimport int j;          /* a declaration. */
```

**END Microsoft Specific**

## See also

[DLL Import and Export Functions](../c-language/dll-import-and-export-functions.md)
