---
title: "Compiler Error CS0666"
ms.custom: ""
ms.date: "10/25/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0666"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0666"
ms.assetid: 44ad4574-b4a2-487b-8d05-0116762231ab
caps.latest.revision: 10
ms.author: "wiwagn"
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
# Compiler Error CS0666
'member' : new protected member declared in struct  
  
 A [struct](../Topic/struct%20\(C%23%20Reference\).md) cannot be [abstract](../Topic/abstract%20\(C%23%20Reference\).md) and is always implicitly [sealed](../Topic/sealed%20\(C%23%20Reference\).md). Because structs do not support inheritance, the concept of a [protected](../Topic/protected%20\(C%23%20Reference\).md) member in a struct makes no sense. For more information, see [Inheritance](../Topic/Inheritance%20\(C%23%20Programming%20Guide\).md).  
  
## Example  
 The following sample generates CS0666:  
  
```  
// CS0666.cs  
class M  
{  
    static void Main()  
    {  
    }  
}  
  
struct S  
{  
    protected int x;   // CS0666  
}  
```