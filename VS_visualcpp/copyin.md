---
title: "copyin"
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
ms.assetid: 369efa88-613c-4cb1-9e11-7b9ee08a4b25
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
# copyin
Allows threads to access the master thread's value, for a [threadprivate](../VS_visualcpp/threadprivate.md) variable.  
  
## Syntax  
  
```  
copyin(var)  
```  
  
## Remarks  
 where,  
  
 `var`  
 The `threadprivate` variable that will be initialized with the value of the variable in the master thread, as it exists before the parallel construct.  
  
## Remarks  
 `copyin` applies to the following directives:  
  
-   [parallel](../VS_visualcpp/parallel.md)  
  
-   [for](../VS_visualcpp/for--OpenMP-.md)  
  
-   [sections](../VS_visualcpp/sections--OpenMP-.md)  
  
 For more information, see [2.7.2.7 copyin](../VS_visualcpp/2.7.2.7-copyin.md).  
  
## Example  
 See [threadprivate](../VS_visualcpp/threadprivate.md) for an example of using `copyin`.  
  
## See Also  
 [Clauses](../VS_visualcpp/OpenMP-Clauses.md)