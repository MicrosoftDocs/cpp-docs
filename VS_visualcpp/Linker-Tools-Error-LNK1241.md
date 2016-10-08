---
title: "Linker Tools Error LNK1241"
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
ms.assetid: 7b8b52eb-0231-4521-b52a-2bce8d3e8956
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
# Linker Tools Error LNK1241
resource file 'resource file' already specified  
  
 This error is generated if you run **cvtres** manually from the command line and if you then pass the resulting .obj file to the linker in addition to other .res files.  
  
 To specify multiple .res files, pass them all to the linker as .res files, not from within .obj files created by **cvtres**.