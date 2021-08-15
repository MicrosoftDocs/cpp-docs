---
description: "Learn more about: Exporting from a DLL Using __declspec(dllexport)"
title: "Exporting from a DLL Using __declspec(dllexport)"
ms.date: "05/06/2019"
f1_keywords: ["dllexport"]
helpviewer_keywords: ["__declspec(dllexport) keyword [C++]", "names [C++], DLL exports by", "export directives [C++]", "exporting DLLs [C++], __declspec(dllexport) keyword"]
ms.assetid: a35e25e8-7263-4a04-bad4-00b284458679
---
# Exporting from a DLL Using __declspec(dllexport)

You can export data, functions, classes, or class member functions from a DLL using the **`__declspec(dllexport)`** keyword. **`__declspec(dllexport)`** adds the export directive to the object file so you do not need to use a .def file.

This convenience is most apparent when trying to export decorated C++ function names. Because there is no standard specification for name decoration, the name of an exported function might change between compiler versions. If you use **`__declspec(dllexport)`**, recompiling the DLL and dependent .exe files is necessary only to account for any naming convention changes.

Many export directives, such as ordinals, NONAME, and PRIVATE, can be made only in a .def file, and there is no way to specify these attributes without a .def file. However, using **`__declspec(dllexport)`** in addition to using a .def file does not cause build errors.

To export functions, the **`__declspec(dllexport)`** keyword must appear to the left of the calling-convention keyword, if a keyword is specified. For example:

```
__declspec(dllexport) void __cdecl Function1(void);
```

To export all of the public data members and member functions in a class, the keyword must appear to the left of the class name as follows:

```
class __declspec(dllexport) CExampleExport : public CObject
{ ... class definition ... };
```

> [!NOTE]
> `__declspec(dllexport)` cannot be applied to a function with the `__clrcall` calling convention.

When building your DLL, you typically create a header file that contains the function prototypes and/or classes you are exporting and add **`__declspec(dllexport)`** to the declarations in the header file. To make your code more readable, define a macro for **`__declspec(dllexport)`** and use the macro with each symbol you are exporting:

```
#define DllExport   __declspec( dllexport )
```

**`__declspec(dllexport)`** stores function names in the DLL's export table. If you want to optimize the table's size, see [Exporting Functions from a DLL by Ordinal Rather Than by Name](exporting-functions-from-a-dll-by-ordinal-rather-than-by-name.md).

## What do you want to do?

- [Export from a DLL using .def files](exporting-from-a-dll-using-def-files.md)

- [Export and import using AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Export C++ functions for use in C-language executables](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Export C functions for use in C or C++-language executables](exporting-c-functions-for-use-in-c-or-cpp-language-executables.md)

- [Determine which exporting method to use](determining-which-exporting-method-to-use.md)

- [Import into an application using __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

- [Initialize a DLL](run-time-library-behavior.md#initializing-a-dll)

## What do you want to know more about?

- [The __declspec keyword](../cpp/declspec.md)

- [Importing and exporting inline functions](importing-and-exporting-inline-functions.md)

- [Mutual imports](mutual-imports.md)

## See also

[Exporting from a DLL](exporting-from-a-dll.md)
