---
title: "Compiler Error CS0820"
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
  - "CS0820"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0820"
ms.assetid: 38c05162-ef20-42a8-9611-02698360dec5
caps.latest.revision: 8
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
# Compiler Error CS0820
Cannot assign array initializer to an implicitly typed local  
  
 An implicitly typed array is an array whose element type is inferred by the compiler. It must be initialized by using the `new`[] modifier as shown in the example code.  
  
### To correct this error  
  
-   Use the `new`[] modifier with the array initializer.  
  
-   Do not use an implicitly typed local variable.  
  
## Example  
 The following code generates CS0820 and shows how to correctly initialize an implicitly typed array:  
  
```  
//cs0820.cs  
class G  
{  
    public static int Main()  
    {  
  
        var a = { 1,2,3}; //CS0820  
        // Try using one of the following lines instead.  
        // var b = new[] { 1, 2, 3 };   
       //int[] b = {1, 2, 3};  
        return -1;  
    }  
}  
```  
  
## See Also  
 [Implicitly Typed Local Variables](../Topic/Implicitly%20Typed%20Local%20Variables%20\(C%23%20Programming%20Guide\).md)