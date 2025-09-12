---
title: "Project Build Error PRJ0044"
description: "Learn more about: Project Build Error PRJ0044"
ms.date: 11/04/2016
f1_keywords: ["PRJ0044"]
helpviewer_keywords: ["PRJ0044"]
---
# Project Build Error PRJ0044

> The 'Additional Dependencies' property for custom build rule 'rule' assigned to file 'file' is invalid. The property contained 'string' which evaluates to 'value'.

## Remarks

The **Additional Dependencies** property evaluated to an empty string, or to a string that contained invalid characters (any character that could not be in a file or directory name). Custom build rules need the output of the build action.

For more information, see [Specifying Custom Build Tools](../../build/specifying-custom-build-tools.md).

## See also

[Project Build Errors and Warnings (PRJxxxx)](../../error-messages/tool-errors/project-build-errors-and-warnings-prjxxxx.md)
