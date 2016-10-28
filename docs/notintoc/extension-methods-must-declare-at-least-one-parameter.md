---
title: "Extension methods must declare at least one parameter"
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
  - "vbc36552"
  - "bc36552"
helpviewer_keywords: 
  - "BC36552"
ms.assetid: a8cc8cdd-cdb5-42ca-b5a1-c9a71abd46eb
caps.latest.revision: 15
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
 [Extension Methods](../Topic/Extension%20Methods%20\(Visual%20Basic\).md)   
 [Procedure Parameters and Arguments](../Topic/Procedure%20Parameters%20and%20Arguments%20\(Visual%20Basic\).md)   
 [Procedures](../Topic/Procedures%20in%20Visual%20Basic.md)