---
title: "Targets"
ms.date: "11/04/2016"
helpviewer_keywords: ["targets, specifying in NMAKE"]
ms.assetid: 826ee849-4278-4c6e-97c3-79a2b5fe6463
---
# Targets

In a dependency line, specify one or more targets, using any valid filename, directory name, or [pseudotarget](../build/pseudotargets.md). Separate multiple targets with one or more spaces or tabs. Targets are not case sensitive. Paths are permitted with filenames. A target cannot exceed 256 characters. If the target preceding the colon is a single character, use a separating space; otherwise, NMAKE interprets the letter-colon combination as a drive specifier.

## What do you want to know more about?

[Pseudotargets](../build/pseudotargets.md)

[Multiple targets](../build/multiple-targets.md)

[Cumulative dependencies](../build/cumulative-dependencies.md)

[Targets in multiple description blocks](../build/targets-in-multiple-description-blocks.md)

[Dependency side effects](../build/dependency-side-effects.md)

## See also

- [Description Blocks](../build/description-blocks.md)
