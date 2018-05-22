---
title: "Troubleshooting Exceptions: System.Windows.Automation.NoClickablePointException | Microsoft Docs"
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
  - "EHWANoClickablePoint"
helpviewer_keywords: 
  - "NoClickablePointException exception"
  - "System.Windows.Automation.NoClickablePointException exception"
ms.assetid: faf8c262-8e17-425c-ab65-7b38cd1828af
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Windows.Automation.NoClickablePointException
A <xref:System.Windows.Automation.NoClickablePointException> exception contains information about the exception that is raised when <xref:System.Windows.Automation.AutomationElement.GetClickablePoint%2A> is called on a UI <xref:System.Windows.Automation.AutomationElement> that has no clickable point.  
  
## Remarks  
 This exception might be raised when the application window is minimized, or the element is off-screen.  
  
## See Also  
 <xref:System.Windows.Automation.NoClickablePointException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)