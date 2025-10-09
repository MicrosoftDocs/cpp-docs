---
title: "Project Build Error PRJ0032"
description: "Learn more about: Project Build Error PRJ0032"
ms.date: 11/04/2016
f1_keywords: ["PRJ0032"]
helpviewer_keywords: ["PRJ0032"]
---
# Project Build Error PRJ0032

> The 'Outputs' property for the project-level custom build step contained 'macro' which evaluates out to 'macro_expansion'.

## Remarks

A custom build step on a project had bad output probably due to a macro evaluation problem. This error could also mean that the path is badly formed, containing characters or combinations of characters that are illegal in a file path.

To resolve this error, fix the macro or fix the path specification. The evaluated path is an absolute path from the project directory.
