---
title: "Cannot copy the value of &#39;ByRef&#39; parameter &#39;&lt;parametername&gt;&#39; back to the matching argument because type &#39;&lt;typename1&gt;&#39; cannot be converted to type &#39;&lt;typename2&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc33037"
  - "BC33037"
helpviewer_keywords: 
  - "BC33037"
ms.assetid: 3ff137e2-e062-4e54-abf5-e902e2d18968
caps.latest.revision: 9
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
# Cannot copy the value of &#39;ByRef&#39; parameter &#39;&lt;parametername&gt;&#39; back to the matching argument because type &#39;&lt;typename1&gt;&#39; cannot be converted to type &#39;&lt;typename2&gt;&#39;
A procedure is declared with a parameter type which cannot be converted back to the calling argument type.  
  
 When you define a class or structure, you can define one or more conversion operators to convert that class or structure type to other types. You can also define reverse conversion operators to convert those other types back to your class or structure type. When you use your class or structure type in a procedure call, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] can use these conversion operators to convert the type of an argument to the type of its corresponding parameter.  
  
 If you pass the argument [ByRef](/dotnet/visual-basic/language-reference/modifiers/byref), [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] sometimes copies the argument value into a local variable in the procedure instead of passing a reference. In such a case, when the procedure returns, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] must then copy the local variable value back into the argument in the calling code.  
  
 If a `ByRef` argument value is copied into the procedure and the argument and parameter are of the same type, no conversion is necessary. But if the types are different, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] must convert in both directions. If one of the types is your class or structure type, [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] must convert it both to and from the other type. This means you must define conversion operators in both directions.  
  
 **Error ID:** BC33037  
  
### To correct this error  
  
-   If possible, use a calling argument of the same type as the procedure parameter, so [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] does not need to do any conversion.  
  
-   If you need to call the procedure with an argument type different from the parameter type but do not need to return a value into the calling argument, define the parameter to be [ByVal](/dotnet/visual-basic/language-reference/modifiers/byval) instead of `ByRef`.  
  
-   If you need to return a value into the calling argument, define the reverse conversion operator so [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] can convert back to the calling argument type.  
  
## See Also  
 [Procedures](/dotnet/visual-basic/language-reference/procedures/index)   
 [Procedure Parameters and Arguments](/dotnet/visual-basic/language-reference/procedures/procedure-parameters-and-arguments)   
 [Passing Arguments by Value and by Reference](/dotnet/visual-basic/language-reference/procedures/passing-arguments-by-value-and-by-reference)   
 [Operator Procedures](/dotnet/visual-basic/language-reference/procedures/operator-procedures)   
 [Operator Statement](/dotnet/visual-basic/language-reference/statements/operator-statement)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)