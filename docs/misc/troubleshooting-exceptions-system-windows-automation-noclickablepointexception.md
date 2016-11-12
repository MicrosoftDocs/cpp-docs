---
title: "Troubleshooting Exceptions: System.Windows.Automation.NoClickablePointException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHWANoClickablePoint"
helpviewer_keywords: 
  - "NoClickablePointException exception"
  - "System.Windows.Automation.NoClickablePointException exception"
ms.assetid: faf8c262-8e17-425c-ab65-7b38cd1828af
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
# Troubleshooting Exceptions: System.Windows.Automation.NoClickablePointException
A <xref:System.Windows.Automation.NoClickablePointException> exception contains information about the exception that is raised when <xref:System.Windows.Automation.AutomationElement.GetClickablePoint%2A> is called on a UI <xref:System.Windows.Automation.AutomationElement> that has no clickable point.  
  
## Remarks  
 This exception might be raised when the application window is minimized, or the element is off-screen.  
  
## See Also  
 <xref:System.Windows.Automation.NoClickablePointException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)