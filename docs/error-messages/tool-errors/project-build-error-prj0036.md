---
title: "Project Build Error PRJ0036"
description: "Learn more about: Project Build Error PRJ0036"
ms.date: 11/04/2016
f1_keywords: ["PRJ0036"]
helpviewer_keywords: ["PRJ0036"]
---
# Project Build Error PRJ0036

> The 'Additional Files' property for the Web Deployment Tool contained an invalid entry.

## Remarks

The Additional Files property on the Web Deployment property page contained an error, possibly due to a macro evaluation problem. This error could also mean that the path is badly formed, containing characters or combinations of characters that are illegal in a file path.

To resolve this error, fix the macro or fix the path specification. The evaluated path is an absolute path from the project directory.

This error could also mean that one of the files referenced doesn't exist.
