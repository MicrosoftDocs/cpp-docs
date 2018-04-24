---
title: "&lt;name&gt; is not a valid solution name. | Microsoft Docs"
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
  - "vs.message.VS_E_INVALIDSOLUTIONNAME"
  - "vs.message.0x800A00D3"
ms.assetid: 79b7870d-16bd-4527-8ce6-ffb015e7e330
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# &lt;name&gt; is not a valid solution name.
This error generally occurs when the command `File.NewProject` has been entered in the **Command** window or **Find/Command** box with an incorrectly formatted value for the argument /sln:*solutionname*.  
  
### To correct this error  
  
1.  Re-type the command syntax and omit the optional argument /sln:*solutionname*. A unique solution name will automatically be generated.  
  
     —or—  
  
     Check that the solution name does not contain leading or trailing spaces and is not a reserved word. Reserved words include NUL, CON, AUX, COM*x*, or LPT*x*, where *x* is a digit 1-9.  
  
## See Also  
 [Command Window](http://msdn.microsoft.com/library/48711628-1909-4713-a73e-d7b714c77f8a)