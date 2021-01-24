---
description: "Learn more about: /WINMDDELAYSIGN (Partially Sign a winmd)"
title: "/WINMDDELAYSIGN (Partially Sign a winmd)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.WINMDDelaySign"]
ms.assetid: 445cd602-62cb-400a-8e3a-4beb6572724d
---
# /WINMDDELAYSIGN (Partially Sign a winmd)

Enables partial signing of a Windows Runtime Metadata (.winmd) file by putting the public key in the file.

```
/WINMDDELAYSIGN[:NO]
```

## Remarks

Resembles the [/DELAYSIGN](delaysign-partially-sign-an-assembly.md) linker option that is applied to the .winmd file. Use **/WINMDDELAYSIGN** if you want to put only the public key in the .winmd file. By default, the linker acts as if **/WINMDDELAYSIGN:NO** were specified; that is, it does not sign the winmd file.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Linker** folder.

1. Select the **Windows Metadata** property page.

1. In the **Windows Metadata Delay Sign** drop-down list box, select the option you want.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
