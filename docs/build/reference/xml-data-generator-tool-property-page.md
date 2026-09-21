---
description: "Learn more about: XML Data Generator Tool Property Pages"
title: "XML Data Generator Tool Property Pages"
ms.date: 09/18/2026
f1_keywords: ["VC.Project.VCXMLDataGeneratorTool.AdditionalOptions", "VC.Project.VCXMLDataGeneratorTool.GenerateFromSchema", "VC.Project.VCXMLDataGeneratorTool.Namespace", "VC.Project.VCXMLDataGeneratorTool.SuppressStartupBanner"]
helpviewer_keywords: ["XML Data Generator Tool property pages"]
---
# XML Data Generator Tool property pages

Use these pages to configure the XML Data Generator Tool. The pages become available after you add an XML Schema Definition (`.xsd`) file to a project. Find them under **Project** > **Properties** > **Configuration Properties** > **XML Data Generator Tool**.

> [!NOTE]
> Starting with Visual Studio 2017, C++ project support for `.xsd` files is deprecated.

## All Options property page

### Additional options

Specifies extra *Xsd.exe* command-line options that aren't represented by another XML Data Generator Tool property.

### Generate From Schema

Specifies the types to generate from the schema.

**Choices**

- **DataSet (`/dataset`)** generates a class derived from `DataSet` that corresponds to the schema.
- **Classes (`/classes`)** generates runtime classes that correspond to the schema. Use these classes with [`XmlSerializer`](/dotnet/api/system.xml.serialization.xmlserializer) to read and write XML that follows the schema.

### Namespace

Specifies the namespace for the generated class files. The default namespace is the global namespace. (`/namespace:[string]`)

### Suppress Startup Banner

Specifies whether the tool displays standard Microsoft copyright information. (`/nologo`)

**Choices**

- **Yes (`/nologo`)** runs the tool without displaying the startup banner.
- **No** displays the startup banner.

## Command Line Property Page

### All Options

Displays the *Xsd.exe* command line generated from the settings on the XML Data Generator Tool property pages. This field is read-only.

### Additional options

Specifies other valid *Xsd.exe* command-line options that aren't represented by another XML Data Generator Tool property. Options entered here are passed to *Xsd.exe* after the options displayed in **All Options**. Visual Studio doesn't validate the options or check for dependencies between them.

### Inherit from parent or project defaults

When selected, options you add are appended to values inherited from the parent or project defaults. When cleared, options you add replace the inherited values. In most cases, leave this check box selected.

For more information about the **Command Line** property page, see [Command line property pages](command-line-property-pages.md). For more information about property inheritance, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md#property_editor).

For more information about the command-line options, see [XML Schema Definition Tool (Xsd.exe)](/dotnet/standard/serialization/xml-schema-definition-tool-xsd-exe).

For information on how to programmatically access members of this object, see <xref:Microsoft.VisualStudio.VCProjectEngine.VCXMLDataGeneratorTool>

## See also

[C++ project property page reference](property-pages-visual-cpp.md)
