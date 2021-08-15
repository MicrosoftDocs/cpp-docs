---
description: "Learn more about: How to: Use Build Events in MSBuild Projects"
title: "How to: Use Build Events in MSBuild Projects"
ms.date: "11/04/2016"
helpviewer_keywords: ["msbuild (c++), howto: use build events in projects"]
ms.assetid: 2a58dc9d-3d50-4e49-97c1-86c5a05ce218
---
# How to: Use Build Events in MSBuild Projects

A build event is a command that MSBuild performs at a particular stage in the build process. The *pre-build* event occurs before the build starts; the *pre-link* event occurs before the link step starts; and the *post-build* event occurs after the build successfully ends. A build event occurs only if the associated build step occurs. For example, the pre-link event does not occur if the link step does not run.

Each of the three build events is represented in an item definition group by a command element (`<Command>`) that is executed and a message element (`<Message>`) that is displayed when **MSBuild** performs the build event. Each element is optional, and if you specify the same element multiple times, the last occurrence takes precedence.

An optional *use-in-build* element (`<`*build-event*`UseInBuild>`) can be specified in a property group to indicate whether the build event is executed. The value of the content of a *use-in-build* element is either **`true`** or **`false`**. By default, a build event is executed unless its corresponding *use-in-build* element is set to **`false`**.

The following table lists each build event XML element:

|XML Element|Description|
|-----------------|-----------------|
|`PreBuildEvent`|This event executes before the build begins.|
|`PreLinkEvent`|This event executes before the link step begins.|
|`PostBuildEvent`|This event executes after the build finishes.|

The following table lists each *use-in-build* element:

|XML Element|Description|
|-----------------|-----------------|
|`PreBuildEventUseInBuild`|Specifies whether to execute the *pre-build* event.|
|`PreLinkEventUseInBuild`|Specifies whether to execute the *pre-link* event.|
|`PostBuildEventUseInBuild`|Specifies whether to execute the *post-build* event.|

## Example

The following example can be added inside of the Project element of the myproject.vcxproj file created in [Walkthrough: Using MSBuild to Create a C++ Project](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md). A *pre-build* event makes a copy of main.cpp; a *pre-link* event makes a copy of main.obj; and a *post-build* event makes a copy of myproject.exe. If the project is built using a release configuration, the build events are executed. If the project is built using a debug configuration, the build events are not executed.

``` xml
<ItemDefinitionGroup>
  <PreBuildEvent>
    <Command>copy $(ProjectDir)main.cpp $(ProjectDir)copyOfMain.cpp</Command>
    <Message>Making a copy of main.cpp </Message>
  </PreBuildEvent>
  <PreLinkEvent>
    <Command>copy $(ProjectDir)$(Configuration)\main.obj $(ProjectDir)$(Configuration)\copyOfMain.obj</Command>
    <Message>Making a copy of main.obj</Message>
  </PreLinkEvent>
  <PostBuildEvent>
    <Command>copy $(ProjectDir)$(Configuration)\$(TargetFileName) $(ProjectDir)$(Configuration)\copyOfMyproject.exe</Command>
    <Message>Making a copy of myproject.exe</Message>
  </PostBuildEvent>
</ItemDefinitionGroup>

<PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Release|Win32'">
  <PreBuildEventUseInBuild>true</PreBuildEventUseInBuild>
  <PreLinkEventUseInBuild>true</PreLinkEventUseInBuild>
  <PostBuildEventUseInBuild>true</PostBuildEventUseInBuild>
</PropertyGroup>

<PropertyGroup Condition="'$(Configuration)|$(Platform)'=='Debug|Win32'">
  <PreBuildEventUseInBuild>false</PreBuildEventUseInBuild>
  <PreLinkEventUseInBuild>false</PreLinkEventUseInBuild>
  <PostBuildEventUseInBuild>false</PostBuildEventUseInBuild>
</PropertyGroup>
```

## See also

[MSBuild on the command line - C++](msbuild-visual-cpp.md)<br/>
[Walkthrough: Using MSBuild to Create a C++ Project](walkthrough-using-msbuild-to-create-a-visual-cpp-project.md)
