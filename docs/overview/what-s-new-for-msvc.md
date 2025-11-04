---
title: "What's new for MSVC"
description: "The new features and fixes in the Microsoft C/C++ compiler and tools (MSVC)."
ms.date: 11/03/2025
ms.service: "visual-cpp"
ms.subservice: "cpp-lang"
ms.custom: intro-whats-new
---

# What's new for MSVC

Version 14.50 brings many updates and fixes to the Microsoft C++ compiler and tools.

- For more information on what's new in all of Visual Studio, see [What's new in Visual Studio](/visualstudio/ide/whats-new-visual-studio).

## What's new for MSVC Build Tools version 14.50

* Introduced in Visual Studio 2026 version 18.0 Released November 2025.*

| For detailed information about | See |
|---|---|
| What's new for C++ developers | [What’s New for C++ Developers in Visual Studio 2026 version 18.0](augustin blog TBD) |
| Standard Library (STL) merged C++26 and C++23 features, Language Working Group (CWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog MSVC Build Tools 14.50](https://github.com/microsoft/STL/wiki/Changelog#msvc-build-tools-1450) |
| C++ language updates | [C++ Language Updates in MSVC Build Tools v14.50](https://devblogs.microsoft.com/cppblog/c-language-updates-in-msvc-build-tools-v14-50/) |
| C++ language conformance improvements | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022 17.14](cpp-conformance-improvements.md#improvements_1714) | 

A quick highlight of some of the new features:

- The minimum supported operating systems for the MSVC Build Tools are Windows 10 or Windows Server 2016. 
    - VS 2026 18.0 and later, MSVC Build Tools 14.50  no longer support targeting Windows 7/8/8.1 or Windows Server 2008 R2/2012/2012 R2, which have stopped receiving security updates.

    With this release, the Build Tools no longer target:
    
    - Windows 7 / Windows Server 2008 R2
    - Windows 8 / Windows Server 2012
    - Windows 8.1 / Windows Server 2012 R2
    
    To build applications using the latest C++ tools, your target platform must be Windows 10 or Windows Server 2016 (or later). These changes allow for better performance, enhanced security, and alignment with the most recent Windows platform capabilities.

- C++20 is the default for new Console App, Windows Desktop Application, Dynamic-Link Library, and Static Library C++ projects. 
- Easily set debugger command line arguments for any C++ project using the toolbar for `.vcxproj`, CMake, and Unreal Engine projects. This feature is no longer tied to the Game Development with C++ workload, and is available to all C++ developers without needing to install any additional workloads or components. For more information, see [Pass command-line arguments](/visualstudio/debugger/getting-started-with-the-debugger-cpp?view=visualstudio).
- C++ Standard Library
    - <regex> addressed several issues, enhancing both reliability and speed. [LWG-2503](https://cplusplus.github.io/LWG/issue2503) multiline option should be added to `syntax_option_type`. This is a `regex` behavioral change. By default, `_REGEX_LEGACY_MULTILINE_MODE` is 0, which requests Standard behavior. Set `_REGEX_LEGACY_MULTILINE_MODE` to 1 to request legacy behavior. For more information, see [STL Changelog](https://github.com/microsoft/STL/wiki/Changelog#msvc-build-tools-1450-insiders).
- Generate preprocessed output for any C++ file. In Visual Studio, right-click a C++ file to instantly generate its preprocessed output, making it easy to debug macros and includes, and see errors immediately. ![Screenshot showing the right-click context menu for a C++ file with the Preprocess option highlighted.](./media/cpp-preprocess-menu-entry.png) 
- In the Visual Studio installer, the C++ Linux workload is renamed to 'Linux, Mac, and embedded development with C++'.
- The following have been removed: C++AMP, ARM32 toolchain, and `/DEBUG:FASTLINK`.
    - If you use `/DEBUG:FASTLINK`, switch to `/DEBUG:FULL` for improved debugging support.
    - To target ARM32, continue using the Visual Studio 2022 v143 build tools. For more information, see [Side-by-side Minor Version MSVC Toolsets in Visual Studio 2019](https://devblogs.microsoft.com/cppblog/side-by-side-minor-version-msvc-toolsets-in-visual-studio-2019/).
- The `/await` switch is deprecated and will be removed in a future release. Use Standard C++ coroutines, available by default in C++20 or later. For projects in earlier language modes, consider using `/await:strict` to maintain compatibility until the switch is removed.    
- Better AI code completions for C++. GitHub Copilot uses context from relevant files to improve inline autocomplete for C++. We've updated GitHub Copilot to include other relevant files as context. This reduces hallucinations while offering more relevant and accurate suggestions. It's aligned with the current GitHub Copilot experience for C++ in VS Code.
- Clang-Tidy code analysis improvements supercharge your C++ code analysis with enhanced configuration options for faster builds and custom workflows. Code analysis has new configuration options: You can now allocate more processors to run code analysis as part of your build, speeding up your development workflow. Plus, you can add custom arguments to the command line used to invoke `clang-tidy`, giving you complete control over your analysis setup. Access these powerful new options from **Project Properties** > **Code Analysis** > **Clang-Tidy**: ![Screenshot of Project Properties dialog showing clang-tidy configuration options including processor allocation and custom command line arguments](./media/clang-tidy-improvements.png).
- Inline post-return values: The Visual Studio debugger now shows the actual return values of functions. This provides real-time visibility into function behavior without stepping into code or setting up watches, making it faster to catch logic issues or unexpected results. ![Screenshot showing inline post-return values displayed in the debugger next to function call."](./media/inline-post-return-value.png)


## Feedback and suggestions

We'd love to hear from you! You can [Report a Problem or Suggest a Feature](/visualstudio/ide/how-to-report-a-problem-with-visual-studio) by using the Send Feedback icon in the upper right-hand corner of either the installer or the Visual Studio IDE, or from **Help** > **Send Feedback**. You can track your issues by using [Visual Studio Developer Community](https://developercommunity.visualstudio.com/), where you add comments or find solutions. You can also get free installation help through our [Live Chat support](https://visualstudio.microsoft.com/vs/support/#talktous).

## Blogs

Take advantage of the insights and recommendations available in the [Microsoft Developer Blogs](https://devblogs.microsoft.com/) site to stay up to date on all new releases. The blogs include deep dive posts on a broad range of features. The [C++ Team Blog](https://devblogs.microsoft.com/cppblog) and the [Visual Studio Blog](https://devblogs.microsoft.com/visualstudio) are of particular interest.