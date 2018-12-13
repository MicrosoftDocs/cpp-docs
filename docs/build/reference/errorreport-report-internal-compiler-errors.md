---
title: "/errorReport (Report Internal Compiler Errors) (C++) - Visual Studio"
ms.date: "12/14/2018"
f1_keywords: ["VC.Project.VCCLCompilerTool.ErrorReporting", "/errorreport"]
helpviewer_keywords: ["/errorReport compiler option [C++]", "-errorReport compiler option [C++]"]
ms.assetid: 819828f8-b0a5-412c-9c57-bf822f17e667
---
# /errorReport (Report Internal Compiler Errors)

Lets you provide internal compiler error (ICE) information directly to Microsoft.

## Syntax

```
/errorReport:[ none | prompt | queue | send ]
```

## Arguments

**none**<br/>
Reports about internal compiler errors will not be collected or sent to Microsoft.

**prompt**<br/>
Prompts you to send a report when you receive an internal compiler error. **prompt** is the default when an application is compiled in the development environment.

**queue**<br/>
Queues the error report. When you log in with administrator privileges, a window is displayed so that you can report any failures since the last time you were logged in (you will not be prompted to send reports for failures more than once every three days). **queue** is the default when an application is compiled at a command prompt.

**send**<br/>
Automatically sends reports of internal compiler errors to Microsoft if reporting is enabled by the Windows Error Reporting system settings.

## Remarks

An internal compiler error (ICE) results when the compiler cannot process a source code file. When an ICE occurs, the compiler does not produce an output file or any useful diagnostic that you can use to fix your code.

In earlier releases, when you got an ICE, you were encouraged to call Microsoft Product Support Services to report the problem. With **/errorReport**, you can provide ICE information directly to Microsoft. Your error reports can help improve future compiler releases.

A user's ability to send reports depends on computer and user policy permissions.

### To set this compiler option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../working-with-project-properties.md).

1. Click the **C/C++** folder.

1. Click the **Advanced** property page.

1. Modify the **Error Reporting** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ErrorReporting%2A>.

## See Also

[Compiler Options](compiler-options.md)<br/>
[Compiler Command Line Syntax](../compiler-command-line-syntax.md)