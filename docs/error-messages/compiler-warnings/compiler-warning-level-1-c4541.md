---
title: "Compiler Warning (level 1) C4541 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4541"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4541"]
ms.assetid: b57b8f3e-117d-4fc2-bba6-faec17e5fa9d
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4541
'identifier' used on polymorphic type 'type' with /GR-; unpredictable behavior may result  
  
 You tried to use a feature that requires run-time type information without enabling run-time type information. Recompile with [/GR](../../build/reference/gr-enable-run-time-type-information.md).