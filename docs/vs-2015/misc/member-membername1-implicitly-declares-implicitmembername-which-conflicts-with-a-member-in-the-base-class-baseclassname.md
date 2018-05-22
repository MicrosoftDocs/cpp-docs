---
title: "Member &#39;&lt;membername1&gt;&#39; implicitly declares &#39;&lt;implicitmembername&gt;&#39;, which conflicts with a member in the base class &#39;&lt;baseclassname&gt;&#39; | Microsoft Docs"
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
  - "vbc40022"
  - "bc40022"
helpviewer_keywords: 
  - "BC40022"
ms.assetid: be5bb2ee-2274-42b2-b843-179b14127b34
caps.latest.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Member &#39;&lt;membername1&gt;&#39; implicitly declares &#39;&lt;implicitmembername&gt;&#39;, which conflicts with a member in the base class &#39;&lt;baseclassname&gt;&#39;
Member '\<membername1>' implicitly declares '\<implicitmembername>', which conflicts with a member in the base class '\<baseclassname>', and so the member should not be declared 'Overloads'  
  
 A property in a derived class generates an implicit member with the same name as a member of the base class and specifies the [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042) keyword.  
  
 Overloading is used to define multiple versions of a property or procedure all in the same class. You cannot define an additional version of a base class member unless that base class member already specifies `Overloads`. Because the conflicting base class member does not specify `Overloads`, the compiler assumes that this property [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6) the implicit base class member.  
  
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
  
 **Error ID:** BC40022  
  
### To correct this error  
  
-   If you intend to hide, or shadow, the base class member, replace the [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042) keyword with the [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6) keyword in the declaration of the property.  
  
-   If you do not intend to shadow the base class member, change the name of the property to avoid the name conflicts described in the previous table.  
  
## See Also  
 [Declared Element Names](http://msdn.microsoft.com/library/09d8843b-c0dc-4afe-9dab-87c439a69e66)