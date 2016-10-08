---
title: "LIBRARY"
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
ms.assetid: 1d7ccc92-e088-4ef7-9ef0-25c3862cc051
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
# LIBRARY
Tells LINK to create a DLL. At the same time, LINK creates an import library, unless an .exp file is used in the build.  
  
```  
LIBRARY [library][BASE=address]  
```  
  
## Remarks  
 The *library* argument specifies the name of the DLL. You can also use the [/OUT](../VS_visualcpp/-OUT--Output-File-Name-.md) linker option to specify the DLL's output name.  
  
 The BASE=*address* argument sets the base address that the operating system uses to load the DLL. This argument overrides the default DLL location of 0x10000000. See the description of the [/BASE](../VS_visualcpp/-BASE--Base-Address-.md) option for details about base addresses.  
  
 Remember to use the [/DLL](../VS_visualcpp/-DLL--Build-a-DLL-.md) linker option when you build a DLL.  
  
## See Also  
 [Rules for Module-Definition Statements](../VS_visualcpp/Rules-for-Module-Definition-Statements.md)