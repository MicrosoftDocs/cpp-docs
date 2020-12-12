---
description: "Learn more about: Running as a Member of the Users Group"
title: "Running as a Member of the Users Group"
ms.date: "11/04/2016"
helpviewer_keywords: ["Users Group [C++]", "security [C++], Users Group", "Windows accounts [C++]", "non administrator users [C++]", "user accounts [C++]", "administrator (not running as) [C++]"]
ms.assetid: e48a03ec-d345-49f6-809a-1a291eecbc81
---
# Running as a Member of the Users Group

This topic explains how configuring Windows user accounts as a member of the Users Group (as opposed to the Administrators Group) increases security by reducing the chances of being infected with malicious code.

## Security Risks

Running as an administrator makes your system vulnerable to several kinds of security attack, such as "Trojan horse" and "buffer overrun." Merely visiting an Internet site as an administrator can be damaging to the system, as malicious code that is downloaded from an Internet site may attack your computer. If successful, it inherits your administrator permissions and can then perform actions such as deleting all your files, reformatting your hard drive, and creating a new user accounts with administrative access.

## Non Administrator User Groups

The Windows user accounts that developers use normally should be added to either the Users or Power Users Groups. Developers should also be added to the Debugging Group. Being a member of the Users group allows you to perform routine tasks including running programs and visiting Internet sites without exposing your computer to unnecessary risk. As a member of the Power Users group, you can also perform tasks such as application installation, printer installation, and most Control Panel operations. If you need to perform administrative tasks such as upgrading the operating system or configuring system parameters, you should log into an administrator account for just long enough to perform the administrative task. Alternatively, the Windows **runas** command can be used to launch specific applications with Administrative access.

## Exposing Customers to Security Risks

Not being part of the Administrators group is particularly important for developers because, in addition to protecting development machines, it prevents developers from inadvertently writing code that requires customers to join the Administrators Group in order to execute the applications you develop. If code that requires administrator access is introduced during development, it will fail at runtime, alerting you to the fact that your application now requires customers to run as Administrators.

## Code That Requires Administrator Privileges

Some code requires Administrator access in order to execute. If possible, alternatives to this code should be pursued. Examples of code operations that require Administrator access are:

- Writing to protected areas of the file system, such as the Windows or Program Files directories

- Writing to protected areas of the registry, such as HKEY_LOCAL_MACHINE

- Installing assemblies in the Global Assembly Cache (GAC)

Generally, these actions should be limited to application installation programs. This allows users to use administrator status only temporarily.

## Debugging

You can debug any applications that you launch within Visual Studio (native and unmanaged) as a non-administrator by becoming part of the Debugging Group. This includes the ability to attach to a running application using the Attach to Process command. However, it is necessary to be part of the Administrator Group in order to debug native or managed applications that were launched by a different user.

## See also

[Security Best Practices](security-best-practices-for-cpp.md)
