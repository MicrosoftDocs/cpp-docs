---
title: "CLS Compliance Warning CLS00211"
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
  - "CLS00211"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS00211"
ms.assetid: 3a103f6f-bfb7-42ed-83ab-1c0f34fb9672
caps.latest.revision: 8
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
# CLS Compliance Warning CLS00211
Members of non-CLS compliant types shall not be marked CLS-compliant  
  
 If a type is marked as not being CLS compliant, type members may not be marked CLS compliant.  
  
 For more information CLS compliance checking, see [CLS Compliant Assemblies](assetId:///3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 The following sample generates CLS00211:  
  
```  
// CLS00211.cpp  
// compile with: /clr /LD  
// CLS00211 expected  
using namespace System;  
using namespace System::Reflection;  
[assembly:CLSCompliant (true)];  
[assembly:AssemblyKeyFile("clscompliance.snk")];  
[CLSCompliant(false)]  
public ref class One {  
public:  
   [CLSCompliant(true)]   // CLS00211  
   void X() {}  
};  
```