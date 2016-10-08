---
title: "-LINENUMBERS"
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
H1: /LINENUMBERS
ms.assetid: 1681d582-2c2f-484e-9920-109959549055
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
# -LINENUMBERS
```  
/LINENUMBERS  
```  
  
## Remarks  
 This option displays COFF line numbers. Line numbers exist in an object file if it was compiled with Program Database (/Zi), C7 Compatible (/Z7), or Line Numbers Only (/Zd). An executable file or DLL contains COFF line numbers if it was linked with Generate Debug Info (/DEBUG).  
  
 Only the [/HEADERS](../VS_visualcpp/-HEADERS.md) DUMPBIN option is available for use on files produced with the [/GL](../VS_visualcpp/-GL--Whole-Program-Optimization-.md) compiler option.  
  
## See Also  
 [DUMPBIN Options](../VS_visualcpp/DUMPBIN-Options.md)