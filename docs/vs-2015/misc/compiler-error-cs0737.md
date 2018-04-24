---
title: "Compiler Error CS0737 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0737"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0737"
ms.assetid: d2247770-5546-46f2-a01d-8e2ebfcbb859
caps.latest.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0737
'type name' does not implement interface member 'member name'. 'method name' cannot implement an interface member because it is not public.  
  
 A method that implements an interface member must have public accessibility. All interface members are `public`.  
  
### To correct this error  
  
1.  Add the [public](http://msdn.microsoft.com/library/0ae45d16-a551-4b74-9845-57208de1328e) access modifier to the method.  
  
## Example  
 The following code generates CS0737:  
  
```  
// cs0737.cs  
interface ITest  
{  
    // Default access of private with no modifier.  
    int Return42();  
    // Try the following line instead.  
    // public int Return42();  
}  
  
struct Struct1 : ITest // CS0737  
{  
    int Return42() { return (42); }  
}  
  
public class Test  
{  
    public static int Main(string[] args)  
    {  
        Struct1 s1 = new Struct1();  
  
        return (1);  
    }  
  
}  
```  
  
## See Also  
 [Interfaces](http://msdn.microsoft.com/library/2feda177-ce11-432d-81b4-d50f5f35fd37)