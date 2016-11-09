---
title: "Troubleshooting Exceptions: Microsoft.VisualStudio.Tools.Applications.Runtime.ControlNotFoundException"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "Microsoft.VisualStudio.Tools.Applications.Runtime.ControlNotFoundException exception"
ms.assetid: 87995c5e-5831-474d-a5f8-d991a9abe126
caps.latest.revision: 10
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
# Troubleshooting Exceptions: Microsoft.VisualStudio.Tools.Applications.Runtime.ControlNotFoundException
A <xref:Microsoft.VisualStudio.Tools.Applications.Runtime.ControlNotFoundException> exception is thrown when your code attempts to access a control that is not on the document. The control might have been removed by the end user or by some other code. There is no way to check for the control before you attempt to access it; if the control has been removed the solution will not work.  
  
## See Also  
 <xref:Microsoft.VisualStudio.Tools.Applications.Runtime.ControlNotFoundException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)