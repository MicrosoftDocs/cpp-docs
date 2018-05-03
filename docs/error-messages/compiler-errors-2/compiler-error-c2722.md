---
title: "Compiler Error C2722 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2722"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2722"]
ms.assetid: 4cc2c7fa-cb12-4bcf-9df1-6d627ef62973
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2722
'::operator' : illegal following operator command; use 'operator operator'  
  
 An `operator` statement redefines `::new` or `::delete`. The `new` and `delete` operators are global, so the scope resolution operator (`::`) is meaningless. Remove the `::` operator.