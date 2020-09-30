---
title: ".vcxproj files and wildcards"
description: "How the C++ native MSBuild project system .vcxproj files handle wildcards."
ms.date: 09/30/2020
helpviewer_keywords: [".vcxproj file structure"]
ms.assetid: 14d0c552-29db-480e-80c1-7ea89d6d8e9c
---
# `.vcxproj` files and wildcards

As mentioned in [`.vcxproj` and `.props` file structure](vcxproj-file-structure.md), wildcards aren't supported in project items in *`.vcxproj`* files.

It's possible to edit a project file to add wildcards. The project may seem to work at first. However, as soon as the project is modified by Visual Studio and then saved on disk, build issues are sure to occur. The issues will grow, and eventually cause random crashes and undefined behavior in the IDE. The more files a wildcard expands to, the sooner the problems manifest themselves.

We've recently seen an increase of reports of related build crashes from customers. We worked on addressing them as a bug fix in Visual Studio 2019 version 16.6. The choices were either to:

- fail project load in the IDE if it contains wildcards, or
- automatically modify the project, so it doesn't contain wildcards.

We chose the second option, to help people bring their projects into a supported state. The modified projects aren't saved automatically. You'll see warnings in the Output window during solution load that mention automatic wildcards expansion. If you don't want your project modified in this way, you can unload the project without saving it. This behavior is equivalent to the first option, that fails to load the project.

In Visual Studio 2019 version 16.7 and later, you can mark projects as *read-only*. To mark your project read-only, add the following property to your *`.vcxproj`* file, or to any of the files it imports:

```xml
<PropertyGroup>
    <ReadOnlyProject>true</ReadOnlyProject>
</PropertyGroup>
```

The `<ReadOnlyProject>` setting prevents Visual Studio from editing and saving the project, so you can use any MSBuild constructs in it, including wildcards.

It's important to know that the project cache isn't available if Visual Studio detects wildcards in project items in the *`.vcxproj`* file or any of its imports. Solution load times in the IDE are much longer if you have lots of projects that use wildcards.

## What if I need to use wildcards and I don't want to make the project read-only

Currently, there's no way to make wildcard expansion items visible in the Solution Explorer window in a non-read-only project. It requires full wildcards support in *`.vcxproj`* projects. Instead, you must change your projects to list all items explicitly.

Maybe you don't need to see the wildcard items in the Solution Explorer, but you do want to use wildcards. You might use them for gathering resources, adding generated sources, and so on. If so, you can use this procedure instead:

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

1. Add this content to your *`.vcxproj`* file. Or, add it to *`Directory.Build.targets`* in a root directory, to affect all projects under that root:

   ```xml
   <Target Name="AddWildCardItems"
       AfterTargets="BuildGenerateSources">
     <ItemGroup>
       <Image Include="@(_WildCardImage)" />
       <ClCompile Include="@(_WildCardClCompile)" />
     </ItemGroup>
   </Target>
   ```

   This change makes the build see the items as they're defined in the *`.vcxproj`* file. However, now they aren't visible in the Solution Explorer window, and they won't cause build problems.

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
> If you move wildcard includes from a *`.vcxproj`* file to an imported file, they won't be visible in the Solution Explorer window. This change also allows project load in the IDE without modification. We don't recommend this approach, because it disables the project cache.

## Why `.vcxproj` projects don't have the same wildcard support as C# projects

The reason for the current C++ *`.vcxproj`* project structure and feature set is historical. The original C++ project system in Visual Studio existed before MSBuild and C# were created. When the Visual Studio C++ build system moved to MSBuild, the main goal was to allow the best conversion from the old project format. We wanted to maintain all the features of the original C++ build system. The *`.vcxproj`* projects were never designed to be human editable, even before MSBuild. So, Visual Studio has never supported all MSBuild constructs in *`.vcxproj`* files. Visual Studio needs the ability to automatically edit the project. It's required so the right things happen during a build, and to show the correct things in the Property Pages UI. This automation means the project has to have a particular structure, correctly ordered groups, and strictly limited conditions.  

This inflexibility causes a number of pain points in manually created *`.vcxproj`* files. There are extra rules and limitations on them so they're editable in the IDE: more than what's needed to just build them in MSBuild. Currently, we recommend you only create and edit *`.vcxproj`* projects in the IDE, and avoid manual editing as much as possible. Instead, add custom props or targets if you need more customizations. Handy places to insert customizations are the *`Directory.Build.props`* and *`Directory.Build.targets`* files, which are automatically imported in all MSBuild-based projects.

In Visual Studio 2019 version 16.7, we've also added read-only project support. Read-only support allows the IDE to use manually authored projects that don't have the additional limitations of IDE-editable projects.

Performance and scalability have always been high priorities for Microsoft C++, so developers can work with large codebases of 10,000 projects or more. Wildcard support hasn't been a priority before. Future wildcard support in *`.vcxproj`* files is possible, but it's not simple. It has significant performance implications. That's because of the inevitable increase in disk I/O during solution load, up-to-date checks (F5), and IntelliSense operations. If you'd like to voice your support for wildcards in C++ projects in the IDE, you can [upvote this suggestion ticket on Developer Community](https://developercommunity.visualstudio.com/idea/1080317/support-globwildcards-first-class-in-visual-studio.html).

## See also

[Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md)<br/>
[Property Page XML Files](property-page-xml-files.md)
