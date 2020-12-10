---
description: "Learn more about: Import into an application using __declspec(dllimport)"
title: "Import into an application using __declspec(dllimport)"
ms.date: "11/04/2016"
helpviewer_keywords: ["__declspec(dllimport) keyword [C++]", "importing DLLs [C++], __declspec(dllimport)"]
ms.assetid: edb4da4e-f83a-44cf-a668-9239d49dbe42
---
# Import into an application using __declspec(dllimport)

A program that uses public symbols defined by a DLL is said to import them. When you create header files for applications that use your DLLs to build with, use **`__declspec(dllimport)`** on the declarations of the public symbols. The keyword **`__declspec(dllimport)`** works whether you export with .def files or with the **`__declspec(dllexport)`** keyword.

To make your code more readable, define a macro for **`__declspec(dllimport)`** and then use the macro to declare each imported symbol:

```
#define DllImport   __declspec( dllimport )

DllImport int  j;
DllImport void func();
```

Using **`__declspec(dllimport)`** is optional on function declarations, but the compiler produces more efficient code if you use this keyword. However, you must use **`__declspec(dllimport)`** for the importing executable to access the DLL's public data symbols and objects. Note that the users of your DLL still need to link with an import library.

You can use the same header file for both the DLL and the client application. To do this, use a special preprocessor symbol that indicates whether you are building the DLL or building the client application. For example:

```
#ifdef _EXPORTING
   #define CLASS_DECLSPEC    __declspec(dllexport)
#else
   #define CLASS_DECLSPEC    __declspec(dllimport)
#endif

class CLASS_DECLSPEC CExampleA : public CObject
{ ... class definition ... };
```

## What do you want to do?

- [Initialize a DLL](run-time-library-behavior.md#initializing-a-dll)

## What do you want to know more about?

- [Importing and exporting inline functions](importing-and-exporting-inline-functions.md)

- [Mutual imports](mutual-imports.md)

## See also

[Importing into an Application](importing-into-an-application.md)
