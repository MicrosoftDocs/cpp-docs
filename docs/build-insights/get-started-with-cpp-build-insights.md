---
title: "Get started with C++ Build Insights"
description: "A high-level overview of C++ Build Insights."
ms.date: "11/03/2019"
helpviewer_keywords: ["C++ Build Insights", "throughput analysis", "build time analysis", "vcperf.exe"]
ms.custom: intro-get-started
---
# Get started with C++ Build Insights

::: moniker range="<=msvc-150"

The C++ Build Insights tools are available in Visual Studio 2019 and later. To see the documentation for that version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-160"

C++ Build Insights is a collection of tools that provides increased visibility into the Microsoft Visual C++ (MSVC) tool chain. The tools collect data about your C++ builds, and present it in a format that can help you answer common questions, like:

- Are my builds sufficiently parallelized?
- What should I include in my pre-compiled header (PCH)?
- Is there a specific bottleneck I should focus on to increase my build speeds?

The main components of this technology are:

- *vcperf.exe*, a command-line utility that you can use to collect traces for your builds,
- a Windows Performance Analyzer (WPA) extension that allows you to view build traces in WPA, and
- the C++ Build Insights SDK, a software development kit for creating your own tools that consume C++ Build Insights data.

## Documentation sections

[Tutorial: vcperf and Windows Performance Analyzer](tutorials/vcperf-and-wpa.md)\
Learn how to collect build traces for your C++ projects and how to view them in WPA.

[Tutorial: Windows Performance Basics](tutorials/wpa-basics.md)\
Discover useful WPA tips for analyzing your build traces.

[C++ Build Insights SDK](reference/sdk/overview.md)\
An overview of the C++ Build Insights SDK.

## Articles

Read these articles from the official C++ team blog for more information on C++ Build Insights:

[Introducing C++ Build Insights](https://devblogs.microsoft.com/cppblog/introducing-c-build-insights/)

[Analyze your builds programmatically with the C++ Build Insights SDK](https://devblogs.microsoft.com/cppblog/analyze-your-builds-programmatically-with-the-c-build-insights-sdk/)

[Finding build bottlenecks with C++ Build Insights](https://devblogs.microsoft.com/cppblog/finding-build-bottlenecks-with-cpp-build-insights/)

[Faster builds with PCH suggestions from C++ Build Insights](https://devblogs.microsoft.com/cppblog/faster-builds-with-pch-suggestions-from-c-build-insights/)

[Profiling template metaprograms with C++ Build Insights](https://devblogs.microsoft.com/cppblog/profiling-template-metaprograms-with-cpp-build-insights/)

[Improving code generation time with C++ Build Insights](https://devblogs.microsoft.com/cppblog/improving-code-generation-time-with-cpp-build-insights/)

[Introducing vcperf /timetrace for C++ build time analysis](https://devblogs.microsoft.com/cppblog/introducing-vcperf-timetrace-for-cpp-build-time-analysis/)

[Faster C++ builds, simplified: a new metric for time](https://devblogs.microsoft.com/cppblog/faster-cpp-builds-simplified-a-new-metric-for-time/)

::: moniker-end
