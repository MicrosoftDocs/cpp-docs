---
description: "Learn more about: Project Build Error PRJ0031"
title: "Project Build Error PRJ0031"
ms.date: "11/04/2016"
f1_keywords: ["PRJ0031"]
helpviewer_keywords: ["PRJ0031"]
ms.assetid: b42435c6-e570-4f8e-9ad5-12a7ea69ccb2
---
# Project Build Error PRJ0031

The 'Outputs' property for the custom build step for file 'file' contained 'macro' which evaluates out to 'macro_expansion'.

A custom build step on a file had bad output probably due to a macro evaluation problem. This error could also mean that the path is badly formed, containing characters or combinations of characters that are illegal in a file path.

To resolve this error, fix the macro or fix the path specification. The evaluated path is an absolute path from the project directory.
