---
title: "Cannot implement &#39;&lt;interfacename1&gt;.&lt;membername&gt;&#39; because its implementation could conflict with the implementation for &#39;&lt;interfacename2&gt;.&lt;membername&gt;&#39; for some type arguments | Microsoft Docs"
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
  - "bc32125"
  - "vbc32125"
helpviewer_keywords: 
  - "BC32125"
ms.assetid: 74321d27-4ff8-440c-b5de-d67e98fff274
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Cannot implement &#39;&lt;interfacename1&gt;.&lt;membername&gt;&#39; because its implementation could conflict with the implementation for &#39;&lt;interfacename2&gt;.&lt;membername&gt;&#39; for some type arguments
A class implements more than one generic interface, one of which inherits from another, and two implementations of an interface member could conflict for certain values of type arguments.  
  
 The following statements can generate this error.  
  
```  
Public Interface iFace1(Of t)  
    Sub testSub()  
End Interface  
Public Interface iFace2(Of u)  
    Inherits iFace1(Of u)  
End Interface  
Public Class testClass(Of y, z)  
    Implements iFace1(Of y), iFace2(Of z)  
    Public Sub testSuby() Implements iFace1(Of y).testSub  
    End Sub  
    Public Sub testSubz() Implements iFace1(Of z).testSub  
    End Sub  
End Class  
```  
  
 Because `iFace2` inherits from `iFace1` using its own type parameter (`u`), `testClass` would implement two versions of `iFace1.testSub` with identical signatures if the same type argument were passed to `y` and `z`. This would produce an ambiguity about which version to access.  
  
 **Error ID:** BC32125  
  
### To correct this error  
  
-   Change the inheritance structure of the interfaces so that `iFace1` could not be implemented with two different type arguments.  
  
     -or-  
  
-   Remove from the `Implements` statement one of the interfaces resulting in the implementation conflict.  
  
## See Also  
 [Class Statement](http://msdn.microsoft.com/library/f2664f38-eb5a-4d4b-a374-1d041521fb6c)   
 [Interface Statement](http://msdn.microsoft.com/library/8997af73-bda3-4f79-bd41-ca396b610260)   
 [Implements Statement](http://msdn.microsoft.com/library/1fafb83f-f55a-4215-8ea9-681e8622613d)   
 [NOT IN BUILD: Implements Keyword and Implements Statement](http://msdn.microsoft.com/en-us/b96560f7-6413-480f-a1e2-f80253bab5be)   
 [Generic Types in Visual Basic](http://msdn.microsoft.com/library/89f771d9-ecbb-4737-88b8-116b63c6cf4d)