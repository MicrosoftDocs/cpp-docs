---
title: "/ALLOWBIND (Prevent DLL Binding)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.PreventDLLBinding", "/allowbind"]
helpviewer_keywords: ["/ALLOWBIND linker option", "binding DLLs", "preventing DLL binding", "ALLOWBIND linker option", "-ALLOWBIND linker option", "DLLs [C++], preventing binding"]
ms.assetid: 30e37e24-12e4-407e-988a-39d357403598
---
# /ALLOWBIND (Prevent DLL Binding)

```
/ALLOWBIND[:NO]
```

## Remarks

/ALLOWBIND:NO sets a bit in a DLL's header that indicates to Bind.exe that the image is not allowed to be bound. You may not want a DLL to be bound if it has been digitally signed (binding invalidates the signature).

You can edit an existing DLL for /ALLOWBIND functionality with the [/ALLOWBIND](../../build/reference/allowbind.md) option of the EDITBIN utility.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../working-with-project-properties.md).

1. Expand **Configuration Properties**, **Linker**, and select **Command Line**.

1. Enter `/ALLOWBIND:NO` into **Additional Options**.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See Also

[Setting Linker Options](../../build/reference/setting-linker-options.md)<br/>
[Linker Options](../../build/reference/linker-options.md)<br/>
[BindImage function](/windows/desktop/api/imagehlp/nf-imagehlp-bindimage)<br/>
[BindImageEx function](/windows/desktop/api/imagehlp/nf-imagehlp-bindimageex)