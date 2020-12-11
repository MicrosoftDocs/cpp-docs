---
description: "Learn more about: Compiler Warning (level 1) C4124"
title: "Compiler Warning (level 1) C4124"
ms.date: "11/04/2016"
f1_keywords: ["C4124"]
helpviewer_keywords: ["C4124"]
ms.assetid: c08c3a65-9584-47a1-a147-44f00c4b230e
---
# Compiler Warning (level 1) C4124

__fastcall with stack checking is inefficient

The **`__fastcall`** keyword was used with stack checking enabled.

The **`__fastcall`** convention generates faster code, but stack checking causes slower code. When using **`__fastcall`**, turn off stack checking with the **check_stack** pragma or /Gs.

This warning is issued only for the first function declared under these conditions.
