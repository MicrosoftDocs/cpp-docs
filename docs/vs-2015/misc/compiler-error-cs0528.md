---
title: "Compiler Error CS0528 | Microsoft Docs"
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
  - "CS0528"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0528"
ms.assetid: 8f5dde55-7e4f-4ffa-be14-0e0f3a538118
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0528
'interface' is already listed in interface list  
  
 An interface-inheritance list includes a duplicate. An [interface](http://msdn.microsoft.com/library/7da38e81-4f99-4bc5-b07d-c986b687eeba) can only be specified once in the inheritance list.  
  
 The following sample generates CS0528:  
  
```  
// CS0528.cs  
namespace x  
{  
   public interface a  
   {  
   }  
  
   public class b : a, a   // CS0528  
   {  
      public void Main()  
      {  
      }  
   }  
}  
```