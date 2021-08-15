---
description: "Learn more about: Precedence in Macro Definitions"
title: "Precedence in Macro Definitions"
ms.date: "11/04/2016"
helpviewer_keywords: ["NMAKE program, precedence in macro definitions", "macros, precedence"]
ms.assetid: 0c13182d-83cb-4cbd-af2d-f4c916b62aeb
---
# Precedence in Macro Definitions

If a macro has multiple definitions, NMAKE uses the highest-precedence definition. The following list shows the order of precedence, from highest to lowest:

1. A macro defined on the command line

1. A macro defined in a makefile or include file

1. An inherited environment-variable macro

1. A macro defined in the Tools.ini file

1. A predefined macro, such as [CC](command-macros-and-options-macros.md) and [AS](command-macros-and-options-macros.md)

Use /E to cause macros inherited from environment variables to override makefile macros with the same name. Use **!UNDEF** to override a command line.

## See also

[Defining an NMAKE Macro](defining-an-nmake-macro.md)
