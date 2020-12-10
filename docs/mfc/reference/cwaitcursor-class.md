---
description: "Learn more about: CWaitCursor Class"
title: "CWaitCursor Class"
ms.date: "11/04/2016"
f1_keywords: ["CWaitCursor", "AFXWIN/CWaitCursor", "AFXWIN/CWaitCursor::CWaitCursor", "AFXWIN/CWaitCursor::Restore"]
helpviewer_keywords: ["CWaitCursor [MFC], CWaitCursor", "CWaitCursor [MFC], Restore"]
ms.assetid: 5dfae2ff-d7b6-4383-b0ad-91e0868c67b3
---
# CWaitCursor Class

Provides a one-line way to show a wait cursor, which is usually displayed as an hourglass, while you're doing a lengthy operation.

## Syntax

```
class CWaitCursor
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CWaitCursor::CWaitCursor](#cwaitcursor)|Constructs a `CWaitCursor` object and displays the wait cursor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWaitCursor::Restore](#restore)|Restores the wait cursor after it's been changed.|

## Remarks

`CWaitCursor` does not have a base class.

Good Windows programming practices require that you display a wait cursor whenever you're performing an operation that takes a noticeable amount of time.

To display a wait cursor, just define a `CWaitCursor` variable before the code that performs the lengthy operation. The object's constructor automatically causes the wait cursor to be displayed.

When the object goes out of scope (at the end of the block in which the `CWaitCursor` object is declared), its destructor sets the cursor to the previous cursor. In other words, the object performs the necessary clean-up automatically.

> [!NOTE]
> Because of how their constructors and destructors work, `CWaitCursor` objects are always declared as local variables — they're never declared as global variables nor are they allocated with **`new`**.

If you perform an operation which might cause the cursor to be changed, such as displaying a message box or dialog box, call the [Restore](#restore) member function to restore the wait cursor. It is okay to call `Restore` even when a wait cursor is currently displayed.

Another way to display a wait cursor is to use the combination of [CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor), [CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor), and perhaps [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor). However, `CWaitCursor` is easier to use because you don't need to set the cursor to the previous cursor when you're done with the lengthy operation.

> [!NOTE]
> MFC sets and restores the cursor using the [CWinApp::DoWaitCursor](../../mfc/reference/cwinapp-class.md#dowaitcursor) virtual function. You can override this function to provide custom behavior.

## Inheritance Hierarchy

`CWaitCursor`

## Requirements

**Header:** afxwin.h

## Example

[!code-cpp[NVC_MFCWindowing#62](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_1.cpp)]

## <a name="cwaitcursor"></a> CWaitCursor::CWaitCursor

To display a wait cursor, just declare a `CWaitCursor` object before the code that performs the lengthy operation.

```
CWaitCursor();
```

### Remarks

The constructor automatically causes the wait cursor to be displayed.

When the object goes out of scope (at the end of the block in which the `CWaitCursor` object is declared), its destructor sets the cursor to the previous cursor. In other words, the object performs the necessary clean-up automatically.

You can take advantage of the fact that the destructor is called at the end of the block (which might be before the end of the function) to make the wait cursor active in only part of your function. This technique is shown in the second example below.

> [!NOTE]
> Because of how their constructors and destructors work, `CWaitCursor` objects are always declared as local variables — they're never declared as global variables, nor are they allocated with **`new`**.

### Example

[!code-cpp[NVC_MFCWindowing#63](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_2.cpp)]

## <a name="restore"></a> CWaitCursor::Restore

To restore the wait cursor, call this function after performing an operation, such as displaying a message box or dialog box, which might change the wait cursor to another cursor.

```cpp
void Restore();
```

### Remarks

It is OK to call `Restore` even when the wait cursor is currently displayed.

If you need to restore the wait cursor while in a function other than the one in which the `CWaitCursor` object is declared, you can call [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor).

### Example

[!code-cpp[NVC_MFCWindowing#64](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_3.cpp)]

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor)<br/>
[CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)<br/>
[CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor)<br/>
[CWinApp::DoWaitCursor](../../mfc/reference/cwinapp-class.md#dowaitcursor)<br/>
[How Do I: Change the Mouse Cursor in an Microsoft Foundation Class Application](https://go.microsoft.com/fwlink/p/?linkid=128044)
