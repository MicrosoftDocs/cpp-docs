---
title: "Precedence in Inference Rules | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["inference rules in NMAKE", "rules, inference", "precedence, inference rule"]
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Precedence in Inference Rules

If an inference rule is multiply defined, NMAKE uses the highest-precedence definition. The following list shows the order of precedence from highest to lowest:

1. An inference rule defined in a makefile; later definitions have precedence.

1. An inference rule defined in Tools.ini; later definitions have precedence.

1. A predefined inference rule.

## See Also

[Inference Rules](../build/inference-rules.md)