---
description: "Learn more about: Project Build Error PRJ0030"
title: "Project Build Error PRJ0030"
ms.date: "11/04/2016"
f1_keywords: ["PRJ0030"]
helpviewer_keywords: ["PRJ0030"]
ms.assetid: c48b3727-e166-46e7-bcd7-3e5b2ac5c1d4
---
# Project Build Error PRJ0030

Macro expansion error. Evaluate recursion exceeded 32 levels for $(macro).

This error is caused by recursion in your macros. For example, if you set the **Intermediate Directory** property (see [General Property Page (Project)](../../build/reference/general-property-page-project.md)) to $(IntDir), you will have recursion.

To resolve this error, do not define macros or properties in terms of macros they are used to define.
