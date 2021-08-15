---
description: "Learn more about: Build Event Properties (Linux C++)"
title: "Remote Build Events (Linux C++)"
ms.date: "06/07/2019"
ms.assetid: 165d3690-5bd8-4b0b-bc66-8b699d85a61b
---
# Build Event Properties (Linux C++)

::: moniker range="msvc-140"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

## Pre-Build Event

| Property | Description |
|--|--|
| Command Line | Specifies a command line for the pre-build event tool to run. |
| Description | Specifies a description for the pre-build event tool to display. |
| Use In Build | Specifies whether this build event is excluded from the build for the current configuration. |
| Additional files to copy | Specifies additional files to copy to the remote system. Optionally specify local to remote mapping pairs using a syntax like this: fulllocalpath1:=fullremotepath1;fulllocalpath2:=fullremotepath2, where a local file can be copied to the specified remote location on the remote system. |

## Pre-Link Event

| Property | Description |
|--|--|
| Command Line | Specifies a command line for the pre-link event tool to run. |
| Description | Specifies a description for the pre-link event tool to display. |
| Use In Build | Specifies whether this build event is excluded from the build for the current configuration. |
| Additional files to copy | Specifies additional files to copy to the remote system. Optionally specify local to remote mapping pairs using a syntax like this: fulllocalpath1:=fullremotepath1;fulllocalpath2:=fullremotepath2, where a local file can be copied to the specified remote location on the remote system. |

## Post-Build Event

| Property | Description |
|--|--|
| Command Line | Specifies a command line for the post-build event tool to run. |
| Description | Specifies a description for the post-build event tool to display. |
| Use In Build | Specifies whether this build event is excluded from the build for the current configuration. |
| Additional files to copy | Specifies additional files to copy to the remote system. Optionally specify local to remote mapping pairs using a syntax like this: fulllocalpath1:=fullremotepath1;fulllocalpath2:=fullremotepath2, where a local file can be copied to the specified remote location on the remote system. |

## Remote Pre-Build Event

| Property | Description |
|--|--|
| Command Line | Specifies a command line for the pre-build event tool to run on the remote system. |
| Description | Specifies a description for the pre-build event tool to display. |
| Use In Build | Specifies whether this build event is excluded from the build for the current configuration. |
| Additional files to copy | Specifies additional files to copy from the remote system. Optionally specify remote to local mapping pairs using a syntax like this: fullremotepath1:=fulllocalpath1;fullremotepath2:=fulllocalpath2, where a remote file can be copied to the specified location on the local machine. |

## Remote Pre-Link Event

| Property | Description |
|--|--|
| Command Line | Specifies a command line for the pre-link event tool to run on the remote system. |
| Description | Specifies a description for the pre-link event tool to display. |
| Use In Build | Specifies whether this build event is excluded from the build for the current configuration. |
| Additional files to copy | Specifies additional files to copy from the remote system. Optionally specify remote to local mapping pairs using a syntax like this: fullremotepath1:=fulllocalpath1;fullremotepath2:=fulllocalpath2, where a remote file can be copied to the specified location on the local machine. |

## Remote Post-Build Event

| Property | Description |
|--|--|
| Command Line | Specifies a command line for the post-build event tool to run on the remote system. |
| Description | Specifies a description for the post-build event tool to display. |
| Use In Build | Specifies whether this build event is excluded from the build for the current configuration. |
| Additional files to copy | Specifies additional files to copy from the remote system. Optionally specify remote to local mapping pairs using a syntax like this: fullremotepath1:=fulllocalpath1;fullremotepath2:=fulllocalpath2, where a remote file can be copied to the specified location on the local machine. |

::: moniker-end
