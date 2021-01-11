---
description: "Learn more about: Specifying build events"
title: "Specifying Build Events"
ms.date: "12/28/2017"
f1_keywords: ["VC.Project.IVCEventTool.CommandLine", "VC.Project.IVCEventTool.ExcludedFromBuild", "VC.Project.IVCEventTool.Description"]
helpviewer_keywords: ["Pre-Link event", "build events [C++], specifying", "custom build steps [C++], build events", "builds [C++], events", "events [C++], build", "builds [C++], customizing C++", "build events [C++]", "post-build events"]
ms.assetid: 788a6c18-2dbe-4a49-8cd6-86c1ad7a95cc
---
# Specifying build events

You can use build events to specify commands that run before the build starts, before the link process, or after the build finishes.

Build events are executed only if the build successfully reaches those points in the build process. If an error occurs in the build, the *post-build* event does not occur; if the error occurs before the linking phase, neither the *pre-link* nor the *post-build* event occurs. Additionally, if no files need to be linked, the *pre-link* event does not occur. The *pre-link* event is also not available in projects that do not contain a link step.

If no files need to be built, no build events occur.

For general information on build events, see [Understanding Custom Build Steps and Build Events](understanding-custom-build-steps-and-build-events.md).

### To specify a build event

1. In **Solution Explorer**, select the project for which you want to specify the build event.

1. Open the project's **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](working-with-project-properties.md).

1. In the **Build Events** folder, select a build event property page.

1. Specify the properties associated with the build event:

   - In **Command Line**, specify a command as if you were specifying it at the command prompt. Specify a valid command or batch file, and any required input or output files. Specify the **call** batch command before the name of a batch file to guarantee that all subsequent commands are executed.

      Multiple input and output files can be specified symbolically with MSBuild macros. For information on how to specify the location of files, or the names of sets of files, see [Common macros for build commands and properties](reference/common-macros-for-build-commands-and-properties.md).

      Because the '%' character is reserved by MSBuild, if you specify an environment variable replace each **%** escape character with the **%25** hexadecimal escape sequence. For example, replace **%WINDIR%** with **%25WINDIR%25**. MSBuild replaces each **%25** sequence with the **%** character before it accesses the environment variable.

   - In **Description**, type a description for this event. The description is printed to the **Output** window when this event occurs.

   - In **Excluded From Build**, specify **Yes** if you do not want the event to run.

## See also

[Understanding Custom Build Steps and Build Events](understanding-custom-build-steps-and-build-events.md)<br>
[Common macros for build commands and properties](reference/common-macros-for-build-commands-and-properties.md)<br>
[Troubleshooting Build Customizations](troubleshooting-build-customizations.md)
