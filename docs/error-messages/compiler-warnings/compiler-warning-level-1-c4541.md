---
description: "Learn more about: Compiler Warning (level 1) C4541"
title: "Compiler Warning (level 1) C4541"
ms.date: "11/04/2016"
f1_keywords: ["C4541"]
helpviewer_keywords: ["C4541"]
ms.assetid: b57b8f3e-117d-4fc2-bba6-faec17e5fa9d
---
# Compiler Warning (level 1) C4541

> '*operator*' used on polymorphic type '*type*' with /GR-; unpredictable behavior may result

## Remarks

You tried to use the [`dynamic_cast` operator](../../cpp/dynamic-cast-operator.md) or [`typeid` operator](../../cpp/typeid-operator.md), which requires [Run-Time Type Information](../../cpp/run-time-type-information.md) (RTTI), without enabling it. To enable RTTI, recompile with [`/GR`](../../build/reference/gr-enable-run-time-type-information.md).
