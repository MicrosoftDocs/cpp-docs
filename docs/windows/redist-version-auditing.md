---
title: "How to audit Visual C++ Runtime version usage"
description: "A detailed guide for auditing Visual C++ Runtime file usage."
ms.date: 1/27/2025
helpviewer_keywords:
  [
    "find redist version installed",
    "audit redist version installation",
  ]
author: MahmoudGSaleh
ms.author: msaleh
ms.topic: how-to
---

# How to audit Visual C++ Runtime version usage

The Microsoft Visual C++ Redistributable and the Visual Studio C++ Runtime (collectively, "VC Runtime") are critical components of many applications. Across your network, machines may still be running applications that install and use an out-of-support version of the VC Runtime. You can use NTFS file auditing to identify such usage as a step towards replacing those applications with ones that use a supported version of the VC Runtime. This guide walks you through setting up NTFS file auditing, provides troubleshooting tips, and highlights the benefits of regular audits.

For more information about the versions of VC Runtime that are no longer supported, see [Microsoft Visual C++ Redistributable latest supported downloads](/cpp/windows/latest-supported-vc-redist).

## Enable NTFS file auditing to determine VC Runtime usage

This guide provides the steps to manually enable NTFS file auditing and review audit events to determine which applications are calling the unsupported versions of the VC Runtime. Because there are several files that can be used by an application, this guide also shows how to use PowerShell's [`Get-Acl`](/powershell/module/microsoft.powershell.security/get-acl) and [`Set-Acl`](/powershell/module/microsoft.powershell.security/set-acl) cmdlets to update auditing permissions. For more information about how to configure audit policies for a file, see [Apply a basic audit policy on a file or folder](/previous-versions/windows/it-pro/windows-10/security/threat-protection/auditing/apply-a-basic-audit-policy-on-a-file-or-folder).

### Manually enable object access auditing on the system

Object access must be enabled before you enable file level auditing:

1. Open the **Local Group Policy Editor** by pressing `Windows` + `R` to open the **Run** dialog. Then type `gpedit.msc` and press **Enter**.
1. Navigate to **Computer Configuration** > **Windows Settings** > **Security Settings** > **Advanced Audit Policy Configuration** > **System Audit Policies** > **Object Access**.
1. Double-click **Audit File System**. In the **Audit File System Properties** dialog, select **Configure the following audit events** > **Success** > **OK**.
1. Close the **Local Group Policy Editor**.

Alternatively, you may use `auditpol.exe` to enable object access:

1. List the current settings from the command line with `AuditPol.exe /get /category:"Object Access"`.
1. Enable object access with `AuditPol.exe /set /category:"Object Access" /subcategory:"File System" /success:enable`.

### Manually enable auditing on a file

To monitor which process accesses a VC Runtime file, enable auditing on the VC Runtime file:

