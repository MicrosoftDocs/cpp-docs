---
title: "Compiler Error C2307 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2307"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2307"]
ms.assetid: ce6c8033-a673-4679-9883-bedec36ae385
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2307

pragma 'pragma' must be outside function if incremental compilation is enabled

You must place the `data_seg` pragma between functions if you're using incremental compilation.