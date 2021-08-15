---
description: "Learn more about: Remote Archive Properties (C++ Linux)"
title: "Remote Archive Properties (C++ Linux)"
ms.date: "06/07/2019"
ms.assetid: 5ee1e44c-8337-4c3a-b2f3-35e4be954f9f
f1_keywords: []
---
# Remote Archive Properties (C++ Linux)

::: moniker range="msvc-140"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

| Property | Description |
|--|--|
| Create an archive index | Create an archive index (as done by ranlib). This option can speed up linking and reduce dependency within its own library. |
| Create Thin Archive | Create a thin archive.  A thin archive contains relative paths to the objects instead of embedding the objects.  Switching between Thin and Normal requires deleting the existing library. |
| No Warning on Create | Doesn't warn if or when the library is created. |
| Truncate Timestamp | Use zero for timestamps and uids/gids. |
| Suppress Startup Banner | Don't show the version number. |
| Verbose | Verbose |
| Additional Options | Additional options. |
| Output File | The /OUT option overrides the default name and location of the program that the lib creates. |
| Archiver | Specifies the program to invoke during linking of static objects, or the path to the archiver on the remote system. |
| Archiver Timeout | Remote archiver timeout, in milliseconds. |
| Copy Output | Specifies whether to copy the build output file from the remote system to the local machine. |

::: moniker-end
