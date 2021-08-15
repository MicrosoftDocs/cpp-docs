---
description: "Learn more about: Troubleshooting C/C++ Isolated Applications and Side-by-side Assemblies"
title: "Troubleshooting C/C++ Isolated Applications and Side-by-side Assemblies"
ms.date: "11/04/2016"
helpviewer_keywords: ["troubleshooting side-by-side assemblies", "troubleshooting isolated applications", "troubleshooting Visual C++"]
ms.assetid: 3257257a-1f0b-4ede-8564-9277a7113a35
---
# Troubleshooting C/C++ Isolated Applications and Side-by-side Assemblies

Loading a C/C++ application can fail if dependent libraries cannot be found. This article describes some common reasons why a C/C++ application fails to load, and suggests steps to resolve the problems.

If an application fails to load because it has a manifest that specifies a dependency on a side-by-side assembly, and the assembly is not installed as a private assembly in the same folder as the executable nor in the native assembly cache in the %WINDIR%\WinSxS\ folder, one of the following error messages might be displayed, depending on the version of Windows on which you try to run the app.

- The application failed to initialize properly (0xc0000135).

- This application has failed to start because the application configuration is incorrect. Reinstalling the application may fix this problem.

- The system cannot execute the specified program.

If your application has no manifest and depends on a DLL that Windows can't find in the typical search locations, an error message that resembles this one might be displayed:

- This application has failed to start because *a required DLL* was not found. Re-installing the application may fix this problem.

If your application is deployed on a computer that doesn't have Visual Studio, and it crashes with error messages that resemble the previous ones, check these things:

1. Follow the steps that are described in [Understanding the Dependencies of a Visual C++ Application](../windows/understanding-the-dependencies-of-a-visual-cpp-application.md). The dependency walker can show most dependencies for an application or DLL. If you observe that some DLLs are missing, install them on the computer on which you are trying to run your application.

1. The operating system loader uses the application manifest to load assemblies that the application depends on. The manifest can either be embedded in the binary as a resource, or installed as a separate file in the application folder. To check whether the manifest is embedded in the binary, open the binary in Visual Studio and look for RT_MANIFEST in its list of resources. If you can't find an embedded manifest, look in the application folder for a file that's named something like <binary_name>.\<extension>.manifest.

1. If your application depends on side-by-side assemblies and a manifest is not present, you have to ensure that the linker generates a manifest for your project. Check the linker option **Generate manifest** in the **Project Properties** dialog box for the project.

1. If the manifest is embedded in the binary, ensure that the ID of RT_MANIFEST is correct for this type of the binary. For more information about which resource ID to use, see [Using Side-by-Side Assemblies as a Resource (Windows)](/windows/win32/SbsCs/using-side-by-side-assemblies-as-a-resource). If the manifest is in a separate file, open it in an XML editor or text editor. For more information about manifests and rules for deployment, see [Manifests](/windows/win32/sbscs/manifests).

   > [!NOTE]
   > If both an embedded manifest and a separate manifest file are present, the operating system loader uses the embedded manifest and ignores the separate file. However, on Windows XP, the opposite is true—the separate manifest file is used and the embedded manifest is ignored.

1. We recommend that you embed a manifest in every DLL because external manifests are ignored when a DLL is loaded though a `LoadLibrary` call. For more information, see [Assembly manifests](/windows/win32/SbsCs/assembly-manifests).

1. Check that all assemblies that are enumerated in the manifest are correctly installed on the computer. Each assembly is specified in the manifest by its name, version number, and processor architecture. If your application depends on side-by-side assemblies, check that these assemblies are correctly installed on the computer so that the operating system loader can find them, as described in [Assembly Searching Sequence](/windows/win32/SbsCs/assembly-searching-sequence). Remember that 64-bit assemblies cannot be loaded in 32-bit processes and cannot be executed on 32-bit operating systems.

## Example

Assume we have an application, appl.exe, that's built by using Visual C++. The application manifest either is embedded in appl.exe as the binary resource RT_MANIFEST, which has an ID equal to 1, or is stored as the separate file appl.exe.manifest. The content of this manifest resembles this:

