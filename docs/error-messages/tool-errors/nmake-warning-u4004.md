---
description: "Learn more about: NMAKE Warning U4004"
title: "NMAKE Warning U4004"
ms.date: "11/04/2016"
f1_keywords: ["U4004"]
helpviewer_keywords: ["U4004"]
ms.assetid: 5086bbcb-42d7-4677-a877-1a02202a86a2
---
# NMAKE Warning U4004

too many rules for target 'targetname'

More than one description block was specified for the given target using single colons (**:**) as separators. NMAKE executed the commands in the first description block and ignored later blocks.

To specify the same target in multiple dependencies, use double colons (`::`) as the separator in each dependency line.
