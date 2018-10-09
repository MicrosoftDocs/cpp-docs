---
title: "Compiler Warning (level 2) C4051 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4051"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4051"]
ms.assetid: 8c964e70-df12-45ff-93b9-496ad4271191
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 2) C4051

type conversion; possible loss of data

An expression contains two data items with different base types. Converting one type causes the data item to be truncated.

This warning may be fixed if you cast the data items to the appropriate type.