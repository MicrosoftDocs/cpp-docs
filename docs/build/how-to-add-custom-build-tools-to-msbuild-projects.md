---
description: "Learn more about: How to: Add Custom Build Tools to MSBuild Projects"
title: "How to: Add Custom Build Tools to MSBuild Projects"
ms.date: "11/04/2016"
helpviewer_keywords: ["msbuild (c++), howto: add custom build tools"]
ms.assetid: de03899a-371d-4396-9bf9-34f45a65e909
---
# How to: Add Custom Build Tools to MSBuild Projects

A custom build tool is a user-defined, command-line tool that is associated with a particular file.

For a particular file, specify in the project file (.vcxproj) the command line to execute, any additional input or output files, and a message to display. If **MSBuild** determines that your output files are out of date with regard to your input files, it displays the message and executes the command-line tool.

To specify when the custom build tool executes, use one or both of the `CustomBuildBeforeTargets` and `CustomBuildAfterTargets` XML elements in the project file. For example, you might specify that your custom build tool run after the MIDL compiler and before the C/C++ compiler. Specify the `CustomBuildBeforeTargets` element to execute the tool before a particular target runs; the `CustomBuildAfterTargets` element to execute the tool after a particular target; or both elements to run the tool between execution of two targets. If neither element is specified, your custom build tool executes at its default location, which is before the **MIDL** target.

Custom build steps and custom build tools share the information specified in the `CustomBuildBeforeTargets` and `CustomBuildAfterTargets` XML elements. Specify those targets one time in your project file.

### To add a custom build tool

1. Add an item group to the project file and add an item for each input file. Specify the command, additional inputs, outputs, and a message as item metadata, as shown here. This example assumes that a "faq.txt" file exists in the same directory as your project.

    ```
    <ItemGroup>
      <CustomBuild Include="faq.txt">
        <Message>Copying readme...</Message>
        <Command>copy %(Identity) $(OutDir)%(Identity)</Command>
        <Outputs>$(OutDir)%(Identity)</Outputs>
      </CustomBuild>
    </ItemGroup>
    ```

### To define where in the build the custom build tools will execute

1. Add the following property group to the project file. You have to specify at least one of the targets, but you can omit the other if you are only interested in having your build step execute before (or after) a particular target. This example performs the custom step after compiling but before linking.

    ```
    <PropertyGroup>
      <CustomBuildAfterTargets>ClCompile</CustomBuildAfterTargets>
      <CustomBuildBeforeTargets>Link</CustomBuildBeforeTargets>
    </PropertyGroup>
    ```

## See also

[Walkthrough: Using MSBuild to Create a C++ Project](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)<br/>
[How to: Use Build Events in MSBuild Projects](how-to-use-build-events-in-msbuild-projects.md)<br/>
[How to: Add a Custom Build Step to MSBuild Projects](how-to-add-a-custom-build-step-to-msbuild-projects.md)
