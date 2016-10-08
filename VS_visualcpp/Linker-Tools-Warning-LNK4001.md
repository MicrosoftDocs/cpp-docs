---
title: "Linker Tools Warning LNK4001"
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
ms.assetid: 0a8b1c3a-64ce-4311-b7c0-065995059246
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
# Linker Tools Warning LNK4001
no object files specified; libraries used  
  
 The linker was passed one or more .lib files, but no .obj files.  
  
 Because the linker is not able to access information in a .lib file that it is able to access in an .obj file, this warning indicates that you will have to explicitly specify other linker options. For example, you may have to specify the [/MACHINE](../VS_visualcpp/-MACHINE--Specify-Target-Platform-.md), [/OUT](../VS_visualcpp/-OUT--Output-File-Name-.md), or [/ENTRY](../VS_visualcpp/-ENTRY--Entry-Point-Symbol-.md) options.