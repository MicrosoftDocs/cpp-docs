---
title: "Get Started with GitHub Copilot build performance for Windows"
description: "Learn how to use GitHub Copilot build performance for Windows to analyze C++ builds, identify expensive headers and templates, and automatically optimize build times in Visual Studio 2026."
ms.date: 1/20/2026
helpviewer_keywords: ["GitHub Copilot build performance", "C++ Build Insights", "build time optimization", "header file analysis", "template instantiation", "Visual Studio build performance"]
ms.topic: how-to
---

# Get Started with GitHub Copilot build performance for Windows 

The GitHub Copilot build performance for Windows analyzes your C++ builds and highlights expensive headers, templates, and functions so you can identify and fix build time bottlenecks. GitHub Copilot integrates seamlessly with Visual Studio, reducing complexity and improving developer productivity.

## Prerequisites 

- Windows 10 or later.
- An MSBuild or CMake project.
- MSVC Build Tools version 14.50.

## Installing Visual Studio 2026

To use GitHub Copilot build performance for Windows, you must install the latest available **Visual Studio 2026**.

[Installation Guide](/visualstudio/install/install-visual-studio)

Visual Studio 2026 supports **side-by-side installation** with older versions. You do not need to uninstall previous versions or other release channels. Installing Visual Studio 2026 will not interfere with your existing development environment. 

### Before you begin 

