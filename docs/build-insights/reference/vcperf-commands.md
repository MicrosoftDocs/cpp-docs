---
title: "Reference: vcperf commands"
description: "Reference for the command-line utility vcperf.exe."
ms.date: "11/03/2019"
helpviewer_keywords: ["C++ Build Insights", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Reference: vcperf commands

::: moniker range="<=vs-2017"

The C++ Build Insights tools are available in Visual Studio 2019. To see the documentation for that version, set the Visual Studio version selector control for this article to Visual Studio 2019.

::: moniker-end
::: moniker range="vs-2019"

This article lists and describes the commands available in *vcperf.exe*, and how to use them.

## Commands to start and stop traces

*IMPORTANT: the following commands all require administrative privileges.*

| Option           | Arguments and description |
|------------------|---------------------------|
| `/start`         | `[/nocpusampling]` `<sessionName>` |
|                  | Tells *vcperf.exe* to start a trace under the given session name. There can only be one active session at a time on a given machine. <br/><br/> If the `/nocpusampling` option is specified, *vcperf.exe* doesn't collect CPU samples. It prevents the use of the CPU Usage (Sampled) view in Windows Performance Analyzer, but makes the collected traces smaller. <br/><br/> Once tracing is started, *vcperf.exe* returns immediately. Events are collected system-wide for all processes running on the machine. That means that you don't need to build your project from the same command prompt as the one you used to run *vcperf.exe*. For example, you can build your project from Visual Studio. |
| `/stop`          | `<sessionName>` `<outputFile.etl>` |
|                  | Stops the trace identified by the given session name. Runs a post-processing step on the trace to generate a file viewable in Windows Performance Analyzer (WPA). For the best viewing experience, use a version of WPA that includes the C++ Build Insights add-in. For more information, see [Get started with C++ Build Insights](/cpp/build-insights/get-started-with-cpp-build-insights). The `<outputFile.etl>` parameter specifies where to save the output file. |
| `/stopnoanalyze` | `<sessionName>` `<rawOutputFile.etl>` |
|                  | Stops the trace identified by the given session name and writes the raw, unprocessed data in the specified output file. The resulting file isn't meant to be viewed in WPA. <br/><br/> The post-processing step involved in the `/stop` command can sometimes be lengthy. You can use the `/stopnoanalyze` command to delay this post-processing step. Use the `/analyze` command when you're ready to produce a file viewable in Windows Performance Analyzer. |

## Miscellaneous commands

| Option     | Arguments and description |
|------------|---------------------------|
| `/analyze` | `<rawInputFile.etl> <outputFile.etl>` |
|            | Accepts a raw trace file produced by the `/stopnoanalyze` command. Runs a post-processing step on this trace to generate a file viewable in Windows Performance Analyzer. For the best viewing experience, use a version of WPA that includes the C++ Build Insights add-in. For more information, see [Get started with C++ Build Insights](/cpp/build-insights/get-started-with-cpp-build-insights). |

## See also

[Get started with C++ Build Insights](/cpp/build-insights/get-started-with-cpp-build-insights)\
[Tutorial: Windows Performance Analyzer basics](/cpp/build-insights/tutorials/wpa-basics)\
[Reference: Windows Performance Analyzer views](wpa-views.md)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)

::: moniker-end
