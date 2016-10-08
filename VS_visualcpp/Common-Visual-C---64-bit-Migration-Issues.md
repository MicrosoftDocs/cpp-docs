---
title: "Common Visual C++ 64-bit Migration Issues"
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
ms.assetid: d17fb838-7513-4e2d-8b27-a1666f17ad76
caps.latest.revision: 19
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
# Common Visual C++ 64-bit Migration Issues
When you use Visual C++ to create applications to run on a 64-bit Windows operating system, you should be aware of the following issues:  
  
-   An `int` and a `long` are 32-bit values on 64-bit Windows operating systems. For programs that you plan to compile for 64-bit platforms, you should be careful not to assign pointers to 32-bit variables. Pointers are 64-bit on 64-bit platforms, and you will truncate the pointer value if you assign it to a 32-bit variable.  
  
-   `size_t`, `time_t`, and `ptrdiff_t` are 64-bit values on 64-bit Windows operating systems.  
  
-   `time_t` is a 32-bit value on 32-bit Windows operating systems in Visual C++ versions before Visual C++ 2005. `time_t` is now a 64-bit integer by default. For more information, see [Time Management](../VS_visualcpp/Time-Management.md).  
  
     You should be aware of where your code takes an `int` value and processes it as a `size_t` or `time_t` value. It is possible that the number could grow to be larger than a 32-bit number and data will be truncated when it is passed back to the `int` storage.  
  
 The %x (hex `int` format) `printf` modifier will not work as expected on a 64-bit Windows operating system. It will only operate on the first 32 bits of the value that is passed to it.  
  
-   Use %I32x to display a 32-bit integral type in hex format.  
  
-   Use %I64x to display a 64-bit integral type in hex format.  
  
-   The %p (hex format for a pointer) will work as expected on a 64-bit Windows operating system.  
  
 For more information, see:  
  
-   [Compiler Options](../VS_visualcpp/Compiler-Options.md)  
  
-   [Migration Tips](http://msdn.microsoft.com/library/windows/desktop/aa384214)  
  
## See Also  
 [Configuring Programs for 64-Bit](../VS_visualcpp/Configuring-Programs-for-64-Bit--Visual-C---.md)   
 [Visual C++ Porting and Upgrading Guide](../VS_visualcpp/Visual-C---Porting-and-Upgrading-Guide.md)