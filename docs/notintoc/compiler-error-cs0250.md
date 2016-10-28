---
title: "Compiler Error CS0250"
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
  - "CS0250"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0250"
ms.assetid: a994f361-6287-4db0-9ce1-e293a8190049
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
# Compiler Error CS0250
Do not directly call your base class Finalize method. It is called automatically from your destructor.  
  
 A program cannot attempt to force cleanup of base class resources.  
  
 See [Finalize Methods and Destructors](assetId:///fd376774-1643-499b-869e-9546a3aeea70) for more information.  
  
 The following sample generates CS0250  
  
```  
// CS0250.cs  
class B  
{  
}  
  
class C : B  
{  
   ~C()  
   {  
      base.Finalize();   // CS0250  
   }  
  
   public static void Main()  
   {  
   }  
}  
```