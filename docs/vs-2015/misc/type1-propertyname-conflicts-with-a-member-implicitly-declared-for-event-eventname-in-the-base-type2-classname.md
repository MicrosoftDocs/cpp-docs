---
title: "&lt;type1&gt; &#39;&lt;propertyname&gt;&#39; conflicts with a member implicitly declared for event &#39;&lt;eventname&gt;&#39; in the base &lt;type2&gt; &#39;&lt;classname&gt;&#39; | Microsoft Docs"
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
  - "vbc40014"
  - "bc40014"
helpviewer_keywords: 
  - "BC40014"
ms.assetid: 100534b9-d533-4e94-a2a7-0ed26426965b
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;type1&gt; &#39;&lt;propertyname&gt;&#39; conflicts with a member implicitly declared for event &#39;&lt;eventname&gt;&#39; in the base &lt;type2&gt; &#39;&lt;classname&gt;&#39;
A property is declared with the same name as an implicit member formed from an event in the base class. For example, if the base class defines an event named `Event1`, the compiler generates the implicit procedures `add_Event1` and `remove_Event1`. If the property in this class has one of these names, it should shadow the base class member.  
  
 This message is a warning. `Shadows` is assumed by default. For more information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40014  
  
### To correct this error  
  
1.  To hide the base class member, add the `Shadows` keyword to the property declaration.  
  
2.  If you do not intend to hide the base class member, change the property name.  
  
## See Also  
 [Property Statement](http://msdn.microsoft.com/library/3155edaf-8ebd-45c6-9cef-11d5d2dc8d38)   
 [Event Statement](http://msdn.microsoft.com/library/306ff8ed-74dd-4b6a-bd2f-e91b17474042)   
 [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6)   
 [Shadowing in Visual Basic](http://msdn.microsoft.com/library/54bb4c25-12c4-4181-b4a0-93546053964e)