---
title: "Compiler Warning (level 4) C4343"
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
ms.assetid: a721b710-e04f-4d15-b678-e4a2c8fd0181
caps.latest.revision: 8
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
# Compiler Warning (level 4) C4343
\#pragma optimize("g",off) overrides /Og option  
  
 This warning, only valid in the Itanium Processor Family (IPF) compiler, reports that a pragma [optimize](../VS_visualcpp/optimize.md) overrode a [/Og](../VS_visualcpp/-Og--Global-Optimizations-.md) compiler option.  
  
 The following sample generates C4343:  
  
```  
// C4343.cpp  
// compile with: /Og /W4 /LD  
// processor: IPF  
#pragma optimize ("g", off)   // C4343  
```