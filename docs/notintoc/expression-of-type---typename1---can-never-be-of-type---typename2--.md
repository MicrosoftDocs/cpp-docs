---
title: "Expression of type &#39;&lt;typename1&gt;&#39; can never be of type &#39;&lt;typename2&gt;&#39;"
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
  - "vbc31430"
  - "bc31430"
helpviewer_keywords: 
  - "BC31430"
ms.assetid: 1d527033-3f6f-4945-b1d3-5ef59a1e1b53
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
# Expression of type &#39;&lt;typename1&gt;&#39; can never be of type &#39;&lt;typename2&gt;&#39;
A `TypeOf`...`Is` expression tests an object reference variable to a data type that it cannot hold.  
  
 In some cases the compiler can determine that a `TypeOf`...`Is` test can only fail, for example if there is no inheritance relationship between two classes.  
  
 The following code can generate this error.  
  
 `Dim refVar as System.Windows.Forms.Form`  
  
 `If TypeOf refVar Is System.Array`  
  
 `End If`  
  
 Because \<xref:System.Windows.Forms.Form> and \<xref:System.Array> are totally unrelated types, the compiler can determine that the `TypeOf`...`Is` expression returns `False` for any value of `refVar`.  
  
 **Error ID:** BC31430  
  
### To correct this error  
  
-   Test the variable for a realistic data type, or remove the `TypeOf`...`Is` test altogether.  
  
## See Also  
 [TypeOf Operator](../Topic/TypeOf%20Operator%20\(Visual%20Basic\).md)   
 [How to: Determine What Type an Object Variable Refers To](../Topic/How%20to:%20Determine%20What%20Type%20an%20Object%20Variable%20Refers%20To%20\(Visual%20Basic\).md)