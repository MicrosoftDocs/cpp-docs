---
description: "Learn more about: Fatal Error C1305"
title: "Fatal Error C1305"
ms.date: "11/04/2016"
f1_keywords: ["C1305"]
helpviewer_keywords: ["C1305"]
ms.assetid: 1629c850-e2db-4678-83d8-9bfc85323bc5
---
# Fatal Error C1305

profile database 'pgd_file' is for a different architecture

A .pgd file that was generated from the /LTCG:PGINSTRUMENT operation for another platform was passed to [/LTCG:PGOPTIMIZE](../../build/reference/ltcg-link-time-code-generation.md) . [Profile-guided optimizations](../../build/profile-guided-optimizations.md) are available for x86 and x64 platforms. However, a .pgd file generated with a /LTCG:PGINSTRUMENT operation for one platform is not valid as input to a /LTCG:PGOPTIMIZE for a different platform.

To resolve this error, only pass a .pgd file that is created with /LTCG:PGINSTRUMENT to /LTCG:PGOPTIMIZE on the same platform.
