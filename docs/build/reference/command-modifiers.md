---
description: "Learn more about: Command Modifiers"
title: "Command Modifiers"
ms.date: "11/04/2016"
helpviewer_keywords: ["NMAKE program, command modifiers", "command modifiers"]
ms.assetid: b661c432-210f-4f05-bc56-744a46e0fc0b
---
# Command Modifiers

You can specify one or more command modifiers preceding a command, optionally separated by spaces or tabs. As with commands, modifiers must be indented.

|Modifier|Purpose|
|--------------|-------------|
|\@*command*|Prevents display of the command. Display by commands is not suppressed. By default, NMAKE echoes all executed commands. Use /S to suppress display for the entire makefile; use **.SILENT** to suppress display for part of the makefile.|
|**-**\[*number*] *command*|Turns off error checking for *command*. By default, NMAKE halts when a command returns a nonzero exit code. If -*number* is used, NMAKE stops if the exit code exceeds *number*. Spaces or tabs cannot appear between the dash and *number.* At least one space or tab must appear between `number` and *command*. Use /I to turn off error checking for the entire makefile; use **.IGNORE** to turn off error checking for part of the makefile.|
|**!** *command*|Executes *command* for each dependent file if *command* uses <strong>$\*\*</strong> (all dependent files in the dependency) or **$?** (all dependent files in the dependency with a later timestamp than the target).|

## See also

[Commands in a Makefile](commands-in-a-makefile.md)
