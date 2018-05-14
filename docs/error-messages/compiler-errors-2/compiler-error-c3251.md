---
title: "Compiler Error C3251 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3251"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3251"]
ms.assetid: 541c163e-5ee9-457c-a1e5-da860788b10d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3251
cannot invoke base class method on a value type instance  
  
 The following error occurs because `GetClass` is a member of `Microsoft.Runtime.Object`, not of `Microsoft.Runtime.Integer4`.