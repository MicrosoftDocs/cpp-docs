# Getting Started with GitHub Copilot build performance for Windows 

The GitHub Copilot build performance for Windows analyzes your C++ builds and highlights expensive headers, templates, and functions so you can identify and fix build time bottlenecks. GitHub Copilot integrates seamlessly with Visual Studio, reducing complexity and improving developer productivity.

## Prerequisites 

- Windows 10 or later.
- An MSBuild or CMake project.
- MSVC Build Tools version 14.50.

## Installing Visual Studio 2026

To use GitHub Copilot build performance for Windows, you must install the latest available **Visual Studio 2026**.

[Installation Guide](https://learn.microsoft.com/en-us/visualstudio/install/install-visual-studio?view=visualstudio)

Visual Studio 2026 supports **side-by-side installation** with older versions. You do not need to uninstall previous versions or other release channels. Installing Visual Studio 2026 will not interfere with your existing development environment. 

### Before you begin 

After installing the Visual Studio Installer, ensure the following components are selected under the **Desktop development with C++** [workload](https://learn.microsoft.com/en-us/visualstudio/install/install-visual-studio?view=visualstudio#step-5---choose-individual-components-optional:~:text=proceeding%20with%20installation.-,Step%204%20%2D%20Choose%20workloads,-After%20you%20install) during installation:

- C++ Build Insights
- C++ profiling tools
- C++ CMake tools for Windows (required for CMake projects) 

:::image type="complex" source="./media/vs-installer-options.png" alt-text="Screenshot of Visual Studio Installer showing selected options for Desktop development with C++.":::
The list shows C++ Build Insights, C++ profiling tools, and C++ CMake tools for Windows are all selected for installation.
:::image-end:::

## Verify GitHub Copilot subscription

GitHub Copilot build performance for Windows is available to users on GitHub Copilot Pro, Pro+, Business, and Enterprise plans.  

- Verify your subscription 

  - Log in to [https://github.com](https://github.com/) and access the [Copilot features](https://github.com/settings/copilot/features)

  - Your plan type will appear near the top of the page. 

:::image type="complex" source="./media/copilot-subscription.png" alt-text="Banner in GitHub settings indicating Copilot Enterprise is active.":::
The banner shows buttons for Copilot in IDE, CLI, Mobile, GitHub.com, and more features.
:::image-end:::

- Authenticate in Visual Studio 2026 
Before proceeding, ensure you are signed in to your GitHub account in Visual Studio.

  - Click on your profile picture in the upper-right corner of Visual Studio to confirm your GitHub login status.

  :::image type="complex" source="./media/vs-account-auth.png" alt-text="Visual Studio account dropdown showing GitHub EMU account.":::
  The dropdown displays the GitHub EMU account with active status and sync indicator.
  :::image-end:::

  - If you are not signed in, open the GitHub Copilot Chat and follow the sign-in instructions from the pop-up window.

  :::image type="complex" source="./media/copilot-signin.png" alt-text="GitHub Copilot sign-in window with authentication options.":::
  The window shows options to continue with GitHub or Google, and links to terms and privacy policy.
  :::image-end:::

  - Once authenticated, you can verify your plan by selecting Copilot Usage from the dropdown menu under the GitHub Copilot badge.

  :::image type="complex" source="./media/copilot-usage-menu.png" alt-text="Visual Studio dropdown menu under Copilot badge.":::
  The menu lists options like Copilot Usage, Open Chat Window, Settings, Learn More, GitHub Copilot Walkthrough, and Manage Copilot Subscription.
  :::image-end:::

### Enable Template Collection

Template instantiation time collection is off by default to minimize analysis overhead. To turn it on:

  1.  In Visual Studio, go to **Tools** \> **Options**.

  2.  In the **Options** dialog, expand **Build Insights** in the left navigation.

  3.  Select **Collect Template Instantiation**.

:::image type="complex" source="./media/build-insights-options.png" alt-text="Visual Studio Build Insights options dialog.":::
The dialog shows trace collection settings with the Collect template instantiation checkbox selected.
:::image-end:::

*Learn more:* [Troubleshoot template instantiation impact on build time | Microsoft Learn](https://learn.microsoft.com/en-us/cpp/build-insights/tutorials/build-insights-template-view?view=msvc-170)

## Workflow

GitHub Copilot build performance on Windows is available via the GitHub Copilot chat pane. Users can access this functionality through the Agent feature within the chat interface.

:::image type="complex" source="./media/copilot-build-perf-select.png" alt-text="GitHub Copilot chat pane showing agent selection.":::
The pane shows GitHub Copilot build performance for Windows selected to optimize C++ build, with other agents listed.
:::image-end:::

Before submitting a request to the GitHub Copilot, select your preferred model.

:::image type="complex" source="./media/model-select.png" alt-text="Dropdown menu in Copilot chat for selecting AI models.":::
The menu includes GPT-5, GPT-5.1, Claude, Gemini, and other available AI models.
:::image-end:::

Instruct GitHub Copilot to improve the build performance of your selected project. You can add additional context and information so that GitHub Copilot can create suggestions that match the needs of your project.

:::image type="complex" source="./media/copilot-build-request.png" alt-text="Copilot chat window with build performance request.":::
The window shows GitHub Copilot build performance for Windows with user message requesting build performance improvement for the project.
:::image-end:::

### Enable Build Insights

To analyze the build performance of the selected project, Visual Studio needs elevated permissions. The Build Insights tool needs to be enabled for a first-time user to kickstart the build performance analysis.

*Learn more:* [Build Insights needs additional permissions | Microsoft Learn](https://learn.microsoft.com/en-us/cpp/build-insights/elevate-note?view=msvc-170&f1url=%3FappId%3DDev18IDEF1%26l%3DEN-US%26k%3Dk(bi_permissions)%26rd%3Dtrue)

:::image type="complex" source="./media/build-insights-permission.png" alt-text="Visual Studio dialog asking to run Build Insights tool.":::
The dialog requests permission to analyze build performance, with Confirm and Deny buttons.
:::image-end:::

A one-time elevated request is then needed to capture the MSVC compiler traces.

:::image type="complex" source="./media/msvc-elevation.png" alt-text="Microsoft Visual Studio dialog requesting permission to capture MSVC compiler traces.":::
The dialog shows options for Yes and No to allow trace capture.
:::image-end:::

:::image type="complex" source="./media/windows-uac.png" alt-text="User Account Control dialog for Windows Command Processor.":::
The UAC dialog asks to allow Windows Command Processor to make changes to the device, with Yes and No buttons.
:::image-end:::

If the one-time elevated request is denied, the Build Insights operation is cancelled due to lack of rights to continue.


You will guide GitHub Copilot through the process of improving the build time by providing permission, as needed, to run tools. Additional permissions may be required to run PowerShell scripts.

:::image type="complex" source="./media/terminal-permission.png" alt-text="Copilot chat window prompting user to confirm running a terminal command.":::
The prompt shows options to always allow or allow in this session.
:::image-end:::

The GitHub Copilot build performance for Windows goes through multiple iterations of code implementation to make the build faster.

:::image type="complex" source="./media/build-analysis-complete.png" alt-text="Screenshot showing analysis complete status and performance improvement summary.":::
The display shows build time improved from 78.6 seconds to 70.5 seconds (8.1 seconds faster, ~10.3% improvement), with a note that further improvement is possible.
:::image-end:::

After GitHub Copilot completes the request, a summary of the changes and build performance impact is displayed. The build performance summary changes depending on each iteration of the agent.

:::image type="complex" source="./media/build-summary.png" alt-text="Screenshot of build performance summary showing before and after optimization metrics.":::
The summary displays top bottlenecks and quantitative results of the performance improvements.
:::image-end:::

In this case, build time dropped from **110.7s to 34.1s** after enabling precompiled headers for costly includes, delivering a **69% improvement** and **3.2× faster builds** with near-instant incremental rebuilds.

### Additional entry points

The GitHub Copilot build performance for Windows can be accessed through other entry points.

- Button from build menu

  :::image type="complex" source="./media/build-menu-improve.png" alt-text="Visual Studio Build menu with Improve build performance option highlighted.":::
  The menu shows the Improve build performance option under Run Build Insights.
  :::image-end:::

Clicking the Improve build performance button prompts GitHub Copilot chat

  :::image type="complex" source="./media/copilot-improve-prompt.png" alt-text="Copilot chat window with Improve Build Performance prompt.":::
  The window shows GitHub Copilot build performance for Windows ready to assist with optimization.
  :::image-end:::

- Button from solution context menu

  :::image type="complex" source="./media/solution-menu-improve.png" alt-text="Visual Studio solution context menu showing Improve build performance option.":::
  The context menu displays the Improve build performance on Solution option.
  :::image-end:::

Clicking the Improve build performance on Solution button prompts the GitHub Copilot chat

  :::image type="complex" source="./media/copilot-improve-prompt.png" alt-text="Copilot chat window with Improve Build Performance prompt.":::
  The window shows GitHub Copilot build performance for Windows ready to assist with optimization.
  :::image-end:::

- Button from Build Insights view

  :::image type="complex" source="./media/insights-improve-button.png" alt-text="Build Insights diagnostics session view with Improve button highlighted.":::
  The view shows the diagnostics session with the Improve button available for optimization.
  :::image-end:::

Clicking the Improve button prompts the GitHub Copilot chat. This button uses data from the existing build insights trace results and does not trigger a new build insights tool execution until the current proposed changes have been processed.

  :::image type="complex" source="./media/copilot-improve-includes.png" alt-text="Copilot chat window with GitHub Copilot build performance for Windows focusing on includes optimization.":::
  The chat shows a user message focusing on improving build performance of includes.
  :::image-end:::

## See Also

[Build Insights function view](https://learn.microsoft.com/en-us/cpp/build-insights/tutorials/build-insights-function-view?view=msvc-170)

[Build Insights included files view](https://learn.microsoft.com/en-us/cpp/build-insights/tutorials/build-insights-included-files-view?view=msvc-170)

[vcperf and Windows Performance Analyzer](https://learn.microsoft.com/en-us/cpp/build-insights/tutorials/vcperf-and-wpa?view=msvc-170)

[Windows Performance Analyzer basics](https://learn.microsoft.com/en-us/cpp/build-insights/tutorials/wpa-basics?view=msvc-170)
