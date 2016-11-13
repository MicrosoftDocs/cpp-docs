---
title: "Troubleshooting Exceptions: System.ComponentModel.Win32Exception | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "Win32Exception exception"
  - "System.ComponentModel.Win32Exception exception"
ms.assetid: 6d5facbd-34f0-4f04-a7df-2bf62d676529
caps.latest.revision: 4
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
# Troubleshooting Exceptions: System.ComponentModel.Win32Exception
The exception that is thrown for a Win32 error code.  
  
## Remarks  
 Win32 error codes are translated from their numeric representations into a system message when they are displayed. Use the <xref:System.ComponentModel.Win32Exception.NativeErrorCode%2A> property to access the numeric representation of the error code.  
  
## See Also  
 <xref:System.ComponentModel.Win32Exception>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Where Can I Look Up Win32 Error Codes?](/visual-studio/debugger/where-can-i-look-up-win32-error-codes-q)