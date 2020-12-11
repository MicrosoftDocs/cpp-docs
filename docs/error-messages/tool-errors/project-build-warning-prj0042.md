---
description: "Learn more about: Project Build Warning PRJ0042"
title: "Project Build Warning PRJ0042"
ms.date: "08/27/2018"
f1_keywords: ["PRJ0042"]
helpviewer_keywords: ["PRJ0042"]
ms.assetid: 682c9999-6f85-409f-b102-00c93243f74f
---
# Project Build Warning PRJ0042

> The 'Outputs' property for the custom build step for file '*file*' is not set. The custom build step will be skipped.

A custom build step was not executed because no output was specified.

To resolve this error, do one the following:

- Exclude the custom build step from the build.

- Add an output.

- Delete the contents of the custom build step's command.
