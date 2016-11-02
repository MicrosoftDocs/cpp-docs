---
title: "CLS Compliance Warning CLS00911"
ms.custom: ""
ms.date: "10/19/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLS00911"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS00911"
ms.assetid: d1a4721a-a3a6-4de0-bc14-a0b3c5e6dd78
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
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
# CLS Compliance Warning CLS00911
Literal static fields of an enum shall have the type of the enum itself  
  
 Make sure that literal static fields of an enum have type of the enum itself.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following declaration (using MSIL assembly language) shows what could cause CLS00911:  
  
```  
.assembly extern legacy library mscorlib {}  
.assembly legacy library Out {}  
  
.namespace Test  
{  
  .class public auto ansi sealed MyEnum1  
         extends [mscorlib]System.Enum  
  {  
    .field public specialname rtspecialname int32 value__  
    .field public static literal uint8 One = uint8(0x1)  
  } // end of class MyEnum1  
}  
```  
  
 By making the enum field be of the enum type, you can resolve this warning:  
  
```  
.assembly extern legacy library mscorlib {}  
.assembly legacy library Out {}  
  
.namespace Test  
{  
  .class public auto ansi sealed MyEnum1  
         extends [mscorlib]System.Enum  
  {  
    .field public specialname rtspecialname int32 value__  
    .field public static literal valuetype Test.MyEnum1 One = uint8(0x1)  
  } // end of class MyEnum1  
}  
```