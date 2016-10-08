---
title: "Importing and Exporting Inline Functions"
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
ms.assetid: 89f488f8-b078-40fe-afd7-80bd7840057b
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
# Importing and Exporting Inline Functions
Imported functions can be defined as inline. The effect is roughly the same as defining a standard function inline; calls to the function are expanded into inline code, much like a macro. This is principally useful as a way of supporting C++ classes in a DLL that might inline some of their member functions for efficiency.  
  
 One feature of an imported inline function is that you can take its address in C++. The compiler returns the address of the copy of the inline function residing in the DLL. Another feature of imported inline functions is that you can initialize static local data of the imported function, unlike global imported data.  
  
> [!CAUTION]
>  You should exercise care when providing imported inline functions because they can create the possibility of version conflicts. An inline function gets expanded into the application code; therefore, if you later rewrite the function, it does not get updated unless the application itself is recompiled. (Normally, DLL functions can be updated without rebuilding the applications that use them.)  
  
## What do you want to do?  
  
-   [Export from a DLL](../VS_visualcpp/Exporting-from-a-DLL.md)  
  
-   [Export from a DLL using .DEF files](../VS_visualcpp/Exporting-from-a-DLL-Using-DEF-Files.md)  
  
-   [Export from a DLL using __declspec(dllexport)](../VS_visualcpp/Exporting-from-a-DLL-Using-__declspec-dllexport-.md)  
  
-   [Export and import using AFX_EXT_CLASS](../VS_visualcpp/Exporting-and-Importing-Using-AFX_EXT_CLASS.md)  
  
-   [Export C++ functions for use in C-language executables](../VS_visualcpp/Exporting-C---Functions-for-Use-in-C-Language-Executables.md)  
  
-   [Determine which exporting method to use](../VS_visualcpp/Determining-Which-Exporting-Method-to-Use.md)  
  
-   [Import into an application using __declspec(dllimport)](../VS_visualcpp/Importing-into-an-Application-Using-__declspec-dllimport-.md)  
  
## See Also  
 [Importing and Exporting](../VS_visualcpp/Importing-and-Exporting.md)