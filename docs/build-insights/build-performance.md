---
title: "Get Started with GitHub Copilot build performance for Windows"
description: "Learn how to use GitHub Copilot to improve build times."
ms.date: 01/21/2026
helpviewer_keywords: ["GitHub Copilot build performance", "C++ Build Insights", "build time optimization", "header file analysis", "template instantiation", "Visual Studio build performance"]
ms.topic: how-to
---

# Get started with GitHub Copilot build performance for Windows 

The GitHub Copilot build performance for Windows helps you make your builds faster. It finds expensive headers, template instantiations, and functions and can automatically make your builds more efficient. GitHub Copilot is integrated with Visual Studio.

## Prerequisites 

- Visual Studio 2026 version 18.3 Insiders 4, or later.
- MSVC Build Tools version 14.50 or later.
- A MSBuild or CMake project.
- Windows 10 or later.

### Before you begin 

In the Visual Studio 2026 Installer, ensure the following components are selected in the **Desktop development with C++** [workload](/visualstudio/install/install-visual-studio#step-4---choose-workloads):

:::image type="complex" source="./media/vs-installer-options.png" alt-text="Screenshot of the Visual Studio installer.":::
The desktop development with C++ section is highlighted and C++ Build Insights, C++ profiling tools, and C++ CMake tools for Windows are selected.
:::image-end:::

### Verify your GitHub Copilot subscription

To use GitHub Copilot build performance for Windows, you need a GitHub Copilot Pro, Pro+, Business, or Enterprise subscription.

Verify your GitHub Copilot subscription on GitHub, and then sign in to your GitHub account in Visual Studio 2026.

1. Verify your GitHub Copilot subscription by signing in to [https://github.com](https://github.com/). Select your profile picture and then [Copilot settings](https://github.com/settings/copilot/features). Your plan type appears near the top of the page:

    :::image type="complex" source="./media/copilot-subscription.png" alt-text="Screenshot of the users GitHub Copilot information.":::
    The Copilot settings page shows the type of subscription. In this case, the user has GitHub Copilot Enterprise.
    :::image-end:::
1. In Visual Studio, sign in to your GitHub account:
  - If you're not signed in to GitHub in Visual Studio, open the GitHub Copilot Chat and follow the sign-in instructions in the pop-up window.
  - Confirm your GitHub sign-in status by selecting your profile picture in Visual Studio. You should see that your GitHub account is **Active**:

    :::image type="complex" source="./media/vs-account-authentication.png" alt-text="Screenshot of the account dropdown in Visual Studio.":::
    The account dropdown shows that a Microsoft account and a GitHub account are both signed in and active.
    :::image-end:::

### Enable template collection

To minimize analysis overhead, the template instantiation time collection is off by default. Turn it on:

  1. In Visual Studio, go to **Tools** > **Options**.
  1. In the **Options** dialog, expand **Build Insights**.
  1. Select **Collect Template Instantiation**.

:::image type="complex" source="./media/build-insights-options.png" alt-text="Build Insights settings page in Visual Studio Options with the Collect template instantiation checkbox enabled, displaying trace collection configurations for analysis.":::
The dialog shows trace collection settings with the Collect template instantiation checkbox selected.
:::image-end:::

For more information about template instantiation on build time, see [Troubleshoot template instantiation impact on build time | Microsoft Learn](/cpp/build-insights/tutorials/build-insights-template-view)

## Troubleshoot build performance with GitHub Copilot

To start the GitHub Copilot build performance agent:

1. Open the GitHub Copilot chat pane and type '@'. One of the options is **@BuildPerfCpp**. Select it:

    :::image type="complex" source="./media/copilot-build-perf-select.png" alt-text="Screenshot of the GitHub Copilot chat pane.":::
    The GitHub Copilot chat pane shows a list of agents to choose from. Build Perf C p p (optimize your c + + build) is selected.
    :::image-end:::
    
1. Select your preferred model in the model drop down menu:

    :::image type="complex" source="./media/model-select.png" alt-text="Screenshot of the model selection menu in the Copilot Chat window.":::
    This dropdown lists models various models like GPT-5, CLaude Sonnet 4, Gemini 3 Pro, and others.
    :::image-end:::
    
1. Instruct GitHub Copilot to improve the build performance of your selected project by typing something like **Help me improve the build performance of this project**. You can add extra context so that GitHub Copilot can better make suggestions to match the needs of your project.

    :::image type="complex" source="./media/copilot-build-request.png" alt-text="Screenshot of the GitHub Copilot Chat window.":::
    The GitHub Copilot chat window shows @ Build Per Cpp: Help me improve the build performance of this project.
    :::image-end:::
    
### Permissions

The first time you use GitHub Copilot build performance for Windows, you may need to enable Build Insights and grant elevated permissions to collect MSVC compiler traces.

Visual Studio needs elevated permissions to analyze build performance and the Build Insights tool needs to be enabled. It stays enabled until you disable it. For more information about these permissions, see [Build Insights needs additional permissions](/cpp/build-insights/elevate-note).

If GitHub Copilot prompts you to enable Build Insights and grant elevated permissions, choose **Confirm**:

:::image type="complex" source="./media/build-insights-permission.png" alt-text="Screenshot of a GitHub Copilot dialog asking to elevate permissions.":::
The dialog indicates that Build Insights (vcperf) needs additional permissions to capture MSVC compiler traces. There are Confirm and Deny buttons.
:::image-end:::

A Visual Studio dialog then appears prompting you to allow a one-time elevated request:

:::image type="complex" source="./media/msvc-elevation.png" alt-text="Screenshot of a Microsoft Visual Studio prompt requesting elevated permissions.":::
The elevation prompt says: Build Insights (vcperf) needs additional permissions to capture MSVC compiler traces. Allow this one-time elevated request? There are Yes and No buttons.
:::image-end:::

Choose **Yes**. The Windows User Account Control dialog then appears:

:::image type="complex" source="./media/windows-user-account-control.png" alt-text="Screenshot of the User Account Control dialog.":::
The dialog asks for permission for the Windows Command Processor, verified publisher Microsoft, to allow this app to make changes to your device. There are Yes and No buttons.
:::image-end:::

Choose **Yes** to grant permission to capture the MSVC compiler traces. Denying the elevated request to cancel the build analysis.

## Guide GitHub Copilot through the process of improving the build time

As you guide GitHub Copilot through the process of improving the build time, it may ask you to provide permission to run tools such as PowerShell scripts:

:::image type="complex" source="./media/terminal-permission.png" alt-text="Screenshot of a Copilot Chat notification.":::
The prompt asks the user to authorize running the command: ls ../src/ in the terminal. The Confirm dropdown offers: Always allow and Allow in this session. There's also a Deny button.
:::image-end:::

Choose the level of permission you are comfortable with. If you deny the request, GitHub Copilot can't proceed with the build performance analysis.
Copilot may go through multiple iterations to find the best way to make the build faster.

When the analysis is done, GitHub Copilot displays a summary of the changes and build performance impact for that iteration:

:::image type="complex" source="./media/build-summary.png" alt-text="Screenshot of the build performance summary.":::
The summary shows a before and after optimization summary indicating build time, the top bottleneck, and the top five headers that contributed the most to the build time. The report shows build time dropping from 110.7 seconds to 34.1 seconds. It highlights a 69.2% overall improvement and faster incremental rebuilds after enabling precompiled headers.
:::image-end:::

In this example, build time dropped from **110.7s to 34.1s** after enabling precompiled headers for costly includes. A **69% improvement** and **3.2× faster builds** with near-instant incremental rebuilds.

### Other ways to access GitHub Copilot build performance for Windows

You can access the GitHub Copilot build performance for Windows in other ways:

The **Build** menu:

  :::image type="complex" source="./media/build-menu-improve.png" alt-text="Screenshot of the Build menu.":::
  The Build menu option Run Build Insights is expanded to show Build All, Rebuild All, and Improve Build Performance. The latter is selected.
  :::image-end:::

Or select a **Improve build performance** prompt in GitHub Copilot chat:

    :::image type="complex" source="./media/copilot-improve-prompt.png" alt-text="Screenshot of the Copilot chat window.":::
    The chat window shows a prompt to Improve Build Performance.
    :::image-end:::

Or use the **Solution** window context menu which you can access by right-clicking the solution node:

  :::image type="complex" source="./media/solution-menu-improve.png" alt-text="A screenshot of the Solution explorer.":::
  The context menu shows Build Solution, Build Solution, and so on. Improve build performance on Solution is highlighted.
  :::image-end:::

  Select **Improve build performance on Solution** to open the GitHub Copilot chat window, which prompts you to optimize the build performance of your project.

  :::image type="complex" source="./media/copilot-improve-prompt.png" alt-text="Screenshot of the Copilot chat window.":::
  The chat window shows a prompt to Improve Build Performance.
  :::image-end:::

Or from the Build Insights view:

  Select **Improve** from the Build Insights diagnostics session view to open the GitHub Copilot chat window, which prompts you to optimize the build performance of your project, shown previously. This button uses data from the existing build insights trace results. It doesn't do a new analysis until the current changes are processed.

  :::image type="complex" source="./media/insights-improve-button.png" alt-text="Screenshot of the Build Insights view window.":::
  The Improve link is highlighted.
  :::image-end:::

## See also

[Build Insights function view](/cpp/build-insights/tutorials/build-insights-function-view)\
[Build Insights included files view](/cpp/build-insights/tutorials/build-insights-included-files-view)\
[vcperf and Windows Performance Analyzer](/cpp/build-insights/tutorials/vcperf-and-wpa)\
[Windows Performance Analyzer basics](/cpp/build-insights/tutorials/wpa-basics)