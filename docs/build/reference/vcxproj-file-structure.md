---
title: ".vcxproj and .props file structure"
description: "How the C++ native MSBuild project system .vcxproj and .props files store project information."
ms.date: 11/14/2022
helpviewer_keywords: [".vcxproj file structure"]
ms.assetid: 14d0c552-29db-480e-80c1-7ea89d6d8e9c
---
# `.vcxproj` and `.props` file structure

[MSBuild](../msbuild-visual-cpp.md) is the default project system in Visual Studio; when you choose **File** > **New Project** in Visual C++ you're creating an MSBuild project whose settings are stored in an XML project file that has the extension *`.vcxproj`*. The project file may also import *`.props`* files and *`.targets`* files where settings can be stored.

If you intend to maintain your project properties in the IDE, we recommend you only create and modify your *`.vcxproj`* projects in the IDE, and avoid manual edits to the files. In most cases, you never need to manually edit the project file. Manual edits may break the project connections required to modify project settings in the Visual Studio property pages, and can cause build errors that are difficult to debug and repair. For more information about using the property pages, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

At scale, managing many individual projects in the IDE becomes tedious and error-prone. It's hard to maintain consistency or enforce standardization across tens or hundreds of projects. In these cases, it's worthwhile to edit your project files to use customized *`.props`* or *`.targets`* files for common properties across many projects. You may also use these files when you require customizations that aren't possible in the IDE. Handy places to insert customizations are the *`Directory.Build.props`* and *`Directory.Build.targets`* files, which are automatically imported in all MSBuild-based projects.

In some cases, customized *`.props`* or *`.targets`* files alone may not be sufficient for your project management needs. You may still need to modify *`.vcxproj`* project files or property sheets manually. Manual editing requires a good understanding of MSBuild, and must follow the guidelines in this article. In order for the IDE to load and update *`.vcxproj`* files automatically, these files have several restrictions that don't apply to other MSBuild project files. Mistakes can cause the IDE to crash or behave in unexpected ways.

For manual editing scenarios, this article contains basic information about the structure of *`.vcxproj`* and related files.

## Important considerations

If you choose to manually edit a *`.vcxproj`* file, be aware of these facts:

- The structure of the file must follow a prescribed form, which is described in this article.

- The Visual Studio C++ project system currently doesn't support wildcards or lists directly in project items. For example, these forms aren't supported:

   ```xml
   <ItemGroup>
     <None Include="*.txt"/>
     <ClCompile Include="a.cpp;b.cpp"/>
   </ItemGroup>
   ```

   For more information on wildcard support in projects and possible workarounds, see [`.vcxproj` files and wildcards](vcxproj-files-and-wildcards.md).

- The Visual Studio C++ project system currently doesn't support macros in project item paths. For example, this form isn't supported:

   ```xml
   <ItemGroup>
     <ClCompile Include="$(IntDir)\generated.cpp"/>
   </ItemGroup>
   ```

   "Not supported" means that macros aren't guaranteed to work for all operations in the IDE. Macros that don't change their value in different configurations should work, but might not be preserved if an item is moved to a different filter or project. Macros that change their value for different configurations will cause problems. The IDE doesn't expect project item paths to be different for different project configurations.

- To add, remove, or modify project properties correctly when you edit them in the **Project Properties** dialog, the file must contain separate groups for each project configuration. The conditions must be in this form:

   ```xml
   Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'"
   ```

- Each property must be specified in the group with its correct label, as specified in the property rule file. For more information, see [Property page xml rule files](property-page-xml-files.md).

## `.vcxproj` file elements

You can inspect the contents of a *`.vcxproj`* file by using any text or XML editor. You can view it in Visual Studio by right-clicking on the project in Solution Explorer, choosing **Unload project** and then choosing **Edit Foo.vcxproj**.

The first thing to notice is that the top-level elements appear in a particular order. For example:

- Most of the property groups and item definition groups occur after the import for Microsoft.Cpp.Default.props.

