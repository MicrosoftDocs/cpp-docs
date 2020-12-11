---
description: "Learn more about: Fatal Error C1852"
title: "Fatal Error C1852"
ms.date: "11/04/2016"
f1_keywords: ["C1852"]
helpviewer_keywords: ["C1852"]
ms.assetid: fa011004-b8d6-46f1-ba80-4785e4ce137f
---
# Fatal Error C1852

'filename' is not a valid precompiled header file

The file is not a precompiled header.

### To fix by checking the following possible causes

1. Invalid file specified with **/Yu** or **#pragma hdrstop**.

1. The compiler assumes a file extension of .pch if you do not specify otherwise.
