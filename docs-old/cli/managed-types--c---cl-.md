---
title: "Managed Types (C++-CL)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__gc types"
  - "types [C++], CLR"
ms.assetid: 1ddd114e-be02-4de7-a4dd-a2d72ad8ff81
caps.latest.revision: 11
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Managed Types (C++/CL)
The syntax for the declaration of managed types and the creation and use of objects of these types has been significantly altered from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../cli/includes/cpp_current_long_md.md)]. This was done to promote their integration within the ISO-C++ type system. These changes are presented in detail in the following subsections.  
  
## In This Section  
 [Declaration of a Managed Class Type](../cli/declaration-of-a-managed-class-type.md)  
 Discusses how to declare a managed `class`, `struct`, or `interface`.  
  
 [Declaration of a CLR Reference Class Object](../cli/declaration-of-a-clr-reference-class-object.md)  
 Discusses how to declare a reference class type object using a tracking handle.  
  
 [Declaration of a CLR Array](../cli/declaration-of-a-clr-array.md)  
 Explains how to declare and initialize an array.  
  
 [Changes in Constructor Initialization Order](../cli/changes-in-constructor-initialization-order.md)  
 Discusses key changes in class constructor initialization order.  
  
 [Changes in Destructor Semantics](../cli/changes-in-destructor-semantics.md)  
 Discusses non-deterministic finalization, `Finalize` versus `Dispose`, ramifications for reference objects, and use of an explicit `Finalize`.  
  
 **Note:** The discussion of delegates is deferred until [Delegates and Events](../cli/delegates-and-events.md) in order to present them with event members within a class, the general topic of [Member Declarations within a Class or Interface (C++/CLI)](../cli/member-declarations-within-a-class-or-interface--c---cli-.md).  
  
## See Also  
 [C++/CLI Migration Primer](../cli/c---cli-migration-primer.md)   
 [Classes and Structs](../windows/classes-and-structs---c---component-extensions-.md)   
 [Arrays](../windows/arrays--c---component-extensions-.md)