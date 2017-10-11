---
title: "Compiler Warning (level 1) C4420 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C4420"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4420"]
ms.assetid: 44a37754-7ddd-4764-a5f7-d33e05c20091
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Warning (level 1) C4420
'operator' : operator not available, using 'operator' instead; run-time checking may be compromised  
  
 This warning is generated when you use the [/RTCv](../../build/reference/rtc-run-time-error-checks.md) (vector new/delete checking) and when no vector form is found. In this case, the non-vector form is used.  
  
 In order for /RTCv to work correctly, the compiler should always call the vector form of [new](../../cpp/new-operator-cpp.md)/[delete](../../cpp/delete-operator-cpp.md) if the vector syntax was used.