---
title: "What's new for MSVC"
description: "The new features and fixes in the Microsoft C/C++ compiler and tools (MSVC)."
ms.date: 11/03/2025
ms.service: "visual-cpp"
ms.subservice: "compiler"
ms.custom: intro-whats-new
---

# What's new for MSVC

Version 14.50 brings many updates and fixes to the Microsoft C++ compiler and tools.

- For more information on what's new in all of Visual Studio, see [What's new in Visual Studio](/visualstudio/ide/whats-new-visual-studio).
- For information about version build dates, see [Visual Studio 2022 Release History](/visualstudio/releases/2022/release-history).

## What's new for MSVC version 14.50

*Released November 2025*

| For more information about | See |
|---|---|
| What's new for C++ developers | [Augustin blog TBD](augustin blog) |
| Standard Library (STL) merged C++26 and C++23 features, Language Working Group (CWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog MSVC Build Tools 14.50](https://github.com/microsoft/STL/wiki/Changelog#msvc-build-tools-1450) |
| C++ language updates | [C++ Language Updates in MSVC Build Tools v14.50](https://devblogs.microsoft.com/cppblog/c-language-updates-in-msvc-build-tools-v14-50/) |
| C++ language conformance improvements | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022 17.14](cpp-conformance-improvements.md#improvements_1714) | 

A quick highlight of some of the new features:

- The minimum supported operating systems for the MSVC Build Tools are Windows 10 or Windows Server 2016. 

    With this release, the Build Tools no longer target:
    
    Windows 7 / Windows Server 2008 R2
    Windows 8 / Windows Server 2012
    Windows 8.1 / Windows Server 2012 R2
    
    To build applications using the latest C++ tools, your target platform must be Windows 10 or Windows Server 2016 (or later). These changes allow for better performance, enhanced security, and alignment with the most recent Windows platform capabilities.
- Notices of removals for C++AMP, ARM32 toolchain, and `/DEBUG:FASTLINK` and the deprecation of `/await`:
    The deprecations and removal of C++ feature support impact developers using C++AMP, ARM32-targeting MSVC build tools, and the `/DEBUG:FASTLINK` linker option.
    If you're using `/DEBUG:FASTLINK`, switch to `/DEBUG:FULL` for improved debugging support.
    To target ARM32, continue using the Visual Studio 2022 v143 build tools. For more information, see [Side-by-side Minor Version MSVC Toolsets in Visual Studio 2019](https://devblogs.microsoft.com/cppblog/side-by-side-minor-version-msvc-toolsets-in-visual-studio-2019/).
    
    Moreover, the /await switch is deprecated and will be removed in a future release. Developers are encouraged to use Standard C++ coroutines, available by default in C++20 or later. For projects in earlier language modes, consider using /await:strict to maintain compatibility until the switch is removed.    
 - Better AI code completions for C++. GitHub Copilot uses context from relevant files to improve inline autocomplete for C++. We've updated GitHub Copilot to include other relevant files as context. This reduces hallucinations while offering more relevant and accurate suggestions. It's aligned with the current GitHub Copilot experience for C++ in VS Code.
 - Clang-Tidy code analysis improvements supercharge your C++ code analysis with enhanced configuration options for faster builds and custom workflows. Code analysis has new configuration options. You can now allocate more processors to run code analysis as part of your build, speeding up your development workflow. Plus, you can add custom arguments to the command line used to invoke `clang-tidy`, giving you complete control over your analysis setup. Access these powerful new options from **Project Properties > Code Analysis > Clang-Tidy**. ![Screenshot of Project Properties dialog showing clang-tidy configuration options including processor allocation and custom command line arguments.](./media/clang-tidy-improvements.png)
- Inline post-return values: The Visual Studio debugger now shows the actual return values of functions. This provides real-time visibility into function behavior without stepping into code or setting up watches, making it faster to catch logic issues or unexpected results. ![Screenshot showing inline post-return values displayed in the debugger next to function call."](./media/inline-post-return-value.png)


## Feedback and suggestions

We'd love to hear from you! You can [Report a Problem or Suggest a Feature](/visualstudio/ide/how-to-report-a-problem-with-visual-studio) by using the Send Feedback icon in the upper right-hand corner of either the installer or the Visual Studio IDE, or from **Help** > **Send Feedback**. You can track your issues by using [Visual Studio Developer Community](https://developercommunity.visualstudio.com/), where you add comments or find solutions. You can also get free installation help through our [Live Chat support](https://visualstudio.microsoft.com/vs/support/#talktous).

## Blogs

Take advantage of the insights and recommendations available in the [Microsoft Developer Blogs](https://devblogs.microsoft.com/) site to stay up to date on all new releases. The blogs include deep dive posts on a broad range of features. The [C++ Team Blog](https://devblogs.microsoft.com/cppblog) and the [Visual Studio Blog](https://devblogs.microsoft.com/visualstudio) are of particular interest.