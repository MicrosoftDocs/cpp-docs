---
title: "Array lower bounds can be only &#39;0&#39;"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "bc32059"
  - "vbc32059"
helpviewer_keywords: 
  - "BC32059"
ms.assetid: 273b69df-910e-45d2-acac-632005d24c5a
caps.latest.revision: 10
ms.author: "billchi"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Array lower bounds can be only &#39;0&#39;
A declaration statement or `New` clause specifies an array with a lower bound other than 0.  
  
 When you create or initialize an array variable, you can optionally specify the upper bound of each dimension. If you do, the length of that dimension becomes the upper bound plus one, because the lower bound is always zero. You can optionally specify the lower bound as well, but you must specify 0. The advantage of doing so is that your code is easier to read.  
  
 **Error ID:** BC32059  
  
### To correct this error  
  
-   Change the lower bound specification to 0, or remove it entirely.  
  
## See Also  
 [Arrays](../Topic/Arrays%20in%20Visual%20Basic.md)   
 [NOTINBUILD How to: Specify a Zero Lower Bound on an Array](assetId:///20ffd49a-64f7-4634-8ed0-46ba1049d935)