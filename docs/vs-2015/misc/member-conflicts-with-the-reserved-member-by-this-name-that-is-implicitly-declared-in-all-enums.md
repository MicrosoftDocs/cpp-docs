---
title: "&#39;&lt;member&gt;&#39; conflicts with the reserved member by this name that is implicitly declared in all enums | Microsoft Docs"
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
  - "bc31420"
  - "vbc31420"
helpviewer_keywords: 
  - "BC31420"
ms.assetid: f2ea5a8b-f63c-4c93-bfac-418ae5a150a5
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;member&gt;&#39; conflicts with the reserved member by this name that is implicitly declared in all enums
The name of a type member conflicts with the name of a member implicitly declared in all enumerations.  
  
 The [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] compiler creates implicit members corresponding to certain programming elements you declare. Enumerations implicitly declare the member `value__member`.  
  
 **Error ID:** BC31420  
  
### To correct this error  
  
-   Modify the name of the member.  
  
## See Also  
 [NotInBuild:Declaration Statements in Visual Basic](http://msdn.microsoft.com/en-us/81f3c398-f45c-4d95-80bf-aa39d1a0fb30)   
 [Enumerations Overview](http://msdn.microsoft.com/library/b42a38ee-5e77-4f99-a037-e3a127ead89c)   
 [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66)