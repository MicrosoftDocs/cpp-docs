---
title: "sampler::operator= Operator"
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
ms.assetid: 9db7686b-1ddf-480a-8ae7-ccc6c46530a6
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
# sampler::operator= Operator
Assigns the value of another sampler object to an existing sampler.  
  
## Syntax  
  
```  
  
sampler& operator=(        // [1] copy assignment operator  
   const sampler& _Other  
) restrict(amp, cpu);  
  
sampler& operator=(        // [2] move assingment operator  
   sampler&& _Other  
) restrict(amp, cpu);  
```  
  
#### Parameters  
 `_Other`  
 [1] Copy Assignment Operator  
 The `sampler` object to copy into this `sampler`.  
  
 [2] Move Assignment Operator  
 The `sampler` object to move into this `sampler`.  
  
## Return Value  
 A reference to this sampler instance.  
  
## Requirements  
 **Header:** amp_graphics.h  
  
 **Namespace:** concurrency::graphics  
  
## See Also  
 [sampler Class](../VS_visualcpp/sampler-Class.md)