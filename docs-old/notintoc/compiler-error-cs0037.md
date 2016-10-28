---
title: "Compiler Error CS0037"
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
  - "CS0037"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0037"
ms.assetid: 1d34a71e-10a0-4fa8-9b94-343e69428c61
caps.latest.revision: 9
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
# Compiler Error CS0037
Cannot convert null to 'type' because it is a non-nullable value type  
  
 The compiler cannot assign null to a value type; null can only be assigned to a [reference type](../Topic/Reference%20Types%20\(C%23%20Reference\).md) or to a Nullable type. [struct](../Topic/struct%20\(C%23%20Reference\).md) is a value type. For more information, see [Nullable Types](../Topic/Nullable%20Types%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0037:  
  
```  
// CS0037.cs  
public struct s  
{  
}  
  
class a  
{  
   public static void Main()  
   {  
      int i = null;   // CS0037  
      s ss = null;    // CS0037  
   }  
}  
```