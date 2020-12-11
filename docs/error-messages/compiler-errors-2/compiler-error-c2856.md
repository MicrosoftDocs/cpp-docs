---
description: "Learn more about: Compiler Error C2856"
title: "Compiler Error C2856"
ms.date: "11/04/2016"
f1_keywords: ["C2856"]
helpviewer_keywords: ["C2856"]
ms.assetid: fe616c51-124e-49e3-9dd8-883ec1660680
---
# Compiler Error C2856

\#pragma hdrstop cannot be inside an #if block

The `hdrstop` pragma cannot be placed inside the body of a conditional compilation block.

Move the `#pragma hdrstop` statement to an area that is not contained in an `#if/#endif` block.
