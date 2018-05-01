---
title: "&#39;Get&#39; statements are no longer supported | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30829"
  - "bc30829"
helpviewer_keywords: 
  - "BC30829"
ms.assetid: 8d798357-7efb-4423-9808-8b20777b97ba
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Get&#39; statements are no longer supported
`Get` statements are no longer supported. File I/O functionality is available in the `Microsoft.VisualBasic` namespace.  
  
 `Get` is not supported for file operations, and can only be used in property procedure syntax.  
  
 **Error ID:** BC30829  
  
### To correct this error  
  
1.  Perform file operations using the members of `System.IO`, `FileSystemObject`, and [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] run-time functions.  
  
## See Also  
 [Processing Drives, Directories, and Files](http://msdn.microsoft.com/library/f1db14c8-a4fd-4d0b-8323-c7cb29d688c2)   
 [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94)   
 [File Access with Visual Basic](http://msdn.microsoft.com/library/231533bf-d049-4345-befa-3fb78fe6517d)