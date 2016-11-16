---
title: "Property Pages (Visual C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.NotAProp.Edit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "project-file macro"
  - "project properties [C++], default values"
  - "user-defined values"
  - "project properties [C++], setting"
  - "macros, project-file"
  - "property pages, project settings"
  - "Visual C++ projects, properties"
  - "build macro"
  - "user-defined macros"
ms.assetid: 13ffe3ea-1bc3-4bee-be5e-053a8a99cce4
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Property Pages (Visual C++)
By using property pages, you can specify settings for Visual Studio projects. To open the **Property Pages** dialog box for a Visual Studio project, on the **Project** menu, click **Properties**.  
  
 You can specify project settings so that they apply all build configurations, or you can specify different project properties for each build configuration. For example, you can specify certain settings for the Release configuration and other settings for the Debug configuration.  
  
 Not all available pages are necessarily displayed in the **Property Pages** dialog box. Which pages are displayed depends on the file types in the project.  
  
 For more information, see [Working with Project Properties](../ide/working-with-project-properties.md).  
  
## Default Properties vs. Modified Properties  
 When you use the **New Project** dialog box to create a project, [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] uses the specified project template to initialize the project properties. Therefore, the property values in the template can be thought of as default values for that project type. In other project types, the properties may have different default values.  
  
 A project property value appears in bold if it is modified. A project property can be modified for the following reasons:  
  
-   The application wizard changes the property because it requires a different property value than the one that is specified in the project template.  
  
-   You specify a different property value in the **New Project** dialog box.  
  
-   You specify a different property value on a project property page.  
  
> [!TIP]
>  To see the final set of property values that MSBuild uses to build your project, examine the preprocessor output file, which you can produce by using this command line: **MSBuild /preprocess:***preprocessor_output_filename*opt*project_filename*opt  
  
## Resetting Properties  
 When you view the **Property Pages** dialog box for a project and the project node is selected in **Solution Explorer**, for many properties, you can select **inherit from parent or project defaults** or modify the value another way.  
  
 When you view the **Property Pages** dialog box for a project and a file is selected in **Solution Explorer**, for many properties, you can select **inherit from parent or project defaults** or modify the value another way. However, if the project contains many files that have property values that differ from the project default values, the project will take longer to build.  
  
> [!TIP]
>  To refresh the **Property Pages** dialog box so that it displays the latest selections, click **Apply**.  
  
 Most project defaults are system (platform) defaults. Some project defaults derive from the style sheets that are applied when you update properties in the **Project Defaults** section of the **General** configuration properties page for the project. For more information, see [General Property Page (Project)](../ide/general-property-page-project.md).  
  
## Specifying User-Defined Values  
 You must define the value for certain properties. A user-defined value can contain one or more alphanumeric characters or project-file macro names. Some of these properties can take only one user-defined value, but others can take a semicolon-delimited list of multiple values.  
  
 To specify a user-defined value for a property, or a list if the property can take multiple user-defined values, in the column to the right of the property name, perform one of the following actions:  
  
-   Type the value or the list of values.  
  
-   Click the drop-down arrow. If **Edit** is available, click it and then in the text box, type the value or list of values. An alternate way to specify a list is to type each value on a separate line in the text box. On the property page, the values will be displayed as a semicolon-delimited list.  
  
     To insert a project-file macro as a value, click **Macros** and then double-click the macro name.  
  
-   Click the drop-down arrow. If **Browse** is available, click it and then select one or more values.  
  
 For a multi-valued property, the **inherit from parent or project defaults** option is available when you click the drop-down arrow in the column to the right of the property name and then click **Edit**. By default, the option is selected.  
  
 Notice that a property page only displays the settings at the current level for a multi-valued property that inherits from another level. For example, if a file is selected in **Solution Explorer** and you select the C/C++ **Preprocessor Definitions** property, file-level definitions are displayed but inherited project-level definitions are not displayed. To view both current-level and inherited values, click the drop-down arrow in the column to the right of the property name and then click **Edit**. If you use the [Visual C++ project model](http://msdn.microsoft.com/en-us/06c1bbd9-4c79-4f97-ad6d-2b1dea8ecd1f), this behavior is also in effect for the objects on files and projects. That is, when you query for the values on a property at the file level, you will not get the values for that same property at the project level. You must explicitly get the values of the property at the project level. Also, some inherited values of a property may come from a style sheet, which is not accessible programmatically.  
  
## In This Section  
  
1.  [NIB: Add Reference Search Path Dialog Box](http://msdn.microsoft.com/en-us/4520d80d-aa9f-4d11-b92b-2f64a1fd5cb2)  
  
2.  [Advanced, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](../ide/advanced-manifest-tool.md)  
  
3.  [Command Line Property Pages](../ide/command-line-property-pages.md)  
  
4.  [Custom Build Step Property Page: General](../ide/custom-build-step-property-page-general.md)  
  
5.  [Adding references](../ide/adding-references-in-visual-cpp-projects.md)  
  
6.  [General Property Page (File)](../ide/general-property-page-file.md)  
  
7.  [General Property Page (Project)](../ide/general-property-page-project.md)  
  
8.  [General, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](../ide/general-manifest-tool-configuration-properties.md)  
  
9. [HLSL Property Pages](../ide/hlsl-property-pages.md)  
  
10. [HLSL Property Pages: Advanced](../ide/hlsl-property-pages-advanced.md)  
  
11. [HLSL Property Pages: General](../ide/hlsl-property-pages-general.md)  
  
12. [HLSL Property Pages: Output Files](../ide/hlsl-property-pages-output-files.md)  
  
13. [Input and Output, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](../ide/input-and-output-manifest-tool.md)  
  
14. [Isolated COM, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](../ide/isolated-com-manifest-tool.md)  
  
15. [Linker Property Pages](../ide/linker-property-pages.md)  
  
16. [Managed Resources Property Page](../ide/managed-resources-property-page.md)  
  
17. [Manifest Tool Property Pages](../ide/manifest-tool-property-pages.md)  
  
18. [MIDL Property Pages](../ide/midl-property-pages.md)  
  
19. [MIDL Property Pages: Advanced](../ide/midl-property-pages-advanced.md)  
  
20. [MIDL Property Pages: General](../ide/midl-property-pages-general.md)  
  
21. [MIDL Property Pages: Output](../ide/midl-property-pages-output.md)  
  
22. [NMake Property Page](../ide/nmake-property-page.md)  
  
23. [Resources Property Pages](../ide/resources-property-pages.md)  
  
24. [VC++ Directories Property Page](../ide/vcpp-directories-property-page.md)  
  
25. [Web References Property Page](../ide/web-references-property-page.md)  
  
26. [XML Data Generator Tool Property Page](../ide/xml-data-generator-tool-property-page.md)  
  
27. [XML Document Generator Tool Property Pages](../ide/xml-document-generator-tool-property-pages.md)  
  
## See Also  
 [How to: Create and Remove Project Dependencies](http://msdn.microsoft.com/Library/e2a0a8ff-dae7-40a8-b774-b88aa5235183)   
 [How to: Create and Edit Configurations](http://msdn.microsoft.com/Library/19be121c-148e-4ece-bbfc-d20b08cfc3f7)   
 [Deploying Applications](http://msdn.microsoft.com/en-us/4ff8881d-0daf-47e7-bfe7-774c625031b4)