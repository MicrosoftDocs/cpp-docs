---
title: "Name &#39;&lt;name&gt;&#39; is either not declared or not in the current scope | Microsoft Docs"
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
  - "vbc36610"
  - "bc36610"
helpviewer_keywords: 
  - "BC36610"
ms.assetid: e66a4b8a-9252-42ae-a30d-341fad4f74be
caps.latest.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Name &#39;&lt;name&gt;&#39; is either not declared or not in the current scope
A LINQ query refers to a programming element, but the compiler cannot find an element that has that exact name.  
  
 **Error ID:** BC36610  
  
### To correct this error  
  
1.  Check the spelling of the name in the referring statement. [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] is case-insensitive, but any other variation in the spelling constitutes a different name. Note that the underscore (`_`) is part of the name and therefore part of the spelling.  
  
2.  Verify that the programming element is in scope. If the referring statement is outside the region declaring the programming element, you might have to qualify the element name. For more information, see [Scope in Visual Basic](http://msdn.microsoft.com/library/208106fe-79c9-4eec-93c6-55f08548895f).  
  
3.  Ensure that you have the member access operator (`.`) between an object and its member. For example, if you have a <xref:System.Windows.Forms.TextBox> control named `TextBox1`, to access its <xref:System.Windows.Forms.TextBoxBase.Text%2A> property you should type `TextBox1.Text`. If instead you type `TextBox1Text`, you have created a different name.  
  
## See Also  
 [Introduction to LINQ in Visual Basic](http://msdn.microsoft.com/library/3047d86e-0d49-40e2-928b-dc02e46c7984)   
 [Visual Basic Naming Conventions](http://msdn.microsoft.com/library/164949a4-2a7c-4736-9d82-9c3078e2e56c)   
 [References to Declared Elements](http://msdn.microsoft.com/library/d6301709-f4cc-4b7a-b8ba-80898f14ab46)