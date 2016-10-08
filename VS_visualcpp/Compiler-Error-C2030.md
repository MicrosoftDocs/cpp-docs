---
title: "Compiler Error C2030"
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
ms.topic: error-reference
H1: Compiler Error C2030
ms.assetid: 5806cead-64df-4eff-92de-52c9a3f5ee62
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
# Compiler Error C2030
a destructor with 'protected private' accessibility cannot be a member of a class declared 'sealed'  
  
 A Windows Runtime class declared as `sealed` cannot have a protected private destructor. Only public virtual and private non-virtual destructors are allowed on sealed types. For more information, see [Ref classes and structs](../Topic/Ref%20classes%20and%20structs%20\(C++-CX\).md).  
  
 To fix this error, change the accessibility of the destructor.