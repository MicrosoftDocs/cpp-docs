---
title: "Linker Tools Warning LNK4010"
description: "Learn more about: Linker Tools Warning LNK4010"
ms.date: 11/04/2016
f1_keywords: ["LNK4010"]
helpviewer_keywords: ["LNK4010"]
---
# Linker Tools Warning LNK4010

> invalid subsystem version number number; default subsystem version assumed

## Remarks

You can specify a version for the image's subsystem ([/SUBSYSTEM](../../build/reference/subsystem-specify-subsystem.md)). Each subsystem has a minimum version requirement. If the specified version is lower than the minimum, this warning will occur and the linker will just use the default subsystem.
