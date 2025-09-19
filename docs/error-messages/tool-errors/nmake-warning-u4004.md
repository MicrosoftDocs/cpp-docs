---
title: "NMAKE Warning U4004"
description: "Learn more about: NMAKE Warning U4004"
ms.date: 11/04/2016
f1_keywords: ["U4004"]
helpviewer_keywords: ["U4004"]
---
# NMAKE Warning U4004

> too many rules for target 'targetname'

## Remarks

More than one description block was specified for the given target using single colons (**:**) as separators. NMAKE executed the commands in the first description block and ignored later blocks.

To specify the same target in multiple dependencies, use double colons (`::`) as the separator in each dependency line.
