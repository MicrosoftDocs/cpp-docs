---
title: "&lt;type1&gt; &#39;&lt;membername&gt;&#39; shadows an overloadable member declared in the base &lt;type2&gt; &#39;&lt;classname&gt;&#39; | Microsoft Docs"
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
  - "bc40003"
  - "vbc40003"
helpviewer_keywords: 
  - "BC40003"
ms.assetid: 1e0d2061-0ad9-4915-b946-d55cb5d5ee80
caps.latest.revision: 14
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;type1&gt; &#39;&lt;membername&gt;&#39; shadows an overloadable member declared in the base &lt;type2&gt; &#39;&lt;classname&gt;&#39;
\<type1> '\<membername>' shadows an overloadable member declared in the base \<type2> '\<classname>. If you want to overload the base method, this method must be declared 'Overloads'.  
  
 A derived class defines a `Function` or `Sub` procedure or a `Property` with the same name as a procedure or property defined in the base class. Because procedures and properties are overloadable members, the derived class can either overload or shadow the base class member. However, the derived class code does not specify either [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042) or [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6) in the declaration. In the absence of either keyword, the compiler assumes `Shadows`.  
  
 It is good programming practice to specify either `Overloads` or `Shadows`. This makes your code easier to read and understand.  
  
 By default, this message is a warning. For more information about hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40003  
  
### To correct this error  
  
-   If you want to overload the base class method or property, include the `Overloads` keyword in the declaration.  
  
-   If you want to shadow the base class method or property, include the `Shadows` keyword instead of `Overloads`.  
  
-   If you do not want to either overload or shadow the base class member, change the name of the derived class member.  
  
## See Also  
 [Procedure Overloading](http://msdn.microsoft.com/library/fbc7fb18-e3b2-48b6-b554-64c00ed09d2a)   
 [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042)   
 [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6)   
 [Shadowing in Visual Basic](http://msdn.microsoft.com/library/54bb4c25-12c4-4181-b4a0-93546053964e)   
 [Function Statement](http://msdn.microsoft.com/library/a4497077-0f46-4ede-a27f-9e8670df52b9)   
 [Sub Statement](http://msdn.microsoft.com/library/e347d700-d06c-405b-b302-e9b1edb57dfc)   
 [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38)