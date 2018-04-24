---
title: "Troubleshooting Exceptions: System.Runtime.InteropServices.SafeArrayRankMismatchException | Microsoft Docs"
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
  - "EHSafeArrayRankMismatch"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "SafeArrayRankMismatchException class"
ms.assetid: 6c69355c-8bfd-49bb-acad-b4d7236ae2e7
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Runtime.InteropServices.SafeArrayRankMismatchException
A <xref:System.Runtime.InteropServices.SafeArrayRankMismatchException> exception is thrown when the rank of an incoming SAFEARRAY does not match the rank specified in the managed signature.  
  
## Associated Tips  
 **Make sure your array has the required number of dimensions.**  
 Because the rank and bounds of a safe array cannot be determined from the type library, the rank is assumed to equal 1, and the lower bound is assumed to equal 0. The rank and bounds must be defined in the managed signature produced by the [Tlbimp.exe (Type Library Importer)](../Topic/Tlbimp.exe%20\(Type%20Library%20Importer\).md).  
  
## See Also  
 <xref:System.Runtime.InteropServices.SafeArrayRankMismatchException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Default Marshaling for Arrays](../Topic/Default%20Marshaling%20for%20Arrays.md)   
 [Arrays](../Topic/Arrays%20in%20Visual%20Basic.md)