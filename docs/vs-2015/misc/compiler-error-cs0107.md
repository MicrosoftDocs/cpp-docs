---
title: "Compiler Error CS0107 | Microsoft Docs"
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
  - "CS0107"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0107"
ms.assetid: 505763c5-6d68-4c57-a8bd-7b03682da4c5
caps.latest.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Compiler Error CS0107
More than one protection modifier  
  
 Only one access modifier ([public](http://msdn.microsoft.com/library/0ae45d16-a551-4b74-9845-57208de1328e), [private](http://msdn.microsoft.com/library/654c0bb8-e6ac-4086-bf96-7474fa6aa1c8), [protected](http://msdn.microsoft.com/library/05ce3794-6675-4025-bddb-eaaa0ec22892), or [internal](http://msdn.microsoft.com/library/6ee0785c-d7c8-49b8-bb72-0a4dfbcb6461)) is allowed on a class member, with the exception of except **internal protected**.  
  
 The following sample generates CS0107:  
  
```  
// CS0107.cs  
public class C  
{  
   private internal void f()   // CS0107, delete private or internal  
   {  
   }  
  
   public static int Main()  
   {  
      return 1;  
   }  
}  
```