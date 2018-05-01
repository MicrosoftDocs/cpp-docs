---
title: "Extension methods must declare at least one parameter | Microsoft Docs"
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
  - "vbc36552"
  - "bc36552"
helpviewer_keywords: 
  - "BC36552"
ms.assetid: a8cc8cdd-cdb5-42ca-b5a1-c9a71abd46eb
caps.latest.revision: 15
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Extension methods must declare at least one parameter
Extension methods must declare at least one parameter. The first parameter specifies which type to extend.  
  
 An extension method without parameters is not valid because the first parameter specifies which data type the method extends. The first parameter is bound to the instance of the data type that invokes the method.  
  
 **Error ID:** BC36552  
  
### To correct this error  
  
-   Add a parameter of the type that your method extends.  
  
## Example  
 The first parameter in the following example indicates that the `Print` method extends the `String` data type.  
  
```  
<Extension()> _  
Public Sub Print (ByVal str As String)  
    Console.WriteLine(str)  
End Sub  
```  
  
 When the extension method is called as follows, parameter `str` in the method is bound to `greeting`, the instance of `String` that calls `Print`. The compiler will use `greeting` as the argument to extension method `Print`.  
  
```  
Dim greeting As String = "Hello"  
greeting.Print()  
```  
  
## See Also  
 [Extension Methods](http://msdn.microsoft.com/library/b8020aae-374d-46a9-bcb7-8cc2390b93b6)   
 [Procedure Parameters and Arguments](http://msdn.microsoft.com/library/ff275aff-aa13-40df-bd4c-63486db8c1e9)   
 [Procedures](http://msdn.microsoft.com/library/9effbcf0-80a0-4d1a-98f4-2c6920592766)