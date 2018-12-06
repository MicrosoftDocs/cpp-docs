---
title: "Property Pages (Visual C++)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.NotAProp.Edit"]
helpviewer_keywords: ["project-file macro", "project properties [C++], default values", "user-defined values", "project properties [C++], setting", "macros, project-file", "property pages, project settings", "Visual C++ projects, properties", "build macro", "user-defined macros"]
ms.assetid: 13ffe3ea-1bc3-4bee-be5e-053a8a99cce4
---
# Property Pages (Visual C++)

By using property pages, you can specify settings for Visual Studio projects. To open the **Property Pages** dialog box for a Visual Studio project, on the **Project** menu, choose **Properties**.

You can specify project settings so that they apply all build configurations, or you can specify different project properties for each build configuration. For example, you can specify certain settings for the Release configuration and other settings for the Debug configuration.

Not all available pages are necessarily displayed in the **Property Pages** dialog box. Which pages are displayed depends on the file types in the project.

For more information, see [Working with Project Properties](../working-with-project-properties.md).

For non-Windows projects, see [Linux C++ Property Page Reference](../../linux/prop-pages-linux.md)<!-- or [C++ Cross Platform Property Page Reference](../../linux/prop-pages-linux.md)-->.

## Default Properties vs. Modified Properties

When you use the **New Project** dialog box to create a project, Visual Studio uses the specified project template to initialize the project properties. Therefore, the property values in the template can be thought of as default values for that project type. In other project types, the properties may have different default values.

A project property value appears in bold if it is modified. A project property can be modified for the following reasons:

- The application wizard changes the property because it requires a different property value than the one that is specified in the project template.

- You specify a different property value in the **New Project** dialog box.

- You specify a different property value on a project property page.

> [!TIP]
> To see the final set of property values that MSBuild uses to build your project, examine the preprocessor output file, which you can produce by using this command line: **MSBuild /preprocess:** *preprocessor_output_filename*<sub>opt</sub> *project_filename*<sub>opt</sub>

## Resetting Properties

When you view the **Property Pages** dialog box for a project and the project node is selected in **Solution Explorer**, for many properties, you can select **inherit from parent or project defaults** or modify the value another way.

When you view the **Property Pages** dialog box for a project and a file is selected in **Solution Explorer**, for many properties, you can select **inherit from parent or project defaults** or modify the value another way. However, if the project contains many files that have property values that differ from the project default values, the project will take longer to build.

> [!TIP]
> To refresh the **Property Pages** dialog box so that it displays the latest selections, choose **Apply**.

Most project defaults are system (platform) defaults. Some project defaults derive from the style sheets that are applied when you update properties in the **Project Defaults** section of the **General** configuration properties page for the project. For more information, see [General Property Page (Project)](general-property-page-project.md).

## Specifying User-Defined Values

You must define the value for certain properties. A user-defined value can contain one or more alphanumeric characters or project-file macro names. Some of these properties can take only one user-defined value, but others can take a semicolon-delimited list of multiple values.

To specify a user-defined value for a property, or a list if the property can take multiple user-defined values, in the column to the right of the property name, perform one of the following actions:

- Type the value or the list of values.

- Choose the drop-down arrow. If **Edit** is available, choose it and then in the text box, type the value or list of values. An alternate way to specify a list is to type each value on a separate line in the text box. On the property page, the values will be displayed as a semicolon-delimited list.

   To insert a project-file macro as a value, choose **Macros** and then double-click the macro name.

- Choose the drop-down arrow. If **Browse** is available, choose it and then select one or more values.

For a multi-valued property, the **inherit from parent or project defaults** option is available when you choose the drop-down arrow in the column to the right of the property name and then choose **Edit**. By default, the option is selected.

Notice that a property page only displays the settings at the current level for a multi-valued property that inherits from another level. For example, if a file is selected in **Solution Explorer** and you select the C/C++ **Preprocessor Definitions** property, file-level definitions are displayed but inherited project-level definitions are not displayed. To view both current-level and inherited values, choose the drop-down arrow in the column to the right of the property name and then choose **Edit**. If you use the [Visual C++ project model](https://docs.microsoft.com/dotnet/api/microsoft.visualstudio.vcprojectengine), this behavior is also in effect for the objects on files and projects. That is, when you query for the values on a property at the file level, you will not get the values for that same property at the project level. You must explicitly get the values of the property at the project level. Also, some inherited values of a property may come from a style sheet, which is not accessible programmatically.

## In This Section

[Advanced, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](advanced-manifest-tool.md)

[Command Line Property Pages](command-line-property-pages.md)

[Custom Build Step Property Page: General](custom-build-step-property-page-general.md)

[Adding references](adding-references-in-visual-cpp-projects.md)

[General Property Page (File)](general-property-page-file.md)

[General Property Page (Project)](general-property-page-project.md)

[General, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](general-manifest-tool-configuration-properties.md)

[HLSL Property Pages](hlsl-property-pages.md)

[HLSL Property Pages: Advanced](hlsl-property-pages-advanced.md)

[HLSL Property Pages: General](hlsl-property-pages-general.md)

[HLSL Property Pages: Output Files](hlsl-property-pages-output-files.md)

[Input and Output, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](input-and-output-manifest-tool.md)

[Isolated COM, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](isolated-com-manifest-tool.md)

[Linker Property Pages](linker-property-pages.md)

[Managed Resources Property Page](managed-resources-property-page.md)

[Manifest Tool Property Pages](manifest-tool-property-pages.md)

[MIDL Property Pages](midl-property-pages.md)

[MIDL Property Pages: Advanced](midl-property-pages-advanced.md)

[MIDL Property Pages: General](midl-property-pages-general.md)

[MIDL Property Pages: Output](midl-property-pages-output.md)

[NMake Property Page](nmake-property-page.md)

[Resources Property Pages](resources-property-pages.md)

[VC++ Directories Property Page](vcpp-directories-property-page.md)

[Web References Property Page](web-references-property-page.md)

[XML Data Generator Tool Property Page](xml-data-generator-tool-property-page.md)

[XML Document Generator Tool Property Pages](xml-document-generator-tool-property-pages.md)

## See also

[How to: Create and Remove Project Dependencies](/visualstudio/ide/how-to-create-and-remove-project-dependencies)<br>
[How to: Create and Edit Configurations](/visualstudio/ide/how-to-create-and-edit-configurations)
