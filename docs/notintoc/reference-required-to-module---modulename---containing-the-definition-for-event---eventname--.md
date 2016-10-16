---
title: "Reference required to module &#39;&lt;modulename&gt;&#39; containing the definition for event &#39;&lt;eventname&gt;&#39;"
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
  - "vbc30006"
  - "bc30006"
helpviewer_keywords: 
  - "BC30006"
ms.assetid: 7ab80acd-b47b-4920-bb15-6a3206b984e4
caps.latest.revision: 9
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
# Reference required to module &#39;&lt;modulename&gt;&#39; containing the definition for event &#39;&lt;eventname&gt;&#39;
Reference required to module '<`modulename`>' containing the definition for event '<`eventname`>'. Add one to your project.  
  
 The event is defined in a module that is not directly referenced in your project. The [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] compiler requires a reference to avoid ambiguity in case the event is defined in more than one module.  
  
 **Error ID:** BC30006  
  
### To correct this error  
  
-   Include the name of the unreferenced module in your project references.  
  
## See Also  
 [NIB: Referencing Namespaces and Components](assetId:///568fa759-796b-44cd-bf5e-1cf8de6e38fd)   
 [Troubleshooting Broken References](../Topic/Troubleshooting%20Broken%20References.md)