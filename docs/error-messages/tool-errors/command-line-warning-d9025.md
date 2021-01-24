---
description: "Learn more about: Command-Line Warning D9025"
title: "Command-Line Warning D9025"
ms.date: "11/04/2016"
f1_keywords: ["D9025"]
helpviewer_keywords: ["D9025"]
ms.assetid: 6edff72c-1508-46c2-99f4-0e4b3c5e60c9
---
# Command-Line Warning D9025

overriding 'option1' with 'option2'

The *option1* option was specified but was then overridden by *option2*. The *option2* option was used.

If two options specify contradictory or incompatible directives, the directive specified or implied in the option farthest to the right on the command line is used.

If you get this warning when compiling from the development environment, and are not sure where the conflicting options are coming from, consider the following:

- An option can be specified either in code or in the project's project settings. If you look at the compiler's [Command Line Property Pages](../../build/reference/command-line-property-pages.md) and if you see the conflicting options in the **All Options** field then the options are set in the project's property pages, otherwise, the options are set in source code.

   If the options are set in project's property pages, look on the compiler's Preprocessor property page (with the project node selected in the Solution Explorer).  If you do not see the option set there, check the Preprocessor property page settings for each source code file (in Solution Explorer) to make sure it's not added there.

   If the options are set in code it could be set either in code or in the windows headers.  You might try creating a preprocessed file ([/P](../../build/reference/p-preprocess-to-a-file.md)) and search it for the symbol.
