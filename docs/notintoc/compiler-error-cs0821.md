---
title: "Compiler Error CS0821"
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
  - "CS0821"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0821"
ms.assetid: ef449115-93e8-4fa5-848a-d30dc7f68ddf
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
# Compiler Error CS0821
Implicitly typed locals cannot be fixed  
  
 Implicitly typed local variables and anonymous types are not supported in the `fixed` context.  
  
### To correct this error  
  
1.  Either remove the `fixed` modifier from the variable or else give the variable an explicit type.  
  
## Example  
 The following code generates CS0821:  
  
```  
class A  
{  
    static int x;  
  
    public static int Main()  
    {  
        unsafe  
        {  
            fixed (var p = &x) { }  
        }  
        return -1;  
    }  
}  
```  
  
## See Also  
 [Implicitly Typed Local Variables](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)