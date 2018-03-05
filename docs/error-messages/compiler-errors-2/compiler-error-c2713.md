---
title: "Compiler Error C2713 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2713"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2713"]
ms.assetid: bae9bee3-b4b8-4be5-b6a5-02df587a7278
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C2713
only one form of exception handling permitted per function  
  
 You cannot use structured exception handling (`__try`/`__except`) and C++ exception handling (`try`/`catch`) in the same function.