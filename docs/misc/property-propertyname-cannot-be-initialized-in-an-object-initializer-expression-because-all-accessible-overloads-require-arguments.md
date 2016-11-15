---
title: "Property &#39;&lt;propertyname&gt;&#39; cannot be initialized in an object initializer expression because all accessible overloads require arguments | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30993"
  - "vbc30993"
helpviewer_keywords: 
  - "BC30993"
ms.assetid: d4476065-2ca2-4c9e-a571-c08917a6387f
caps.latest.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
# Property &#39;&lt;propertyname&gt;&#39; cannot be initialized in an object initializer expression because all accessible overloads require arguments
The members initialized in an object initializer list must be either fields or properties. Additionally, properties in an initializer list cannot have parameters. The property causing this error is overloaded, and each of its versions requires arguments. Therefore, the property cannot be initialized in an object initializer list.  
  
 **Error ID:** BC30993  
  
### To correct this error  
  
-   Remove the property that requires arguments from the initializer list.  
  
## Example  
 The following class contains three property definitions: one for `TotalItems` and two for `Item`, which is overloaded.  
  
```  
Class CollectionOfItems  
    Property TotalItems() As Integer  
        Get  
        End Get  
        Set(ByVal value As Integer)  
        End Set  
    End Property  
    Property Item(ByVal Key As String) As Object  
        Get  
        End Get  
        Set(ByVal value As Object)  
        End Set  
    End Property  
    Property Item(ByVal Index As Integer) As Object  
        Get  
        End Get  
        Set(ByVal value As Object)  
        End Set  
    End Property  
End Class  
```  
  
 The `TotalItems` property requires no arguments and can be initialized in an object initialization list, as shown in the following declaration.  
  
```  
Dim coinCollection As New CollectionOfItems With { .TotalItems = 0 }  
```  
  
 The `Item` property is overloaded, and each overload requires an argument. Therefore, `Item` cannot appear in an object initializer list.  
  
```  
' The following declaration is not valid.  
' Dim coinCollection As New CollectionOfItems With { .TotalItems = 0, _  
'    .Item = aCoinObject }  
```  
  
 To avoid this error, initialize the `Item` property outside the object initializer.  
  
```  
Dim coinCollection As New CollectionOfItems With { .TotalItems = 0 }  
coinCollection.Item(1) = aCoinObject  
```  
  
## See Also  
 [NOT IN BUILD: Properties and Property Procedures](http://msdn.microsoft.com/en-us/23e2a1ec-7e9d-4109-8940-c703d981077b)   
 [Object Initializers: Named and Anonymous Types](http://msdn.microsoft.com/Library/e2df3807-a70f-49dd-ac94-f1e07f472b1b)   
 [How to: Call a Property Procedure](http://msdn.microsoft.com/Library/96bc4d74-d9c3-4b7a-954d-58ac8553cd94)   
 [NOT IN BUILD: Default Properties](http://msdn.microsoft.com/en-us/a70f2a27-8176-4858-935e-f25afdd43ab5)   
 [Overloads](/dotnet/articles/visual-basic/language-reference/modifiers/overloads)   
 [Procedure Overloading](/dotnet/articles/visual-basic/language-reference/procedures/procedure-overloading)