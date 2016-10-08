---
title: "What Does it Cost me to Derive a Class from CObject?"
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
ms.assetid: 9b92c98b-b3dd-48a7-9d24-c3b8554edf90
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
# What Does it Cost me to Derive a Class from CObject?
The overhead in deriving from class [CObject](../VS_visualcpp/CObject-Class.md) is minimal. Your derived class inherits only four virtual functions and a single [CRuntimeClass](../VS_visualcpp/CRuntimeClass-Structure.md) object.  
  
## See Also  
 [CObject Class: Frequently Asked Questions](../VS_visualcpp/CObject-Class--Frequently-Asked-Questions.md)