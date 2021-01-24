---
description: "Learn more about: Destroying the Dialog Box"
title: "Destroying the Dialog Box"
ms.date: "11/04/2016"
helpviewer_keywords: ["dialog boxes [MFC], deleting", "destruction, dialog box", "dialog boxes [MFC], destroying", "dialog boxes [MFC], removing", "modeless dialog boxes [MFC], destroying", "MFC dialog boxes [MFC], destroying", "modal dialog boxes [MFC], destroying"]
ms.assetid: dabceee7-3639-4d85-bf34-73515441b3d0
---
# Destroying the Dialog Box

Modal dialog boxes are normally created on the stack frame and destroyed when the function that created them ends. The dialog object's destructor is called when the object goes out of scope.

Modeless dialog boxes are normally created and owned by a parent view or frame window — the application's main frame window or a document frame window. The default [OnClose](reference/cwnd-class.md#onclose) handler calls [DestroyWindow](reference/cwnd-class.md#destroywindow), which destroys the dialog-box window. If the dialog box stands alone, with no pointers to it or other special ownership semantics, you should override [PostNcDestroy](reference/cwnd-class.md#postncdestroy) to destroy the C++ dialog object. You should also override [OnCancel](reference/cdialog-class.md#oncancel) and call `DestroyWindow` from within it. If not, the owner of the dialog box should destroy the C++ object when it is no longer necessary.

## See also

[Working with Dialog Boxes in MFC](life-cycle-of-a-dialog-box.md)
