---
description: "Learn more about: Virtual List Controls"
title: "Virtual List Controls"
ms.date: "11/04/2016"
helpviewer_keywords: ["cache, virtual list control item data", "list controls [MFC], virtual", "list controls [MFC], List view", "virtual list controls"]
ms.assetid: 319f841f-e426-423a-8276-d93f965b0b45
---
# Virtual List Controls

A virtual list control is a list view control that has the LVS_OWNERDATA style. This style enables the control to support an item count up to a **DWORD** (the default item count only extends to an **`int`**). However, the biggest advantage provided by this style is the ability to only have a subset of data items in memory at any one time. This allows the virtual list view control to lend itself for use with large databases of information, where specific methods of accessing data are already in place.

> [!NOTE]
> In addition to providing virtual list functionality in `CListCtrl`, MFC also provides the same functionality in the [CListView](../mfc/reference/clistview-class.md) class.

There are some compatibility issues you should be aware of when developing virtual list controls. For more information, see the Compatibility Issues section of the List-View Controls topic in the Windows SDK.

## Handling the LVN_GETDISPINFO Notification

Virtual list controls maintain very little item information. Except for the item selection and focus information, all item information is managed by the owner of the control. Information is requested by the framework via a LVN_GETDISPINFO notification message. To provide the requested information, the owner of the virtual list control (or the control itself) must handle this notification. This can easily be done using the [Class Wizard](reference/mfc-class-wizard.md) (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)). The resultant code should look something like the following example (where `CMyDialog` owns the virtual list control object and the dialog is handling the notification):

[!code-cpp[NVC_MFCControlLadenDialog#23](../mfc/codesnippet/cpp/virtual-list-controls_1.cpp)]

In the handler for the LVN_GETDISPINFO notification message, you must check to see what type of information is being requested. The possible values are:

- `LVIF_TEXT` The *pszText* member must be filled in.

- `LVIF_IMAGE` The *iImage* member must be filled in.

- `LVIF_INDENT` The *iIndent* member must be filled in.

- `LVIF_PARAM` The *lParam* member must be filled in. (Not present for sub-items.)

- `LVIF_STATE` The *state* member must be filled in.

You should then supply whatever information is requested back to the framework.

The following example (taken from the body of the notification handler for the list control object) demonstrates one possible method by supplying information for the text buffers and image of an item:

[!code-cpp[NVC_MFCControlLadenDialog#24](../mfc/codesnippet/cpp/virtual-list-controls_2.cpp)]

## Caching and Virtual List Controls

Because this type of list control is intended for large data sets, it is recommended that you cache requested item data to improve retrieval performance. The framework provides a cache-hinting mechanism to assist in optimizing the cache by sending an LVN_ODCACHEHINT notification message.

The following example updates the cache with the range passed to the handler function.

[!code-cpp[NVC_MFCControlLadenDialog#25](../mfc/codesnippet/cpp/virtual-list-controls_3.cpp)]

For more information on preparing and maintaining a cache, see the Cache Management section of the List-View Controls topic in the Windows SDK.

## Finding Specific Items

The LVN_ODFINDITEM notification message is sent by the virtual list control when a particular list control item needs to be found. The notification message is sent when the list view control receives quick key access or when it receives an LVM_FINDITEM message. Search information is sent in the form of an **LVFINDINFO** structure, which is a member of the **NMLVFINDITEM** structure. Handle this message by overriding the `OnChildNotify` function of your list control object and inside the body of the handler, check for the LVN_ODFINDITEM message. If found, perform the appropriate action.

You should be prepared to search for an item that matches the information given by the list view control. You should return the index of the item if successful, or -1 if no matching item is found.

## See also

[Using CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controls](../mfc/controls-mfc.md)
