---
title: "Fatal Error C1852 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1852"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1852"]
ms.assetid: fa011004-b8d6-46f1-ba80-4785e4ce137f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1852

'filename' is not a valid precompiled header file

The file is not a precompiled header.

### To fix by checking the following possible causes

1. Invalid file specified with **/Yu** or **#pragma hdrstop**.

1. The compiler assumes a file extension of .pch if you do not specify otherwise.