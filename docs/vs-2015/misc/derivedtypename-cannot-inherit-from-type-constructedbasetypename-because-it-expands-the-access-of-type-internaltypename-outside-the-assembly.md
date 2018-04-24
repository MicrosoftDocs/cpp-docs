---
title: "&#39;&lt;derivedtypename&gt;&#39; cannot inherit from &lt;type&gt; &#39;&lt;constructedbasetypename&gt;&#39; because it expands the access of type &#39;&lt;internaltypename&gt;&#39; outside the assembly | Microsoft Docs"
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
  - "BC30922"
  - "vbc30922"
helpviewer_keywords: 
  - "BC30922"
ms.assetid: 81909654-7e67-4b89-81a3-25ae57f678f7
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;derivedtypename&gt;&#39; cannot inherit from &lt;type&gt; &#39;&lt;constructedbasetypename&gt;&#39; because it expands the access of type &#39;&lt;internaltypename&gt;&#39; outside the assembly
A derived class or interface attempts to expand the access level of a restricted type by using it as a type argument to a base class or interface.  
  
 The following code can generate this error.  
  
```  
Public Class baseClass(Of t)  
End Class  
Public Class derivedClass  
    Inherits baseClass(Of restrictedStructure)  
End Class  
Friend Structure restrictedStructure  
    Dim firstMember As Integer  
End Structure  
```  
  
 Code outside the assembly is not allowed to access `restrictedStructure`. However, `derivedClass` can be accessed from any code that can reference it. Therefore, `derivedClass` cannot inherit `baseClass` if it uses `restrictedStructure` as a type argument, because that could expose `restrictedStructure` to code in any assembly.  
  
 **Error ID:** BC30922  
  
### To correct this error  
  
-   Adjust the access levels of the classes or interfaces so the derived type does not expand the access level of the restricted type.  
  
     -or-  
  
-   If you cannot adjust the access levels, do not use the restricted type as a type argument when constructing the base class or interface.  
  
## See Also  
 [Inherits Statement](http://msdn.microsoft.com/library/9e6fe042-9af3-4341-8093-fc3537770cf2)   
 [Inheritance Basics](http://msdn.microsoft.com/library/dfc8deba-f5b3-4d1d-a937-7cb826446fc5)   
 [Access Levels in Visual Basic](http://msdn.microsoft.com/library/6e06c1ab-fd78-47f0-83a8-1152780b5e1a)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)   
 [Type List](http://msdn.microsoft.com/library/56db947a-2ae8-40f2-a70a-960764e9d0db)