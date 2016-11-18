---
title: "Working with Project Properties | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "project properties [C++], modifying"
  - "properties [C++]"
  - "Visual C++ projects, properties"
  - "projects [C++], properties"
ms.assetid: 9b0d6f8b-7d4e-4e61-aa75-7d14944816cd
caps.latest.revision: 45
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Working with Project Properties
In the IDE, all information that is needed to build a project is exposed as              *properties*. This information includes the application name, extension (such as DLL, LIB, EXE), compiler options, linker options, debugger settings, custom build steps, and many other things. You use              *property pages* (             **Project &#124; Properties**) to view and modify these properties.  
  
 When you create a project, the system assigns values for various properties. The defaults vary somewhat depending on the kind of project and what options you choose in the app wizard. For example, an ATL project has properties related to MIDL files, but these are absent in a basic console application.   The default properties are shown in the General pane in the Property Pages:  
  
 ![Visual C&#43;&#43; Project Defaults](../ide/media/visual-c---project-defaults.png "Visual C++ Project Defaults")  
  
 Some properties, such as the application name, apply to all build variations, regardless of the target platform or whether it is a debug or release build. But most properties are configuration-dependent.   This is because the compiler has to know what specific platform the program will run on and what specific compiler options to use in order to generate the correct code. Therefore, when you set a property, it is important to pay attention to which configuration and platform the new value should apply to.  Should it apply only to Debug  Win32 builds, or should it also apply to Debug  ARM and Debug  x64? For example, the              **Optimization** property, by default, is set to              **Maximize Speed (/O2)** in a Release configuration, but is disabled in the Debug configuration.  
  
 The property pages are designed so that you can always see, and if necessary modify, which configuration and platform a property value should apply to. The following illustration shows the property pages with the configuration and platform information in the list boxes at the top. When the Optimization property is set here, it will apply only to Debug Win32 builds, which happens to be the active configuration, as shown by the red arrows.  
  
 ![Visual C&#43;&#43; Property Pages showing active configuration](../ide/media/visual-c---property-pages-showing-active-configuration.png "Visual C++ Property Pages showing active configuration")  
  
 The following illustration shows the same project property page, but the configuration has been changed to Release. Note the different value for the Optimization property. Also note that the active configuration is still Debug. You can set properties for any configuration here; it doesn't have to be the active one.  
  
 ![Visual C&#43;&#43; Property Pages showing release config](../ide/media/visual-c---property-pages-showing-release-config.png "Visual C++ Property Pages showing release config")  
  
 The project system itself is based on MSBuild, which defines file formats and rules for building projects of any kind. MSBuild manages much of the complexity of building for multiple configurations and platforms, but you need to understand a little bit about how it works. This is especially important if you want to define custom configurations or create reusable sets of properties that you can share and import into multiple projects.  
  
 Project properties are stored either directly in the project file (*.vcxproj) or in other .xml or .props files that the project file imports and which supply default values. As shown earlier, the same property for the same configuration may be assigned a different value in different files. When you build a project, the MSBuild engine evaluates the project file and all the imported files in a well-defined order (described below). As each file is evaluated, any property values defined in that file will override the existing values.  Any values that are not specified are inherited from files that were evaluated earlier.  Therefore, when you set a property with property pages, it is also important to pay attention to where you set it. If you set a property to "X" in a .props file, but the property is set to "Y" in the project file, then the project will build with the property set to "Y". If the same property is set to "Z" on a project item, such as a .cpp file, then the MSBuild engine will use the "Z" value. For more information, see              [Property inheritance](#bkmkPropertyInheritance) later in this article.  
  
## Build configurations  
 A configuration is just an arbitrary group of properties that are given a name. Visual Studio provides Debug and Release configurations and each sets various properties appropriately for a debug build or release build. You can use the                  **Configuration Manager** to define custom configurations as a convenient way to group properties for a specific flavor of build.  The Property Manager is used for advanced work with properties, but we introduce it here because it helps visualize property configurations. You access it from                  **View &#124;  Property Manager** or                  **View &#124; Other Windows &#124; Property Manager** depending on your settings. It has nodes for each configuration/platform pair in the project. Under each of these nodes are nodes for property sheets (.props files) that set some specific properties for that configuration.  
  
 ![Property Manager](../ide/media/property-manager.png "Property Manager")  
  
 If you go to the General pane in the Property Pages (see the illustration above) and set the Character Set property to "Not Set" instead of "Use Unicode" and click                  **OK**,  Property Manager will  show no                  **Unicode Support** property sheet for the current configuration, but it will still be there for other configurations.  
  
 For more information about Property Manager and property sheets, see                  [Creating reusable property configurations](#bkmkPropertySheets) later in this article.  
  
> [!TIP]
>  The .user file is a legacy feature and we recommend that you delete it in order to keep properties correctly grouped according to configuration/platform.  
  
## Target platforms  
 *Target platform* refers to the kind of device and/or operating system that the executable will run on. You can build a project for more than one platform. The available target platforms for C++ projects depend on the kind of project; they include but are not limited to Win32, x64, ARM, Android, and iOS.     The                   **x86** target platform that you might see in                  **Configuration Manager** is identical to                  **Win32** in native C++ projects. Win32 means 32-bit Windows and                  **x64** means 64-bit Windows.  For more information about these two platforms, see                  [Running 32-bit applications](https://msdn.microsoft.com/library/windows/desktop/aa384249\(v=vs.85\).aspx).  
  
 The                  **Any CPU** target platform value that you might see in                  **Configuration Manager** has no effect on native C++ projects; it is relevant for C++/CLI and other .NET project types. For more information, see                  [/CLRIMAGETYPE (Specify Type of CLR Image)](../build/reference/clrimagetype-specify-type-of-clr-image.md).  
  
## Property pages  
 As stated earlier, the Visual C++ project system is based on                  [MSBuild](/visualstudio/msbuild/msbuild-properties) and the values are stored in the XML project file, default .props and .targets files that (for Visual Studio 2015) are located in                     **\<drive>\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\V140** and in custom .props files that you might add. We highly recommend that you use NOT edit those files manually, and instead use the property pages in the IDE  to modify all properties, especially those that participate in inheritance, unless you have a very good understanding of MSBuild.  
  
 The following illustration shows the property pages for a Visual C++ project. In the left pane, the                  **VC++ Directories***rule* is selected, and the right pane lists the properties that are associated with that rule. The                  `$(...)` values are unfortunately called                  *macros*. These are                  *not* C/C++ macros but simply compile-time constants. Macros are discussed in the                  [Property page macros](#bkmkPropertiesVersusMacros) section later in this article.)  
  
 ![Project property pages](../ide/media/project_property_pages_vc.png "Project_Property_Pages_VC")  
  
> [!WARNING]
>  The                      **Common Properties** configurations in earlier versions of Visual Studio have been removed. To add a reference to a project, you now use the                      **Add Reference** dialog in the same way as for managed languages. See                      [Managing references in a project](/visualstudio/ide/managing-references-in-a-project).  
  
#### To set a property for a project  
  
1.  For most scenarios, you can set properties at the project level without creating a custom property sheet. On the main menu, choose                                  **Project &#124; Properties**, or right-click on the project node in                                  **Solution Explorer** and choose                                  **Properties**.  
  
2.  Use the                                  **Configuration** and                                  **Platform** list boxes at the top of the dialog box to specify which property groups should apply your changes. In many cases                                  **All Platforms** and                                  **All Configurations** are the right choice. To set properties for just some configurations, multi-select them in                                  **Property Manager**, and then open the shortcut menu and choose                                  **Properties**.  
  
 The                  **Property Pages** dialog box shows only the property pages that apply to the current project. For example, if the project does not have an .idl file, the MIDL property page is not displayed.  
  
 When you highlight a property in a Property Page, you can press                  **F1** to go to the reference topic for more information about the corresponding compiler or linker switch.  
  
 You can find more information about each Property Page in these topics:  
  
-   [General Property Page (Project)](../ide/general-property-page-project.md)  
  
-   [General Property Page (File)](../ide/general-property-page-file.md)  
  
-   [Command Line Property Pages](../ide/command-line-property-pages.md)  
  
-   [Project Settings for a C++ Debug Configuration](/visualstudio/debugger/project-settings-for-a-cpp-debug-configuration)  
  
-   [NMake Property Page](../ide/nmake-property-page.md)  
  
-   [Linker Property Pages](../ide/linker-property-pages.md)  
  
-   [Resources Property Pages](../ide/resources-property-pages.md)  
  
-   [MIDL Property Pages](../ide/midl-property-pages.md)  
  
-   [Web References Property Page](../ide/web-references-property-page.md)  
  
-   [XML Data Generator Tool Property Page](../ide/xml-data-generator-tool-property-page.md)  
  
## To quickly browse and search all properties  
 The                  **All Options** property page (under the                  **Configuration Properties &#124; C/C++** node in the                  **Property Pages** dialog box) provides a quick way to browse and search the properties that are available in the current context. It has a special search box and a simple syntax to help you filter results:  
  
 No prefix:  
 Search in property names only (case-insensitive substring).  
  
 '/' or '-' :  
 Search only in compiler switches (case-insensitive prefix)  
  
 v:  
 Search only in values (case-insensitive substring).  
  
##  <a name="bkmkPropertiesVersusMacros"></a> Property page macros  
 A                  *macro* is a compile-time constant that can refer to a value that is defined by Visual Studio or the MSBuild system, or to a user-defined value. By using macros instead of hard-coded values such as directory paths, you can more easily share property settings between machines and between versions of Visual Studio, and you can better ensure that your project settings participate correctly in property inheritance. You can use the Property Editor to view the values of all available macros.  
  
### Predefined macros  
 global macros  
 Applies to all items in a project configuration. Has the syntax                                  `$(name)`. An example of a global macro is                                  `$(VCInstallDir)`, which stores the root directory of your Visual Studio installation. A global macro corresponds to a                                  `PropertyGroup` in MSBuild.  
  
 item macros  
 Has the syntax                                  `%(name)`. For a file, an item macro applies only to that file—for example, you can use                                  `%(AdditionalIncludeDirectories)` to specify include directories that apply only to a particular file. This kind of item macro corresponds to an                                  `ItemGroup` metadata in MSBuild. When it's used in the context of a project configuration, an item macro applies to all files of a certain type. For example, the C/C++                                  **Preprocessor Definitions** configuration property can take a                                  `%(PreprocessorDefinitions)` item macro that applies to all .cpp files in the project. This kind of item macro corresponds to an                                  `ItemDefinitionGroup` metadata in MSBuild. For more information, see                                  [Item Definitions](/visualstudio/msbuild/item-definitions).  
  
### User-defined macros  
 You can create                          *user-defined macros* to use as variables in project builds. For example, you could create a user-defined macro that provides a value to a custom build step or a custom build tool. A user-defined macro is a name/value pair. In a project file, use the                          **$(***name***)** notation to access the value.  
  
 A user-defined macro is stored in a property sheet. If your project does not already contain a property sheet, you can create one by following the steps under                          [Creating reusable property configurations](#bkmkPropertySheets).  
  
##### To create a user-defined macro  
  
1.  In the                                          **Property Manager** window (on the menu bar, choose                                          **View**,                                          **Property Manager**), open the shortcut menu for a property sheet (its name ends in .user) and then choose Properties. The                                          **Property Pages** dialog box for that property sheet opens.  
  
2.  In the left pane of the dialog box, select                                          **User Macros**. In the right pane, choose the                                          **Add Macro** button to open the                                          **Add User Macro** dialog box.  
  
3.  In the dialog box, specify a name and value for the macro. Optionally, select the                                          **Set this macro as an environment variable in the build environment** check box.  
  
## Property Editor  
 You can use the Property Editor to modify certain string properties and select macros as values. To access the Property Editor, select a property on a property page and then choose the down arrow button on the right. If the drop-down list contains                  **\<Edit>**, then you can choose it to display the Property Editor for that property.  
  
 ![Property&#95;Editor&#95;Dropdown](../ide/media/property_editor_dropdown.png "Property_Editor_Dropdown")  
  
 In the Property Editor, you can choose the                  **Macros** button to view the available macros and their current values. The following illustration shows the Property Editor for the                  **Additional Include Directories** property after the                  **Macros** button was chosen. When the                  **Inherit from parent or project defaults** check box is selected and you add a new value, it is appended to any values that are currently being inherited. If you clear the check box, your new value replaces the inherited values. In most cases, leave the check box selected.  
  
 ![Property editor, Visual C&#43;&#43;](../ide/media/propertyeditorvc.png "PropertyEditorVC")  
  
##  <a name="bkmkPropertySheets"></a> Creating reusable property configurations  
 Although you can set "global" properties on a per-user, per-computer basis, we no longer recommend it. Instead, we recommend that you use                  **Property Manager** to create a                  *property sheet* to store the settings for each kind of project that you want to be able to reuse or share with others. Property sheets also make it less likely that property settings for other project types will be inadvertently changed. Property sheets are discussed in more detail                  [Creating reusable property configurations](#bkmkPropertySheets).  
  
> [!IMPORTANT]
>  **.user files and why they are problematic**  
>   
>  Past versions of Visual Studio used global property sheets that had a .user file name extension and were located in the \<userprofile>\AppData\Local\Microsoft\MSBuild\v4.0\ folder. We no longer recommend these files because they set properties for project configurations on a per-user, per-computer basis. Such "global" settings can interfere with builds, especially when you are targeting more than one platform on your build computer. For example, if you have both an MFC project and Windows Phone project, the .user properties would be invalid for one of them. Reusable property sheets are more flexible and more robust.  
>   
>  Although .user files are still installed by Visual Studio and participate in property inheritance, they are empty by default. The best practice is to delete the reference to them in                      **Property Manager** to ensure that your projects operate independently of any per-user, per-computer settings This is important to ensure correct behavior in a SCC (source code control) environment.  
  
 To display                  **Property Manager**, on the menu bar, choose                  **View**,                  **Other Windows**,                  **Property Manager**.  
  
 If you have a common, frequently used set of properties that you want to apply to multiple projects, you can use                  **Property Manager** to capture them in a reusable                  *property sheet* file, which by convention has a .props file name extension. You can apply the sheet (or sheets) to new projects so that you don't have to set its properties from scratch. To access                  **Property Manager**, on the menu bar, choose                  **View**,                  **Property Manager**.  
  
 ![Property Manager shortcut menu](../ide/media/sharingnew.png "SharingNew")  
  
 Under each configuration node, you see nodes for each property sheet that applies to that configuration. The system adds property sheets that set values based on options you choose in the app wizard when you create the project. Right-click any node and choose Properties to see the properties that apply to that node.  All the property sheets are imported automatically into the project's "master" property sheet (ms.cpp.props) and are evaluated in the order they appear in Property Manager. You can move them to change the evaluation order. Property sheets that are evaluated later will override the values in previously-evaluated sheets.  
  
 If you choose                  **Add New Project Property Sheet** and then select, for example, the MyProps.props property sheet, a property page dialog box appears. Notice that it applies to the MyProps property sheet; any changes you make are written to the sheet, not to the project file (.vcxproj).  
  
 Properties in a property sheet are overridden if the same property is set directly in the .vcxproj file.  
  
 You can import a property sheet as often as required. Multiple projects in a solution can inherit settings from the same property sheet, and a project can have multiple sheets. A property sheet itself can inherit settings from another property sheet.  
  
 You can also create one property sheet for multiple configurations. To do this, create a property sheet for each configuration, open the shortcut menu for one of them, choose                  **Add Existing Property Sheet**, and then add the other sheets. However, if you use one common property sheet, be aware that when you set a property, it gets set for all configurations that the sheet applies to, and that the IDE doesn’t show which projects or other property sheets are inheriting from a given property sheet.  
  
 In large solutions that will have many projects, it can be useful to create a property sheet at the solution level. When you add a project to the solution, use                  **Property Manager** to add that property sheet to the project. If required at the project level, you can add a new property sheet to set project-specific values.  
  
> [!IMPORTANT]
>  A .props file by default does not participate in source control because it isn’t created as a project item. You can manually add the file as a solution item if you want to include it in source control.  
  
#### To create a property sheet  
  
1.  On the menu bar, choose                                  **View**,                                  **Property Manager**. The                                  **Property Manager** opens.  
  
2.  To define the scope of the property sheet, select the item to which it applies. This can be a particular configuration, or another property sheet. Open the shortcut menu for this item and then choose                                  **Add New Project Property Sheet**. Specify a name and location.  
  
3.  In                                  **Property Manager**, open the new property sheet and then set the properties you want to include.  
  
##  <a name="bkmkPropertyInheritance"></a> Property inheritance  
 Project properties are layered. Each layer inherits the values of the previous layer, but an inherited value can be overridden by setting the property explicitly. Here's the basic inheritance tree:  
  
1.  Default settings from the MSBuild CPP Toolset (..\Program Files\MSBuild\Microsoft.Cpp\v4.0\Microsoft.Cpp.Default.props, which is imported by the .vcxproj file.)  
  
2.  Property sheets  
  
3.  .vcxproj file. (Can override the default and property sheet settings.)  
  
4.  Items metadata  
  
> [!TIP]
>  On a property page, a property in                      `bold` is defined in the current context. A property in normal font is inherited.  
  
 A project file (.vcxproj) imports other property sheets at build time. After all property sheets are imported, the project file is evaluated and the last definition of any property value is the one that's used. Sometimes it's useful to view the expanded file to determine how a given property value is inherited. To view the expanded version, enter the following command at a Visual Studio command prompt. (Change the placeholder file names to the one you want to use.)  
  
 **msbuild /pp:** *temp* **.txt** *myapp* **.vcxproj**  
  
 Expanded project files can be large and difficult to understand unless you are familiar with MSBuild. Here's the basic structure of a project file:  
  
1.  Fundamental project properties, which are not exposed in the IDE.  
  
2.  Import of Microsoft.cpp.default.props, which defines some basic, toolset-independent properties.  
  
3.  Global Configuration properties (exposed as                          **PlatformToolset** and                          **Project** default properties on the                          **Configuration General** page. These properties determine which toolset and intrinsic property sheets are imported in Microsoft.cpp.props in the next step.  
  
4.  Import of Microsoft.cpp.props, which sets most of the project defaults.  
  
5.  Import of all property sheets, including .user files. These property sheets can override everything except the                          **PlatformToolset** and                          **Project** default properties.  
  
6.  The remainder of the project configuration properties. These values can override what was set in the property sheets.  
  
7.  Items (files) together with their metadata. These are always the last word in MSBuild evaluation rules, even if they occur before other properties and imports.  
  
 For more information, see                  [MSBuild Properties](/visualstudio/msbuild/msbuild-properties).  
  
## Adding an include directory to the set of default directories  
 When you add an include directory to a project, it is important not to override all the default directories. The correct way to add a directory is to append the new path, for example “C:\MyNewIncludeDir\”, and then to Append the                  **$(IncludePath)** macro to the property value.  
  
## Setting environment variables for a build  
 The Visual C++ compiler (cl.exe) recognizes certain environment variables, specifically LIB, LIBPATH, PATH, and INCLUDE. When you build with the IDE, the properties that are set in the                  [VC++ Directories Property Page](../ide/vcpp-directories-property-page.md) property page are used to set those environment variables. If LIB, LIBPATH, and INCLUDE values have already been set, for example by a Developer Command Prompt, they are replaced with the values of the corresponding MSBuild properties. The build then prepends the value of the VC++ Directories executable directories property to PATH. You can set a user-defined environment variable by created a user-defined macro and then checking the box that says                  **Set this macro as an environment variable in the build environment**.  
  
## Setting environment variables for a debugging session  
 In the left pane of the project's                  **Property Pages** dialog box, expand                  **Configuration Properties** and then select                  **Debugging**.  
  
 In the right pane, modify the                  **Environment** or                  **Merge Environment** project settings and then choose the                  **OK** button.  
  
## See Also  
 [Creating and Managing Visual C++ Projects](../ide/creating-and-managing-visual-cpp-projects.md)