---
title: "sampler::filter_mode Data Member"
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
ms.assetid: df6ce243-0625-497f-a9a6-519762b3470e
caps.latest.revision: 4
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
# sampler::filter_mode Data Member
Gets the filter mode of the `sampler` object.  
  
## Syntax  
  
```  
__declspec(property(get=get_filter_mode)) Concurrency::graphics::filter_mode filter_mode;  
```  
  
## Remarks  
 The same filter mode applies to the minimization, maximization, and mipmap filters.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
## See Also  
 [sampler Class](../VS_visualcpp/sampler-Class.md)