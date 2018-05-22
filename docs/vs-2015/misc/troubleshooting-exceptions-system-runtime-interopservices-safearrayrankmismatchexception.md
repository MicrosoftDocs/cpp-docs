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
 Because the rank and bounds of a safe array cannot be determined from the type library, the rank is assumed to equal 1, and the lower bound is assumed to equal 0. The rank and bounds must be defined in the managed signature produced by the [Tlbimp.exe (Type Library Importer)](http://msdn.microsoft.com/library/ec0a8d63-11b3-4acd-b398-da1e37e97382).  
  
## See Also  
 <xref:System.Runtime.InteropServices.SafeArrayRankMismatchException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)   
 [Default Marshaling for Arrays](http://msdn.microsoft.com/library/8a3cca8b-dd94-4e3d-ad9a-9ee7590654bc)   
 [Arrays](http://msdn.microsoft.com/library/dbf29737-b589-4443-bee6-a27588d9c67e)