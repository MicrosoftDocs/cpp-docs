---
title: "Compiler Error C2592 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2592"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2592"]
ms.assetid: 833a4d7b-66ef-4d4c-ae83-a533c2b0eb07
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2592
'class': 'base_class_2' is inherited from 'base_class_1' and cannot be re-specified  
  
 You can only specify base classes that do not inherit from other base classes. In this case, only `base_class_1` is needed in the specification of `class` because `base_class_1` already inherits `base_class_2`.