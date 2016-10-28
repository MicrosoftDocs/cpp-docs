---
title: "Partial methods must have empty method bodies"
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
  - "bc31435"
  - "vbc31435"
helpviewer_keywords: 
  - "BC31435"
ms.assetid: 279f283d-ce40-401c-8494-4bf06394fdd3
caps.latest.revision: 5
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
# Partial methods must have empty method bodies
The body of a partial method signature declaration must not contain any code. The following example shows a partial method signature and its implementation.  
  
```  
' Definition of the partial method signature.  
Partial Private Sub OnNameChanged()  
    ' The body of the signature is empty.  
End Sub  
```  
  
```  
' Implementation of the partial method.  
Private Sub OnNameChanged()  
    MsgBox("Name was changed to " & Me.Name)  
End Sub  
```  
  
 **Error ID:** 31435  
  
### To correct this error  
  
-   Remove any code from the partial method declaration.  
  
## See Also  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)