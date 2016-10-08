---
title: "Exceptions: Exceptions in Constructors"
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
ms.assetid: a78eae5a-5821-4b27-9478-1436320ed1e1
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
# Exceptions: Exceptions in Constructors
When throwing an exception in a constructor, clean up whatever objects and memory allocations you have made prior to throwing the exception, as explained in [Exceptions: Throwing Exceptions from Your Own Functions](../VS_visualcpp/Exceptions--Throwing-Exceptions-from-Your-Own-Functions.md).  
  
 When throwing an exception in a constructor, the memory for the object itself has already been allocated by the time the constructor is called. So, the compiler will automatically deallocate the memory occupied by the object after the exception is thrown.  
  
 For more information, see [Exceptions: Freeing Objects in Exceptions](../VS_visualcpp/Exceptions--Freeing-Objects-in-Exceptions.md).  
  
## See Also  
 [Exception Handling](../VS_visualcpp/Exception-Handling-in-MFC.md)