---
title: "Troubleshoot Visual C++ Redistributable installation issues"
description: "Provide steps to diagnose and resolve issues with installing the Visual C++ Redistributable (vcredist)"
author: vicroms
ms.author: viromer
ms.date: 01/21/2025
ms.topic: troubleshooting-general
helpviewer_keywords: [ "redist","vcredist", "Visual [C++] redistributable" ]
---
# Troubleshoot Visual C++ Redistributable installation issues

This guide is for users experiencing issues while installing the Visual C++
Runtime components using the Visual C++ Redistributable installer or the
Visual Studio Installer.

If you're experiencing such issues, we recommend that you first attempt
installing the [latest version of the Visual C++ 
Redistributable](latest-supported-vc-redist.md).

## Collect failure logs

The first step to diagnose an issue with the Visual C++
Redistributable (vcredist) installer is to collect its failure logs.

1) Download the [Microsoft Visual Studio and .NET Log Collection
   Tool](<https://aka.ms/vscollect>).
2) Run `Collect.exe`
3) Extract the contents of `%TEMP%/vscollect.zip`

Once you extract `vscollect.zip`, the vcredist logs are located inside the
`Temp` folder. The relevant log files will be prefixed with the pattern
`dd_vcredist_<arch>_yyyyMMddHHmmss`.

In this article, we use these logs to diagnose common issues with the redist
installer.

## Return Code 1603

Issues with the vcredist installer often produce the return code 1603. This is
a generic install failure code produced by the Windows Installer, which is
invoked during the installation of the Visual C++ Runtime components.

Because many factors can produce a 1603 code, the return code itself is not
enough to diagnose the root cause of the issue. In such cases, the log files
usually contain relevant information that can lead to a solution.

The [Common issues](#common-issues) section describes examples of how to
diagnose common installation errors and steps that may resolve them. If your
issue is not found here, then follow the instructions to [report an issue in
the Visual C++ Redistributable installer](#my-issue-is-not-here).

## Common issues

### Binary file is being used

**Diagnose**

**Steps to resolve**

1 - Close all currently running applications.

### Antivirus or third-party software interference

**Diagnose**

**Steps to resolve**

1 - Disable any antivirus or third-party software that may have a lock on 
    components that are part of the Visual C++ Redistributable.

### Corrupted Windows Installer cache

**Diagnose**

**Steps to resolve**

1 - Try using the Windows Installer troubleshooting tool.

## My issue is not here

TBD: Instructions to report an issue with the redist installer.

