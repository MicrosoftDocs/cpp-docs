---
description: "Learn more about how to add custom build tools to MSBuild projects"
title: "How to: Add custom build tools to MSBuild projects"
ms.date: 03/15/2022
helpviewer_keywords: ["msbuild (c++), howto: add custom build tools"]
ms.assetid: de03899a-371d-4396-9bf9-34f45a65e909
---
# How to: Add custom build tools to MSBuild projects

A custom build tool is a user-defined, command-line tool that's associated with a particular file.

For a particular file, specify in the project file (*`.vcxproj`*) the command line to execute, any other input or output files, and a message to display. If **MSBuild** determines that your output files are out of date relative to your input files, it displays the message and executes the command-line tool.

## Specify custom build tools and custom build steps

To specify when the custom build tool executes, use one or both of the `CustomBuildBeforeTargets` and `CustomBuildAfterTargets` XML elements in the project file. For example, you might specify that your custom build tool run after the MIDL compiler and before the C/C++ compiler. Specify the `CustomBuildBeforeTargets` element to execute the tool before a particular target runs. Use the `CustomBuildAfterTargets` element to execute the tool after a particular target runs. Use both elements to run the tool between execution of two targets. If neither element is specified, your custom build tool executes at its default location, which is before the **MIDL** target.

Custom build steps and custom build tools share the information specified in the `CustomBuildBeforeTargets` and `CustomBuildAfterTargets` XML elements. Specify those targets one time in your project file.

### To add a custom build tool

1. Add an item group to the project file and add an item for each input file. Specify the command and its inputs, outputs, and a message as item metadata, as shown here. This example assumes that a "faq.txt" file exists in the same directory as your project. The custom build step copies it to the output directory.

    ```xml
    <ItemGroup>
      <CustomBuild Include="faq.txt">
        <Message>Copying readme...</Message>
        <Command>copy %(Identity) $(OutDir)%(Identity)</Command>
        <Outputs>$(OutDir)%(Identity)</Outputs>
      </CustomBuild>
    </ItemGroup>
    ```

### To define where in the build the custom build tools execute

1. Add the following property group to the project file. You have to specify at least one of the targets. You can omit the other if you're only interested in having your build step execute before (or after) a particular target. This example performs the custom step after compiling but before linking.

    ```xml
    <PropertyGroup>
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>
    </PropertyGroup>
    ```

## See also

[Walkthrough: Using MSBuild to create a C++ project](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)\
[How to: Use build events in MSBuild projects](how-to-use-build-events-in-msbuild-projects.md)\
[How to: Add a custom build step to MSBuild projects](how-to-add-a-custom-build-step-to-msbuild-projects.md)\
[Common macros for MSBuild commands and properties](reference/common-macros-for-build-commands-and-properties.md)\
[MSBuild well-known item metadata](/visualstudio/msbuild/msbuild-well-known-item-metadata)
