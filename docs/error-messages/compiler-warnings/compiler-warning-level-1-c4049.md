---
description: "Learn more about: Compiler Warning (level 1) C4049"
title: "Compiler Warning (level 1) C4049"
ms.date: "11/04/2016"
f1_keywords: ["C4049"]
helpviewer_keywords: ["C4049"]
ms.assetid: d11c1870-bcfc-4d71-8945-b87ec6ec3514
---
# Compiler Warning (level 1) C4049

compiler limit : terminating line number emission

The file contains more than 16,777,215 (2<sup>24</sup>-1) source lines. The compiler stops numbering at 16,777,215.

For code after line 16,777,215:

- The image will contain no debug information for line numbers.

- Some diagnostics may be reported with incorrect line numbers.

- .asm listings (/FAs) may have incorrect line numbers.
