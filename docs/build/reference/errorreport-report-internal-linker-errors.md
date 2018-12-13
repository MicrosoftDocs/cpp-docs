---
title: "/ERRORREPORT (Report Internal Linker Errors) (C++) - Visual Studio"
ms.date: "12/28/2017"
f1_keywords: ["/ERRORREPORT", "VC.Project.VCLinkerTool.ErrorReporting"]
helpviewer_keywords: ["/ERRORREPORT linker option", "ERRORREPORT linker option", "-ERRORREPORT linker option"]
ms.assetid: f5fab595-a2f1-4eb0-ab5c-1c0fbd3d8c28
---
# /ERRORREPORT (Report Internal Linker Errors)

> **/errorreport:**[ **none** | **prompt** | **queue** | **send** ]

## Arguments

**none**<br/>
Reports about internal compiler errors will not be collected or sent to Microsoft.

**prompt**<br/>
Prompts you to send a report when you receive an internal compiler error. **prompt** is the default when an application is compiled in the development environment.

**queue**<br/>
Queues the error report. When you log in with administrator privileges, a window is displayed so that you can report any failures since the last time you were logged in (you will not be prompted to send reports for failures more than once every three days). **queue** is the default when an application is compiled at a command prompt.

**send**<br/>
Automatically sends reports of internal compiler errors to Microsoft if reporting is enabled by the Windows Error Reporting service settings.

## Remarks

The **/ERRORREPORT** option lets you provide internal compiler error (ICE) information directly to Microsoft.

The option **/errorreport:send** automatically sends error information to Microsoft, if enabled by Windows Error Reporting service settings.

### To set this compiler option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../working-with-project-properties.md).

1. Open the **Configuration Properties** > **Linker** > **Advanced** property page.

1. Modify the **Error Reporting** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ErrorReporting%2A>.

## See also

[/errorReport (Report Internal Compiler Errors)](errorreport-report-internal-compiler-errors.md)<br/>
[Setting Linker Options](linking.md)<br/>
[Linker Options](linker-options.md)
