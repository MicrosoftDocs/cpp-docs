---
title: "Microsoft C++ porting and upgrading guide"
description: "Your comprehensive hub for upgrading and modernizing Microsoft C++ code to the latest version of Visual Studio. Find tools, guides, success stories, and best practices."
ms.date: 11/06/2025
ms.topic: "overview"
ms.custom: intro-hub
author: tylermsft
ms.author: twhitney
---

# Microsoft C++ porting and upgrading guide

**Transform your legacy C++ applications with confidence.** Whether you're upgrading from Visual Studio 2008 or modernizing to take advantage of the latest C++ features, this comprehensive guide provides everything you need for a successful upgrade journey.

:::row:::
:::column span="":::
:::column-end:::
:::column span="2":::
![C++ logo with an upward arrow and abstract code on a blue background suggesting improvements from upgrading.](media/upgrade-cpp.png)
:::column-end:::
:::column span="":::
:::column-end:::
:::row-end:::

:::row:::
:::column span="2":::
## 🚀 Quick start

**Most projects upgrade seamlessly:** For projects created in Visual Studio 2010-2017, simply open them in the latest Visual Studio. For Visual Studio 2008 or earlier projects, use our [two-step upgrade process](upgrading-projects-from-earlier-versions-of-visual-cpp.md).

**Binary compatibility:** Visual Studio 2015, 2017, 2019, 2022, and 2026 build tools are binary-compatible, so you can upgrade without rebuilding library dependencies. [Learn more](binary-compat-2015-2017.md).

**CMake projects:** For projects using open-source libraries or targeting multiple platforms, consider migrating to CMake. [Learn more](../build/cmake-projects-in-visual-studio.md).
:::column-end:::
:::column span="2":::
## 💡 Why upgrade?

- **🏃‍♂️ Better Performance:** Faster execution and build times
- **🔒 Enhanced Security:** Address sanitizers and security features  
- **📐 Standards Compliance:** Modern C++ features and conformance
- **🛠️ Better Tools:** Advanced debugging and analysis capabilities
:::column-end:::
:::row-end:::

## 🎯 Choose your upgrade path

:::row:::
:::column:::
### 📋 Assess & plan
**Evaluate your current codebase and plan your strategy**

- [🔍 Overview of potential upgrade issues](overview-of-potential-upgrade-issues-visual-cpp.md)
- [🔗 C++ binary compatibility between versions](binary-compat-2015-2017.md)  
- [📜 Visual C++ change history 2003-2015](visual-cpp-change-history-2003-2015.md)
- [⚠️ Features deprecated in Visual Studio](features-deprecated-in-visual-studio.md)
- [🎯 Use native multi-targeting for old projects](use-native-multi-targeting.md)
:::column-end:::
:::column:::
### 🔧 Upgrade & modernize  
**Step-by-step guides and tools for upgrading**

- [⬆️ Upgrade projects from earlier versions](upgrading-projects-from-earlier-versions-of-visual-cpp.md)
- [🛠️ IDE tools for upgrading C++ code](ide-tools-for-upgrading-code.md)
- [🔄 Upgrade to Universal CRT](upgrade-your-code-to-the-universal-crt.md)
- [🔧 Update WINVER and _WIN32_WINNT](modifying-winver-and-win32-winnt.md)
- [🔗 Fix dependencies on library internals](fix-your-dependencies-on-library-internals.md)
- [📊 Floating-point migration issues](floating-point-migration-issues.md)
:::column-end:::
:::row-end:::

:::row:::
:::column:::
### 🌐 Platform migration
**Move your applications to modern platforms**

- [📱 Port to Universal Windows Platform](porting-to-the-universal-windows-platform-cpp.md)
- [🔗 Use existing C++ code in UWP apps](how-to-use-existing-cpp-code-in-a-universal-windows-platform-app.md)
- [🐧 Visual C++ for UNIX users](introduction-to-visual-cpp-for-unix-users.md)
- [🪟 Running Linux programs on Windows](porting-from-unix-to-win32.md)
- [📦 Port third-party libraries](porting-third-party-libraries.md)
:::column-end:::
:::column:::
### ✨ Success stories & examples
**Learn from real-world upgrade experiences**

- [📖 Examples and case studies overview](porting-and-upgrading-examples-and-case-studies.md)
- [📝 Case study: MFC Scribble upgrade](porting-guide-mfc-scribble.md)
- [🕵️ Case study: COM Spy upgrade](porting-guide-com-spy.md)
- [🔍 Case study: Spy++ upgrade](porting-guide-spy-increment.md)
- [🏗️ VCBuild vs. MSBuild migration](build-system-changes.md)
:::column-end:::
:::row-end:::

[📚 Read more case studies](porting-and-upgrading-examples-and-case-studies.md)

## 🛠️ Upgrade benefits

:::row:::
:::column span="2":::
### Performance & optimization
- **Faster execution** with improved compiler optimizations
- **Reduced build times** through compiler and linker improvements  
- **Better memory usage** with modern runtime optimizations
:::column-end:::
:::column span="2":::
### Security & reliability
- **Enhanced security** with address sanitizers and [guard checking](../build/reference/guard-enable-guard-checks.md)
- **Secure runtime libraries** with improved [CRT security features](../c-runtime-library/security-features-in-the-crt.md))
- **Better error detection** with static analysis tools
:::column-end:::
:::row-end:::

:::row:::
:::column span="2":::
### Developer experience
- **Modern IDE features** with IntelliSense improvements
- **Advanced debugging** with better visualizers and diagnostics
- **Code analysis** with Core Guidelines checkers and Clang-Tidy
:::column-end:::
:::column span="2":::
### Standards & compatibility
- **Better C++ standards conformance** with [`/permissive-`](../build/reference/permissive-standards-conformance.md) mode
- **Modern preprocessor** for improved code conformance. [Learn more](../preprocessor/preprocessor-experimental-overview.md)
- **Cross-platform support** with CMake integration
:::column-end:::
:::row-end:::

## 🤔 Multitargeting vs. upgrading

**Not ready for a full upgrade?** You can still use the latest Visual Studio with older build tools and libraries:

- ✅ **Modern static analysis tools** including C++ Core Guidelines checkers and Clang-Tidy
- ✅ **Automatic code formatting** to improve legacy code readability  
- ✅ **Latest IDE features** while maintaining compatibility

[Learn about native multi-targeting →](use-native-multi-targeting.md)

## 🚀 Ready to start?

1. **📊 Assess your current project** with our [upgrade issues overview](overview-of-potential-upgrade-issues-visual-cpp.md)
2. **🔄 Follow our step-by-step guide** to [upgrade from earlier versions](upgrading-projects-from-earlier-versions-of-visual-cpp.md)  
3. **🛠️ Use our IDE tools** to [streamline the upgrade process](ide-tools-for-upgrading-code.md)
4. **📖 Learn from others** with our [real-world case studies](porting-and-upgrading-examples-and-case-studies.md)

**Questions?** Join the conversation in [Microsoft Learn Q&A](/answers/topics/c%2B%2B.html) or check out the [C++ Team Blog](https://devblogs.microsoft.com/cppblog/) for the latest updates.

## See also

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)\
[What's new for the C++ compiler in Visual Studio](../overview/what-s-new-for-visual-cpp-in-visual-studio.md)\
[C++ conformance improvements in Visual Studio](../overview/cpp-conformance-improvements.md)