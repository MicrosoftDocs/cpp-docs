---
title: "A nullable type cannot be inferred for variable &#39;&lt;variablename&gt;&#39;"
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
  - "bc36628"
  - "vbc36628"
helpviewer_keywords: 
  - "BC36628"
ms.assetid: 3e92ae19-6a19-4b0b-9dd9-fba31cdb85a6
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
# A nullable type cannot be inferred for variable &#39;&lt;variablename&gt;&#39;
A nullable type cannot be inferred from a reference type, such as an array, a class, or a `String`. The value from which the data type is inferred must be a value type. The following code illustrates this error.  
  
```vb#  
'' Not valid.   
'Dim arrList? = New ArrayList  
'Dim except? = New Exception  
'Dim obj? = New Object  
'Dim stringVar? = "Open the application."  
  
' Valid.  
Dim intVar? = 10  
```  
  
 **Error ID:** BC36628  
  
### To correct this error  
  
-   Remove the nullable designation.  
  
## See Also  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)