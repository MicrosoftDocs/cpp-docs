---
title: "Troubleshooting Exceptions: System.Printing.PrintingCanceledException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "PrintingCanceledException exception"
  - "System.Printing.PrintingCanceledException exception"
ms.assetid: bec418d6-f168-4a73-962f-5ee0427600b6
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
# Troubleshooting Exceptions: System.Printing.PrintingCanceledException
A <xref:System.Printing.PrintingCanceledException> exception occurs when code attempts to access a canceled print job.  
  
## Remarks  
 If you are creating a Windows Presentation Foundation (WPF) application that includes printing functionality and allows print jobs to be canceled, be sure to correctly handle this exception. An unhandled exception of this type can cause a Windows Presentation Foundation application to stop responding.  
  
## See Also  
 <xref:System.Printing.PrintingCanceledException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)