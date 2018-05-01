---
title: "piecewise_constant_distribution::densities | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "tr1::piecewise_constant_distribution::densities"
  - "tr1.piecewise_constant_distribution.densities"
  - "piecewise_constant_distribution::densities"
  - "std.tr1.piecewise_constant_distribution.densities"
  - "std::tr1::piecewise_constant_distribution::densities"
  - "piecewise_constant_distribution.densities"
  - "densities"
  - "random/std::tr1::piecewise_constant_distribution::densities"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "densities method"
ms.assetid: 6a8076a6-3847-4504-8b03-7b43edf6e5bd
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "douge"
---
# piecewise_constant_distribution::densities
Returns the stored densities for the distribution.  
  
## Syntax  
  
```  
std::vector<double> densities() const;  
```  
  
## Remarks  
 The member function returns the stored densities, calculated from the weight parameter(s).  
  
## Requirements  
 **Header:** \<random>  
  
 **Namespace:** std  
  
## See Also  
 [\<random>](../standard-library/random.md)   
 [piecewise_constant_distribution Class](../standard-library/piecewise-constant-distribution-class.md)