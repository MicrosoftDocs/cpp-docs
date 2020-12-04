---
description: "Learn more about: Makefile Project Properties (Linux C++)"
title: "General Properties (Linux C++ Makefile Project)| Microsoft Docs"
ms.date: "06/07/2019"
ms.assetid: 3dec6853-43f6-412b-9806-9bfad333a204
---
# Makefile Project Properties (Linux C++)

::: moniker range="msvc-140"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

This is a partial list of the properties available in a Linux Makefile project. Many Makefile project properties are identical to the Linux C++ Console Application project properties.

## General

| Property | Description | Choices |
|--|--|--|
| Output Directory | Specifies a relative path to the output file directory; can include environment variables. |
| Intermediate Directory | Specifies a relative path to the intermediate file directory; can include environment variables. |
| Build Log File | Specifies the build log file to write to when build logging is enabled. |
| Configuration Type | Specifies the type of output this configuration generates. | **Dynamic Library (.so)** - Dynamic Library (.so)<br>**Static library (.a)** - Static Library (.a)<br>**Application (.out)** - Application (.out)<br>**Makefile** - Makefile<br> |
| Remote Build Machine | The target machine or device to use for remote build, deploy and debug. |
| Remote Build Root Directory | Specifies a path to a directory on the remote machine or device. |
| Remote Build Project Directory | Specifies a path to a directory on the remote machine or device for the project. |

## Debugging

See [Debugger Properties (Linux C++)](debugging-linux.md)

## Copy Sources

See [Copy Sources Project Properties (Linux C++)](copy-sources-project.md).

## Build Events

### Pre-Build Event

| Property | Description |
|--|--|
| Command Line | Specifies a command line for the pre-build event tool to run. |
| Description | Specifies a description for the pre-build event tool to display. |
| Use In Build | Specifies whether this build event is excluded from the build for the current configuration. |
| Additional files to copy | Specifies additional files to copy to the remote system. Optionally the list can be provided as a local to remote mapping pairs using a syntax like this: fulllocalpath1:=fullremotepath1;fulllocalpath2:=fullremotepath2, where a local file can be copied to the specified remote location on the remote system. |

### Post-Build Event

| Property | Description |
|--|--|
| Command Line | Specifies a command line for the post-build event tool to run. |
| Description | Specifies a description for the post-build event tool to display. |
| Use In Build | Specifies whether this build event is excluded from the build for the current configuration. |
| Additional files to copy | Specifies additional files to copy to the remote system. Optionally the list can be provided as a local to remote mapping pairs using a syntax like this: fulllocalpath1:=fullremotepath1;fulllocalpath2:=fullremotepath2, where a local file can be copied to the specified remote location on the remote system. |

### Remote Pre-Build Event

| Property | Description |
|--|--|
| Command Line | Specifies a command line for the pre-build event tool to run on the remote system. |
| Description | Specifies a description for the pre-build event tool to display. |
| Use In Build | Specifies whether this build event is excluded from the build for the current configuration. |
| Additional files to copy | Specifies additional files to copy from the remote system. Optionally the list can be provided as a remote to local mapping pairs using a syntax like this: fullremotepath1:=fulllocalpath1;fullremotepath2:=fulllocalpath2, where a remote file can be copied to the specified location on the local machine. |

### Remote Post-Build Event

| Property | Description |
|--|--|
| Command Line | Specifies a command line for the post-build event tool to run on the remote system. |
| Description | Specifies a description for the post-build event tool to display. |
| Use In Build | Specifies whether this build event is excluded from the build for the current configuration. |
| Additional files to copy | Specifies additional files to copy from the remote system. Optionally the list can be provided as a remote to local mapping pairs using a syntax like this: fullremotepath1:=fulllocalpath1;fullremotepath2:=fulllocalpath2, where a remote file can be copied to the specified location on the local machine. |

## C/C++

### IntelliSense

The IntelliSense properties can be set at the project or file level to provide clues to the IntelliSense engine. They do not affect compilation.

| Property | Description |
|--|--|
| Include Search Path | Specifies the include search path for resolving included files. |
| Forced Includes | Specifies the files that are forced included. |
| Preprocessor Definitions | Specifies the preprocessor defines used by the source files. |
| Undefine Preprocessor Definitions | Specifies one or more preprocessor undefines.     (/U[macro]) |
| Additional Options | Specifies additional compiler switches to be used by IntelliSense when parsing C++ files. |

### Build

| Property | Description |
|--|--|
| Build Command Line | Specifies the command line to run for the 'Build' command. |
| Rebuild All Command Line | Specifies the command line to run for the 'Rebuild All' command. |
| Clean Command Line | Specifies the command line to run for the 'Clean' command. |

### Remote Build

| Property | Description |
|--|--|
| Build Command Line | Specifies the command line to run for the 'Build' command. This is executed on the remote system. |
| Rebuild All Command Line | Specifies the command line to run for the 'Rebuild All' command. This is executed on the remote system. |
| Clean Command Line | Specifies the command line to run for the 'Clean' command. This is executed on the remote system. |
| Outputs | Specifies the outputs generated by the remote build on the remote system. |

::: moniker-end
