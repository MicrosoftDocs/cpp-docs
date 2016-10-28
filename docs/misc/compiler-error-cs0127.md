---
title: "Compiler Error CS0127"
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
  - "CS0127"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0127"
ms.assetid: b20333bf-badf-4f96-a3ee-bd35f4f7e807
caps.latest.revision: 8
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
# Compiler Error CS0127
Since 'function' returns void, a return keyword must not be followed by an object expression  
  
 A method with a [void](../Topic/void%20\(C%23%20Reference\).md) return type cannot return a value. For more information, see [Methods](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0127:  
  
```  
// CS0127.cs  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public int hiddenMember2  
      {  
         get  
         {  
            return 0;  
         }  
         set   // CS0127, set has an implicit void return type  
         {  
            return 0;   // remove return statement to resolve this CS0127  
         }  
      }  
  
      public static void Main()  
      {  
      }  
   }  
}  
```