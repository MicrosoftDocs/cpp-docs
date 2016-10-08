---
title: "VERSION (C-C++)"
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
H1: VERSION (C/C++)
ms.assetid: 3533b97c-5183-45f9-9ca8-4e63462b5d26
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
# VERSION (C-C++)
Tells LINK to put a number in the header of the .exe file or DLL.  
  
```  
VERSION major[.minor]  
```  
  
## Remarks  
 The *major* and *minor* arguments are decimal numbers in the range 0 through 65,535. The default is version 0.0.  
  
 An equivalent way to specify a version number is with the [Version Information](../VS_visualcpp/-VERSION--Version-Information-.md) (/VERSION) option.  
  
## See Also  
 [Rules for Module-Definition Statements](../VS_visualcpp/Rules-for-Module-Definition-Statements.md)