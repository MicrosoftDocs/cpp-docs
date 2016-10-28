---
title: "Compiler Error CS0249"
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
  - "CS0249"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0249"
ms.assetid: 8bc3572f-d949-4867-b119-6527fb924a4a
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
# Compiler Error CS0249
Do not override object.Finalize. Instead, provide a destructor.  
  
 Use destructor syntax to specify instructions to execute when your object is destroyed.  
  
 For more information, see [Destructor Syntax in C# and C++](assetId:///d7901491-7e89-4b6f-8270-0635aa6581b5).  
  
 The following sample generates CS0249:  
  
```  
// CS0249.cs  
class MyClass  
{  
   protected override void Finalize()   // CS0249  
   // try the following line instead  
   // ~MyClass()  
   {  
   }  
  
   public static void Main()  
   {  
   }  
}  
```