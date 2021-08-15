---
description: "Learn more about: Example of Active Document Containment: Office Binder"
title: "Example of Active Document Containment: Office Binder"
ms.date: "11/04/2016"
helpviewer_keywords: ["active documents [MFC], containers", "examples [MFC], active document containment", "containers [MFC], active document", "active document containers [MFC], examples", "Office Binder [MFC]", "MFC COM, active document containment"]
ms.assetid: 70dd8568-e8bc-44ac-bf5e-678767efe8e3
---
# Example of Active Document Containment: Office Binder

The Microsoft Office Binder is an example of an active document container. An Office Binder includes two primary panes, as containers typically do. The left pane contains icons that correspond to active documents in the Binder. Each document is called a *section* within the Binder. For example, a Binder can contain Word documents, PowerPoint files, Excel spreadsheets, and so on.

Clicking an icon in the left pane activates the corresponding active document. The right pane of the Binder then displays the contents of the currently selected active document.

If you open and activate a Word document in a Binder, the Word menu bar and toolbars appear at the top of the view frame, and you can edit the document's contents using any Word command or tool. However, the menu bar is a combination of both the Binder's and Word's menu bars. Because both Binder and Word have **Help** menus, the contents of the respective menus are merged. Active document containers such as Office Binder automatically provide **Help** menu merging; for more information, see [Help Menu Merging](help-menu-merging.md).

When you select an active document of another application type, the Binder's interface changes to accommodate that of the active document's application type. For example, if a Binder contains an Excel spreadsheet, you will observe that the menus in the Binder change when you select the Excel spreadsheet section.

There are, of course, other possible types of containers beside Binders. File Explorer uses the typical dual-pane interface in which the left pane uses a tree control to display a hierarchical list of directories in a drive or network, while the right pane displays the files contained in the currently selected directory. An Internet browser-type of container (such as Microsoft Internet Explorer), rather than using a dual-pane interface, usually has a single frame and provides navigation using hyperlinks.

## See also

[Active Document Containment](active-document-containment.md)
