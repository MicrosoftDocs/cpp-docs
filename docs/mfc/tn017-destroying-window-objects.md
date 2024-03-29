---
description: "Learn more about: TN017: Destroying window objects"
title: "TN017: Destroying window objects"
ms.date: 06/03/2022
f1_keywords: ["vc.objects"]
helpviewer_keywords: ["destroying windows", "TN017", "PostNcDestroy method [MFC]"]
ms.assetid: 5bf208a5-5683-439b-92a1-547c5ded26cd
---
# TN017: Destroying window objects

This note describes the use of the [`CWnd::PostNcDestroy`](../mfc/reference/cwnd-class.md#postncdestroy) method. Use this method if you want to do customized allocation of `CWnd`-derived objects. This note also explains why you should use [`CWnd::DestroyWindow`](../mfc/reference/cwnd-class.md#destroywindow) to destroy a C++ Windows object instead of the **`delete`** operator.

If you follow the guidelines in this article, you'll have few cleanup problems. These problems can result from issues such as forgetting to delete/free C++ memory, forgetting to free system resources like `HWND`s, or freeing objects too many times.

## The problem

Each windows object (object of a class derived from `CWnd`) represents both a C++ object and an `HWND`. C++ objects are allocated in the application's heap and `HWND`s are allocated in system resources by the window manager. Because there are several ways to destroy a window object, we must provide a set of rules that prevent system resource or memory leaks. These rules must also prevent objects and Windows handles from being destroyed more than one time.

## Destroying windows

The following are the two permitted ways to destroy a Windows object:

- Calling `CWnd::DestroyWindow` or the Windows API `DestroyWindow`.

- Explicitly deleting with the **`delete`** operator.

The first case is by far the most common. This case applies even if your code doesn't call `DestroyWindow` directly. When the user directly closes a frame window, this action generates the WM_CLOSE message, and the default response to this message is to call `DestroyWindow`. When a parent window is destroyed, Windows calls `DestroyWindow` for all its children.

The second case, the use of the **`delete`** operator on Windows objects, should be rare. The following are some cases where using **`delete`** is the correct choice.

## Auto cleanup with `CWnd::PostNcDestroy`

When the system destroys a Windows window, the last Windows message sent to the window is `WM_NCDESTROY`. The default `CWnd` handler for that message is [`CWnd::OnNcDestroy`](../mfc/reference/cwnd-class.md#onncdestroy). `OnNcDestroy` will detach the `HWND` from the C++ object and call the virtual function `PostNcDestroy`. Some classes override this function to delete the C++ object.

The default implementation of `CWnd::PostNcDestroy` does nothing, which is appropriate for window objects that are allocated on the stack frame or embedded in other objects. This behavior isn't appropriate for window objects designed for allocation on the heap without any other objects. In other words, it isn't appropriate for window objects that aren't embedded in other C++ objects.

Classes designed for allocation alone on the heap override the `PostNcDestroy` method to perform a `delete this;`. This statement will free any memory associated with the C++ object. Even though the default `CWnd` destructor calls `DestroyWindow` if *`m_hWnd`* isn't `NULL`, this call doesn't lead to infinite recursion because the handle will be detached and `NULL` during the cleanup phase.

> [!NOTE]
> The system usually calls `CWnd::PostNcDestroy` after it processes the Windows `WM_NCDESTROY` message and the `HWND` and the C++ window object are no longer connected. The system will also call `CWnd::PostNcDestroy` in the implementation of most [`CWnd::Create`](../mfc/reference/cwnd-class.md#create) calls if failure occurs. The auto cleanup rules are described later in this article.

## Auto cleanup classes

The following classes aren't designed for auto-cleanup. They're typically embedded in other C++ objects or on the stack:

- All standard Windows controls (`CStatic`, `CEdit`, `CListBox`, and so on).

- Any child windows derived directly from `CWnd` (for example, custom controls).

- Splitter windows (`CSplitterWnd`).

- Default control bars (classes derived from `CControlBar`, see [Technical Note 31](../mfc/tn031-control-bars.md) for enabling auto-delete for control bar objects).

- Dialogs (`CDialog`) designed for modal dialogs on the stack frame.

- All the standard dialogs except `CFindReplaceDialog`.

- The default dialogs created by ClassWizard.

The following classes are designed for auto-cleanup. They're typically allocated by themselves on the heap:

- Main frame windows (derived directly or indirectly from `CFrameWnd`).

- View windows (derived directly or indirectly from `CView`).

If you want to break these rules, you must override the `PostNcDestroy` method in your derived class. To add auto-cleanup to your class, call your base class and then do a `delete this;`. To remove auto-cleanup from your class, call `CWnd::PostNcDestroy` directly instead of the `PostNcDestroy` method of your direct base class.

The most common use of changing auto cleanup behavior is to create a modeless dialog that can be allocated on the heap.

## When to call `delete`

We recommend that you call `DestroyWindow` to destroy a Windows object, either the C++ method or the global `DestroyWindow` API.

Don't call the global `DestroyWindow` API to destroy an MDI Child window. You should use the virtual method `CWnd::DestroyWindow` instead.

For C++ Window objects that don't perform auto-cleanup, using the **`delete`** operator can cause a memory leak when you try to call `DestroyWindow` in the `CWnd::~CWnd` destructor if the `VTBL` doesn't point to the correctly derived class. The leak occurs because the system can't find the appropriate destroy method to call. Using `DestroyWindow` instead of **`delete`** avoids these problems. Because this error can be subtle, compiling in debug mode will generate the following warning if you are at risk.

```Output
Warning: calling DestroyWindow in CWnd::~CWnd
    OnDestroy or PostNcDestroy in derived class will not be called
```

For C++ Windows objects that do perform auto-cleanup, you must call `DestroyWindow`. If you use the **`delete`** operator directly, the MFC diagnostic memory allocator will notify you that you're freeing memory two times. The two occurrences are your first explicit call and the indirect call to `delete this;` in the auto-cleanup implementation of `PostNcDestroy`.

After you call `DestroyWindow` on a non-auto-cleanup object, the C++ object will still be around, but *`m_hWnd`* will be `NULL`. After you call `DestroyWindow` on an auto-cleanup object, the C++ object will be gone, freed by the C++ delete operator in the auto-cleanup implementation of `PostNcDestroy`.

## See also

[Technical notes by number](../mfc/technical-notes-by-number.md)\
[Technical notes by category](../mfc/technical-notes-by-category.md)
