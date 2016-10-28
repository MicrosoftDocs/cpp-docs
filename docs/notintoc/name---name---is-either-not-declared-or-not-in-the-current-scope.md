---
title: "Name &#39;&lt;name&gt;&#39; is either not declared or not in the current scope"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vbc36610"
  - "bc36610"
helpviewer_keywords: 
  - "BC36610"
ms.assetid: e66a4b8a-9252-42ae-a30d-341fad4f74be
caps.latest.revision: 4
ms.author: "billchi"
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
# Name &#39;&lt;name&gt;&#39; is either not declared or not in the current scope
A LINQ query refers to a programming element, but the compiler cannot find an element that has that exact name.  
  
 **Error ID:** BC36610  
  
### To correct this error  
  
1.  Check the spelling of the name in the referring statement. [!INCLUDE[vbprvb](../cli/includes/vbprvb_md.md)] is case-insensitive, but any other variation in the spelling constitutes a different name. Note that the underscore (`_`) is part of the name and therefore part of the spelling.  
  
2.  Verify that the programming element is in scope. If the referring statement is outside the region declaring the programming element, you might have to qualify the element name. For more information, see [Scope in Visual Basic](../Topic/Scope%20in%20Visual%20Basic.md).  
  
3.  Ensure that you have the member access operator (`.`) between an object and its member. For example, if you have a \<xref:System.Windows.Forms.TextBox> control named `TextBox1`, to access its \<xref:System.Windows.Forms.TextBoxBase.Text*> property you should type `TextBox1.Text`. If instead you type `TextBox1Text`, you have created a different name.  
  
## See Also  
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [Visual Basic Naming Conventions](../Topic/Visual%20Basic%20Naming%20Conventions.md)   
 [References to Declared Elements](../Topic/References%20to%20Declared%20Elements%20\(Visual%20Basic\).md)