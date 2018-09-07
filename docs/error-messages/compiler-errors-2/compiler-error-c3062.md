---
title: "Compiler Error C3062 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3062"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3062"]
ms.assetid: 78632e6d-255f-42c3-b124-31a9194ff86d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3062
'enum': enumerator requires value since the underlying type is 'type'  
  
 You can specify an underlying type for an enumeration. However, some types require you to assign values to each enumerator.  
  
 For more information on enums, see [enum class](../../windows/enum-class-cpp-component-extensions.md).  
  
 The following sample generates C3062:  
  
```  
// C3062.cpp  
// compile with: /clr  
  
enum class MyEnum : bool { a };   // C3062  
enum class MyEnum2 : bool { a = true};   // OK  
```