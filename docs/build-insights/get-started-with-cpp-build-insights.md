---
title: "Get started with C++ Build Insights"
description: "A high-level overview of C++ Build Insights."
ms.date: "11/03/2019"
helpviewer_keywords: ["C++ Build Insights", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Get started with C++ Build Insights

::: moniker range="<=vs-2017"

The C++ Build Insights tools are available in Visual Studio 2019. To see the documentation for that version, set the Visual Studio version selector control for this article to Visual Studio 2019.

::: moniker-end
::: moniker range="vs-2019"

C++ Build Insights is a collection of tools that provides increased visibility into the Microsoft Visual C++ (MSVC) tool chain. The tools collect data about your C++ builds, and present it in a format that can help you answer common questions, like:

- Are my builds sufficiently parallelized?
- What should I include in my pre-compiled header (PCH)?
- Is there a specific bottleneck I should focus on to increase my build speeds?

The main components of this technology are:

- *vcperf.exe*, a command-line utility that you can use to collect traces for your builds,
- a Windows Performance Analyzer (WPA) extension that allows you to view build traces in WPA, and
- the C++ Build Insights SDK, a software development kit for creating your own tools that consume C++ Build Insights data.

Click on the links below to quickly get started with these components:

[Tutorial: vcperf and Windows Performance Analyzer](tutorials/vcperf-and-wpa.md)\
Learn how to collect build traces for your C++ projects and how to view them in WPA.

[Tutorial: Windows Performance Basics](tutorials/wpa-basics.md)\
Discover useful WPA tips for analyzing your build traces.

[C++ Build Insights SDK](reference/sdk/overview.md)\
An overview of the C++ Build Insights SDK.

::: moniker-end
