---
title: "Container Class::swap | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "swap method"
ms.assetid: 898c219c-bc8e-4d14-a149-6240426c693f
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Container Class::swap
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Container Class::swap](https://docs.microsoft.com/cpp/standard-library/container-class-swap).  
  
NOTE]
>  This topic is in the Visual C++ documentation as a nonfunctional example of containers used in the Standard C++ Library. For more information, see [STL Containers](../standard-library/stl-containers.md).  
  
 Swaps the controlled sequences between **\*this** and ` right`.  
  
## Syntax  
  
```  
 
    void swap(Container& right);
```  
  
## Remarks  
 If **get_allocator ==** ` right`**.get_allocator**, it does so in constant time. Otherwise, it performs a number of element assignments and constructor calls proportional to the number of elements in the two controlled sequences.  
  
## See Also  
 [Sample Container Class](../standard-library/sample-container-class.md)




