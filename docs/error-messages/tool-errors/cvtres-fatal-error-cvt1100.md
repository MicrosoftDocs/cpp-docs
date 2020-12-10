---
description: "Learn more about: CVTRES Fatal Error CVT1100"
title: "CVTRES Fatal Error CVT1100"
ms.date: "11/04/2016"
f1_keywords: ["CVT1100"]
helpviewer_keywords: ["CVT1100"]
ms.assetid: 886e88dd-5818-4b5f-84f2-d2a3d75f0aaf
---
# CVTRES Fatal Error CVT1100

duplicate resource — type:type, name:name, language:language, flags:flags, size:size

The given resource was specified more than once.

You can get this error if the linker is creating a type library and you did not specify [/TLBID](../../build/reference/tlbid-specify-resource-id-for-typelib.md) and a resource in your project already uses 1. In this case, specify /TLBID and specify another number up to 65535.
