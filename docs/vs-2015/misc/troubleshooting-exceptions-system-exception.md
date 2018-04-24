---
title: "Troubleshooting Exceptions: System.Exception | Microsoft Docs"
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
  - "System.Exception exception"
  - "base classes, exceptions"
  - "exceptions, base class"
ms.assetid: fc15931a-9323-47c6-a42f-55d0534b939a
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Exception
Represents errors that occur during application execution. This is the base class for all exceptions.  
  
## Associated Tips  
 **Check the InnerException property for more information.**  
 To fix the error, you might need information about the inner (or previous) exception that led to the current exception. The current exception's <xref:System.Exception.InnerException%2A> property contains the inner exception. You can use the **View Detail** link in the **Exception Assistant** dialog box to access the <xref:System.Exception.InnerException%2A> property.  
  
 **Temporarily turn off Just My Code debugging.**  
 The exception may have occurred in code that you did not write. To debug that code, you may have to turn off Just My Code debugging. For more information, see [General, Debugging, Options Dialog Box](../Topic/General,%20Debugging,%20Options%20Dialog%20Box.md).  
  
## See Also  
 <xref:System.Exception>   
 <xref:System.Exception.InnerException%2A>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [How to: Break When an Exception is Thrown](../misc/how-to-break-when-an-exception-is-thrown.md)   
 [General, Debugging, Options Dialog Box](../Topic/General,%20Debugging,%20Options%20Dialog%20Box.md)