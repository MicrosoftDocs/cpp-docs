---
title: "Member &#39;&lt;membername1&gt;&#39; implicitly declares &#39;&lt;implicitmembername&gt;&#39;, which conflicts with a member implicitly declared for member &#39;&lt;membername2&gt;&#39; in the base class &#39;&lt;baseclassname&gt;&#39; | Microsoft Docs"
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
  - "vbc40018"
  - "bc40018"
helpviewer_keywords: 
  - "BC40018"
ms.assetid: 43844e55-9ce1-4b88-9aa8-839b37f30e5a
caps.latest.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Member &#39;&lt;membername1&gt;&#39; implicitly declares &#39;&lt;implicitmembername&gt;&#39;, which conflicts with a member implicitly declared for member &#39;&lt;membername2&gt;&#39; in the base class &#39;&lt;baseclassname&gt;&#39;
Member '\<membername1>' implicitly declares '\<implicitmembername>', which conflicts with a member implicitly declared for member '\<membername2>' in the base class '\<baseclassname>'. So the member should be declared 'Shadows'.  
  
 A member of a derived class generates an implicit member with the same name as an implicit member of the base class. Because implicit members do not specify [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042), the compiler assumes that this member [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6) the implicit base class member. Your code is more readable, and less prone to error, if you explicitly specify the `Shadows` keyword for this member.  
  
 The [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] compiler creates implicit members corresponding to certain programming elements you declare. The following table summarizes these implicit, or *synthetic*, members.  
  
|Declared element|Implicitly created members|  
|----------------------|--------------------------------|  
|Enumeration|`value__` member|  
|Event|`add_<eventname>` procedure<br /><br /> `remove_<eventname>` procedure<br /><br /> `<eventname>Event` field<br /><br /> `<eventname>EventHandler` delegate|  
|Property|`get_<propertyname>` procedure<br /><br /> `set_<propertyname>` procedure|  
|`My.Form` member, `My.WebService` member, or member of a class marked with the <xref:Microsoft.VisualBasic.MyGroupCollectionAttribute> attribute|`m_<variablename>` `Static` variable<br /><br /> `<variablename>` property<br /><br /> `get_<variablename>` procedure<br /><br /> `set_<variablename>` procedure|  
|`WithEvents` variable|`_<variablename>` variable<br /><br /> `<variablename>` property<br /><br /> `get_<variablename>` procedure<br /><br /> `set_<variablename>` procedure|  
  
 Because of the risk of name conflicts, you should avoid naming any declared programming element using the same form as any one of these implicit members. For example, you should avoid any element name that starts with `get_` or `set_`.  
  
 By default, this message is a warning. For more information about hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40018  
  
### To correct this error  
  
-   If you intend to hide, or shadow, the implicit base class member, include the [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6) keyword in the declaration of the derived class member.  
  
-   If you do not intend to shadow the implicit base class member, change the name of the derived class member to avoid conflicts with names listed in the previous table.  
  
## See Also  
 [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66)