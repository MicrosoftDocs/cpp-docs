---
description: "Learn more about: TN040: MFC/OLE In-Place Resizing and Zooming"
title: "TN040: MFC-OLE In-Place Resizing and Zooming"
ms.date: "11/04/2016"
helpviewer_keywords: ["resizing in-place", "TN040", "zooming and in-place activation", "in-place activation, zooming and resizing"]
ms.assetid: 4d7859bd-0b2e-4254-be62-2735cecf02c6
---
# TN040: MFC/OLE In-Place Resizing and Zooming

> [!NOTE]
> The following technical note has not been updated since it was first included in the online documentation. As a result, some procedures and topics might be out of date or incorrect. For the latest information, it is recommended that you search for the topic of interest in the online documentation index.

This note will discuss the issues relating to in-place editing and how a server should accomplish correct zooming and in-place resizing. With in-place activation, the WYSIWYG concept is taken one step further in that containers and servers cooperate with each other, and in particular interpret the OLE specification in much the same way.

Because of the close interaction between a container and server supporting in-place activation there are a number of expectations from the end-user that should be maintained:

- The presentation display (the metafile drawn in the `COleServerItem::OnDraw` override) should look exactly the same as when it is drawn for editing (except that editing tools are not visible).

- When the container zooms, the server window should too!

- Both the container and server should display objects for editing using the same metrics. This means using a mapping mode based on the number of *logical* pixels per inch — not physical pixels per inch, when rendering on the display device.