```
<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">
  <dependency>
    <dependentAssembly>
      <assemblyIdentity type="win32" name="Fabrikam.SxS.Library" version="2.0.20121.0" processorArchitecture="x86" publicKeyToken="1fc8b3b9a1e18e3e"></assemblyIdentity>
    </dependentAssembly>
  </dependency>
</assembly>
```

To the operating system loader, this manifest says that appl.exe depends on an assembly named Fabrikam.SxS.Library, version 2.0.20121.0, that's built for a 32-bit x86 processor architecture. The dependent side-by-side assembly can be installed either as a shared assembly or as a private assembly.

The assembly manifest for a shared assembly is installed in the %WINDIR%\WinSxS\Manifests\ folder. It identifies the assembly and lists its contents—that is, the DLLs that are part of the assembly:

```
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">
   <noInheritable/>
   <assemblyIdentity type="win32" name="Fabrikam.SxS.Library" version="2.0.20121.0" processorArchitecture="x86" publicKeyToken="1fc8b3b9a1e18e3e"/>
   <file name="Fabrikam.Main.dll" hash="3ca5156e8212449db6c622c3d10f37d9adb1ab12" hashalg="SHA1"/>
   <file name="Fabrikam.Helper.dll" hash="92cf8a9bb066aea821d324ca4695c69e55b2d1c2" hashalg="SHA1"/>
</assembly>
```

Side-by-side assemblies can also use [publisher configuration files](/windows/win32/SbsCs/publisher-configuration-files)—also known as policy files—to globally redirect applications and assemblies to use one version of a side-by-side assembly instead of another version of the same assembly. You can check the policies for a shared assembly in the %WINDIR%\WinSxS\Policies\ folder. Here is an example policy file:

```
<?xml version="1.0" encoding="UTF-8" standalone="yes"?>
<assembly xmlns="urn:schemas-microsoft-com:asm.v1" manifestVersion="1.0">

   <assemblyIdentity type="win32-policy" name="policy.2.0.Fabrikam.SxS.Library" version="2.0.20121.0" processorArchitecture="x86" publicKeyToken="1fc8b3b9a1e18e3e"/>
   <dependency>
      <dependentAssembly>
         <assemblyIdentity type="win32" name="Fabrikam.SxS.Library" processorArchitecture="x86" publicKeyToken="1fc8b3b9a1e18e3e"/>
         <bindingRedirect oldVersion="2.0.10000.0-2.0.20120.99" newVersion="2.0.20121.0"/>
      </dependentAssembly>
   </dependency>
</assembly>
```

This policy file specifies that any application or assembly that asks for version 2.0.10000.0 of this assembly should instead use version 2.0.20121.0, which is the current version that's installed on the system. If a version of the assembly that's mentioned in the application manifest is specified in the policy file, the loader looks for a version of this assembly that's specified in the manifest in the %WINDIR%\WinSxS\ folder, and if this version is not installed, load fails. And if assembly version 2.0.20121.0 is not installed, load fails for applications that ask for assembly version 2.0.10000.0.

However, the assembly can also be installed as a private side-by-side assembly in the installed application folder. If the operating system fails to find the assembly as a shared assembly, it looks for it as a private assembly, in the following order:

1. Check the application folder for a manifest file that has the name \<assemblyName>.manifest. In this example, the loader tries to find Fabrikam.SxS.Library.manifest in the folder that contains appl.exe. If it finds the manifest, the loader loads the assembly from the application folder. If the assembly is not found, load fails.

1. Try to open the \\<assemblyName\>\ folder in the folder that contains appl.exe, and if \\<assemblyName\>\ exists, try to load a manifest file that has the name \<assemblyName>.manifest from this folder. If the manifest is found, the loader loads the assembly from the \\<assemblyName\>\ folder. If the assembly is not found, load fails.

For more information about how the loader searches for dependent assemblies, see [Assembly Searching Sequence](/windows/win32/SbsCs/assembly-searching-sequence). If the loader fails to find a dependent assembly as a private assembly, load fails and the message "The system cannot execute the specified program" is displayed. To resolve this error, make sure that dependent assemblies—and DLLs that are part of them—are installed on the computer as either private or shared assemblies.

## See also

[Concepts of Isolated Applications and Side-by-side Assemblies](concepts-of-isolated-applications-and-side-by-side-assemblies.md)<br/>
[Building C/C++ Isolated Applications and Side-by-side Assemblies](building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)
