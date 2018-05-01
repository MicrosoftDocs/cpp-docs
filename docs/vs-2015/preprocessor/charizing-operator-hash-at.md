---
title: "Charizing Operator (#@) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "#@"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "preprocessor, operators"
  - "charizing operator"
  - "#@ preprocessor operator"
ms.assetid: dee03314-d27c-4063-965c-64756efbef22
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Charizing Operator (#@)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Charizing Operator (#@)](https://docs.microsoft.com/cpp/preprocessor/charizing-operator-hash-at).  
  
**Microsoft Specific**  
  
 The charizing operator can be used only with arguments of macros. If **#@** precedes a formal parameter in the definition of the macro, the actual argument is enclosed in single quotation marks and treated as a character when the macro is expanded. For example:  
  
```  
#define makechar(x)  #@x  
```  
  
 causes the statement  
  
```  
a = makechar(b);  
```  
  
 to be expanded to  
  
```  
a = 'b';  
```  
  
 The single-quotation character cannot be used with the charizing operator.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Preprocessor Operators](../preprocessor/preprocessor-operators.md)



