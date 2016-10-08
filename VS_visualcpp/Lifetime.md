---
title: "Lifetime"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ff0b42cb-3f0f-49a3-a94f-d1d825d8ddfe
caps.latest.revision: 8
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
# Lifetime
"Lifetime" is the period during execution of a program in which a variable or function exists. The storage duration of the identifier determines its lifetime.  
  
 An identifier declared with the *storage-class-specifier* **static** has static storage duration. Identifiers with static storage duration (also called "global") have storage and a defined value for the duration of a program. Storage is reserved and the identifier's stored value is initialized only once, before program startup. An identifier declared with external or internal linkage also has static storage duration (see [Linkage](../VS_visualcpp/Linkage.md)).  
  
 An identifier declared without the **static** storage-class specifier has automatic storage duration if it is declared inside a function. An identifier with automatic storage duration (a "local identifier") has storage and a defined value only within the block where the identifier is defined or declared. An automatic identifier is allocated new storage each time the program enters that block, and it loses its storage (and its value) when the program exits the block. Identifiers declared in a function with no linkage also have automatic storage duration.  
  
 The following rules specify whether an identifier has global (static) or local (automatic) lifetime:  
  
-   All functions have static lifetime. Therefore they exist at all times during program execution. Identifiers declared at the external level (that is, outside all blocks in the program at the same level of function definitions) always have global (static) lifetimes.  
  
-   If a local variable has an initializer, the variable is initialized each time it is created (unless it is declared as **static**). Function parameters also have local lifetime. You can specify global lifetime for an identifier within a block by including the **static** storage-class specifier in its declaration. Once declared **static**, the variable retains its value from one entry of the block to the next.  
  
 Although an identifier with a global lifetime exists throughout the execution of the source program (for example, an externally declared variable or a local variable declared with the **static** keyword), it may not be visible in all parts of the program. See [Scope and Visibility](../VS_visualcpp/Scope-and-Visibility.md) for information about visibility, and see [Storage Classes](../VS_visualcpp/C-Storage-Classes.md) for a discussion of the *storage-class-specifier* nonterminal.  
  
 Memory can be allocated as needed (dynamic) if created through the use of special library routines such as `malloc`. Since dynamic memory allocation uses library routines, it is not considered part of the language. See the [malloc](../VS_visualcpp/malloc.md) function in the *Run-Time Library Reference*.  
  
## See Also  
 [Lifetime, Scope, Visibility, and Linkage](../VS_visualcpp/Lifetime--Scope--Visibility--and-Linkage.md)