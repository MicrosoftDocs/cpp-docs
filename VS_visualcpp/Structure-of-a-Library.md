---
title: "Structure of a Library"
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
ms.assetid: a5fda8e8-4a1b-4499-9095-0df935262ce4
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
# Structure of a Library
A library contains COFF objects. Objects in a library contain functions and data that can be referenced externally by other objects in a program. An object in a library is sometimes referred to as a library member.  
  
 You can get additional information about the contents of a library by running the DUMPBIN tool with the /LINKERMEMBER option. For more information about this option, see [DUMPBIN Reference](../VS_visualcpp/DUMPBIN-Reference.md).  
  
## See Also  
 [Overview of LIB](../VS_visualcpp/Overview-of-LIB.md)