- All targets are imported at the end of the file.

- There are multiple property groups, each with a unique label, and they occur in a particular order.

The order of elements in the project file is vitally important, because MSBuild is based on a sequential evaluation model.  If your project file, including all the imported *`.props`* and *`.targets`* files, consists of multiple definitions of a property, the last definition overrides the preceding ones. In the following example, the value "xyz" will be set during compilation because the MSBUild engine encounters it last during its evaluation.

```xml
  <MyProperty>abc</MyProperty>
  <MyProperty>xyz</MyProperty>
```

The following snippet shows a minimal *`.vcxproj`* file. Any *`.vcxproj`* file generated by Visual Studio will contain these top-level MSBuild elements. And, they'll appear in this order, although they may contain multiple copies of each such top-level element. Any `Label` attributes are arbitrary tags that are only used by Visual Studio as signposts for editing; they have no other function.

```xml
<Project DefaultTargets="Build" ToolsVersion="4.0" xmlns='http://schemas.microsoft.com/developer/msbuild/2003'>
  <ItemGroup Label="ProjectConfigurations" />
  <PropertyGroup Label="Globals" />
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
  <PropertyGroup Label="Configuration" />
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
  <ImportGroup Label="ExtensionSettings" />
  <ImportGroup Label="PropertySheets" />
  <PropertyGroup Label="UserMacros" />
  <PropertyGroup />
  <ItemDefinitionGroup />
  <ItemGroup />
  <Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
  <ImportGroup Label="ExtensionTargets" />
</Project>
```

The following sections describe the purpose of each of these elements and why they're ordered this way:

### Project element

```xml
<Project DefaultTargets="Build" ToolsVersion="4.0" xmlns='http://schemas.microsoft.com/developer/msbuild/2003' >
```

`Project` is the root node. It specifies the MSBuild version to use and also the default target to execute when this file gets passed to MSBuild.exe.

### ProjectConfigurations ItemGroup element

```xml
<ItemGroup Label="ProjectConfigurations" />
```

`ProjectConfigurations` contains the project configuration description. Examples are Debug|Win32, Release|Win32, Debug|ARM and so on. Many project settings are specific to a given configuration. For example, you'll probably want to set optimization properties for a release build but not a debug build.

The `ProjectConfigurations` item group isn't used at build time. The Visual Studio IDE requires it to load the project. This item group can be moved to a *`.props`* file and imported into the *`.vcxproj`* file. However, in that case, if you need to add or remove configurations, you must manually edit the *`.props`* file; you can't use the IDE.

### ProjectConfiguration elements

The following snippet shows a project configuration. In this example, 'Debug|x64' is the configuration name. The project configuration name must be in the format `$(Configuration)|$(Platform)`. A `ProjectConfiguration` node can have two properties: `Configuration` and `Platform`. Those properties get set automatically with the values specified here when the configuration is active.

```xml
<ProjectConfiguration Include="Debug|x64">
  <Configuration>Debug</Configuration>
  <Platform>x64</Platform>
</ProjectConfiguration>
```

The IDE expects to find a project configuration for any combination of `Configuration` and `Platform` values used in all `ProjectConfiguration` items. Often, it means that a project might have meaningless project configurations to fulfill this requirement. For instance, if a project has these configurations:

- Debug|Win32

- Retail|Win32

- Special 32-bit Optimization|Win32

then it must also have these configurations, even though "Special 32-bit Optimization" is meaningless for x64:

- Debug|x64

- Retail|x64

- Special 32-bit Optimization|x64

You can disable the build and deploy commands for any configuration in the **Solution Configuration Manager**.

### Globals PropertyGroup element

```xml
<PropertyGroup Label="Globals" />
```

`Globals` contains project level settings such as `ProjectGuid`, `RootNamespace`, and `ApplicationType` or `ApplicationTypeRevision`. The last two often define the target OS. A project can only target a single OS because currently, references and project items can't have conditions. These properties are typically not overridden elsewhere in the project file. This group isn't configuration-dependent, and typically only one `Globals` group exists in the project file.

