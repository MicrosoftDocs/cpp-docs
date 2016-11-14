---
title: "Examples of Structure Alignment | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "structure alignment"
  - "examples [C++], structure alignment"
ms.assetid: 03d137bf-5cc4-472e-9583-6498f2534199
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Examples of Structure Alignment
The following four examples each declare an aligned structure or union, and the corresponding figures illustrate the layout of that structure or union in memory. Each column in a figure represents a byte of memory, and the number in the column indicates the displacement of that byte. The name in the second row of each figure corresponds to the name of a variable in the declaration. The shaded columns indicate padding that is required to achieve the specified alignment.  
  
 ![AMD conversion example](../build/media/vcamd_conv_ex_1.png "vcAmd_conv_ex_1")  
Example 1  
  
 ![AMD conversion example](../build/media/vcamd_conv_ex_2.png "vcAmd_conv_ex_2")  
Example 2  
  
 ![AMD conversion example](../build/media/vcamd_conv_ex_3.png "vcAmd_conv_ex_3")  
Example 3  
  
 ![AMD conversion example](../build/media/vcamd_conv_ex_4.png "vcAmd_conv_ex_4")  
Example 4  
  
## See Also  
 [Types and Storage](../build/types-and-storage.md)