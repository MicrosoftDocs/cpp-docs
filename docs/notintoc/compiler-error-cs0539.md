---
title: "Compiler Error CS0539"
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
  - "CS0539"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0539"
ms.assetid: 41b8975c-abd1-4a36-98a4-8efa5fb0502a
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
# Compiler Error CS0539
'member' in explicit interface declaration is not a member of interface  
  
 An attempt was made to explicitly declare an [interface](../Topic/interface%20\(C%23%20Reference\).md) member that does not exist. You should either delete the declaration or change it so that it refers to a valid interface member.  
  
 The following sample generates CS0539:  
  
```  
// CS0539.cs  
namespace x  
{  
   interface I  
   {  
      void m();  
   }  
  
   public class clx : I  
   {  
      void I.x()   // CS0539  
      {  
      }  
  
      public static int Main()  
      {  
         return 0;  
      }  
   }  
}  
```