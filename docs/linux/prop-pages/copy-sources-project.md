---
description: "Learn more about: Copy Sources Project Properties (Linux C++)"
title: "Copy Sources Project Properties (Linux C++)"
ms.date: "10/16/2019"
ms.assetid: 1a44230d-5dd8-4d33-93b4-e77e03e00150
---
# Copy Sources Project Properties (Linux C++)

::: moniker range="msvc-140"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=msvc-150"

The properties set on this property page apply to all files in the project except whose file-level properties are set.

| Property | Description |
|--|--|
| Sources To Copy | Specifies the sources to copy to the remote system. Changing this list might shift or otherwise affect the directory structure where files are copied to on the remote system. |
| Copy Sources | Specifies whether to copy the sources to the remote system. |
| Additional Sources To Copy | Specifies additional sources to copy to the remote system. Optionally specify local to remote mapping pairs using a syntax like this: fulllocalpath1:=fullremotepath1;fulllocalpath2:=fullremotepath2, where a local file can be copied to the specified remote location on the remote system. |

@SourcesToCopyRemotely and @DataFilesToCopyRemotely refer to item groups in the project file. To modify which sources or data files are copied remotely, edit the *vcxproj* file like this:

```xml
<ItemGroup>
   <MyItems Include="foo.txt" />
   <MyItems Include="bar.txt" />
   <DataFilesToCopyRemotely Include="@(MyItems)" />
</ItemGroup>
```

::: moniker-end