### Microsoft.Cpp.default.props Import element

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.default.props" />
```

The **Microsoft.Cpp.default.props** property sheet comes with Visual Studio and can't be modified. It contains the default settings for the project. The defaults might vary depending on the ApplicationType.

### Configuration PropertyGroup elements

```xml
<PropertyGroup Label="Configuration" />
```

A `Configuration` property group has an attached configuration condition (such as `Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'"`) and comes in multiple copies, one per configuration. This property group hosts the properties that are set for a specific configuration. Configuration properties include PlatformToolset and also control the inclusion of system property sheets in **Microsoft.Cpp.props**. For example, if you define the property `<CharacterSet>Unicode</CharacterSet>`, then the system property sheet **microsoft.Cpp.unicodesupport.props** will be included. If you inspect **Microsoft.Cpp.props**, you'll see the line:
`<Import Condition="'$(CharacterSet)' == 'Unicode'" Project="$(VCTargetsPath)\microsoft.Cpp.unicodesupport.props" />`.

### Microsoft.Cpp.props Import element

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />
```

The **Microsoft.Cpp.props** property sheet (directly or via imports) defines the default values for many tool-specific properties. Examples include the compiler's Optimization and Warning Level properties, the MIDL tool's TypeLibraryName property, and so on. It also imports various system property sheets based on which configuration properties are defined in the property group immediately before it.

### ExtensionSettings ImportGroup element

```xml
<ImportGroup Label="ExtensionSettings" />
```

The `ExtensionSettings` group contains imports for the property sheets that are part of Build Customizations. A Build Customization is defined by up to three files: a *`.targets`* file, a *`.props`* file, and an *`.xml`* file. This import group contains the imports for the *`.props`* file.

### PropertySheets ImportGroup elements

```xml
<ImportGroup Label="PropertySheets" />
```

The `PropertySheets` group contains the imports for user property sheets. These imports are the property sheets that you add through the Property Manager view in Visual Studio. The order in which these imports are listed is important and is reflected in the Property Manager. The project file normally contains multiple instances of this kind of import group, one for each project configuration.

### UserMacros PropertyGroup element

```xml
<PropertyGroup Label="UserMacros" />
```

`UserMacros` contains properties you create as variables that are used to customize your build process. For example, you can define a user macro to define your custom output path as $(CustomOutputPath) and use it to define other variables. This property group houses such properties. In Visual Studio, this group isn't populated in the project file because Visual C++ doesn't support user macros for configurations. User macros are supported in property sheets.

### Per-configuration PropertyGroup elements

```xml
<PropertyGroup />
```

There are multiple instances of this property group, one per configuration for all project configurations. Each property group must have one configuration condition attached. If any configurations are missing, the **Project Properties** dialog won't work correctly. Unlike the property groups listed before, this one doesn't have a label. This group contains project configuration-level settings. These settings apply to all files that are part of the specified item group. Build customization item definition metadata is initialized here.

This PropertyGroup must come after `<Import Project="$(VCTargetsPath)\Microsoft.Cpp.props" />` and there must be no other PropertyGroup without a Label before it (otherwise Project Properties editing won't work correctly).

### Per-configuration ItemDefinitionGroup elements

```xml
<ItemDefinitionGroup />
```

Contains item definitions. These definitions must follow the same conditions rules as the label-less per-configuration `PropertyGroup` elements.

### ItemGroup elements

```xml
<ItemGroup />
```

`ItemGroup` elements contain the items (source files, and so on) in the project. Conditions aren't supported for Project items (that is, item types that are treated as project items by rules definitions).

The metadata should have configuration conditions for each configuration, even if they're all the same. For example:

```xml
<ItemGroup>
  <ClCompile Include="stdafx.cpp">
    <TreatWarningAsError Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">true</TreatWarningAsError>
    <TreatWarningAsError Condition="'$(Configuration)|$(Platform)'=='Debug|x64'">true</TreatWarningAsError>
  </ClCompile>
