---
title: "Troubleshooting Exceptions: System.NotSupportedException"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "NotSupportedException class"
ms.assetid: a214e851-ee0f-4bbd-9f72-8769046526f3
caps.latest.revision: 17
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
# Troubleshooting Exceptions: System.NotSupportedException
A \<xref:System.NotSupportedException> exception is thrown when an invoked method is not supported, or when there is an attempt to read, seek, or write to a stream that does not support the invoked functionality.  
  
## Associated Tips  
 **Check to make sure the method is supported.**  
 There are methods that are not supported in the base class, with the expectation that these methods will be supported in the derived classes instead. If a derived class implements only a subset of the methods from its base class, it will throw a \<xref:System.NotSupportedException> exception for the unsupported methods.  
  
## Remarks  
 When working with the [!INCLUDE[Compact](../notintoc/includes/compact_md.md)] and using P/Invoke on a native function, this exception may be thrown if:  
  
-   The declaration in managed code is incorrect.  
  
-   The [!INCLUDE[Compact](../notintoc/includes/compact_md.md)] does not support what you are trying to do.  
  
-   The DLL names are mangled on export.  
  
-   In such a case, check:  
  
-   For any violations of the [!INCLUDE[Compact](../notintoc/includes/compact_md.md)] P/Invoke restrictions.  
  
-   For any arguments that require pre-allocated memory. If these exist, you should pass a reference to an existing variable.  
  
-   That the names of the exported functions are correct. This can be verified with DumpBin.exe.  
  
-   That you are not attempting to pass too many arguments.  
  
## See Also  
 \<xref:System.NotSupportedException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)