---
title: "Compiler Error C3251 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3251"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3251"]
ms.assetid: 541c163e-5ee9-457c-a1e5-da860788b10d
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3251
cannot invoke base class method on a value type instance  
  
 The following error occurs because `GetClass` is a member of `Microsoft.Runtime.Object`, not of `Microsoft.Runtime.Integer4`.