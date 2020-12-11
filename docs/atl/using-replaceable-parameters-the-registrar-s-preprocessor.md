---
description: "Learn more about: Using Replaceable Parameters (The Registrar&#39;s Preprocessor)"
title: "Using Replaceable Parameters (ATL Registrar)"
ms.date: "11/04/2016"
helpviewer_keywords: ["%MODULE%"]
ms.assetid: 0b376994-84a6-4967-8d97-8c01dfc94efe
---
# Using Replaceable Parameters (The Registrar&#39;s Preprocessor)

Replaceable parameters allow a Registrar's client to specify run-time data. To do this, the Registrar maintains a replacement map into which it enters the values associated with the replaceable parameters in your script. The Registrar makes these entries at run time.

## <a name="_atl_using_.25.module.25"></a> Using %MODULE%

The [ATL Control Wizard](../atl/reference/atl-control-wizard.md) automatically generates a script that uses `%MODULE%`. ATL uses this replaceable parameter for the actual location of your server's DLL or EXE.

## Concatenating Run-Time Data with Script Data

Another use of the preprocessor is to concatenate run-time data with script data. For example, suppose an entry is needed that contains a full path to a module with the string "`, 1`" appended at the end. First, define the following expansion:

```rgs
'MySampleKey' = s '%MODULE%, 1'
```

Then, before calling one of the script processing methods listed in [Invoking Scripts](../atl/invoking-scripts.md), add a replacement to the map:

[!code-cpp[NVC_ATL_Utilities#113](../atl/codesnippet/cpp/using-replaceable-parameters-the-registrar-s-preprocessor_1.cpp)]

During the parsing of the script, the Registrar expands `'%MODULE%, 1'` to `c:\mycode\mydll.dll, 1`.

> [!NOTE]
> In a Registrar script, 4K is the maximum token size. (A token is any recognizable element in the syntax.) This includes tokens that were created or expanded by the preprocessor.

> [!NOTE]
> To substitute replacement values at run time, remove the call in the script to the [DECLARE_REGISTRY_RESOURCE](../atl/reference/registry-macros.md#declare_registry_resource) or [DECLARE_REGISTRY_RESOURCEID](../atl/reference/registry-macros.md#declare_registry_resourceid) macro. Instead, replace it with your own `UpdateRegistry` method that calls [CAtlModule::UpdateRegistryFromResourceD](../atl/reference/catlmodule-class.md#updateregistryfromresourced) or [CAtlModule::UpdateRegistryFromResourceS](../atl/reference/catlmodule-class.md#updateregistryfromresources), and pass your array of _ATL_REGMAP_ENTRY structures. Your array of _ATL_REGMAP_ENTRY must have at least one entry that is set to {NULL,NULL}, and this entry should always be the last entry. Otherwise, an access violation error will be generated when `UpdateRegistryFromResource` is called.

> [!NOTE]
> When building a project that outputs an executable, ATL automatically adds quotation marks around the path name created at run time with the **%MODULE%** registrar script parameter. If you do not want the path name to include the quotation marks, use the new **%MODULE_RAW%** parameter instead.
>
> When building a project that outputs a DLL, ATL will not add quotation marks to the path name if **%MODULE%** or **%MODULE_RAW%** is used.

## See also

[Creating Registrar Scripts](../atl/creating-registrar-scripts.md)
