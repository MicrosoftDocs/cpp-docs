---
title: "Compiler Error CS0152"
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
  - "CS0152"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0152"
ms.assetid: 4915ca16-6485-4e1f-ace0-c71a7b339ba4
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
# Compiler Error CS0152
The label 'label' already occurs in this switch statement  
  
 A label was repeated in a [switch](../Topic/switch%20\(C%23%20Reference\).md) statement. For more information, see [switch](../Topic/switch%20\(C%23%20Reference\).md).  
  
 The following sample generates CS0152:  
  
```  
// CS0152.cs  
namespace MyNamespace  
{  
   public class MyClass  
   {  
      public static void Main()  
      {  
         int i = 0;  
  
         switch (i)  
         {  
            case 1:  
               i++;  
               return;  
  
            case 1:   // CS0152, two case 1 statements  
               i++;  
               return;  
         }  
      }  
   }  
}  
```