</ItemGroup>
```

The Visual Studio C++ project system currently doesn't support wildcards in project items.

```xml
<ItemGroup>
  <ClCompile Include="*.cpp"> <!--Error-->
</ItemGroup>
```

The Visual Studio C++ project system currently doesn't support macros in project items.

```xml
<ItemGroup>
  <ClCompile Include="$(IntDir)\generated.cpp"> <!--not guaranteed to work in all scenarios-->
</ItemGroup>
```

References are specified in an ItemGroup, and they have these limitations:

- References don't support conditions.

- References metadata don't support conditions.

### Microsoft.Cpp.targets Import element

```xml
<Import Project="$(VCTargetsPath)\Microsoft.Cpp.targets" />
```

Defines (directly or through imports) C++ targets such as build, clean, and so on.

### ExtensionTargets ImportGroup element

```xml
<ImportGroup Label="ExtensionTargets" />
```

This group contains imports for the Build Customization target files.

## Consequences of incorrect ordering

The Visual Studio IDE depends on the project file having the ordering described previously. For example, when you define a property value in the property pages, the IDE will generally place the property definition in the property group with the empty label. This ordering ensures that default values brought in the system property sheets are overridden by user-defined values. Similarly, the target files are imported at the end since they consume the properties defined before, and since they generally don't define properties themselves. Likewise, user property sheets are imported after the system property sheets (included by *`Microsoft.Cpp.props`*). This order ensures that the user can override any defaults brought in by the system property sheets.

If a *`.vcxproj`* file doesn't follow this layout, the build results may not be what you expect. For example, if you mistakenly import a system property sheet after the property sheets defined by the user, the user settings get overridden by the system property sheets.

Even the IDE design time experience depends on some extent on correct ordering of elements. For example, if your *`.vcxproj`* file doesn't have the `PropertySheets` import group, the IDE might be unable to determine where to place a new property sheet that the user has created in **Property Manager**. It could result in a user sheet being overridden by a system sheet. Although the heuristic used by IDE can tolerate minor inconsistencies in the *`.vcxproj`* file layout, we strongly recommend you don't deviate from the structure shown earlier in this article.

## How the IDE uses element labels

In the IDE, when you set the **UseOfAtl** property in the general property page, it's written to the Configuration property group in the project file. The **TargetName** property in the same property page is written to the label-less per-configuration property group. Visual Studio looks at the property page's xml file for the information on where to write each property. For the **General** property page, assuming you have an English version of Visual Studio 2019 Enterprise Edition, that file is `%ProgramFiles(x86)%\Microsoft Visual Studio\2019\Enterprise\Common7\IDE\VC\VCTargets\1033\general.xml`. The property page XML rule file defines the static information about a Rule and all its properties. One such piece of information is the preferred position of a Rule property in the destination file (the file where its value will be written). The preferred position is specified by the Label attribute on the project file elements.

## Property Sheet layout

The following XML snippet is a minimal layout of a property sheet (.props) file. It's similar to a *`.vcxproj`* file, and the functionality of the *`.props`* elements can be inferred from the earlier discussion.

```xml
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ImportGroup Label="PropertySheets" />
  <PropertyGroup Label="UserMacros" />
  <PropertyGroup />
  <ItemDefinitionGroup />
  <ItemGroup />
</Project>
```

To make your own property sheet, copy one of the *`.props`* files in the *`VCTargets`* folder and modify it for your purposes. For Visual Studio 2019 Enterprise edition, the default *`VCTargets`* path is `%ProgramFiles%\Microsoft Visual Studio\2019\Enterprise\Common7\IDE\VC\VCTargets`.

## See also

[Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md)\
[Property Page XML Files](property-page-xml-files.md)\
[`.vcxproj` files and wildcards](vcxproj-files-and-wildcards.md)
