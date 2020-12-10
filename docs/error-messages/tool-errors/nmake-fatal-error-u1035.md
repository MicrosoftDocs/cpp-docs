---
description: "Learn more about: NMAKE Fatal Error U1035"
title: "NMAKE Fatal Error U1035"
ms.date: "11/04/2016"
f1_keywords: ["U1035"]
helpviewer_keywords: ["U1035"]
ms.assetid: 68f0cc59-007e-4109-ac30-7ac4ac447e6d
---
# NMAKE Fatal Error U1035

syntax error : expected ':' or '=' separator

Either a colon (**:**) or an equal sign (**=**) was expected.

### To fix by checking the following possible causes

1. A colon did not follow a target.

1. A colon and no space (such as a:) followed a single-letter target. NMAKE interpreted it as a drive specification.

1. A colon did not follow an inference rule.

1. A macro definition was not followed by an equal sign.

1. A character followed a backslash (**\\**) that was used to continue a command to a new line.

1. A string appeared that did not follow any NMAKE syntax rule.

1. The makefile was formatted by a word processor.
