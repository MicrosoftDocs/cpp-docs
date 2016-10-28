---
title: "Troubleshooting Exceptions: System.Reflection.AmbiguousMatchException"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.Reflection.AmbiguousMatchException exception"
  - "AmbiguousMatchException exception"
ms.assetid: f92b5c51-42b6-4c2e-83df-0d598b3b41c4
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
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
# Troubleshooting Exceptions: System.Reflection.AmbiguousMatchException
The exception that is thrown when binding to a method results in more than one method matching the binding criteria.  
  
## Remarks  
 An <xref:System.Reflection.AmbiguousMatchException> is thrown if the application calls upon a class, and it cannot determine which class or overloaded class to use. The binding attempts to locate the proper class to use, determined by the number of parameters and the type of parameters. If multiple acceptable classes are located, this exception is thrown.  
  
## See Also  
 <xref:System.Reflection.AmbiguousMatchException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)