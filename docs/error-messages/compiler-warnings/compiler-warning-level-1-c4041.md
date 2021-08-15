---
description: "Learn more about: Compiler Warning (level 1) C4041"
title: "Compiler Warning (level 1) C4041"
ms.date: "11/04/2016"
f1_keywords: ["C4041"]
helpviewer_keywords: ["C4041"]
ms.assetid: 107ee9fd-4b88-4f22-a18f-a20726831095
---
# Compiler Warning (level 1) C4041

compiler limit : terminating browser output

Browser information exceeded the compiler limit.

This warning can be caused by compiling with [/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) (browser information including local variables).

### To fix by using the following possible solutions

1. Compile with /Fr (browser information without local variables).

1. Disable browser output (compile without /FR or /Fr).
