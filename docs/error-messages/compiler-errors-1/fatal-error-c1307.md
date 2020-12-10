---
description: "Learn more about: Fatal Error C1307"
title: "Fatal Error C1307"
ms.date: "11/04/2016"
f1_keywords: ["C1307"]
helpviewer_keywords: ["C1307"]
ms.assetid: 6f77d3d4-ba8a-476c-b540-aff19eb4efc4
---
# Fatal Error C1307

program has been edited since profile data was collected

When using [/LTCG:PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md), the linker detected an input module that was recompiled after /LTCG:PGINSTRUMENT and that the module was changed to the point where existing profile data is no longer relevant. For example, if the call graph changed in the recompiled module, the compiler will generate C1307.

To resolve this error, run /LTCG:PGINSTRUMENT, redo all test runs, and run /LTCG:PGOPTIMIZE. If you cannot run /LTCG:PGINSTRUMENT and redo all test runs, use /LTCG:PGUPDATE instead of /LTCG:PGOPTIMIZE to create the optimized image.
