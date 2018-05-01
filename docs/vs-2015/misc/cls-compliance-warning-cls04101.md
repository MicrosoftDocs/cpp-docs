---
title: "CLS Compliance Warning CLS04101 | Microsoft Docs"
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
  - "CLS04101"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS04101"
ms.assetid: 5ad21eb4-0c6e-4629-bc4a-af274f8a8d90
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# CLS Compliance Warning CLS04101
Attributes shall be of type 'System::Attribute', or inherit from it  
  
 Make sure that all attributes applied to constructor parameters have type 'System.Attribute' or inherit from it.  
  
 For more information Common Language Subset (CLS) compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following declaration (using MSIL assembly language) shows what could cause CLS04101:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Object  
{  
  .method public specialname rtspecialname instance void  .ctor() cil managed  
```  
  
 Causing the attribute to derive from System::Attribute resolves the warning:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Object  
{  
  .method public specialname rtspecialname instance void  .ctor() cil managed  
```