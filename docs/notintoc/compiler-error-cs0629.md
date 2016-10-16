---
title: "Compiler Error CS0629"
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
  - "CS0629"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0629"
ms.assetid: 20f22ef0-3c6f-4108-ab09-3f0752375a10
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
# Compiler Error CS0629
Conditional member 'member' cannot implement interface member 'base class member' in type 'Type Name'  
  
 The [Conditional](assetId:///e1c4913b-74d0-421a-8a6d-c14b3f0e68fb) attribute cannot be used on the implementation of an interface.  
  
 The following sample generates CS0629:  
  
```  
// CS0629.cs  
interface MyInterface  
{  
   void MyMethod();  
}  
  
public class MyClass : MyInterface  
{  
   [System.Diagnostics.Conditional("debug")]  
   public void MyMethod()    // CS0629, remove the Conditional attribute  
   {  
   }  
  
   public static void Main()  
   {  
   }  
}  
```