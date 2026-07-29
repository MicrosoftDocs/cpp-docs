---
title: "How to: Create a Release Build"
description: Learn how to create a release build in Visual Studio. Switch configurations, optimize your program, and prepare it for distribution.
ms.date: "07/16/2026"
author: TimShererWithAquent
ms.author: v-tishe
helpviewer_keywords: ["Win32, release build", "release builds, creating"]
ms.assetid: 6a4c89b1-48f0-44d2-8703-ca0a4b0351bf
#customer intent: As a developer, I want to create a release build of my program, so that I can distribute an optimized version to my users.
---
# How to create a release build

Visual Studio projects have separate release and debug configurations for your program: debug version and release version for distribution.

In debug configuration, your program has symbolic debug information and no optimization. The release configuration of your program has no symbolic debug information and is fully optimized.

To generate a release build of your program, follow these steps:

1. Open your solution in Visual Studio.
1. In the **Solutions Configuration** menu under the toolbar, select **Release**.

   :::image type="content" source="media/vs-2026/configure-release-build.png" alt-text="Screenshot shows Visual Studio Solutions Configuration menu with Release highlighted.":::
   
1. From the **Build** menu, select  **Build**.
 
You can instead select **Configuration Manager**, where you can edit the build and release configurations. You can also create custom configurations to debug and release your program for different contexts and platforms.

## See also

- [Project and solution configurations](/visualstudio/ide/understanding-build-configurations)
- [Release Builds](release-builds.md)
- [Common problems](common-problems-when-creating-a-release-build.md)
