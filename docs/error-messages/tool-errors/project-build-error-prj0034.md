---
description: "Learn more about: Project Build Error PRJ0034"
title: "Project Build Error PRJ0034"
ms.date: "11/04/2016"
f1_keywords: ["PRJ0034"]
helpviewer_keywords: ["PRJ0034"]
ms.assetid: 1da4a55b-231b-4476-8545-6997628fbc00
---
# Project Build Error PRJ0034

The 'Additional Dependencies' property for the project-level custom build step contained 'macro' which evaluates out to 'macro_expansion'.

A custom build step on a project contained an error in its additional dependency probably due to a macro evaluation problem. This error could also mean that the path is badly formed, containing characters or combinations of characters that are illegal in a file path.

To resolve this error, fix the macro or fix the path specification. The evaluated path is an absolute path from the project directory.
