---
title: "Install GitHub Copilot modernization for C++"
description: "Set up GitHub Copilot modernization for C++ in Visual Studio to start upgrading your C++ projects."
ms.date: 6/11/2026
ms.topic: how-to
author: michaelbprice
ms.author: miprice
ai-usage: ai-assisted
---

# Install GitHub Copilot modernization for C++

GitHub Copilot modernization helps you modernize your C++ codebase. Follow these steps to install the feature in Visual Studio.

## Prerequisites

- Windows operating system.
- [Visual Studio 2026 version 18.7 or later](https://aka.ms/vs/download).
- One or more of the following C++ development workloads:
  - **Desktop development with C++**
  - **Game development with C++**
  - **Linux, Mac, and embedded development with C++**
- These optional components must be enabled: **GitHub Copilot**, **GitHub Copilot modernization**
- GitHub Copilot subscription (paid or free).
- [Sign in to Visual Studio with a GitHub account](/visualstudio/ide/work-with-github-accounts) that has [Copilot access](https://docs.github.com/copilot/get-started/plans#ready-to-choose-a-plan).
- Code written in C or C++ and in either a MSBuild-based codebase that uses `.sln` or `.vcxproj`, or a CMake-based codebase. Unreal Engine projects (`.uproject`) are not currently supported.

## Verify your Visual Studio version

If you need to update Visual Studio, select **Help** > **Check for Updates**, or download the latest version from [Visual Studio downloads](https://aka.ms/vs/download).

## Enable or disable the feature

GitHub Copilot modernization for C++ is enabled by default. To disable or explicitly enable the feature:

1. In Visual Studio, select **Tools** > **Options** to open the **Options** dialog.
1. Navigate to **GitHub** > **Copilot** > **C/C++**.
1. Select the **Enable GitHub Copilot modernization for C++** checkbox to enable the feature, or clear it to disable the feature.
1. Restart Visual Studio for the setting change to take effect.

## Verify the agent is available

After setup, verify that the modernization agent is accessible:

1. Open a C++ solution or project in Visual Studio.
1. Open **GitHub Copilot Chat** by selecting **View** > **GitHub Copilot Chat**.
1. Type `@Modernize` in the chat input. If the agent responds, setup is complete.

Alternatively, right-click your solution or project in **Solution Explorer**. If **Modernize** appears in the context menu, the agent is ready.

## Related content

- [GitHub Copilot modernization for C++ overview](./overview.md)
- [Troubleshoot GitHub Copilot modernization for C++](./troubleshooting.md)
