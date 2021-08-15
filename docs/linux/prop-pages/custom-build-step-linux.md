---
description: "Learn more about: Custom Build Step Properties (Linux C++)"
title: "Custom Build Step Properties (Linux C++)"
ms.date: "06/07/2019"
ms.assetid: 77a9c1fb-7c41-4a9b-9418-18ac17ce4e74
---
# Custom Build Step Properties (Linux C++)

::: moniker range="msvc-140"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

| Property | Description |
|--|--|
| Command Line | The command to be executed by the custom build step. |
| Description | A message that's displayed when the custom build step runs. |
| Outputs | The output file that the custom build step generates. This setting is required so that incremental builds work correctly. |
| Additional Dependencies | A semicolon-delimited list of any additional input files to use for the custom build step. |
| Execute After and Execute Before | These options define when the custom build step is run in the build process, relative to the listed targets. The most commonly listed targets are BuildGenerateSources, BuildCompile, and BuildLink, because they represent the major steps in the build process. Other often-listed targets are Midl, CLCompile, and Link. |
| Treat Output As Content | This option is only meaningful for Microsoft Store or Windows Phone apps, which include all content files in the .appx package. |

::: moniker-end
