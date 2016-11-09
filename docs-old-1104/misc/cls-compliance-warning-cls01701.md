---
title: "CLS Compliance Warning CLS01701 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CLS01701"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01701"
ms.assetid: 6ccbe156-9017-44ea-bd4e-a838af2ec2e7
caps.latest.revision: 8
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
# CLS Compliance Warning CLS01701
Unmanaged pointer types are not CLS-compliant  
  
 A CLS-compliant constructor cannot contain a native pointer declaration.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](http://msdn.microsoft.com/en-us/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS01701:  
  
```  
// CLS01701.cpp  
// compile with: /clr /LD  
// CLS01701 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
public ref class One {  
public:  
   One(int* Parameter) {}   // CLS01701  
};  
```