---
title: "Member &#39;&lt;membername&gt;&#39; conflicts with member &#39;&lt;membername&gt;&#39; in the base type &#39;&lt;basetypename&gt;&#39; and so should not be declared &#39;Overloads&#39; | Microsoft Docs"
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
  - "bc40021"
  - "vbc40021"
helpviewer_keywords: 
  - "BC40021"
ms.assetid: 2ec72726-ab0e-4545-9c1e-2409eb54482e
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Member &#39;&lt;membername&gt;&#39; conflicts with member &#39;&lt;membername&gt;&#39; in the base type &#39;&lt;basetypename&gt;&#39; and so should not be declared &#39;Overloads&#39;
A property or procedure uses the [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042) keyword to redeclare an existing property or procedure with the same name, but the existing property or procedure is in the base class.  
  
 Overloading is used to define multiple versions of a property or procedure all in the same class. You cannot define an additional version of a base class member unless the base class member already specifies [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042).  
  
 By default, this message is a warning. For more information on hiding warnings or treating warnings as errors, see [Configuring Warnings in Visual Basic](http://msdn.microsoft.com/library/99cf4781-bd4d-47b4-91b9-217933509f82).  
  
 **Error ID:** BC40021  
  
### To correct this error  
  
-   If you intend to define an additional version of the base class member and have access to the source code of the base class, add the [Overloads](http://msdn.microsoft.com/library/0c6820b8-25b2-4664-bc59-5ca93c99c042) keyword to the base class definition.  
  
-   If you do not have access to the source code of the base class, you cannot overload the member in a derived class. Remove the `Overloads` keyword.  
  
-   If you wish to replace the base class member instead of defining an additional version of it, use the [Overrides](http://msdn.microsoft.com/library/9f5e6144-ce10-465e-842b-1a8f8760af90) keyword instead of `Overloads`.  
  
-   If you wish to hide the base class member with a new member in the derived class, use the [Shadows](http://msdn.microsoft.com/library/6bf687cd-0544-4797-b51b-911125ec57c6) keyword instead of `Overloads`.  
  
## See Also  
 [Procedure Overloading](http://msdn.microsoft.com/library/fbc7fb18-e3b2-48b6-b554-64c00ed09d2a)   
 [Inheritance Basics](http://msdn.microsoft.com/library/dfc8deba-f5b3-4d1d-a937-7cb826446fc5)