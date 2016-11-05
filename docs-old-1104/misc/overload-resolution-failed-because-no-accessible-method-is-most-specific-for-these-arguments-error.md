---
title: "Overload resolution failed because no accessible &#39;&lt;method&gt;&#39; is most specific for these arguments:&lt;error&gt; | Microsoft Docs"
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
  - "bc30521"
  - "vbc30521"
helpviewer_keywords: 
  - "resolution failure"
  - "BC30521"
  - "overload resolution failed"
ms.assetid: b8b41fa0-a64b-4e74-8443-be3afd2b6f11
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
# Overload resolution failed because no accessible &#39;&lt;method&gt;&#39; is most specific for these arguments:&lt;error&gt;
You have made a call to an overloaded method, but the compiler has found two or more overloads with parameter lists to which your argument list can be converted, and it cannot select among them.  
  
 The compiler attempts to match the data types in the calling argument list and the overload parameter list as closely as possible. It requires a widening conversion from every one of your arguments to its corresponding parameter, whether the type checking switch ([Option Strict Statement](/dotnet/visual-basic/language-reference/statements/option-strict-statement)) is `On` or `Off`.  
  
 If the compiler finds more than one overload satisfying the widening requirement, it then looks for the overload that is most specific for the argument data types, that is, that calls for the least amount of widening. It generates this error message when one overload is more specific for one argument's data type while another overload is more specific for another argument's data type. For more information and an example, see [Overload Resolution](/dotnet/visual-basic/language-reference/procedures/overload-resolution).  
  
 **Error ID:** BC30521  
  
### To correct this error  
  
1.  Review all the overloads for the method and determine which one you want to call.  
  
2.  In your calling statement, make the data types of the arguments match the data types of the parameters defined for the desired overload. You might have to use the [CType Function](/dotnet/visual-basic/language-reference/functions/ctype-function) to convert one or more data types to the defined types.  
  
## See Also  
 [Procedure Overloading](/dotnet/visual-basic/language-reference/procedures/procedure-overloading)   
 [Considerations in Overloading Procedures](/dotnet/visual-basic/language-reference/procedures/considerations-in-overloading-procedures)   
 [Overload Resolution](/dotnet/visual-basic/language-reference/procedures/overload-resolution)   
 [Overloads](/dotnet/visual-basic/language-reference/modifiers/overloads)   
 [Overloaded Properties and Methods](/dotnet/visual-basic/programming-guide/language-features/objects-and-classes/overloaded-properties-and-methods)   
 [Option Strict Statement](/dotnet/visual-basic/language-reference/statements/option-strict-statement)   
 [CType Function](/dotnet/visual-basic/language-reference/functions/ctype-function)