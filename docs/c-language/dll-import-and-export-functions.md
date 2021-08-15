---
description: "Learn more about: DLL Import and Export Functions"
title: "DLL Import and Export Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["DLLs [C++], importing", "dllimport attribute [C++], storage-class attribute", "DLL exports [C++]", "declaring functions, with dllexport and dllimport", "extended storage-class attributes", "dllexport attribute [C++], storage-class attribute"]
ms.assetid: 08d164b9-770a-4e14-afeb-c6f21d9e33e4
---
# DLL Import and Export Functions

**Microsoft Specific**

The most complete and up-to-date information on this topic can be found in [dllexport, dllimport](../cpp/dllexport-dllimport.md).

The **`dllimport`** and `dllexport` storage-class modifiers are Microsoft-specific extensions to the C language. These modifiers explicitly define the DLL's interface to its client (the executable file or another DLL). Declaring functions as `dllexport` eliminates the need for a module-definition (.DEF) file. You can also use the **`dllimport`** and `dllexport` modifiers with data and objects.

The **`dllimport`** and `dllexport` storage-class modifiers must be used with the extended attribute syntax keyword, **`__declspec`**, as shown in this example:

```
#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

DllExport void func();
DllExport int i = 10;
DllExport int j;
DllExport int n;
```

For specific information about the syntax for extended storage-class modifiers, see [Extended Storage-Class Attributes](../c-language/c-extended-storage-class-attributes.md).

**END Microsoft Specific**

## See also

[C Function Definitions](../c-language/c-function-definitions.md)
