---
title: "How to: Integrate Custom Tools into the Project Properties"
description: "How to integrate custom tools into the Project Properties in Visual Studio C++ projects."
ms.date: 10/08/2020
helpviewer_keywords: ["MSBuild (C++), howto: integrate custom tools"]
---
# How to: Integrate Custom Tools into the Project Properties

You can add custom tool options to the Visual Studio **Property Pages** window by creating an XML file.

The **Configuration Properties** section of the **Property Pages** window displays setting groups known as *rules*. Every rule contains the settings for a tool or a group of features. For example, the **Linker** rule contains the settings for the linker tool. The settings in a rule can be subdivided into *categories*.

You can create a rule file that contains properties for your custom tool so that the properties are loaded when Visual Studio starts. For information about how to modify the file, see [Platform Extensibility Part 2](/archive/blogs/vsproject/platform-extensibility-part-2) on the Visual Studio Project Team blog.

::: moniker range="msvc-140"

The folder to place your rule file in depends on the locale and the version of Visual Studio in use. In a Visual Studio 2015 or earlier developer command prompt, the rules folder is *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\<locale>`*. The `<version>` value is *`v140`* in Visual Studio 2015. The `<locale>` is an LCID, for example, `1033` for English. You'll use a different path for each edition of Visual Studio that's installed, and for each language. For example, the default rules folder path for Visual Studio 2015 Community edition in English could be *`C:\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\v140\1033\`*.

::: moniker-end

::: moniker range="msvc-150"

The folder to place your rule file in depends on the locale and the version of Visual Studio in use. In a Visual Studio 2017 developer command prompt, the rules folder is *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\<locale>\`*. The `<locale>` is an LCID, for example, `1033` for English. In a Visual Studio 2015 or earlier developer command prompt, the rules folder is *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\<locale>\`*, where the `<version>` value is *`v140`* in Visual Studio 2015. You'll use a different path for each edition of Visual Studio that's installed, and for each language. For example, the default rules folder path for Visual Studio 2017 Community edition in English could be *`C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise\Common7\IDE\VC\VCTargets\1033\`*.

::: moniker-end

::: moniker range=">=msvc-160"

The folder to place your rule file in depends on the locale and the version of Visual Studio in use. In a Visual Studio 2019 or later developer command prompt, the rules folder is *`%VSINSTALLDIR%MSBuild\Microsoft\VC\<version>\<locale>\`*, where the `<version>` value is *`v160`* in Visual Studio 2019. The `<locale>` is an LCID, for example, `1033` for English. In Visual Studio 2017, the rules folder is *`%VSINSTALLDIR%Common7\IDE\VC\VCTargets\<locale>\`*. In a Visual Studio 2015 or earlier developer command prompt, the rules folder is *`%ProgramFiles(x86)%\MSBuild\Microsoft.Cpp\v4.0\<version>\<locale>\`*. You'll use a different path for each edition of Visual Studio that's installed, and for each language. For example, the default rules folder path for Visual Studio 2019 Community edition in English could be *`C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Microsoft\VC\v160\1033\`*.

::: moniker-end

### To add or change project properties

1. In the XML editor, create an XML file.

1. Save the file in the default rules folder. Adjust the path for your language and Visual Studio edition. Every rule in the **Property Pages** window is represented by an XML file in this folder. Make sure that the file is uniquely named in the folder.

1. Copy the content of an existing rules file, such as *`rc.xml`*, close it without saving changes, and then paste the content in your new XML file. You can copy any XML schema file to use as a template. Choose one that's similar to your tool.

1. In the new XML file, modify the content according to your requirements. Make sure to change the **Rule Name** and **Rule.DisplayName** at the top of the file.

1. Save your changes and close the file.

1. The XML files in the rules folder are loaded when Visual Studio starts. To test the new file, restart Visual Studio.

1. In **Solution Explorer**, right-click a project and then choose **Properties**. In the **Property Pages** window, verify that there's a new node with the name of your rule.

## See also

[MSBuild on the command line - C++](msbuild-visual-cpp.md)
