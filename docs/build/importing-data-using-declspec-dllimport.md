---
title: "Importing data using __declspec(dllimport)"
description: "How to use __declspec(dllimport) to import DLL data."
ms.date: 09/03/2020
helpviewer_keywords: ["importing data [C++]", "dllimport attribute [C++], data imports", "__declspec(dllimport) keyword [C++]", "importing DLLs [C++], __declspec(dllimport)"]
ms.assetid: 0ae70b39-87c7-4181-8be9-e786e0db60b0
---
# Importing data using `__declspec(dllimport)`

In the case of data, using **`__declspec(dllimport)`** is a convenience item that removes a layer of indirection. When you import data from a DLL, you still have to go through the import address table. Before **`__declspec(dllimport)`**, this meant you had to remember to do an extra level of indirection when accessing data exported from the DLL:

```C
// project.h
// Define PROJECT_EXPORTS when building your DLL
#ifdef PROJECT_EXPORTS   // If accessing the data from inside the DLL
   ULONG ulDataInDll;

#else         // If accessing the data from outside the DLL
   ULONG *ulDataInDll;
#endif
```

You would then export the data in your .DEF file:

```DEF
// project.def
LIBRARY project
EXPORTS
   ulDataInDll   CONSTANT
```

and access it outside the DLL:

```C
if (*ulDataInDll == 0L)
{
   // Do stuff here
}
```

When you mark the data as **`__declspec(dllimport)`**, the compiler automatically generates the indirection code for you. You no longer have to worry about the steps above. As stated previously, do not use **`__declspec(dllimport)`** declaration on the data when building the DLL. Functions within the DLL do not use the import address table to access the data object; therefore, you will not have the extra level of indirection present.

To export the data automatically from the DLL, use this declaration:

```C
// project.h
// Define PROJECT_EXPORTS when building your DLL
#ifdef PROJECT_EXPORTS   // If accessing the data from inside the DLL
   __declspec(dllexport) ULONG ulDataInDLL;

#else         // If accessing the data from outside the DLL
   __declspec(dllimport) ULONG ulDataInDLL;
#endif
```

## See also

[Importing into an Application](importing-into-an-application.md)
