---
title: "Troubleshooting Exceptions: System.OutOfMemoryException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
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
  - "OutOfMemoryException class"
ms.assetid: eb16f008-964e-40a1-91f6-6ad25fa82d5a
caps.latest.revision: 20
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
# Troubleshooting Exceptions: System.OutOfMemoryException
An <xref:System.OutOfMemoryException> exception is thrown when an attempt to allocate memory fails.  
  
## Associated Tips  
 **If you are creating an array, make sure the size is correct.**  
 For more information, Visual Basic users can see [Arrays](/dotnet/visual-basic/programming-guide/language-features/arrays/index).  
  
 For more information, C# users can see [Arrays](/dotnet/csharp/programming-guide/arrays/index).  
  
 **Be sure you have enough memory for internal purposes and new managed objects.**  
 If you are programming on the [!INCLUDE[Compact](../misc/includes/compact_md.md)], the common language runtime throws this exception when there is not enough memory for internal purposes or new managed objects. To prevent the exception, avoid programming large methods that consume 64 or more kilobytes of memory.  
  
## Remarks  
 Excessive managed memory usage is commonly caused by:  
  
-   Reading large data sets into memory.  
  
-   Creating excessive cache entries.  
  
-   Uploading or downloading large files.  
  
-   Excessive use of regular expressions or strings while parsing files.  
  
-   Excessive view state.  
  
-   Too much data in session state or too many sessions.  
  
 This exception may be thrown with an additional message, "Not enough storage is available to complete this operation," when invoking a method on a COM object that returns a user-defined type that contains a safe array (an array of non-fixed size). This is because the .NET Framework cannot marshal a structure field with a safe array type.  
  
## See Also  
 <xref:System.OutOfMemoryException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)