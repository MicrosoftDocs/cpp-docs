---
title: "Consuming libraries and components in C++ projects"
ms.date: "12/10/2018"
f1_keywords: ["VC.Project.References"]
helpviewer_keywords: ["Add References Dialog Box (C++)", ".NET Framework (C++), Add References Dialog Box"]
ms.assetid: 12b8f571-0f21-40b3-9404-5318a57e9cb5
---
# Consuming libraries and components

Often, a C++ project needs to call functions or access data in a binary file such as static library (.lib files), DLL, Windows Runtime component, COM component, or .NET assembly. In these cases, you have to configure the project so that it can find that binary at build time. The specific steps depend on the type of your project, the type of the binary, and whether the binary is being built in the same solution as your project. 

## Consuming libraries downloaded via vcpkg

To consume a library that you have downloaded by using the **vcpkg** package manager, you can ignore the instructions below. See [vcpkg: A C++ package manager for Windows, Linux and MacOS](../vcpkg.md#integrate-with-visual-studio-windows) for more information.

## Consuming static libraries

If your static library project is being built in the same solution:

1. #include the header file(s) for the static library using quotation marks. In a typical solution the path will start with `../<library project name>`. IntelliSense will help you find it.
2. Add a reference to the static library project. Right-click on **References** under the application project node in **Solution Explorer** and choose **Add Reference**. 

If the static library is not part of the solution:

1. Right-click on the application project node in **Solution Explorer** and then choose **Properties**. 
2. In the **VC++ Directories** property page, add the path to the directory where the .lib file is located in **Library Paths** and add the path to the library header file(s) in **Include Directories**.  
3. In the **Linker > Input** property page, add the name of the .lib file to **Additional Dependencies**.

## Dynamic link libraries

If the DLL is being built as part of the same solution as the application, follow the same steps as for a static library.

If the DLL is not part of the application solution, you need the DLL file, the header(s) with prototypes for the exported functions and classes, and a .lib file that provides the necessary linking information.

1. Copy the DLL to the output folder of your project, or to another folder in the standard Windows search path for DLLs. See [Dynamic-Link Library Search Order](/windows/desktop/dlls/dynamic-link-library-search-order).
2. Follow steps 1-3 for static libraries to provide the paths to the headers and .lib file.

## COM objects

If your native C++ application needs to consume a COM object, and that object is *registered*, then all you have to do is call CoCreateInstance and pass in the CLSID of the object. The system will find it in the Windows Registry and load it. A C++/CLI project can consume a COM object in the same way, or by adding a reference to it from the **Add References > COM** list and consuming it through its [Runtime callable wrapper](/dotnet/framework/interop/runtime-callable-wrapper). 

## .NET assemblies and Windows Runtime Components

In UWP or C++/CLI projects, you consume .NET assemblies or Windows Runtime Components by adding a *reference* to the assembly or component. Under the **References** node in a UWP or C++/CLI project, you see references to commonly-used components. Right-click on the **References** node in **Solution Explorer** to bring up the **Reference Manager** and browse through additional components that are known to the system. Click the **Browse** button to navigate to any folder where a custom component is located. Because .NET assemblies and Windows Runtime components contain built-in type information, you can view their methods and classes by right-clicking and choosing **View in Object Browser**. 

## Reference properties

Each kind of reference has properties. You can view the properties by selecting the reference in Solution Explorer and pressing **Alt + Enter**, or else right-clicking and choosing **Properties**. Some properties are read-only and some can be modified. However, typically you don't have to manually modify these properties.

### ActiveX reference properties

ActiveX reference properties are available only for references to COM components. These properties are displayed only when a COM component is selected in the **References** pane. The properties cannot be modified.

- **Control Full Path**

   Displays the directory path of the referenced control.

- **Control GUID**

   Displays the GUID for the ActiveX control.

- **Control Version**

   Displays the version of the referenced ActiveX control.

- **Type Library Name**

   Displays the name of the referenced type library.

- **Wrapper Tool**

   Displays the tool that is used to build the interop assembly from the referenced COM library or ActiveX control.

### Assembly reference properties (C++/CLI)

Assembly reference properties are available only for references to .NET Framework assemblies in C++/CLI projects. These properties are displayed only when a .NET Framework assembly is selected in the **References** pane. The properties cannot be modified.

- **Relative Path**

   Displays the relative path from the project directory to the referenced assembly.

### Build properties

The following properties are available on various kinds of references. They enable you to specify how to build with references.

- **Copy Local**

   Specifies whether to automatically copy the referenced assembly to the target location during a build.

- **Copy Local Satellite Assemblies (C++/CLI)**

   Specifies whether to automatically copy the satellite assemblies of the referenced assembly to the target location during a build. Only used if **Copy Local** is **true**.

- **Reference Assembly Output**

   Specifies that this assembly is used in the build process. If **true**, the assembly is used on the compiler command line during the build.

### Project-to-project reference properties

The following properties define a *project-to-project reference* from the project that is selected in the **References** pane to another project in the same solution. For more information, see [Managing references in a project](/visualstudio/ide/managing-references-in-a-project).

- **Link Library Dependencies**

   When this property is **True**, the project system links into the dependent project the .lib files that are produced by the independent project. Typically, you will specify **True**.

- **Project Identifier**

   Uniquely identifies the independent project. The property value is an internal system GUID that cannot be modified.

- **Use Library Dependency Inputs**

   When this property is **False**, the project system will not link into the dependent project the .obj files for the library produced by the independent project. Consequently, this value disables incremental linking. Typically, you will specify **False** because building the application can take a long time if there are many independent projects.

### Read-only reference properties (COM & .NET)

The following properties are found on COM and .NET assembly references, and cannot be modified.

- **Assembly Name**

   Displays the assembly name for the referenced assembly.

- **Culture**

   Displays the culture of the selected reference.

- **Description**

   Displays the description of the selected reference.

- **Full Path**

   Displays the directory path of the referenced assembly.

- **Identity**

   For the .NET Frameworkassemblies, displays the full path. For COM components, displays the GUID.

- **Label**

   Displays the label of the reference.

- **Name**

   Displays the name of the reference.

- **Public Key Token**

   Displays the public key token that is used to identify the referenced assembly.

- **Strong Name**

   `true` if the referenced assembly has a strong name. A strong named assembly is uniquely versioned.

- **Version**

   Displays the version of the referenced assembly.

## See Also

[Property Pages](reference/property-pages-visual-cpp.md)<br>
[Set compiler and build properties](working-with-project-properties.md)