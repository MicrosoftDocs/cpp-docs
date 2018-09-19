---
title: "Fatal Error C1107 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C1107"]
dev_langs: ["C++"]
helpviewer_keywords: ["C1107"]
ms.assetid: 541a4d9f-10bc-4dd8-b68e-15e548f3dc0a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Fatal Error C1107

could not find assembly 'file': please specify the assembly search path using /AI or by setting the LIBPATH environment variable

A metadata file was passed to a [#using](../../preprocessor/hash-using-directive-cpp.md) directive that the compiler was unable to locate.

LIBPATH, which is described in the topic for `#using`, and the [/AI](../../build/reference/ai-specify-metadata-directories.md) compiler option allow you to specify directories in which the compiler will look for referenced metadata files.