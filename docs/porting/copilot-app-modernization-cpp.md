---
title: "Modernize your C++ project with GitHub Copilot app modernization"
description: "Instructions on effectively using GitHub Copilot app modernization in your C++ projects"
ms.date: 01/23/2026
ms.topic: upgrade-and-migration-article
author: michaelbprice
ms.author: miprice
---

# Using GitHub Copilot app modernization for C++

GitHub Copilot app modernization for C++ helps you upgrade C++ projects to newer MSVC Build Tools versions. If necessary, Copilot will upgrade your project's settings to use the latest MSVC, and then conduct a thorough assessment of the impact of those changes after executing a build. It develops a plan on how to address each identified problem. Once you approve the plan, the agent completes a sequence of tasks and validates that any changes resolved the identified problems. If there remains work to be done, the agent continues iterating until the problems are resolved or you discontinue the conversation.

> [!NOTE]
> GitHub Copilot app modernization for C++ is currently in preview.

## Requirements

- Visual Studio 2026 version 18.3 or later
- A GitHub Copilot account
- A MSBuild-based codebase (`.sln`, `.vcxproj`) OR a CMake-based codebase

## Enable GitHub Copilot app modernization for C++

GitHub Copilot app modernization for C++ is enabled by default. To disable or explicitly enable the feature, follow these steps.

1. From Visual Studio, select **Tools > Options...** to open the **Options** window.
1. Navigate to **All Settings > GitHub > Copilot > C/C++**.
1. Select (to enable) or clear (to disable) the checkbox for **Enable GitHub Copilot app modernization for C++ (preview)**.
1. Restart Visual Studio for the setting change to take effect.

:::image type="content" source="media/enable-copilot-app-modernization-cpp.png" alt-text="Screenshot of Visual Studio Options dialog. GitHub > Copilot > C/C++ settings are visible. The app modernization for C++ checkbox is enabled.":::

## Upgrade your codebase by using GitHub Copilot app modernization for C++

This section describes how to start the Modernize agent and the stages it goes through to upgrade your codebase.

### Start the Modernize agent

GitHub Copilot app modernization is an agent that operates inside the GitHub Copilot Chat window. You can start the agent in any of the following ways:

- **From the Solution Explorer context menu**: Right-click on the solution or a loaded project in the Solution Explorer, and choose **Modernize** from the context menu. This automatically launches a GitHub Copilot Chat window, activates the Modernize agent, and provides you with relevant prompts to choose from to get you started.

:::image type="content" source="media/copilot-app-modernization-context-menu.png" alt-text="Screenshot of Visual Studio Solution Explorer showing a right-click context menu with Modernize selected to start the Copilot agent.":::

- **From GitHub Copilot Chat**: Open the GitHub Copilot Chat Window by selecting **View > GitHub Copilot Chat**. After the GitHub Copilot Chat window opens, mention `@Modernize` in a prompt to activate the Modernize agent. For example, type this prompt:

   `Use @Modernize to update MSVC Build Tools.`

#### For MSBuild-based codebases targeting an earlier version of MSVC Build Tools

The first time that you load a `.vcxproj` project that targets an earlier version of the MSVC Build Tools, you see an option to [upgrade project settings to use a newer version of the MSVC Build Tools](https://learn.microsoft.com/visualstudio/install/setup-assistant). If you retarget any of your projects to a new version of MSVC Build Tools and GitHub Copilot app modernization for C++ is enabled, you receive an infobar in Visual Studio prompting you to use GitHub Copilot app modernization for C++ to resolve any newly introduced build problems. Selecting **Run GitHub Copilot app modernization for C++** launches the GitHub Copilot Chat window, activates the Modernize agent, and provides you with relevant prompts to choose from to get you started.

### Start the upgrade

Once the Modernize agent is active, you can instruct it via a prompt to upgrade your MSVC Build Tools, or select the already constructed prompt from the list shown in the window. If you launched the agent directly in the GitHub Copilot Chat window by mentioning `@Modernize` in your prompt, you probably don't need to provide more prompting.

:::row:::
:::column:::

**MSBuild Projects**

:::column-end:::
:::column:::

**CMake Projects**

:::column-end:::
:::row-end:::
:::row:::
:::column:::

:::image type="content" source="media/app-modernization-msbuild-ice-breaker.png" alt-text="Screenshot of GitHub Copilot Chat window. The dropdown is set to App Modernization experience and Upgrade MSVC Build Tools to the latest version is highlighted.":::

:::column-end:::
:::column:::

:::image type="content" source="media/app-modernization-cmake-ice-breaker.png" alt-text="Screenshot of GitHub Copilot Chat window. The dropdown is set to App Modernization experience and Resolve build issues by migrating to modern alternatives is highlighted":::

:::column-end:::
:::row-end:::


### Assessment stage

The agent first assesses what kinds of problems show up after upgrading. If you didn't already upgrade the project, the agent guides you through that process before creating its assessment. After ensuring that your project is upgraded, the agent builds your codebase, analyzes the reported warnings and errors, and generates an `assessment.md` file that describes the problems that it found, their severity, and other useful information. This is your opportunity to tell the agent any other context that could help it make a plan.

One of the things you might choose to do here is to tell the agent not to fix certain discovered problems, because you know that resolving them involves some strategic decisions or because they were preexisting warnings that you decided are acceptable for your project. You should carefully read through the plan, making sure to provide that extra context where it is needed. Once you approve the assessment, the agent moves on to creating a concrete plan on addressing the problems.

### Planning stage

Based on the approved assessment and any other context or instructions you provide, the agent creates a `plan.md` file that proposes a detailed plan for resolving each of the identified problems. If the agent produces a plan that doesn't match your organization's coding style or practices, you can provide that guidance to the agent and have it solve the problem differently. After you agree on the plan, the agent moves to the execution stage.

### Execution stage

Now that the agent has a plan, it breaks down the necessary tasks to execute the plan. You can define these tasks as finely as you want. The tasks can even include steps to work on a branch or to commit specific changes together in the same commit. After making any changes, the agent builds the project again to confirm that the problems are resolved. If the problems aren't resolved, the agent iterates with you until they're resolved to your satisfaction.

### Post-upgrade validation

When the agent finishes, run the changes through any testing infrastructure you have. Have a colleague review the changes in a pull request. Since this feature is currently in preview, you might receive an infobar to complete a product survey to let the product team know how the agent performed on your codebase. The product team looks forward to hearing how they can improve the agent to solve your problems and accelerate your upgrade and modernization efforts.