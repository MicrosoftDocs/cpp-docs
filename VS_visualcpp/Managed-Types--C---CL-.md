---
title: "Managed Types (C++-CL)"
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
H1: Managed Types (C++/CL)
ms.assetid: 1ddd114e-be02-4de7-a4dd-a2d72ad8ff81
caps.latest.revision: 11
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
# Managed Types (C++-CL)
The syntax for the declaration of managed types and the creation and use of objects of these types has been significantly altered from Managed Extensions for C++ to Visual C++. This was done to promote their integration within the ISO-C++ type system. These changes are presented in detail in the following subsections.  
  
## In This Section  
 [Declaration of a Managed Class Type](../VS_visualcpp/Declaration-of-a-Managed-Class-Type.md)  
 Discusses how to declare a managed `class`, `struct`, or `interface`.  
  
 [Declaration of a CLR Reference Class Object](../VS_visualcpp/Declaration-of-a-CLR-Reference-Class-Object.md)  
 Discusses how to declare a reference class type object using a tracking handle.  
  
 [Declaration of a CLR Array](../VS_visualcpp/Declaration-of-a-CLR-Array.md)  
 Explains how to declare and initialize an array.  
  
 [Changes in Constructor Initialization Order](../VS_visualcpp/Changes-in-Constructor-Initialization-Order.md)  
 Discusses key changes in class constructor initialization order.  
  
 [Changes in Destructor Semantics](../VS_visualcpp/Changes-in-Destructor-Semantics.md)  
 Discusses non-deterministic finalization, `Finalize` versus `Dispose`, ramifications for reference objects, and use of an explicit `Finalize`.  
  
 **Note:** The discussion of delegates is deferred until [Delegates and Events](../VS_visualcpp/Delegates-and-Events.md) in order to present them with event members within a class, the general topic of [Member Declarations within a Class or Interface (C++/CLI)](../VS_visualcpp/Member-Declarations-within-a-Class-or-Interface--C---CLI-.md).  
  
## See Also  
 [C++/CLI Migration Primer](../VS_visualcpp/C---CLI-Migration-Primer.md)   
 [Classes and Structs](../VS_visualcpp/Classes-and-Structs---C---Component-Extensions-.md)   
 [Arrays](../VS_visualcpp/Arrays--C---Component-Extensions-.md)