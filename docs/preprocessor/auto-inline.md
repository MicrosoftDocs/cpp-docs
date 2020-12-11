---
description: "Learn more about: auto_inline pragma"
title: "auto_inline pragma"
ms.date: "08/29/2019"
f1_keywords: ["auto_inline_CPP", "vc-pragma.auto_inline"]
helpviewer_keywords: ["pragmas, auto_inline", "auto_inline pragma"]
ms.assetid: f7624cd1-be76-429a-881c-65c9040acf43
---
# auto_inline pragma

Excludes any functions defined within the range where **off** is specified from being considered as candidates for automatic inline expansion.

## Syntax

> **#pragma auto_inline(** [ { **on** | **off** } ] **)**

## Remarks

To use the **auto_inline** pragma, place it before and immediately after, not inside, a function definition. The pragma takes effect as soon as the first function definition after the pragma is seen.

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
