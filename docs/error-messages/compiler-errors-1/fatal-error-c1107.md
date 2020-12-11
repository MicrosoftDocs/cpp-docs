---
description: "Learn more about: Fatal Error C1107"
title: "Fatal Error C1107"
ms.date: "11/04/2016"
f1_keywords: ["C1107"]
helpviewer_keywords: ["C1107"]
ms.assetid: 541a4d9f-10bc-4dd8-b68e-15e548f3dc0a
---
# Fatal Error C1107

could not find assembly 'file': please specify the assembly search path using /AI or by setting the LIBPATH environment variable

A metadata file was passed to a [#using](../../preprocessor/hash-using-directive-cpp.md) directive that the compiler was unable to locate.

LIBPATH, which is described in the topic for `#using`, and the [/AI](../../build/reference/ai-specify-metadata-directories.md) compiler option allow you to specify directories in which the compiler will look for referenced metadata files.
