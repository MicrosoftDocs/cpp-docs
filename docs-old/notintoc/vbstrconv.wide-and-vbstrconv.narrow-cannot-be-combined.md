---
title: "VbStrConv.Wide and VbStrConv.Narrow cannot be combined"
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
  - "vbrArgument_IllegalWideNarrow"
ms.assetid: a53b4e6a-36b1-4e36-b2c5-8196313ec599
caps.latest.revision: 8
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
# VbStrConv.Wide and VbStrConv.Narrow cannot be combined
Your application is trying to combine the `VbStrConv` enumeration members `Wide` and `Narrow`, which are mutually exclusive.  
  
### To correct this error  
  
1.  Remove either `VbStrConv.Wide` or `VbStrConv.Narrow`.  
  
## See Also  
 \<xref:System.Globalization>   
 [NOTINBUILD VbStrConv Enumeration](assetId:///59f83dd9-6361-47df-a836-02ba9d4cb936)   
 [Introduction to International Applications Based on the .NET Framework](../Topic/Introduction%20to%20International%20Applications%20Based%20on%20the%20.NET%20Framework.md)