---
title: "XML literals and XML axis properties are not available during this debugging session because they are not used in this assembly | Microsoft Docs"
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
  - "vbc31196"
  - "bc31196"
helpviewer_keywords: 
  - "BC31196"
ms.assetid: 36be5c92-dd6b-41d4-894a-2bd71d772092
caps.latest.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# XML literals and XML axis properties are not available during this debugging session because they are not used in this assembly
An XML literal or XML axis property has been referenced in the **Watch** or **Immediate** window during a debugging session in which XML in [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] features are not available. This is the case for an assembly that either does not use the XML in [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] features or is a release build.  
  
 **Error ID:** BC31196  
  
### To correct this error  
  
-   Start a new debugging session using the debug build of the assembly.  
  
## See Also  
 [Debugging Your Visual Basic Application](http://msdn.microsoft.com/library/904760b8-9fe9-42a7-9d65-d93774253219)   
 [XML Literals](http://msdn.microsoft.com/library/16b28c40-8768-423f-bd9c-22ff10de2b54)   
 [XML Axis Properties](http://msdn.microsoft.com/library/7e400e20-5d1e-4d22-a65c-9df79d5c1621)   
 [XML](http://msdn.microsoft.com/library/954b6e40-1246-4185-a018-4061724fcae9)