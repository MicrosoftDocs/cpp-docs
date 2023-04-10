---
title: "Vcxproj.filters files"
ms.date: "09/25/2019"
description: "Use filters files in Visual Studio C++ projects to define custom logical folders for files in Solution Explorer"
helpviewer_keywords: ["vcxproj.filters", "filters file [C++]"]
---
# vcxproj.filters files

The *filters* file (`*.vcxproj.filters`) is an XML file in MSBuild format that is located in the root project folder. It specifies which file types go into which logical folder in **Solution Explorer**. In the following illustration, the `.cpp` files are under the **Source Files** node. the `.h` files are under the **Header Files** node, and `.ico` and `.rc` files are under **Resource Files**. This placement is controlled by the filters file.

:::image type="complex" source="media/solution-explorer-filters.png" alt-text="Screenshot of the Logical folders view in Solution Explorer.":::
The solution explorer is shown with call outs for the following nodes: Header Files (which contains files like MFCApplication1.h), Resource Files (which contains files like MFCApplication1.ico), and Source Files (which contains files like MFCApplication1.cpp).
:::image-end:::

## Creating a custom filters file

Visual Studio creates this file automatically. For desktop applications, the predefined logical folders (filters) are: **Source Files**, **Header Files** and **Resource Files**. Other project types such as UWP might have a different set of default folders. Visual Studio automatically assigns known file types to each folder. If you want to create a filter with a custom name or a filter that holds custom file types, you can create your own filters file in the root folder of the project, or under an existing filter. (**References** and **External Dependencies** are special folders that don't participate in filtering.)

## Example

The following example shows the filters file for the example show previously. It has a flat hierarchy; in other words, there are no nested logical folders. The `UniqueIdentifier` node is optional. It enables Visual Studio automation interfaces to find the filter. `Extensions` is also optional. When a new file is added to a project, it's added to the topmost filter with a matching file extension. To add a file to a specific filter, right-click on the filter and choose **Add New Item**.

The `ItemGroup` that contains the `ClInclude` nodes is created when the project is first launched. If you're generating your own vcxproj files, make sure that all project items also have an entry in the filters file. Values in a `ClInclude` node override the default filtering based on file extensions. When you use Visual Studio to add a new item to the project, the IDE adds an individual file entry in the filters file. The filter isn't automatically reassigned if you change the file's extension.

```xml
<?xml version="1.0" encoding="utf-8"?>
<Project ToolsVersion="4.0" xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <ItemGroup>
    <Filter Include="Source Files">
      <UniqueIdentifier>{4FC737F1-C7A5-4376-A066-2A32D752A2FF}</UniqueIdentifier>
      <Extensions>cpp;c;cc;cxx;def;odl;idl;hpj;bat;asm;asmx</Extensions>
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{93995380-89BD-4b04-88EB-625FBE52EBFB}</UniqueIdentifier>
      <Extensions>h;hh;hpp;hxx;hm;inl;inc;ipp;xsd</Extensions>
    </Filter>
    <Filter Include="Resource Files">
      <UniqueIdentifier>{67DA6AB6-F800-4c08-8B7A-83BB121AAD01}</UniqueIdentifier>
      <Extensions>rc;ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe;resx;tiff;tif;png;wav;mfcribbon-ms</Extensions>
    </Filter>
  </ItemGroup>
  <ItemGroup>
    <ClInclude Include="MFCApplication1.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="MFCApplication1Dlg.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="stdafx.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="targetver.h">
      <Filter>Header Files</Filter>
    </ClInclude>
    <ClInclude Include="Resource.h">
      <Filter>Header Files</Filter>
    </ClInclude>
  </ItemGroup>
  <ItemGroup>
    <ClCompile Include="MFCApplication1.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="MFCApplication1Dlg.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
    <ClCompile Include="stdafx.cpp">
      <Filter>Source Files</Filter>
    </ClCompile>
  </ItemGroup>
  <ItemGroup>
    <ResourceCompile Include="MFCApplication1.rc">
      <Filter>Resource Files</Filter>
    </ResourceCompile>
  </ItemGroup>
  <ItemGroup>
    <None Include="res\MFCApplication1.rc2">
      <Filter>Resource Files</Filter>
    </None>
  </ItemGroup>
  <ItemGroup>
    <Image Include="res\MFCApplication1.ico">
      <Filter>Resource Files</Filter>
    </Image>
  </ItemGroup>
</Project>
```

To create nested logical folders, declare all nodes in filters `ItemGroup` as shown below. Each child node must declare the full logical path to the topmost parent. In the following example, an empty `ParentFilter` must be declared because it's referenced in later nodes.

```xml
  <ItemGroup>
    <Filter Include="ParentFilter">
    </Filter>
    <Filter Include="ParentFilter\Source Files"> <!-- Full path to topmost parent.-->  
      <UniqueIdentifier>{4FC737F1-C7A5-4376-A066-2A32D752A2FF}</UniqueIdentifier> <!--  Optional-->
      <Extensions>cpp;c;cc;cxx;def;odl;idl;hpj;bat;asm;asmx</Extensions> <!-- Optional -->
    </Filter>
    <Filter Include="Header Files">
      <UniqueIdentifier>{93995380-89BD-4b04-88EB-625FBE52EBFB}</UniqueIdentifier>
      <Extensions>h;hh;hpp;hxx;hm;inl;inc;ipp;xsd</Extensions>
    </Filter>
  </ItemGroup>
```