> [!NOTE]
> Because in-place activation only applies to items that are embedded (not linked), zooming only applies to embedded objects. You will see APIs in both `COleServerDoc` and `COleServerItem` that are used for zooming. The reason for this dichotomy is that only functions that are valid for both linked and embedded items are in `COleServerItem` (this allows you to have a common implementation) and functions that are valid only for embedded objects are located in the `COleServerDoc` class (from the server's perspective, it is the **document** which is embedded).

Most of the burden is placed on the server implementer, in that the server must be aware of the container's zoom factor and modify its editing interface as appropriate. But how does the server determine the zoom factor that the container is using

## MFC Support for Zooming

The current zoom factor can be determined by calling `COleServerDoc::GetZoomFactor`. Calling this when the document is not in-place active will always result in a 100% zoom factor (or 1:1 ratio). Calling it while in-place active may return something other than 100%.

For an example of zooming correctly see the MFC OLE sample [HIERSVR](../overview/visual-cpp-samples.md). Zooming in HIERSVR is complicated by the fact that it displays text, and text, in general, does not scale in a linear fashion (hints, typographic conventions, design widths, and heights all complicate the matter). Still, HIERSVR is a reasonable reference for implementing zooming correctly, and so is the MFC Tutorial [SCRIBBLE](../overview/visual-cpp-samples.md) (step 7).

`COleServerDoc::GetZoomFactor` determines the zoom factor based on a number of different metrics available either from the container or from the implementation of your `COleServerItem` and `COleServerDoc` classes. In short, the current zoom factor is determined by the following formula:

```
Position Rectangle (PR) / Container Extent (CE)
```

The POSITION RECTANGLE is determined by the container. It is returned to the server during in-place activation when `COleClientItem::OnGetItemPosition` is called and is updated when the container calls the server's `COleServerDoc::OnSetItemRects` (with a call to `COleClientItem::SetItemRects`).

The CONTAINER EXTENT is slightly more complex to calculate. If the container has called `COleServerItem::OnSetExtent` (with a call to `COleClientItem::SetExtent`), then the CONTAINER EXTENT is this value converted to pixels based on the number of pixels per logical inch. If the container has not called SetExtent (which is usually the case), then the CONTAINER EXTENT is the size returned from `COleServerItem::OnGetExtent`. So, if the container has not called SetExtent, the framework assumes that if it did the container would have called it with 100% of the natural extent (the value returned from `COleServerItem::GetExtent`). Stated another way, the framework assumes that the container is displaying 100% (no more, no less) of the item.

It is important to note that although `COleServerItem::OnSetExtent` and `COleServerItem::OnGetExtent` have similar names, they do not manipulate the same attribute of the item. `OnSetExtent` is called to let the server know how much of the object is visible in the container (regardless of the zoom factor) and `OnGetExtent` is called by the container to determine ideal size of the object.

By looking at each of the APIs involved, you can get a clearer picture:

## COleServerItem::OnGetExtent

This function should return the "natural size" in HIMETRIC units of the item. The best way to think of the "natural size" is to define it as the size it might appear when printed. The size returned here is constant for a particular item contents (much like the metafile, which is constant for a particular item). This size does not change when zooming is applied to the item. It usually does not change when the container gives the item more or less space by calling `OnSetExtent`. An example of a change might be that of a simple text editor with no "margin" capability that wrapped text based on the last extent sent by the container. If a server does change, the server should probably set the OLEMISC_RECOMPOSEONRESIZE bit in the system registry (see the OLE SDK documentation for more information on this option).

## COleServerItem::OnSetExtent

This function is called when the container shows "more or less" of the object. Most containers will not call this at all. The default implementation stores the last value received from the container in 'm_sizeExtent', which is used in `COleServerDoc::GetZoomFactor` when computing the CONTAINER EXTENT value described above.

## COleServerDoc::OnSetItemRects

This function is called only when the document is in-place active. It is called when the container updates either the item's position or the clipping applied to the item. The POSITION RECTANGLE, as discussed above, provides the numerator for the zoom factor calculation. A server can request that the item position be changed by calling `COleServerDoc::RequestPositionChange`. The container may or may not respond to this request by calling `OnSetItemRects` (with a call to `COleServerItem::SetItemRects`).

## COleServerDoc::OnDraw

It is important to realize that the metafile created by overriding of `COleServerItem::OnDraw` produces exactly the same metafile, regardless of the current zoom factor. The container will scale the metafile as appropriate. This is an important distinction between the view's `OnDraw` and the server item's `OnDraw`. The view handles zooming, the item just creates a *zoomable* metafile and leaves it up to the container to do the appropriate zooming.

The best way to insure that your server behaves correctly is to use the implementation of `COleServerDoc::GetZoomFactor` if your document is in-place active.

## MFC Support for In-Place Resizing

MFC fully implements the in-place resizing interface as described in the OLE 2 specification. The user-interface is supported by the `COleResizeBar` class, a custom message WM_SIZECHILD, and special handling of this message in `COleIPFrameWnd`.

You may want to implement different handling of this message than what is provided by the framework. As described above, the framework leaves the results of in-place resizing up to the container — the server responds to the change in the zoom factor. If the container reacts by setting the both CONTAINER EXTENT and POSITION RECTANGLE during the processing of its `COleClientItem::OnChangeItemPosition` (called as a result of a call to `COleServerDoc::RequestPositionChange`) then the in-place resize will result in showing "more or less" of the item in the editing window. If the container reacts by just setting the POSITION RECTANGLE during the processing of `COleClientItem::OnChangeItemPosition`, the zoom factor will change and the item will be shown "zoomed in or out."

A server can control (to some degree) what happens during this negotiation. A spreadsheet, for example might elect to show more or fewer cells when the user resizes the window while editing the item in-place. A word-processor might elect to change the "page margins" so they are the same as the window and rewrap the text to the new margin. Servers implement this by changing the natural extent (the size returned from `COleServerItem::OnGetExtent`) when the resizing is done. This will cause both the POSITION RECTANGLE and the CONTAINER EXTENT to change by the same amount, resulting in the same zoom factor, but a bigger or smaller viewing area. In addition, more or less of the document will be visible in the metafile generated by `OnDraw`. In this case, the document itself is changing when the user resizes the item, instead of just the viewing area.

You can implement custom resizing and still leverage the user interface provided by `COleResizeBar` by overriding the WM_SIZECHILD message in your `COleIPFrameWnd` class. For more information on the specifics of WM_SIZECHILD, see [Technical Note 24](../mfc/tn024-mfc-defined-messages-and-resources.md).

## See also

[Technical Notes by Number](../mfc/technical-notes-by-number.md)<br/>
[Technical Notes by Category](../mfc/technical-notes-by-category.md)
