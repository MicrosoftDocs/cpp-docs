---
title: "Tutorial: Windows Performance Analyzer basics"
description: "Tutorial on how to complete basic operations in Windows Performance Analyzer."
ms.date: "11/03/2019"
helpviewer_keywords: ["C++ Build Insights", "throughput analysis", "build time analysis", "vcperf.exe"]
---
# Tutorial: Windows Performance Analyzer basics

::: moniker range="<=msvc-150"

The C++ Build Insights tools are available in Visual Studio 2019 and later. To see the documentation for this version, set the Visual Studio **Version** selector control for this article to Visual Studio 2019 or later. It's found at the top of the table of contents on this page.

::: moniker-end
::: moniker range=">=msvc-160"

Using C++ Build Insights effectively requires some knowledge of Windows Performance Analyzer (WPA). This article helps you become familiar with common WPA operations. For more information on how to use WPA, see the [Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer) documentation.

## Change the view mode

WPA offers two basic view modes for you to explore your traces:

- graph mode, and
- table mode.

You can switch between them by using the view mode icons in the top of the view pane:

![Switching between graph mode and table mode.](media/wpa-switching-view-mode.gif)

## Select presets

Most C++ Build Insights WPA views have multiple presets for you to choose from. You can select the preset you want by using the drop-down menu in the top of the view pane:

![Selecting a preset.](media/wpa-presets.png)

## Zoom in and out

Some build traces are so large it's hard to make out the details. To zoom in on an area that interests you, right-click on the graph and select **Zoom**. You can always go back to the previous setting by choosing **Undo Zoom**. This image shows an example of using a selection and the **Zoom** command to zoom in on a section of the graph:

![Short video showing zooming in on a graph.](media/wpa-zooming.gif)

## Group by different columns

You can customize the way your trace is displayed. Click on the gear icon at the top of a view pane and rearrange the columns in the Build Explorer View Editor. The columns found above the yellow line in this dialog are the ones your data rows are grouped by. The column right above the yellow line is special: in the graph view, it's displayed on the colored bars.

This image shows an example bar graph of a link invocation. We use the gear icon to open the Build Explorer View Editor dialog. Then we drag the Component and Name column entries above the yellow line. The configuration is changed to increase the level of detail, and to see what actually happened inside the linker:

![Short video showing showing how you can group by different columns.](media/wpa-grouping.gif)

## See also

[Tutorial: vcperf and Windows Performance Analyzer](vcperf-and-wpa.md)\
[Reference: vcperf commands](../reference/vcperf-commands.md)\
[Reference: Windows Performance Analyzer views](../reference/wpa-views.md)\
[Windows Performance Analyzer](/windows-hardware/test/wpt/windows-performance-analyzer)

::: moniker-end
