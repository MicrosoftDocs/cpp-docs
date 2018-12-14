---
title: "Property inheritance in Visual Studio projects - C++"
ms.date: "12/10/2018"
helpviewer_keywords: ["Visual C++ projects, property inheritance"]
---

# Property inheritance in Visual Studio projects

The Visual Studio project system is based on MSBuild, which defines file formats and rules for building projects of any kind. MSBuild manages much of the complexity of building for multiple configurations and platforms, but you need to understand a little bit about how it works. This is especially important if you want to define custom configurations or create reusable sets of properties that you can share and import into multiple projects.

## The .vcxproj file, .props files and .targets files

Project properties are stored either directly in the project file (*.vcxproj) or in other .targets or .props files that the project file imports and which supply default values. For Visual Studio 2015, these files are located in **\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\V140**. For Visual Studio 2017, these files are located in **\\Program Files (x86)\\Microsoft Visual Studio\\2017\\_edition_\\Common7\\IDE\\VC\\VCTargets**, where _edition_ is the Visual Studio edition installed. Properties are also stored in any custom .props files that you might add to your own project. We highly recommend that you NOT edit those files manually, and instead use the property pages in the IDE to modify all properties, especially those that participate in inheritance, unless you have a very good understanding of MSBuild.

As shown earlier, the same property for the same configuration may be assigned a different value in these different files. When you build a project, the MSBuild engine evaluates the project file and all the imported files in a well-defined order (described below). As each file is evaluated, any property values defined in that file will override the existing values. Any values that are not specified are inherited from files that were evaluated earlier. Therefore, when you set a property with property pages, it is also important to pay attention to where you set it. If you set a property to "X" in a .props file, but the property is set to "Y" in the project file, then the project will build with the property set to "Y". If the same property is set to "Z" on a project item, such as a .cpp file, then the MSBuild engine will use the "Z" value. 

Here's the basic inheritance tree:

1. Default settings from the MSBuild CPP Toolset (..\Program Files\MSBuild\Microsoft.Cpp\v4.0\Microsoft.Cpp.Default.props, which is imported by the .vcxproj file.)

2. Property sheets

3. .vcxproj file. (Can override the default and property sheet settings.)

4. Items metadata

> [!TIP]
> On a property page, a property in `bold` is defined in the current context. A property in normal font is inherited.

## View an expanded project file with all imported values

Sometimes it's useful to view the expanded file to determine how a given property value is inherited. To view the expanded version, enter the following command at a Visual Studio command prompt. (Change the placeholder file names to the one you want to use.)

**msbuild /pp:** *temp* **.txt** *myapp* **.vcxproj**

Expanded project files can be large and difficult to understand unless you are familiar with MSBuild. Here's the basic structure of a project file:

1. Fundamental project properties, which are not exposed in the IDE.

2. Import of Microsoft.cpp.default.props, which defines some basic, toolset-independent properties.

3. Global Configuration properties (exposed as **PlatformToolset** and **Project** default properties on the **Configuration General** page. These properties determine which toolset and intrinsic property sheets are imported in Microsoft.cpp.props in the next step.

4. Import of Microsoft.cpp.props, which sets most of the project defaults.

5. Import of all property sheets, including .user files. These property sheets can override everything except the **PlatformToolset** and **Project** default properties.

6. The remainder of the project configuration properties. These values can override what was set in the property sheets.

7. Items (files) together with their metadata. These are always the last word in MSBuild evaluation rules, even if they occur before other properties and imports.

For more information, see [MSBuild Properties](/visualstudio/msbuild/msbuild-properties).

## Build configurations

A configuration is just an arbitrary group of properties that are given a name. Visual Studio provides Debug and Release configurations and each sets various properties appropriately for a debug build or release build. You can use the **Configuration Manager** to define custom configurations as a convenient way to group properties for a specific flavor of build. 

To get a better idea of build configurations, open **Property Manager** by choosing **View &#124;  Property Manager** or **View &#124; Other Windows &#124; Property Manager** depending on your settings. **Property Manager** has nodes for each configuration/platform pair in the project. Under each of these nodes are nodes for property sheets (.props files) that set some specific properties for that configuration.

![Property Manager](media/property-manager.png "Property Manager")

If you go to the General pane in the Property Pages and set the Character Set property to "Not Set" instead of "Use Unicode" and click **OK**,  Property Manager will show no **Unicode Support** property sheet for the current configuration, but it will still be there for other configurations.

For more information about Property Manager and property sheets, see [Creating reusable property configurations](create-reusable-property-configurations.md).

> [!TIP]
> The .user file is a legacy feature and we recommend that you delete it in order to keep properties correctly grouped according to configuration/platform.



