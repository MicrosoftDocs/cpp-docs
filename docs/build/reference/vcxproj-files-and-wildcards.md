---
title: ".vcxproj files and wildcards"
description: "How the C++ native MSBuild project system .vcxproj files handle wildcards."
ms.date: 09/30/2020
helpviewer_keywords: [".vcxproj file structure"]
ms.assetid: 14d0c552-29db-480e-80c1-7ea89d6d8e9c
---
# `.vcxproj` files and wildcards

The Visual Studio IDE doesn't support certain constructs in project items in *`.vcxproj`* files. These unsupported constructs include wildcards, semi-colon delimited lists, or MSBuild macros that expand to multiple files. The `.vcxproj` project system for C++ builds is more restrictive than MSBuild. Each project item is required to have its own MSBuild item. For more information on the `.vcxproj` file format, see [`.vcxproj` and `.props` file structure](vcxproj-file-structure.md).

These construct examples aren't supported by the IDE:

```xml
<ItemGroup>
  <None Include="*.txt">
  <ClCompile Include="a.cpp;b.cpp"/>
  <ClCompile Include="@(SomeItems)" />
</ItemGroup>
```

If a `.vcxproj` project file that includes these constructs gets loaded in the IDE, the project may seem to work at first. However, issues are likely as soon as the project is modified by Visual Studio and then saved on disk. You may experience random crashes and undefined behavior.

In Visual Studio 2019 version 16.7, when Visual Studio loads a `.vcxproj` project file, it automatically detects unsupported entries in project items. You'll see warnings in the Output window during solution load.

Visual Studio 2019 version 16.7 also adds read-only project support. Read-only support allows the IDE to use manually authored projects that don't have the additional limitations of IDE-editable projects.

If you have a `.vcxproj` file that uses one or more of the unsupported constructs, you can make it load without warnings in the IDE by using one of these options:

- List all items explicitly
- Mark your project as read-only
- Move wildcard items to a target body

## List all items explicitly

Currently, there's no way to make wildcard expansion items visible in the Solution Explorer window in a non-read-only project. Solution Explorer expects projects to list all items explicitly.

To make `.vcxproj` projects automatically expand wildcards in Visual Studio 2019 version 16.7 or later, set the `ReplaceWildcardsInProjectItems` property to `true`. We recommend you create a *`Directory.Build.props`* file in a root directory, and use this content:

```xml
<Project>
  <PropertyGroup>
    <ReplaceWildcardsInProjectItems>true</ReplaceWildcardsInProjectItems>
  </PropertyGroup>
</Project>
```

## Mark your project as read-only

In Visual Studio 2019 version 16.7 and later, you can mark projects as *read-only*. To mark your project read-only, add the following property to your *`.vcxproj`* file, or to any of the files it imports:

```xml
<PropertyGroup>
    <ReadOnlyProject>true</ReadOnlyProject>
</PropertyGroup>
```

The `<ReadOnlyProject>` setting prevents Visual Studio from editing and saving the project, so you can use any MSBuild constructs in it, including wildcards.

It's important to know that the project cache isn't available if Visual Studio detects wildcards in project items in the *`.vcxproj`* file or any of its imports. Solution load times in the IDE are much longer if you have lots of projects that use wildcards.

## Move wildcard items to a target body

You may want to use wildcards to gather resources, add generated sources, and so on. If you don't need them listed in the Solution Explorer window, you can use this procedure instead:

1. Change the name of the item group to add wildcards. For instance, instead of:

   ```xml
   <Image Include="*.bmp" />
   <ClCompile Include="*.cpp" />
   ```

   change it to:

   ```xml
   <_WildCardImage Include="*.bmp" />
   <_WildCardClCompile Include="*.cpp" />
   ```

1. Add this content to your *`.vcxproj`* file. Or, add it to a *`Directory.Build.targets`* file in a root directory, to affect all projects under that root:

   ```xml
   <Target Name="AddWildCardItems"
       AfterTargets="BuildGenerateSources">
     <ItemGroup>
       <Image Include="@(_WildCardImage)" />
       <ClCompile Include="@(_WildCardClCompile)" />
     </ItemGroup>
   </Target>
   ```

   This change makes the build see the items as they're defined in the *`.vcxproj`* file. However, now they aren't visible in the Solution Explorer window, and they won't cause problems in the IDE.

1. To show correct IntelliSense for `_WildCardClCompile` items when you open those files in the editor, add the following content:

   ```xml
   <PropertyGroup>
     <ComputeCompileInputsTargets>
       AddWildCardItems
       $(ComputeCompileInputsTargets)
     </ComputeCompileInputsTargets>
   </PropertyGroup>
   ```

Effectively, you can use wildcards for any items inside a target body. You can also use wildcards in an `ItemGroup` that isn't defined as a project item by a [`ProjectSchemaDefinition`](https://devblogs.microsoft.com/cppblog/vc-MSBuild-extensibility-example/).

> [!NOTE]
> If you move wildcard includes from a *`.vcxproj`* file to an imported file, they won't be visible in the Solution Explorer window. This change also allows your project to load in the IDE without modification. However, we don't recommend this approach, because it disables the project cache.

## See also

[Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md)<br/>
[Property Page XML Files](property-page-xml-files.md)
