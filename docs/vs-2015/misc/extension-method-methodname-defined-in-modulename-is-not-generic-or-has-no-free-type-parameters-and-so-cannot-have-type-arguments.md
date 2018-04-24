---
title: "Extension method &#39;&lt;methodname&gt;&#39; defined in &#39;&lt;modulename&gt;&#39; is not generic (or has no free type parameters) and so cannot have type arguments | Microsoft Docs"
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
  - "bc36907"
  - "vbc36907"
helpviewer_keywords: 
  - "BC36907"
ms.assetid: 45191e93-89d1-48ec-99a5-ff9661a2a6ee
caps.latest.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Extension method &#39;&lt;methodname&gt;&#39; defined in &#39;&lt;modulename&gt;&#39; is not generic (or has no free type parameters) and so cannot have type arguments
A type argument has been specified in a call to an extension method that either has no generic parameters or has no generic parameters for which a type is not already specified. For example, the following code causes this error.  
  
```vb  
' The extension method is not generic.  
<Extension()> _  
Sub Example(ByVal str As String)  
    ' Body of the Sub.  
End Sub  
```  
  
```vb  
Dim str = "hi"  
'' The call to Example specifies a type argument.  
'' Not valid.  
'str.Example(Of String)()  
```  
  
 **Error ID:** BC36907  
  
### To correct this error  
  
-   Add a type parameter to the extension method definition.  
  
-   Remove the extra type argument from the procedure call.  
  
## See Also  
 [Extension Methods](http://msdn.microsoft.com/library/b8020aae-374d-46a9-bcb7-8cc2390b93b6)   
 [Generic Procedures in Visual Basic](http://msdn.microsoft.com/library/95577b28-137f-4d5c-a149-919c828600e5)