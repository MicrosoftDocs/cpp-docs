---
title: "Debugging and Exception Classes"
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
ms.assetid: 0d158efd-2e62-452e-9d2a-d3c30dfee7f9
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
# Debugging and Exception Classes
These classes provide support for debugging dynamic memory allocation and for passing exception information from the function where the exception is thrown to the function where it is caught.  
  
 Use classes [CDumpContext](../VS_visualcpp/CDumpContext-Class.md) and [CMemoryState](../VS_visualcpp/CMemoryState-Structure.md) during development to assist with debugging, as described in [Debugging MFC Applications](../Topic/MFC%20Debugging%20Techniques.md). Use [CRuntimeClass](../VS_visualcpp/CRuntimeClass-Structure.md) to determine the class of any object at run time, as described in the article [Accessing Run-Time Class Information](../VS_visualcpp/Accessing-Run-Time-Class-Information.md). The framework uses `CRuntimeClass` to create objects of a particular class dynamically.  
  
## See Also  
 [Class Overview](../VS_visualcpp/Class-Library-Overview.md)