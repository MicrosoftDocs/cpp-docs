---
title: "Copy Sources Project Properties (Linux C++)"
ms.date: "06/07/2019"
ms.assetid: 1a44230d-5dd8-4d33-93b4-e77e03e00150
---
# Copy Sources Project Properties (Linux C++)

::: moniker range="vs-2015"

Linux support is available in Visual Studio 2017 and later.

::: moniker-end

::: moniker range=">=vs-2017"

The properties set on this property page apply to all files in the project except whose file-level properties are set.

Property | Description
--- | ---
Sources To Copy | Specifies the sources to copy to the remote system. Changing this list might shift or otherwise affect the directory structure where files are copied to on the remote system.
Copy Sources | Specifies whether to copy the sources to the remote system.
Additional Sources To Copy | Specifies additional sources to copy to the remote system. Optionally the list can be provided as a local to remote mapping pairs using a syntax like this: fulllocalpath1:=fullremotepath1;fulllocalpath2:=fullremotepath2, where a local file can be copied to the specified remote location on the remote system.

::: moniker-end
