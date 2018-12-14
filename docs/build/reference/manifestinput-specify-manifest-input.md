---
title: "/MANIFESTINPUT (Specify Manifest Input)"
ms.date: "11/04/2016"
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
---
# /MANIFESTINPUT (Specify Manifest Input)

Specifies a manifest input file to include in the manifest that's embedded in the image.

## Syntax

```
/MANIFESTINPUT:filename
```

### Parameters

*filename*<br/>
The manifest file to include in the embedded manifest.

## Remarks

The **/MANIFESTINPUT** option specifies the path of an input file to use to create the embedded manifest in an executable image. If you have multiple manifest input files, use the switch multiple times—once for each input file. The manifest input files are merged to create the embedded manifest. This option requires the **/MANIFEST:EMBED** option.

This option can’t be set directly in Visual Studio. Instead, use the **Additional Manifest Files** property of the project to specify additional manifest files to include. For more information, see [Input and Output, Manifest Tool, Configuration Properties, \<Projectname> Property Pages Dialog Box](input-and-output-manifest-tool.md).

## See Also

[Setting Linker Options](linking.md)<br/>
[MSVC Linker Options](linker-options.md)