---
title: "System.Diagnostics.DebuggerHiddenAttribute does not affect &#39;Get&#39; or &#39;Set&#39; when applied to the Property definition | Microsoft Docs"
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
  - "bc40051"
  - "vbc40051"
helpviewer_keywords: 
  - "BC40051"
ms.assetid: 623d5e48-7fb2-48a9-bbbb-92914b08c01c
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# System.Diagnostics.DebuggerHiddenAttribute does not affect &#39;Get&#39; or &#39;Set&#39; when applied to the Property definition
System.Diagnostics.DebuggerHiddenAttribute does not affect 'Get' or 'Set' when applied to the Property definition. Apply the attribute directly to the 'Get' and 'Set' procedures as appropriate.  
  
 The <xref:System.Diagnostics.DebuggerHiddenAttribute> is applied to a property declaration.  
  
 Source code can apply the <xref:System.Diagnostics.DebuggerHiddenAttribute> to a procedure. Doing so signals the Visual Studio debugger not to stop inside the procedure and not to allow any breakpoints to be set in the procedure.  
  
 Although you can apply <xref:System.Diagnostics.DebuggerHiddenAttribute> to a property, it does not have any effect. It has the effect that you want only if you apply it to the property's `Get` or `Set` procedure.  
  
 By default, this message is a warning. For information about hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40051  
  
### To correct this error  
  
-   Remove the <xref:System.Diagnostics.DebuggerHiddenAttribute> from the property declaration and apply it to the property's `Get` or `Set` procedure as appropriate.  
  
## See Also  
 <xref:System.Diagnostics.DebuggerHiddenAttribute>   
 [Property Procedures](http://msdn.microsoft.com/library/46a98379-e1a2-45dd-a48c-b51213f5ab07)   
 [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38)   
 [Get Statement](http://msdn.microsoft.com/library/56b05cdc-bd64-4dfd-bb12-824eacec6f94)   
 [Set Statement](http://msdn.microsoft.com/library/9ecc27b4-df84-420d-9075-db25455fb3cd)