---
description: "Learn more about: /MANIFESTDEPENDENCY (Specify Manifest Dependencies)"
title: "/MANIFESTDEPENDENCY (Specify Manifest Dependencies)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.AdditionalManifestDependencies"]
helpviewer_keywords: ["MANIFESTDEPENDENCY linker option", "/MANIFESTDEPENDENCY linker option", "-MANIFESTDEPENDENCY linker option"]
ms.assetid: e4b68313-33a2-4c3e-908e-ac2b9f7d6a73
---
# /MANIFESTDEPENDENCY (Specify Manifest Dependencies)

```
/MANIFESTDEPENDENCY:manifest_dependency
```

## Remarks

/MANIFESTDEPENDENCY lets you specify attributes that will be placed in the \<dependency> section of the manifest file.

See [/MANIFEST (Create Side-by-Side Assembly Manifest)](manifest-create-side-by-side-assembly-manifest.md) for information on how to create a manifest file.

For more information on the \<dependency> section of the manifest file, see [Publisher Configuration Files](/windows/win32/SbsCs/publisher-configuration-files).

/MANIFESTDEPENDENCY information can be passed to the linker in one of two ways:

- Directly on the command line (or in a response file) with /MANIFESTDEPENDENCY.

- Via the [comment](../../preprocessor/comment-c-cpp.md) pragma.

The following example shows a /MANIFESTDEPENDENCY comment passed via pragma,

```cpp
#pragma comment(linker, "\"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"")
```

which results in the following entry in the manifest file:

```xml
<dependency>
  <dependentAssembly>
    <assemblyIdentity type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*' />
  </dependentAssembly>
</dependency>
```

The same /MANIFESTDEPENDENCY comments can be passed at the command line as follows:

```cmd
"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"
```

The linker will collect /MANIFESTDEPENDENCY comments, eliminate duplicate entries, and then add the resulting XML string to the manifest file.  If the linker finds conflicting entries, the manifest file will become corrupt and the application will fail to launch (an entry may be added to the event log, indicating the source of the failure).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Manifest File** property page.

1. Modify the **Additional Manifest Dependencies** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalManifestDependencies%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
