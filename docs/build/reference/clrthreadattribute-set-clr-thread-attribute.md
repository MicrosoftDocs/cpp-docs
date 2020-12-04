---
description: "Learn more about: /CLRTHREADATTRIBUTE (Set CLR Thread Attribute)"
title: "/CLRTHREADATTRIBUTE (Set CLR Thread Attribute)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.CLRThreadAttribute"]
helpviewer_keywords: ["/CLRTHREADATTRIBUTE linker option", "-CLRTHREADATTRIBUTE linker option"]
ms.assetid: 4907e9ef-5031-446c-aecf-0a0b32fae1e8
---
# /CLRTHREADATTRIBUTE (Set CLR Thread Attribute)

Explicitly specify the threading attribute for the entry point of your CLR program.

## Syntax

```
/CLRTHREADATTRIBUTE:{STA|MTA|NONE}
```

#### Parameters

**MTA**<br/>
Applies the MTAThreadAttribute attribute to the entry point of your program.

**NONE**<br/>
Same as not specifying /CLRTHREADATTRIBUTE.  Lets the Common Language Runtime (CLR) set the default threading attribute.

**STA**<br/>
Applies the STAThreadAttribute attribute to the entry point of your program.

## Remarks

Setting the thread attribute is only valid when building an .exe, as it affects the entry point of the main thread.

If you use the default entry point (main or wmain, for example) specify the threading model either by using /CLRTHREADATTRIBUTE or by placing the threading attribute (STAThreadAttribute or MTAThreadAttribute) on the default entry function.

If you use a non-default entry point, specify the threading model either by using /CLRTHREADATTRIBUTE or by placing the threading attribute on the non-default entry function, and then specify the non-default entry point with [/ENTRY](entry-entry-point-symbol.md).

If the threading model specified in source code does not agree with the threading model specified with /CLRTHREADATTRIBUTE, the linker will ignore /CLRTHREADATTRIBUTE and apply the threading model specified in source code.

It will be necessary for you to use single-threading, for example, if your CLR program hosts a COM object that uses single-threading.  If your CLR program uses multi-threading, it cannot host a COM object that uses single-threading.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Expand the **Configuration Properties** node.

1. Expand the **Linker** node.

1. Select the **Advanced** property page.

1. Modify the **CLR Thread Attribute** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRThreadAttribute%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
