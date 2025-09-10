---
title: "NMAKE Fatal Error U1056"
description: "Learn more about: NMAKE Fatal Error U1056"
ms.date: 11/04/2016
f1_keywords: ["U1056"]
helpviewer_keywords: ["U1056"]
---
# NMAKE Fatal Error U1056

> cannot find command processor

## Remarks

The command processor was not in the path specified in the **COMSPEC** or **PATH** environment variables.

NMAKE uses COMMAND.COM or CMD.EXE as a command processor when executing commands. It looks for the command processor first in the path set in **COMSPEC**. If **COMSPEC** does not exist, NMAKE searches the directories specified in **PATH**.
