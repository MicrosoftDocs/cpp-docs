---
description: "Learn more about: Output (Device Context) Classes"
title: "Output (Device Context) Classes"
ms.date: "11/04/2016"
f1_keywords: ["vc.classes.output"]
helpviewer_keywords: ["device contexts [MFC], classes", "screen output classes [MFC]", "printing classes [MFC]", "window drawing classes [MFC]", "painting classes [MFC]", "output classes [MFC]"]
ms.assetid: 35fd6435-a38e-42c6-a3fa-cd6f39370fc3
---
# Output (Device Context) Classes

These classes encapsulate the different types of device contexts available in Windows.

Most of the following classes encapsulate a handle to a Windows device context. A device context is a Windows object that contains information about the drawing attributes of a device such as a display or a printer. All drawing calls are made through a device-context object. Additional classes derived from `CDC` encapsulate specialized device-context functionality, including support for Windows metafiles.

[CDC](reference/cdc-class.md)<br/>
The base class for device contexts. Used directly for accessing the whole display and for accessing nondisplay contexts such as printers.

[CPaintDC](reference/cpaintdc-class.md)<br/>
A display context used in `OnPaint` member functions of windows. Automatically calls `BeginPaint` on construction and `EndPaint` on destruction.

[CClientDC](reference/cclientdc-class.md)<br/>
A display context for client areas of windows. Used, for example, to draw in an immediate response to mouse events.

[CWindowDC](reference/cwindowdc-class.md)<br/>
A display context for entire windows, including both the client and nonclient areas.

[CMetaFileDC](reference/cmetafiledc-class.md)<br/>
A device context for Windows metafiles. A Windows metafile contains a sequence of graphics device interface (GDI) commands that can be replayed to create an image. Calls made to the member functions of a `CMetaFileDC` are recorded in a metafile.

## Related Classes

[CPoint](../atl-mfc-shared/reference/cpoint-class.md)<br/>
Holds coordinate (x, y) pairs.

[CSize](../atl-mfc-shared/reference/csize-class.md)<br/>
Holds distance, relative positions, or paired values.

[CRect](../atl-mfc-shared/reference/crect-class.md)<br/>
Holds coordinates of rectangular areas.

[CRgn](reference/crgn-class.md)<br/>
Encapsulates a GDI region for manipulating an elliptical, polygonal, or irregular area within a window. Used in conjunction with the clipping member functions in class `CDC`.

[CRectTracker](reference/crecttracker-class.md)<br/>
Displays and handles the user interface for resizing and moving rectangular objects.

[CColorDialog](reference/ccolordialog-class.md)<br/>
Provides a standard dialog box for selecting a color.

[CFontDialog](reference/cfontdialog-class.md)<br/>
Provides a standard dialog box for selecting a font.

[CPrintDialog](reference/cprintdialog-class.md)<br/>
Provides a standard dialog box for printing a file.

## See also

[Class Overview](class-library-overview.md)
