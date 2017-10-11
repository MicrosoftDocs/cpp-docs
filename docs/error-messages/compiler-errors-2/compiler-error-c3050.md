---
title: "Compiler Error C3050 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3050"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3050"]
ms.assetid: ee090a0b-29cc-4215-a2f9-d82af79b8e82
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3050
'type1' : a ref class cannot inherit from 'type1'  
  
 `System::ValueType` cannot be a base class for a reference type.  
  
 The following sample generates C3050:  
  
```  
// C3050.cpp  
// compile with: /clr /LD  
ref struct X : System::ValueType {};   // C3050  
ref struct Y {};   // OK  
```