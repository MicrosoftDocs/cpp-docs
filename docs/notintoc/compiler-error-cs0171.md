---
title: "Compiler Error CS0171"
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
  - "CS0171"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0171"
ms.assetid: 8c1d76c9-1048-4579-9031-23e3566e6288
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
# Compiler Error CS0171
Backing field for automatically implemented property 'name' must be fully assigned before control is returned to the caller. Consider calling the default constructor from a constructor initializer.  
  
 A constructor in a [struct](../Topic/struct%20\(C%23%20Reference\).md) must initialize all fields in the struct. For more information, see [Constructors](../Topic/Constructors%20\(C%23%20Programming%20Guide\).md).  
  
 The following sample generates CS0171:  
  
```  
// CS0171.cs  
struct MyStruct  
{  
   MyStruct(int initField)   // CS0171  
   {  
      // i = initField;      // uncomment this line to resolve this error  
   }  
   public int i;  
}  
  
class MyClass  
{  
   public static void Main()  
   {  
      MyStruct aStruct = new MyStruct();  
   }  
}  
```