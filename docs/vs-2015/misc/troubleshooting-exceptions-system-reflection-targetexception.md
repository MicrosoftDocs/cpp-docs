---
title: "Troubleshooting Exceptions: System.Reflection.TargetException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.Reflection.TargetException exception"
  - "TargetException exception"
ms.assetid: 88b8e4b4-f1a3-4c4a-b1ef-cac176160803
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Reflection.TargetException
The exception that is thrown when an attempt is made to invoke an invalid target.  
  
## Remarks  
 A <xref:System.Reflection.TargetException> is thrown when an attempt is made to invoke a non-static method on a null object. This may occur because the caller does not have access to the member, or because the target does not define the member, or similar circumstances.  
  
## See Also  
 <xref:System.Reflection.TargetException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)