After installing the Visual Studio Installer, ensure the following components are selected under the **Desktop development with C++** [workload](/visualstudio/install/install-visual-studio#step-4---choose-workloads) during installation:

- C++ Build Insights
- C++ profiling tools
- C++ CMake tools for Windows (required for CMake projects) 

:::image type="complex" source="./media/vs-installer-options.png" alt-text="This installer view highlights the available optional components within the Desktop development with C++ workload, helping users confirm that tools required for build analysis and performance optimization are included during setup.":::
The list shows C++ Build Insights, C++ profiling tools, and C++ CMake tools for Windows are all selected for installation.
:::image-end:::

## Verify GitHub Copilot subscription

GitHub Copilot build performance for Windows is available to users on GitHub Copilot Pro, Pro+, Business, and Enterprise plans.  

- Verify your subscription 

  - Log in to [https://github.com](https://github.com/) and access the [Copilot features](https://github.com/settings/copilot/features)

  - Your plan type will appear near the top of the page. 

    :::image type="complex" source="./media/copilot-subscription.png" alt-text="Banner in GitHub account settings confirming that GitHub Copilot Enterprise is active, with quick-access buttons for various Copilot features including IDE, CLI, mobile, GitHub.com, and more.":::
    This banner provides context for where subscription details are displayed within GitHub’s account settings interface.
    :::image-end:::

- Authenticate in Visual Studio 2026

  Before proceeding, ensure you are signed in to your GitHub account in Visual Studio.

  - Click on your profile picture in the upper-right corner of Visual Studio to confirm your GitHub login status.

    :::image type="complex" source="./media/vs-account-authentication.png" alt-text="Visual Studio account dropdown showing an active login session with a Microsoft account and a connected GitHub account, both marked as active and synced.":::
    The dropdown displays the GitHub account with active status and sync indicator.
    :::image-end:::

  - If you are not signed in, open the GitHub Copilot Chat and follow the sign-in instructions from the pop-up window.

  - Once authenticated, you can verify your plan by selecting Copilot Usage from the dropdown menu under the GitHub Copilot badge.

### Enable Template Collection

Template instantiation time collection is off by default to minimize analysis overhead. To turn it on:

  1.  In Visual Studio, go to **Tools** \> **Options**.

  2.  In the **Options** dialog, expand **Build Insights** in the left navigation.

  3.  Select **Collect Template Instantiation**.

:::image type="complex" source="./media/build-insights-options.png" alt-text="Build Insights settings page in Visual Studio Options with the Collect template instantiation checkbox enabled, displaying trace collection configurations for analysis.":::
The dialog shows trace collection settings with the Collect template instantiation checkbox selected.
:::image-end:::

*Learn more:* [Troubleshoot template instantiation impact on build time | Microsoft Learn](/cpp/build-insights/tutorials/build-insights-template-view)

## Workflow

GitHub Copilot build performance on Windows is available via the GitHub Copilot chat pane. Users can access this functionality through the Agent feature within the chat interface.

:::image type="complex" source="./media/copilot-build-perf-select.png" alt-text="GitHub Copilot chat pane showing agent selection. The GitHub Copilot build performance on Windows is highlighted as the option to select.":::
The pane shows GitHub Copilot build performance for Windows selected to optimize C++ build, with other agents listed.
:::image-end:::

Before submitting a request to the GitHub Copilot, select your preferred model.

:::image type="complex" source="./media/model-select.png" alt-text="Model selection menu in Copilot Chat showing available AI models including GPT-5, GPT-5.1, Claude, and Gemini, with usage rate indicators.":::
This dropdown provides context on the range of AI models available when initiating a performance analysis.
:::image-end:::

Instruct GitHub Copilot to improve the build performance of your selected project. You can add additional context and information so that GitHub Copilot can create suggestions that match the needs of your project.

:::image type="complex" source="./media/copilot-build-request.png" alt-text="Copilot Chat interface where the user has entered a request for build performance improvement using GitHub Copilot build performance on Windows.":::
The window shows GitHub Copilot build performance for Windows with user message requesting build performance improvement for the project.
:::image-end:::

### Enable Build Insights

To analyze the build performance of the selected project, Visual Studio needs elevated permissions. The Build Insights tool needs to be enabled for a first-time user to kickstart the build performance analysis.

*Learn more:* [Build Insights needs additional permissions | Microsoft Learn](/cpp/build-insights/elevate-note)

:::image type="complex" source="./media/build-insights-permission.png" alt-text="Visual Studio dialog titled Run Build Insights requesting permission to start build analysis, with Confirm and Deny buttons.":::
This dialog appears when Visual Studio is preparing to launch the profiling tools necessary for trace generation.
:::image-end:::

A one-time elevated request is then needed to capture the MSVC compiler traces.

:::image type="complex" source="./media/msvc-elevation.png" alt-text="Microsoft Visual Studio prompt requesting elevated permissions for Build Insights to collect MSVC compiler traces, displaying Yes and No options.":::
This prompt provides system-level acknowledgment of the resource access required for tracing.
:::image-end:::

:::image type="complex" source="./media/windows-user-account-control.png" alt-text="Windows User Account Control dialog asking whether to allow the Windows Command Processor to make changes, with Yes and No choices.":::
This UAC dialog is part of Windows’ layer of elevation confirmation and appears when enabling Build Insights for the first time.
:::image-end:::

If the one-time elevated request is denied, the Build Insights operation is cancelled due to lack of rights to continue.


You will guide GitHub Copilot through the process of improving the build time by providing permission, as needed, to run tools. Additional permissions may be required to run PowerShell scripts.

:::image type="complex" source="./media/terminal-permission.png" alt-text="Copilot Chat notification prompting the user to authorize execution of a terminal command, offering Confirm, Always allow, and Allow in this session.":::
This prompt appears within the chat flow when Copilot requires permission to run terminal commands necessary for optimization.
:::image-end:::

The GitHub Copilot build performance for Windows goes through multiple iterations of code implementation to make the build faster.

:::image type="complex" source="./media/build-analysis-complete.png" alt-text="The display shows build time improved from 78.6 seconds to 70.5 seconds (8.1 seconds faster, ~10.3% improvement), with a note that further improvement is possible.":::
This image provides contextual insight into how build metrics are presented after an optimization iteration.
:::image-end:::

After GitHub Copilot completes the request, a summary of the changes and build performance impact is displayed. The build performance summary changes depending on each iteration of the agent.

:::image type="complex" source="./media/build-summary.png" alt-text="A summary view comparing build performance before and after optimization. The report shows build time dropping from about 110.7 seconds to 34.1 seconds, with major header bottlenecks significantly reduced. It highlights a 69% overall improvement and faster incremental rebuilds after precompiled headers were enabled.":::
The summary displays top bottlenecks and quantitative results of the performance improvements.
:::image-end:::

In this case, build time dropped from **110.7s to 34.1s** after enabling precompiled headers for costly includes, delivering a **69% improvement** and **3.2× faster builds** with near-instant incremental rebuilds.

### Additional entry points

The GitHub Copilot build performance for Windows can be accessed through other entry points.

- Button from build menu

  :::image type="complex" source="./media/build-menu-improve.png" alt-text="Visual Studio Build menu expanded with the Improve build performance option highlighted under Run Build Insights.":::
  The menu shows the Improve build performance option under Run Build Insights.
  :::image-end:::

    Clicking the Improve build performance button prompts GitHub Copilot chat

    :::image type="complex" source="./media/copilot-improve-prompt.png" alt-text="Copilot chat window with Improve Build Performance prompt.":::
    The window shows GitHub Copilot build performance for Windows ready to assist with optimization.
    :::image-end:::

- Button from solution context menu

  :::image type="complex" source="./media/solution-menu-improve.png" alt-text="Solution context menu in Visual Studio showing Improve build performance on Solution among the available commands.":::
  The context menu displays the Improve build performance on Solution option.
  :::image-end:::

  Clicking the Improve build performance on Solution button prompts the GitHub Copilot chat

  :::image type="complex" source="./media/copilot-improve-prompt.png" alt-text="Copilot chat window with a request to help improve the build performance of this project.":::
  The window shows GitHub Copilot build performance for Windows request to assist with build optimization.
  :::image-end:::

- Button from Build Insights view

  :::image type="complex" source="./media/insights-improve-button.png" alt-text="Build Insights diagnostics session interface with the Improve button visible for triggering optimization using existing trace data.":::
  The view shows the diagnostics session with the Improve button available for optimization.
  :::image-end:::

  Clicking the Improve button prompts the GitHub Copilot chat. This button uses data from the existing build insights trace results and does not trigger a new build insights tool execution until the current proposed changes have been processed.

  :::image type="complex" source="./media/copilot-improve-includes.png" alt-text="Copilot chat with request to help improve the build performance of this project, focusing on includes.":::
  Copilot Chat showing a user request specifically targeting include file optimization as part of the build performance improvements.
  :::image-end:::

## See Also

[Build Insights function view](/cpp/build-insights/tutorials/build-insights-function-view)

[Build Insights included files view](/cpp/build-insights/tutorials/build-insights-included-files-view)

[vcperf and Windows Performance Analyzer](/cpp/build-insights/tutorials/vcperf-and-wpa)

[Windows Performance Analyzer basics](/cpp/build-insights/tutorials/wpa-basics)