1. Right-click the file that you want to audit, select **Properties**, and then select the **Security** tab. For more information about finding installed VC Runtime files, see [VC Runtime installed locations](#vcruntime_install_location).
1. Select **Advanced**.
1. In the **Advanced Security Settings** dialog box, select the **Auditing** tab and then select **Continue**.
1. To add a new auditing rule, select **Add**. In the **Auditing Entry** dialog, select a principal, then type the name of the user or group you want to add such as **(Everyone)**, and then select **OK**.
1. In **Type**, select ensure that **Success** is selected.
1. Select **Show advance permissions** > **Clear all** > **Traverse folder / execute file** > **OK**.
1. There should now be a new row in the **Auditing** entries matching what you have selected. Select **OK**.
1. In the **Properties** Dialog, select **OK**.

The audit rule is now enabled for the file.

### Manually review audit logs

NTFS file auditing generates ["Event 4663: An attempt was made to access an object"](/previous-versions/windows/it-pro/windows-10/security/threat-protection/auditing/event-4663) for each file that includes the audit permission and is accessed by a process.

1. Open the **Event Viewer** by pressing `Windows` + `R` to open the **Run** dialog. Then type `eventvwr.msc`, and press **Enter**.
1. Navigate to the **Security** logs in the **Event Viewer** by expanding **Windows Logs** > **Security**. The results pane lists security events.
1. Find the audit events by choosing **Filter Current Log...** in the **Actions** pane. Narrow down the events to **Event ID 4663 (Audit Success for the File System Category)** by entering **4663 into the Includes/Excludes Event IDs** text box.

For an example of a File Access Auditing Event 4663, see ["4663(S): An attempt was made to access an object."](/previous-versions/windows/it-pro/windows-10/security/threat-protection/auditing/event-4663)

### Use PowerShell to audit VC Runtime usage

As an overview, updating File Auditing Permissions with PowerShell follows these steps:

1. Define the [file system audit rule](/dotnet/api/system.security.accesscontrol.filesystemauditrule.-ctor) to apply to the file(s).
1. Obtain a file's security descriptor with [`Get-Acl`](/powershell/module/microsoft.powershell.security/get-acl).
1. [Apply the audit rule](/dotnet/api/system.security.accesscontrol.filesystemsecurity.setaccessrule) to the security descriptor.
1. Apply the updated security descriptor on the original file with [`Set-Acl`](/powershell/module/microsoft.powershell.security/set-acl).
1. View File Access Auditing Event 4663 records with [`Get-WinEvent`](/powershell/module/microsoft.powershell.diagnostics/get-winevent).

### PowerShell: Audit out-of-support VC Runtime files

The following PowerShell code enables you to audit installed VC Runtime files that are no longer supported.

```powershell
function Get-AuditRuleForFile {
    $auditRuleArguments =   'Everyone'              <# identity #>,
                            'ExecuteFile, Traverse' <# fileSystemRights #>,
                            'Success'               <# flags #>
    $auditRule = New-Object System.Security.AccessControl.FileSystemAuditRule($auditRuleArguments)

    return $auditRule
}

function Set-FileAuditRule {
    param (
        [Parameter(Mandatory = $true)]
        [ValidateNotNullOrEmpty()]
        [string]$file,
        [Parameter(Mandatory = $true)]
        [ValidateNotNullOrEmpty()]
        [System.Security.AccessControl.FileSystemAuditRule]$auditRule
    )

    $existingAcl = Get-Acl -Path $file
    $existingAcl.AddAuditRule($auditRule) | Out-Null
    Set-Acl -Path $file -AclObject $existingAcl
}

$newAuditRule = Get-AuditRuleForFile

# Visual Studio Redistributable for 2005 (VC++ 8.0) and 2008 (VC++ 9.0)
Get-ChildItem "$ENV:SystemRoot\WinSxS\Fusion" -filter '*.dll' -ErrorAction SilentlyContinue -Recurse |
Where-Object FullName -IMatch 'microsoft\.vc[89]0' |
ForEach-Object {
    Set-FileAuditRule $_.FullName $newAuditRule
}

# Visual Studio Redistributable for 2010 (VC++ 10.0), 2012 (VC++ 11.0) and 2013 (VC++ 12.0)
$languageCodes = 'chs|cht|deu|enu|esn|fra|ita|jpn|kor|rus'
$versions = '(1[012]0)'
$regex = "^((atl|msvc[pr]|vcamp|vccorlib|vcomp)$versions|mfc$versions(u|$languageCodes)?|mfcm$versions(u)?)\.dll$"
Get-ChildItem "$ENV:SystemRoot\SysWOW64","$ENV:SystemRoot\System32" -filter '*.dll' |
Where-Object Name -imatch $regex |
ForEach-Object {
    Set-FileAuditRule $_.FullName $newAuditRule
}
```

### PowerShell: View file audit events

PowerShell provides `Get-WinEvent` to get event records for various event logs as shown in the following PowerShell code that lists all of the Auditing Event 4663 records over the past 24 hours:

```powershell
function Get-AuditEntries {
    param (
        [Parameter(Mandatory = $true)]
        [ValidateNotNullOrEmpty()]
        [System.DateTime]$oldestTime
    )
    Get-WinEvent -FilterHashtable @{LogName='Security';Id=4663;StartTime=(Get-Date $oldestTime)} |
    ForEach-Object {
        $record = [ordered]@{}
        $record['TimeCreated'] = $_.TimeCreated
        $accessName = ($_.Message |
            Select-String -Pattern "Accesses:[\t\s]+(?<Accesses>.+)").Matches.Groups[1]
        ([xml]$_.ToXML()).Event.EventData.ChildNodes |
        ForEach-Object -Begin {
            $record[$accessName.Name]=$accessName.Value.Trim()
        } -Process {
            $record[$_.Name] = $_.'#text'
        }
        [PSCustomObject]$record
    } |
    Where-Object { $_.ObjectName -imatch '\.dll$'}
}

Get-AuditEntries -oldestTime (Get-Date).AddHours(-24)
```

```output
TimeCreated : 11/20/2024 5:00:11 AM
Accesses : Execute/Traverse
SubjectUserSid : \*\*\*\*\*
SubjectUserName : \*\*\*\*\*
SubjectDomainName : WORKGROUP
SubjectLogonId : \*\*\*\*\*
ObjectServer : Security
ObjectType : File
ObjectName : C:\\Windows\\WinSxS\\amd64\_microsoft.vc90.crt\_1fc8b3b9a1e18e3b\_9.0.30729.9635\_none\_08e2c157a83ed5da\\msvcr90.dll
HandleId : 0x93c
AccessList : %%4421
AccessMask : 0x20
ProcessId : 0x24d4
ProcessName : C:\\Windows\\System32\\WindowsPowerShell\\v1.0\\powershell.exe
ResourceAttributes : S:AI
```

### Next steps after auditing VC Runtime usage

After you have determined which processes are using the VC Runtime files, or which applications have installed the VC Redistributable, uninstall those applications or upgrade them to newer versions that don't depend on unsupported VC Runtimes.

Some Microsoft applications require legacy versions of the VC Runtime. For details, see [Visual C++ Redistributable and runtime libraries FAQ | Microsoft Learn](/lifecycle/faq/visual-c-faq).

<a id="vcruntime_install_location"></a>

## VC Runtime installation locations

Here is where each version of the VC Runtime is installed:

| **Visual Studio Version**| **Installed Location(s)**|
| ------------- | ------------- |
| Visual Studio 2013 (VC++ 12.0) | `%SystemRoot%\\System32, %SystemRoot%\\SysWOW64` |
| Visual Studio 2012 (VC++ 11.0) | `%SystemRoot%\\System32, %SystemRoot%\\SysWOW64` |
| Visual Studio 2010 (VC++ 10.0) | `%SystemRoot%\\System32, %SystemRoot%\\SysWOW64` |
| Visual Studio 2008 (VC++ 9.0) | `%SystemRoot%\\WinSxS\\Fusion` |
| Visual Studio 2005 (VC++ 8.0) | `%SystemRoot%\\WinSxS\\Fusion` |

## See also

[Redistributing Visual C++ Files](redistributing-visual-cpp-files.md)\
[The latest supported Visual C++ downloads](latest-supported-vc-redist.md)\
[Lifecycle FAQ - Visual C++ Redistributable and runtime libraries](/lifecycle/faq/visual-c-faq)\
[C++ binary compatibility between Visual Studio versions](../porting/binary-compat-2015-2017.md)
