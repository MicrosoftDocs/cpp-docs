---
title: "Compiler Warning (level 3) C4622"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-csharp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d3c879f0-4492-4f4b-b26d-230993f3a933
caps.latest.revision: 7
manager: douge
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Compiler Warning (level 3) C4622
Overwriting debug information formed during creation of the precompiled header in object file: 'file'  
  
 CodeView information in the specified file was lost when it was compiled with the [/Yu](../VS_visualcpp/-Yu--Use-Precompiled-Header-File-.md) (Use Precompiled Headers) option.  
  
 Rename the object file (using [/Fo](../VS_visualcpp/-Fo--Object-File-Name-.md)) when creating or using the precompiled header file, and link using the new object file.