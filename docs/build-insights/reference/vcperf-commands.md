---
title: "Reference: vcperf commands"
description: "Reference for the command-line utility vcperf.exe."
ms.date: "11/11/2026"
helpviewer_keywords: ["C++ Build Insights", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Reference: vcperf commands

::: moniker range="<=msvc-150"

The C++ Build Insights tools are available starting in Visual Studio 2019 and later. To see the documentation for that version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-160"

This article lists and describes the commands available in *`vcperf.exe`*, and how to use them.

## Commands to start and stop traces

> [!IMPORTANT]
> Unless you specify `/noadmin`, the following commands require administrative privileges.

| Option           | Arguments and description |
|------------------|---------------------------|
| `/start`         | [`/noadmin`] [`/nocpusampling`] [`/enableSilos`] [`/level1` \| `/level2` \| `/level3`] `<sessionName>` |
|                  | Starts a trace under the given session name. <br/><br/> The `/noadmin` option runs *vcperf.exe* without admin privileges, and it ignores the `/nocpusampling` option. When you run vcperf without admin privileges, there can be more than one active session on a given machine. <br/><br/> The `/nocpusampling` option specifies *vcperf.exe* doesn't collect CPU samples. It prevents the use of the CPU Usage (Sampled) view in Windows Performance Analyzer, but makes the collected traces smaller. <br/><br/> The `/level1`, `/level2`, or `/level3` options specify which MSVC events to collect, in increasing level of information. Level 3 includes all events. Level 2 includes all events except template instantiation events. Level 1 includes all events except template instantiation, function, and file events. If unspecified, `/level2` is selected by default. To collect template instantiation events for analysis with `/templates`, use `/level3`. <br/><br/> Once *vcperf.exe* starts the trace, it returns immediately. The trace collects events system-wide for processes. That means that you don't need to build your project in the same command prompt window as the one you use to run *vcperf.exe*. For example, you can build your project in Visual Studio. |
|                  | The `/enableSilos` option, when available, enables a host tracing session to collect MSVC events from Windows server silos, including process-isolated Windows containers (not containers using Hyper-V isolation). Silo collection is disabled by default. It affects the MSVC provider only and doesn't change system-event or CPU-sampling settings. |
| `/stop`          | (1) [`/templates`] `<sessionName> <outputFile.etl>` <br/> (2) [`/templates`] `<sessionName> /timetrace <outputFile.json>` |
|                  | Stops the trace identified by the given session name. Runs a post-processing step on the trace to generate a file specified by the `<outputFile>` parameter. <br/><br/> The `/templates` option includes template instantiation events in the file if the trace was started with `/level3`. <br/><br/> (1) Generates a file viewable in Windows Performance Analyzer (WPA). The output file requires a `.etl` extension.<br/>(2) Generates a file viewable in the Microsoft Edge trace viewer (`edge://tracing`). The output file requires a `.json` extension. |
| `/stopnoanalyze` | `<sessionName> <rawOutputFile.etl>` |
|                  | Stops the trace identified by the given session name and writes the raw, unprocessed data in the specified output file. The resulting file isn't meant for viewing in WPA. <br/><br/> The post-processing step involved in the `/stop` command can sometimes be lengthy. You can use the `/stopnoanalyze` command to delay this post-processing step. Use the `/analyze` command when you're ready to produce a file viewable in Windows Performance Analyzer or the Microsoft Edge trace viewer. |

## Miscellaneous commands

| Option              | Arguments and description |
|---------------------|---------------------------|
| `/analyze`          | (1) [`/templates`] `<rawInputFile.etl> <outputFile.etl>` <br/>(2) [`/templates`] `<rawInputFile.etl> /timetrace <outputFile.json>` |
|                     | Accepts a raw trace file produced by the `/stopnoanalyze` command. Runs a post-processing step on this trace to generate the file specified by the `<outputFile>` parameter. <br/><br/> The `/templates` option includes template instantiation events in the file if the trace was started with `/level3`. <br/><br/> (1) Generates a file viewable in Windows Performance Analyzer (WPA). The output file requires a `.etl` extension. <br/><br/> (2) Generates a file viewable in the Microsoft Edge trace viewer (`edge://tracing`). The output file requires a `.json` extension. |
| `/grantusercontrol` | No arguments. |
|                     | Grants the current user permission to start and stop vcperf tracing sessions that use `/noadmin` without elevation. Run `vcperf /grantusercontrol` from an elevated command prompt once per user on each machine. CPU sampling still requires an elevated trace without `/noadmin`. The command was added in [vcperf release 2.5.25121101](https://github.com/microsoft/vcperf/releases/tag/2.5.25121101). |

## Trace without administrator privileges

In an elevated command prompt, grant the current user permission to control tracing sessions:

```cmd
vcperf /grantusercontrol
```

In a command prompt without elevation, start a trace:

```cmd
vcperf /start /noadmin MySession
```

Build your project, and then stop the trace from a command prompt without elevation:

```cmd
vcperf /stop MySession output.etl
```

## See also

[Get started with C++ Build Insights](../get-started-with-cpp-build-insights.md)\
[Tutorial: Windows Performance Analyzer basics](../tutorials/wpa-basics.md)\
[Reference: Windows Performance Analyzer views](wpa-views.md)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)

::: moniker-end
