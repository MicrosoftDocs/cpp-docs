---
title: "&#39;Optional&#39; cannot be applied to the first parameter of an extension method | Microsoft Docs"
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
  - "bc36553"
  - "vbc36553"
helpviewer_keywords: 
  - "BC36553"
ms.assetid: 8ea0b90c-f155-47a9-988b-5b8009b510af
caps.latest.revision: 19
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Optional&#39; cannot be applied to the first parameter of an extension method
'Optional' cannot be applied to the first parameter of an extension method. The first parameter specifies which type to extend.  
  
 The first parameter of an extension method specifies the data type that the method extends. When the method is executed, the first parameter is bound to the instance of the data type that invokes the method. Therefore, the first parameter is required and cannot be optional.  
  
 The restriction applies only to the first parameter. Other parameters can be optional or not, following the same rules as in any other method. For more information, see [Parameter List](http://msdn.microsoft.com/library/5d737319-0c34-4df9-a23d-188fc840becd).  
  
 **Error ID:** BC36553  
  
### To correct this error  
  
-   If you want the current first parameter to specify the data type being extended, remove the `Optional` keyword.  
  
-   If the current first parameter is a standard parameter to the method and you do not want it to represent the data type being extended, add a new first parameter.  
  
## Example  
 The first parameter in the following example is the only indication that the `Print` method extends the `String` data type. Therefore, it cannot be optional.  
  
```  
<Extension()>  
Public Sub Print (ByVal str As String)  
    Console.WriteLine(str)  
End Sub  
```  
  
 When the extension method is called as follows, parameter `str` in the method is bound to `greeting`, the instance of `String` that calls `Print`. The compiler uses `greeting` as the argument to extension method `Print`.  
  
```  
Dim greeting As String = "Hello"  
greeting.Print()  
```  
  
## See Also  
 [Extension Methods](http://msdn.microsoft.com/library/b8020aae-374d-46a9-bcb7-8cc2390b93b6)   
 [How to: Define Optional Parameters for a Procedure (Visual Basic)](http://msdn.microsoft.com/en-us/0b32b312-0da0-489b-96ad-7dcb1f1f8f88)   
 [Optional Parameters](http://msdn.microsoft.com/library/398d2845-1069-4e94-b934-a73b545c8b87)