---
title: "Fatal Error C1206 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1206"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1206"]
ms.assetid: 2211428f-ad86-4f7b-82eb-f1ba89b0510e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1206

Per-appdomain data is not supported by the version of the runtime installed

Some features, such as per application domain data, are only supported by the common language runtime that supports the feature.

C1206 indicates that the latest version of the runtime is not installed on your computer. Install the common language runtime version that is intended for use with your compiler.

See [appdomain](../../cpp/appdomain.md) for more information.