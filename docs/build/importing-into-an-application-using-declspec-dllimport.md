---
title: "Importing into an Application Using __declspec(dllimport) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
f1_keywords: ["__declspec", "dllimport"]
dev_langs: ["C++"]
helpviewer_keywords: ["__declspec(dllimport) keyword [C++]", "importing DLLs [C++], __declspec(dllimport)"]
ms.assetid: edb4da4e-f83a-44cf-a668-9239d49dbe42
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Importing into an Application Using __declspec(dllimport)
A program that uses public symbols defined by a DLL is said to import them. When you create header files for applications that use your DLLs to build with, use **__declspec(dllimport)** on the declarations of the public symbols. The keyword **__declspec(dllimport)** works whether you export with .def files or with the **__declspec(dllexport)** keyword.  
  
 To make your code more readable, define a macro for **__declspec(dllimport)** and then use the macro to declare each imported symbol:  
  
```  
#define DllImport   __declspec( dllimport )  
  
DllImport int  j;  
DllImport void func();  
```  
  
 Using **__declspec(dllimport)** is optional on function declarations, but the compiler produces more efficient code if you use this keyword. However, you must use **__declspec(dllimport)** for the importing executable to access the DLL's public data symbols and objects. Note that the users of your DLL still need to link with an import library.  
  
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
  
-   [Initialize a DLL](../build/run-time-library-behavior.md#initializing-a-dll)  
  
## What do you want to know more about?  
  
-   [Importing and exporting inline functions](../build/importing-and-exporting-inline-functions.md)  
  
-   [Mutual imports](../build/mutual-imports.md)  
  
## See Also  
 [Importing into an Application](../build/importing-into-an-application.md)