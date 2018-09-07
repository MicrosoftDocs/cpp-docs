---
title: "Expression Evaluator Error CXX0022 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["CXX0022"]
dev_langs: ["C++"]
helpviewer_keywords: ["CXX0022", "CAN0022"]
ms.assetid: f6b299ac-a4ee-492c-bd9f-6fff005bc537
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Expression Evaluator Error CXX0022
function call before _main  
  
 The C expression evaluator cannot evaluate a function before the debugger has entered the function **_main**. The program is not properly initialized until **_main** has been called.  
  
 This error is identical to CAN0022.