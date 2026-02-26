---
title: Troubleshoot Visual C++ Redistributable Installation Issues
description: This article provides steps to help you diagnose and resolve issues when you install the Visual C++ Redistributable.
author: vicroms
ms.author: viromer
ms.date: 02/12/2026
ms.topic: troubleshooting-general
helpviewer_keywords: [ "redist", "vcredist", "Visual [C++] redistributable", "VC Redist" ]
---
# Troubleshoot Visual C++ Redistributable installation issues

This article is for users who experience issues when they install Visual C++ Runtime components by using the Visual Studio Installer or the Visual C++ Redistributable (VC Redist) installer.

If you experience any issues, make sure that you're installing the [latest version of the Visual C++ Redistributable](latest-supported-vc-redist.md).

## Collect failure logs

The first step to diagnose an issue with the Visual C++ Redistributable installer is to collect its failure logs.

1. Download the [Microsoft Visual Studio and .NET Log Collection Tool](<https://aka.ms/vscollect>).
1. Run `Collect.exe`.
1. Extract the contents of `%TEMP%/vscollect.zip`.

After you extract `vscollect.zip`, the VC Redist logs are located inside the `Temp` folder. The relevant log files are prefixed with the pattern `dd_vcredist_<arch>_yyyyMMddHHmmss`.

Search the VC Redist logs for terms like "Error," "Failed," or "System Error," and consult the [Common errors at a glance](#common-errors-at-a-glance) section to identify the issue.

### Other log locations

The VC Redist installer is often executed as a prerequisite of other products. In such cases, you might find the installation log in a different path.

For example, [Configuration Manager](/intune/configmgr/core/understand/introduction) upgrades VC Redist as part of its own upgrade process by running `vcredist_x64.exe` with the `/l` option that overrides the default log location.

In such cases, you can find the path to the logs by reading that product's own logs.

#### Example: Configuration Manager logs

`<ConfigMgr_Installation_Directory>\Logs\cmupdate.log`

```log
10-31-2025 17:40:06.421    CONFIGURATION_MANAGER_UPDATE    67368 (0x10728)    [Visual C++ 2015-2022 Redistributable (x64)] with older version 14.28.29914 is installed. it needs to upgraded.
10-31-2025 17:40:06.421    CONFIGURATION_MANAGER_UPDATE    67368 (0x10728)    INFO: Start install Visual C redistributable ("C:\Program Files\Microsoft Configuration Manager\CMUStaging\AA928926-5C76-4DE0-B51F-0FE4D365DFE2\SMSSETUP\BIN\X64\vcredist_x64.exe"  /q /norestart /l "C:\Program Files\Microsoft Configuration Manager\Logs\VCRedist64Install.log").
10-31-2025 17:40:14.553    CONFIGURATION_MANAGER_UPDATE    67368 (0x10728)    ERROR: Failed to install Visual C redistributable. Return code: 1603.
10-31-2025 17:40:14.553    CONFIGURATION_MANAGER_UPDATE    67368 (0x10728)    ERROR: 64-bit VC Redist installation ("C:\Program Files\Microsoft Configuration Manager\CMUStaging\AA928926-5C76-4DE0-B51F-0FE4D365DFE2\SMSSETUP\BIN\X64\vcredist_x64.exe") failed. Please check log file [C:\Program Files\Microsoft Configuration Manager\Logs\VCRedist64Install.log].
10-31-2025 17:40:14.554    CONFIGURATION_MANAGER_UPDATE    67368 (0x10728)    Failed to install vc redist. Please manually install it from C:\Program Files\Microsoft Configuration Manager\CMUStaging\AA928926-5C76-4DE0-B51F-0FE4D365DFE2\SMSSETUP\BIN\X64
```

## General troubleshooting steps when using the Visual C++ Redistributable installer

This section describes general troubleshooting methods that you can try to resolve issues with the VC Redist installer.

### Disable antivirus software temporarily

Antivirus software often blocks installation of VC Redist components.

1. Turn off Windows Defender real-time protection.
1. Disable any corporate endpoint protection temporarily (such as Symantec or McAfee).
1. Retry the installation.
1. Reenable any disabled protection software.

> [!WARNING]
> Reenable any disabled protection software after you finish these steps.

### Run the Visual C++ Redistributable installer as administrator

File-access failures are heavily correlated with insufficient permissions.

1. Right-click the VC Redist installer and select **Run as Administrator**.
1. Retry the installation.

### Check for Windows updates

On rare occasions, outdated system components can cause installation issues.

1. Go to Windows Update and install all pending updates.
1. Reboot your PC.
1. Retry the installation.

## General troubleshooting steps when using Visual Studio Installer

### Manually install Visual C++ Redistributable

> [!NOTE]
> The Visual Studio Installer might prompt for a reboot when VC Redist is installed separately.

1. Download the [latest VC Redist installer](latest-supported-vc-redist.md).
1. Run the VC Redist installer.
1. Retry the Visual Studio Installer.

If the manual installation fails, follow the [general troubleshooting steps for the standalone VC Redist installer](#general-troubleshooting-steps-when-using-the-visual-c-redistributable-installer).

### Clear the Visual Studio Installer cache

1. Open `%ProgramData%\Microsoft\VisualStudio\Packages`.
1. Delete all the files inside the folder to force the Visual Studio Installer to regenerate them.
1. Retry the Visual Studio Installer.

### Repair the Visual Studio Installer

1. Open the **Settings** app.
1. Enter **Installed Apps** in the search bar at the top of the window.
1. Search for **Visual Studio Installer**.
1. Select the ellipsis (**...**), and then select **Modify**.
1. Select the **Repair** option to repair the Visual Studio Installer.
1. Retry the Visual Studio installation.

### Delete the Visual Studio Installer folder

> [!WARNING]
> This method requires that you have the Visual Studio Installer Setup downloaded (`VisualStudioSetup.exe`). You can download the Visual Studio Installer Setup from <https://my.visualstudio.com>.

This method helps if the installer metadata is corrupted. Deleting the installer folder forces the Visual Studio Installer to regenerate it.

1. Download `VisualStudioSetup.exe` from the [Welcome to Dev Essentials](https://my.visualstudio.com) page.
1. Delete the folder `C:\Program Files (x86)\Microsoft Visual Studio\Installer`. You might be prompted to run this operation as an administrator.
1. Run `VisualStudioSetup.exe`.

## Common issues

### Common errors at a glance

* [Generic installation failure (return code 1603)](#generic-installation-failure)
* [Access denied (return code 5)](#access-denied)
* [File is locked (return code 32)](#file-is-locked)
* [Corrupt or invalid installer package (return code 1620)](#corrupt-or-invalid-installer-package)
* [Older version can't be removed (return code 1714)](#older-version-cant-be-removed)

### Generic installation failure

Return code 1603 indicates a generic installation failure produced by the Windows Installer during the installation of the Visual C++ Runtime components.

Because many factors can produce a 1603 code, the code by itself doesn't provide enough information to diagnose the cause of the issue. Often, the log files produced by the VC Redist installer contain relevant information that might lead to a solution or workaround.

The [Common issues](#common-issues) section describes examples of how to diagnose common installation errors and steps that might resolve them.
If your issue isn't found here, follow the instructions to [report an issue in the Visual C++ Redistributable installer](#report-a-visual-c-redistributable-installation-problem).

### Access denied

Installation fails with error code 5. This error code typically indicates a permissions issue. Specifically, the issue is access denied.

#### Steps to resolve

1. Disable antivirus, group policies, and firewalls temporarily.
1. Run the VC Redist installer.
1. Reenable any disabled protection software.

If the installation fails, try to run the VC Redist installer as an administrator.

### File is locked

Installation fails with error code 32. Files in use by another process, interference from antivirus software, group policies, or corrupted files are common causes.

#### Steps to resolve

1. Close any running software in your PC.
1. Try the methods in the [General troubleshooting steps when using Visual Studio Installer](#general-troubleshooting-steps-when-using-the-visual-c-redistributable-installer) section.

If the installation fails, try to restart your PC to release any locked files.

### Corrupt or invalid installer package

Installation fails with error code 1620. This error code indicates that a Windows Installer package (MSI) couldn't be opened. The issue is likely because of corruption or invalid files.

The presence of these error messages indicates a corrupted cache.

- **Error code 1620**: Indicates that the Windows Installer package couldn't be opened.
- **Error code 0x80091007**: Indicates that several payloads failed verification because of hash mismatches.
- **Error code 0x80070654**: Occurs when an MSI package fails to execute.

#### Steps to resolve

Try the steps in the [General troubleshooting steps when using Visual Studio Installer](#general-troubleshooting-steps-when-using-visual-studio-installer).

### Older version can't be removed

Installation fails with the error code 1714. This error code indicates a corrupted Windows Installer cache that results in failure to remove a previous version of VC Redist.

The presence of these error messages indicates a corrupted cache.

In `dd_vcredist_<arch>_<timestamp>.log`:

```log
Error 0x80070003: Failed to get size of pseudo bundle: C:\ProgramData\Package Cache\{43d1ce82-6f55-4860-a938-20e5deb28b98}\VC_redist.x64.exe
Error 0x80070003: Failed to initialize package from related bundle id: {43d1ce82-6f55-4860-a938-20e5deb28b98}
```

In  `dd_vcredist_<arch>_<timestamp>_vcRuntimeMinimum_<arch>.log`:

```log
SOURCEMGMT: Trying source C:\ProgramData\Package Cache\{455DF12C-7D43-4EFF-AE2F-43C8AF2817A3}v14.28.29914\packages\vcRuntimeMinimum_amd64\.
Note: 1: 2203 2: C:\ProgramData\Package Cache\{455DF12C-7D43-4EFF-AE2F-43C8AF2817A3}v14.28.29914\packages\vcRuntimeMinimum_amd64\vc_runtimeMinimum_x64.msi 3: -2147287037 
SOURCEMGMT: Source is invalid due to missing/inaccessible package.
```

```log
Note: 1: 1714 2: Microsoft Visual C++ 2022 X64 Minimum Runtime - 14.40.33816 3: 1612 
CustomAction  returned actual error code 1612 (note this may not be 100% accurate if translation happened inside sandbox)
Product: Microsoft Visual C++ 2022 X64 Minimum Runtime - 14.40.33816 -- Error 1714. The older version of Microsoft Visual C++ 2022 X64 Minimum Runtime - 14.40.33816 cannot be removed.  Contact your technical support group.  System Error 1612.

Error 1714. The older version of Microsoft Visual C++ 2022 X64 Minimum Runtime - 14.40.33816 cannot be removed.  Contact your technical support group.  System Error 1612.
```

In `VSSetupEvents.txt`:

```log
Error 1714. The older version of Microsoft Visual C++ 2022 X64 Minimum Runtime - 14.40.33816 cannot be removed.  Contact your technical support group.  System Error 1612.] [(NULL)] [(NULL)] [(NULL)] [(NULL)] [(NULL)] []
```

#### Steps to resolve

From the log files, make a note of the VC Redist version causing the issue. Two methods are available to resolve the issue:

- **Method 1:** Use the Windows Installer.

   1. Try using the Windows Installer to manually remove the old VC Redist version. If prompted, let the Windows Installer Troubleshooter attempt to fix the issue.
   1. Retry the installation.

- **Method 2:** Manually remove the old version.

   1. Download the VC Redist installer for the old version. Follow the [steps to download an old version of the VC Redist installer](#old-vcredist-versions).
   1. Run the installer to uninstall the old VC Redist.
   1. Retry the installation.

## <a name="old-vcredist-versions"></a> Download old versions of the Visual C++ Redistributable installer

> [!WARNING]
> Never install a Visual C++ Redistributable installer that wasn't downloaded from a Microsoft site. Never install a Visual C++ Redistributable installer that isn't signed by Microsoft.

Download the VC Redist installer from [Welcome to Dev Essentials](https://my.visualstudio.com/Downloads) page. Search for Visual C++ Redistributable on the downloads page.

For the latest supported VC Redist version for each version of Visual Studio, see [Microsoft Redistributable Visual C++ latest supported downloads](/cpp/windows/latest-supported-vc-redist).

The following table lists links for older or legacy versions.

| Version range  | Download link template                                        | Example                                                        |
|----------------|---------------------------------------------------------------|----------------------------------------------------------------|
| 14.50 or later | `https://aka.ms/vs/18/release/<version>/VC_redist.<arch>.exe` | <https://aka.ms/vs/18/release/14.50.35719/VC_redist.x64.exe>   |
| 14.30 to 14.44 | `https://aka.ms/vs/17/release/<version>/VC_redist.<arch>.exe` | <https://aka.ms/vs/17/release/14.32.31332/VC_redist.arm64.exe> |
| 14.20 to 14.29 | `https://aka.ms/vs/16/release/<version>/VC_redist.<arch>.exe` | <https://aka.ms/vs/16/release/14.28.29914/VC_Redist.x86.exe>   |
| 14.10 to 14.19 | `https://aka.ms/vs/15/release/<version>/VC_redist.<arch>.exe` | <https://aka.ms/vs/15/release/14.12.25810/VC_redist.x64.exe>   |

You might be able to find installers for older versions through a Bing search. Only download VC Redist installers from a Microsoft site. Only install packages signed by Microsoft.

## Report a Visual C++ Redistributable installation problem

The list of [common issues](#common-issues) was collected from feedback reported to Microsoft through the [Developer Community](<https://developercommunity.visualstudio.com/>).

If you encounter an issue not found in that section, or if the steps in this troubleshooting guide don't resolve your issue, use the [Report a Problem](<https://developercommunity.visualstudio.com/cpp/report>) form to create a new feedback item.

Your report must include the following information about your environment:

- The version of VC Redist you're trying to install.
- If you're upgrading, the version of previously installed VC Redist installations.
- If you're installing through the Visual Studio Installer, the version of the Visual Studio Installer.
- The logs collected by following the steps in the [Collect failure logs](#collect-failure-logs) section.

Feedback without this information, especially without logs, is nonactionable and might be closed if more information isn't submitted promptly.

## Related content

- [Latest supported Visual C++ Redistributable downloads](latest-supported-vc-redist.md)
- [C++ binary compatibility between Visual Studio versions](../porting/binary-compat-2015-2017.md)
- [Audit Visual C++ Runtime version usage](redist-version-auditing.md)
- [Lifecycle FAQ: Visual C++ Redistributable and Runtime Libraries](/lifecycle/faq/visual-c-faq)
