---
title: "Compiler Error CS0315"
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
  - "CS0315"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0315"
ms.assetid: 9bb1cab3-1dca-4467-978b-1ab310901a70
caps.latest.revision: 6
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
# Compiler Error CS0315
The type 'valueType' cannot be used as type parameter 'T' in the generic type or method 'TypeorMethod\<T>'. There is no boxing conversion from 'valueType' to 'referenceType'.  
  
 This error occurs when you constrain a generic type to a particular class, and try to construct an instance of that class by using a value type that cannot be implicitly boxed to it.  
  
### To correct this error  
  
1.  One solution is to redefine the struct as a class.  
  
## Example  
 The following example generates CS0315:  
  
```  
// cs0315.cs  
public class ClassConstraint { }  
public struct ViolateClassConstraint { }  
  
public class Gen<T> where T : ClassConstraint  
{         
}  
public class Test  
{  
    public static int Main()  
    {  
        Gen<ViolateClassConstraint> g = new Gen<ViolateClassConstraint>(); //CS0315  
        return 1;  
    }  
}  
```  
  
## See Also  
 [Constraints on Type Parameters](../Topic/Constraints%20on%20Type%20Parameters%20\(C%23%20Programming%20Guide\).md)   
 [Boxing and Unboxing](../Topic/Boxing%20and%20Unboxing%20\(C%23%20Programming%20Guide\).md)