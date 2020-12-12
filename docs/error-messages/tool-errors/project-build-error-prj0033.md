---
description: "Learn more about: Project Build Error PRJ0033"
title: "Project Build Error PRJ0033"
ms.date: "11/04/2016"
f1_keywords: ["PRJ0033"]
helpviewer_keywords: ["PRJ0033"]
ms.assetid: 84d4a052-0586-4b78-9315-81c1e8386c1e
---
# Project Build Error PRJ0033

The 'Additional Dependencies' property for the custom build step for file 'file' contained 'macro' which evaluates out to 'macro_expansion'.

A custom build step on a file contained an error in its additional dependency probably due to a macro evaluation problem. This error could also mean that the path is badly formed, containing characters or combinations of characters that are illegal in a file path.

To resolve this error, fix the macro or fix the path specification. The evaluated path is an absolute path from the project directory.
