---
title: "Troubleshooting Exceptions: System.NotCancelableException | Microsoft Docs"
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
  - "NotCancelableException class"
ms.assetid: 36b82d4b-f075-4af5-993a-3e763a7e254a
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
# Troubleshooting Exceptions: System.NotCancelableException
A `NotCancelableException` is thrown when an attempt is made to cancel an operation that is not cancelable.  
  
## Associated Tips  
 Do not try to cancel the operation.  
 Some operations cannot be canceled and will throw this exception when such an attempt is made. Avoid giving the user an option to cancel the operation in these cases.  
  
## See Also  
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)