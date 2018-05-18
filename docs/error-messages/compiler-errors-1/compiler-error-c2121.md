---
title: "Compiler Error C2121 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2121"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2121"]
ms.assetid: e04f32da-3736-4df3-8a1c-d687afcecf5c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2121
'#' : invalid character : possibly the result of a macro expansion  
  
 An invalid # character may have been inserted by an incorrect macro that uses the token-pasting operator (##) instead of the stringizing operator (#).