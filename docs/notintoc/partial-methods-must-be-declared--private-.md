---
title: "Partial methods must be declared &#39;Private&#39;"
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
  - "vbc31432"
  - "bc31432"
helpviewer_keywords: 
  - "BC31432"
ms.assetid: 3a4474d9-661e-4793-9624-30cf81faddcf
caps.latest.revision: 7
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
# Partial methods must be declared &#39;Private&#39;
The access modifier `Private` is required in partial method declarations. The following example shows the use of `Private` in the method signature and its implementation.  
  
```vb#  
' Definition of the partial method signature.  
Partial Private Sub OnNameChanged()  
    ' The body of the signature is empty.  
End Sub  
```  
  
```vb#  
' Implementation of the partial method.  
Private Sub OnNameChanged()  
    MsgBox("Name was changed to " & Me.Name)  
End Sub  
```  
  
 **Error ID:** BC31432  
  
### To correct this error  
  
-   Add the keyword `Private` before `Sub` in the signature and implementation declarations.  
  
## See Also  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)