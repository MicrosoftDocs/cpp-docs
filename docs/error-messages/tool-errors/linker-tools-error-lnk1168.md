---
description: "Learn more about: Linker Tools Error LNK1168"
title: "Linker Tools Error LNK1168"
ms.date: "11/04/2016"
f1_keywords: ["LNK1168"]
helpviewer_keywords: ["LNK1168"]
ms.assetid: 97ead151-fd99-46fe-9a1d-7e84dc0b8cc8
---
# Linker Tools Error LNK1168

cannot open filename for writing

The linker can’t write to `filename`. The file may be in use and its file handle locked by another process, or you may not have write permission for the file, or for the directory or network share it is located in. This error is often caused by a transient condition—for example, a lock held by an anti-virus program, a file search indexing process, or a delay in releasing a lock held by the Visual Studio build system.

To fix this issue, verify that the `filename` file handle is not locked, and that you have write permission for the file. If it is an executable, verify that it is not already running.

You can use the Windows SysInternals utilities [Handle](/sysinternals/downloads/handle) or [Process Explorer](/sysinternals/downloads/process-explorer) to determine which process has a file handle lock on `filename`. You can also use Process Explorer to release locks on open file handles. For information about how to use these utilities, see the Help files that come with them.

If the file is locked by an anti-virus program, you can fix this issue by excluding your build output directories from automatic scanning by the anti-virus program. Anti-virus scanners are often triggered by the creation of new files in the file system, and they hold locks on the files while the scan proceeds. Consult your anti-virus program documentation for details about how to exclude specific directories from scanning.

If the file is locked by a search indexing service, you can fix this issue by excluding your build output directories from automatic indexing. Consult the documentation for the indexing service for more information. To change the Windows search indexing service, use **Indexing Options** in the Windows **Control Panel**. For more information, see [Search indexing in Windows 10: FAQ](https://support.microsoft.com/help/4098843/windows-10-search-indexing-faq).

If your executable can’t be overwritten by the build process, it may be locked by File Explorer. If the **Application Experience** service has been disabled, File Explorer may hold on to an executable file handle lock for an extended time. To fix this issue, run **services.msc** and then open the **Properties** dialog box for the **Application Experience** service. Change the **Startup type** from **Disabled** to **Manual**.
