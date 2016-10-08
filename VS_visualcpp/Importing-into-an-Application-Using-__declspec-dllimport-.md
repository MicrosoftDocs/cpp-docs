---
title: "Importing into an Application Using __declspec(dllimport)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: edb4da4e-f83a-44cf-a668-9239d49dbe42
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
  
-   [Initialize a DLL](../VS_visualcpp/Initializing-a-DLL.md)  
  
## What do you want to know more about?  
  
-   [Importing and exporting inline functions](../VS_visualcpp/Importing-and-Exporting-Inline-Functions.md)  
  
-   [Mutual imports](../VS_visualcpp/Mutual-Imports.md)  
  
## See Also  
 [Importing into an Application](../VS_visualcpp/Importing-into-an-Application.md)