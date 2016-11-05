---
title: "Troubleshooting Exceptions: System.OperationCanceledException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "OperationCanceledException class"
ms.assetid: 275e2887-7491-432b-9b80-a21bb794be29
caps.latest.revision: 9
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
# Troubleshooting Exceptions: System.OperationCanceledException
An <xref:System.OperationCanceledException> is thrown when an operation is made with the <xref:Microsoft.VisualBasic.FileIO.UICancelOption> set to `ThrowException` and the operation is cancelled.  
  
## Associated Tips  
 If you would prefer that this exception not be thrown, set <xref:System.OperationCanceledException> to `DoNothing`.  
 <xref:Microsoft.VisualBasic.FileIO.UICancelOption> has a default value of `ThrowException`. If you do not wish this exception to be thrown when the user cancels the operation, set the enumeration value to `DoNothing`.  
  
## See Also  
 <xref:System.OperationCanceledException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)