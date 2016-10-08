---
title: "CDC Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 715b3334-cb2b-4c9c-8067-02eb7c66c8b2
caps.latest.revision: 15
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CDC Class
<?xml version="1.0" encoding="utf-8"?>
<developerReferenceWithSyntaxDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://clixdevr3.blob.core.windows.net/ddueschema/developer.xsd">
    <introduction>
        <para>Defines a class of device-context objects. </para>
    </introduction>
    <syntaxSection>
        <legacySyntax>class CDC : public CObject</legacySyntax>
    </syntaxSection>
    <section>
        <title>Members</title>
        <content/>
        <sections>
            <section>
                <title>Public Constructors</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__cdc">CDC::CDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Constructs a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Methods</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__abortdoc">CDC::AbortDoc</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Terminates the current print job, erasing everything the application has written to the device since the last call of the <unmanagedCodeEntityReference>StartDoc</unmanagedCodeEntityReference> member function.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__abortpath">CDC::AbortPath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Closes and discards any paths in the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__addmetafilecomment">CDC::AddMetaFileComment</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the comment from a buffer into a specified enhanced-format metafile.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__alphablend">CDC::AlphaBlend</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Displays bitmaps that have transparent or semitransparent pixels.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__anglearc">CDC::AngleArc</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a line segment and an arc, and moves the current position to the ending point of the arc.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__arc">CDC::Arc</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws an elliptical arc.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__arcto">CDC::ArcTo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws an elliptical arc. This function is similar to <unmanagedCodeEntityReference>Arc</unmanagedCodeEntityReference>, except that the current position is updated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__attach">CDC::Attach</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Attaches a Windows device context to this <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__beginpath">CDC::BeginPath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Opens a path bracket in the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__bitblt">CDC::BitBlt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies a bitmap from a specified device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__chord">CDC::Chord</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a chord (a closed figure bounded by the intersection of an ellipse and a line segment).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__closefigure">CDC::CloseFigure</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Closes an open figure in a path.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__createcompatibledc">CDC::CreateCompatibleDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a memory-device context that is compatible with another device context. You can use it to prepare images in memory.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__createdc">CDC::CreateDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a device context for a specific device.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__createic">CDC::CreateIC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates an information context for a specific device. This provides a fast way to get information about the device without creating a device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__deletedc">CDC::DeleteDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Deletes the Windows device context associated with this <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__deletetempmap">CDC::DeleteTempMap</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Called by the <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> idle-time handler to delete any temporary <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object created by <unmanagedCodeEntityReference>FromHandle</unmanagedCodeEntityReference>. Also detaches the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__detach">CDC::Detach</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Detaches the Windows device context from this <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__dptohimetric">CDC::DPtoHIMETRIC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts device units into <legacyBold>HIMETRIC</legacyBold> units.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__dptolp">CDC::DPtoLP</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts device units into logical units.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__draw3drect">CDC::Draw3dRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a three-dimensional rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__drawdragrect">CDC::DrawDragRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Erases and redraws a rectangle as it is dragged.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__drawedge">CDC::DrawEdge</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws the edges of a rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__drawescape">CDC::DrawEscape</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Accesses drawing capabilities of a video display that are not directly available through the graphics device interface (GDI).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__drawfocusrect">CDC::DrawFocusRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a rectangle in the style used to indicate focus.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__drawframecontrol">CDC::DrawFrameControl</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draw a frame control.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__drawicon">CDC::DrawIcon</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws an icon.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__drawstate">CDC::DrawState</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Displays an image and applies a visual effect to indicate a state.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__drawtext">CDC::DrawText</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws formatted text in the specified rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__drawtextex">CDC::DrawTextEx</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws formatted text in the specified rectangle using additional formats.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__ellipse">CDC::Ellipse</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws an ellipse.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__enddoc">CDC::EndDoc</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Ends a print job started by the <unmanagedCodeEntityReference>StartDoc</unmanagedCodeEntityReference> member function.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__endpage">CDC::EndPage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Informs the device driver that a page is ending.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__endpath">CDC::EndPath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Closes a path bracket and selects the path defined by the bracket into the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__enumobjects">CDC::EnumObjects</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Enumerates the pens and brushes available in a device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__escape">CDC::Escape</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Allows applications to access facilities that are not directly available from a particular device through GDI. Also allows access to Windows escape functions. Escape calls made by an application are translated and sent to the device driver.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__excludecliprect">CDC::ExcludeClipRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a new clipping region that consists of the existing clipping region minus the specified rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__excludeupdatergn">CDC::ExcludeUpdateRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Prevents drawing within invalid areas of a window by excluding an updated region in the window from a clipping region.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__extfloodfill">CDC::ExtFloodFill</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fills an area with the current brush. Provides more flexibility than the <link xlink:href="#cdc__floodfill">FloodFill</link> member function.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__exttextout">CDC::ExtTextOut</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Writes a character string within a rectangular region using the currently selected font.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__fillpath">CDC::FillPath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Closes any open figures in the current path and fills the path's interior by using the current brush and polygon-filling mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__fillrect">CDC::FillRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fills a given rectangle by using a specific brush.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__fillrgn">CDC::FillRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fills a specific region with the specified brush.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__fillsolidrect">CDC::FillSolidRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fills a rectangle with a solid color.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__flattenpath">CDC::FlattenPath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Transforms any curves in the path selected into the current device context, and turns each curve into a sequence of lines.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__floodfill">CDC::FloodFill</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fills an area with the current brush.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__framerect">CDC::FrameRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a border around a rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__framergn">CDC::FrameRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a border around a specific region using a brush.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__fromhandle">CDC::FromHandle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object when given a handle to a device context. If a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object is not attached to the handle, a temporary <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object is created and attached.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getarcdirection">CDC::GetArcDirection</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the current arc direction for the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getaspectratiofilter">CDC::GetAspectRatioFilter</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the setting for the current aspect-ratio filter.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getbkcolor">CDC::GetBkColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current background color.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getbkmode">CDC::GetBkMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the background mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getboundsrect">CDC::GetBoundsRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the current accumulated bounding rectangle for the specified device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getbrushorg">CDC::GetBrushOrg</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the origin of the current brush.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcharabcwidths">CDC::GetCharABCWidths</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the widths, in logical units, of consecutive characters in a given range from the current font.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcharabcwidthsi">CDC::GetCharABCWidthsI</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the widths, in logical units, of consecutive glyph indices in a specified range from the current TrueType font.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcharacterplacement">CDC::GetCharacterPlacement</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves various types of information on a character string.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcharwidth">CDC::GetCharWidth</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the fractional widths of consecutive characters in a given range from the current font.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcharwidthi">CDC::GetCharWidthI</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the widths, in logical coordinates, of consecutive glyph indices in a specified range from the current font.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getclipbox">CDC::GetClipBox</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the dimensions of the tightest bounding rectangle around the current clipping boundary.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcoloradjustment">CDC::GetColorAdjustment</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the color adjustment values for the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcurrentbitmap">CDC::GetCurrentBitmap</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the currently selected <unmanagedCodeEntityReference>CBitmap</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcurrentbrush">CDC::GetCurrentBrush</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the currently selected <unmanagedCodeEntityReference>CBrush</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcurrentfont">CDC::GetCurrentFont</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the currently selected <unmanagedCodeEntityReference>CFont</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcurrentpalette">CDC::GetCurrentPalette</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the currently selected <unmanagedCodeEntityReference>CPalette</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcurrentpen">CDC::GetCurrentPen</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns a pointer to the currently selected <unmanagedCodeEntityReference>CPen</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getcurrentposition">CDC::GetCurrentPosition</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current position of the pen (in logical coordinates).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getdcbrushcolor">CDC::GetDCBrushColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current brush color.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getdcpencolor">CDC::GetDCPenColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current pen color.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getdevicecaps">CDC::GetDeviceCaps</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a specified kind of device-specific information about a given display device's capabilities.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getfontdata">CDC::GetFontData</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves font metric information from a scalable font file. The information to retrieve is identified by specifying an offset into the font file and the length of the information to return.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getfontlanguageinfo">CDC::GetFontLanguageInfo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns information about the currently selected font for the specified display context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getglyphoutline">CDC::GetGlyphOutline</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the outline curve or bitmap for an outline character in the current font.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getgraphicsmode">CDC::GetGraphicsMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current graphics mode for the specified device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gethalftonebrush">CDC::GetHalftoneBrush</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves a halftone brush.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getkerningpairs">CDC::GetKerningPairs</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the character kerning pairs for the font that is currently selected in the specified device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getlayout">CDC::GetLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the layout of a device context (DC). The layout can be either left to right (default) or right to left (mirrored).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getmapmode">CDC::GetMapMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current mapping mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getmiterlimit">CDC::GetMiterLimit</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the miter limit for the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getnearestcolor">CDC::GetNearestColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the closest logical color to a specified logical color that the given device can represent.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getoutlinetextmetrics">CDC::GetOutlineTextMetrics</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves font metric information for TrueType fonts.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getoutputcharwidth">CDC::GetOutputCharWidth</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the widths of individual characters in a consecutive group of characters from the current font using the output device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getoutputtabbedtextextent">CDC::GetOutputTabbedTextExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Computes the width and height of a character string on the output device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getoutputtextextent">CDC::GetOutputTextExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Computes the width and height of a line of text on the output device context using the current font to determine the dimensions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getoutputtextmetrics">CDC::GetOutputTextMetrics</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the metrics for the current font from the output device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getpath">CDC::GetPath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the coordinates defining the endpoints of lines and the control points of curves found in the path that is selected into the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getpixel">CDC::GetPixel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the RGB color value of the pixel at the specified point.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getpolyfillmode">CDC::GetPolyFillMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current polygon-filling mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getrop2">CDC::GetROP2</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current drawing mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getsafehdc">CDC::GetSafeHdc</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns <link xlink:href="#cdc__m_hdc">m_hDC</link>, the output device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getstretchbltmode">CDC::GetStretchBltMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current bitmap-stretching mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gettabbedtextextent">CDC::GetTabbedTextExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Computes the width and height of a character string on the attribute device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gettextalign">CDC::GetTextAlign</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the text-alignment flags.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gettextcharacterextra">CDC::GetTextCharacterExtra</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current setting for the amount of intercharacter spacing.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gettextcolor">CDC::GetTextColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current text color.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gettextextent">CDC::GetTextExtent</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Computes the width and height of a line of text on the attribute device context using the current font to determine the dimensions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gettextextentexpointi">CDC::GetTextExtentExPointI</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the number of characters in a specified string that will fit within a specified space and fills an array with the text extent for each of those characters.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gettextextentpointi">CDC::GetTextExtentPointI</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the width and height of the specified array of glyph indices.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gettextface">CDC::GetTextFace</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Copies the typeface name of the current font into a buffer as a null-terminated string.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gettextmetrics">CDC::GetTextMetrics</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the metrics for the current font from the attribute device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getviewportext">CDC::GetViewportExt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the x- and y-extents of the viewport.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getviewportorg">CDC::GetViewportOrg</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the x- and y-coordinates of the viewport origin.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getwindow">CDC::GetWindow</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Returns the window associated with the display device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getwindowext">CDC::GetWindowExt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the x- and y-extents of the associated window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getwindoworg">CDC::GetWindowOrg</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the x- and y-coordinates of the origin of the associated window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__getworldtransform">CDC::GetWorldTransform</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the current world-space to page-space transformation.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__gradientfill">CDC::GradientFill</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fills rectangle and triangle structures with a gradating color. </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__graystring">CDC::GrayString</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws dimmed (grayed) text at the given location.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__himetrictodp">CDC::HIMETRICtoDP</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts <legacyBold>HIMETRIC</legacyBold> units into device units.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__himetrictolp">CDC::HIMETRICtoLP</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts <legacyBold>HIMETRIC</legacyBold> units into logical units.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__intersectcliprect">CDC::IntersectClipRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a new clipping region by forming the intersection of the current region and a rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__invertrect">CDC::InvertRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inverts the contents of a rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__invertrgn">CDC::InvertRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Inverts the colors in a region.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__isprinting">CDC::IsPrinting</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether the device context is being used for printing.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__lineto">CDC::LineTo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a line from the current position up to, but not including, a point.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__lptodp">CDC::LPtoDP</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts logical units into device units.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__lptohimetric">CDC::LPtoHIMETRIC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Converts logical units into <legacyBold>HIMETRIC</legacyBold> units.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__maskblt">CDC::MaskBlt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Combines the color data for the source and destination bitmaps using the given mask and raster operation.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__modifyworldtransform">CDC::ModifyWorldTransform</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Changes the world transformation for a device context using the specified mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__moveto">CDC::MoveTo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves the current position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__offsetcliprgn">CDC::OffsetClipRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves the clipping region of the given device.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__offsetviewportorg">CDC::OffsetViewportOrg</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Modifies the viewport origin relative to the coordinates of the current viewport origin.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__offsetwindoworg">CDC::OffsetWindowOrg</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Modifies the window origin relative to the coordinates of the current window origin.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__paintrgn">CDC::PaintRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Fills a region with the selected brush.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__patblt">CDC::PatBlt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates a bit pattern.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__pie">CDC::Pie</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a pie-shaped wedge.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__playmetafile">CDC::PlayMetaFile</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Plays the contents of the specified metafile on the given device. The enhanced version of <unmanagedCodeEntityReference>PlayMetaFile</unmanagedCodeEntityReference> displays the picture stored in the given enhanced-format metafile. The metafile can be played any number of times.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__plgblt">CDC::PlgBlt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Performs a bit-block transfer of the bits of color data from the specified rectangle in the source device context to the specified parallelogram in the given device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__polybezier">CDC::PolyBezier</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws one or more Bzier splines. The current position is neither used nor updated.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__polybezierto">CDC::PolyBezierTo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws one or more Bzier splines, and moves the current position to the ending point of the last Bzier spline.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__polydraw">CDC::PolyDraw</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a set of line segments and Bzier splines. This function updates the current position.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__polygon">CDC::Polygon</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a polygon consisting of two or more points (vertices) connected by lines.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__polyline">CDC::Polyline</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a set of line segments connecting the specified points.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__polylineto">CDC::PolylineTo</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws one or more straight lines and moves the current position to the ending point of the last line.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__polypolygon">CDC::PolyPolygon</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Creates two or more polygons that are filled using the current polygon-filling mode. The polygons may be disjoint or they may overlap.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__polypolyline">CDC::PolyPolyline</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws multiple series of connected line segments. The current position is neither used nor updated by this function.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__ptvisible">CDC::PtVisible</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies whether the given point is within the clipping region.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__realizepalette">CDC::RealizePalette</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Maps palette entries in the current logical palette to the system palette.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__rectangle">CDC::Rectangle</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a rectangle using the current pen and fills it using the current brush.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__rectvisible">CDC::RectVisible</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Determines whether any part of the given rectangle lies within the clipping region.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__releaseattribdc">CDC::ReleaseAttribDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Releases <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>, the attribute device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__releaseoutputdc">CDC::ReleaseOutputDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Releases <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference>, the output device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__resetdc">CDC::ResetDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Updates the <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference> device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__restoredc">CDC::RestoreDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Restores the device context to a previous state saved with <unmanagedCodeEntityReference>SaveDC</unmanagedCodeEntityReference>.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__roundrect">CDC::RoundRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Draws a rectangle with rounded corners using the current pen and filled using the current brush.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__savedc">CDC::SaveDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Saves the current state of the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__scaleviewportext">CDC::ScaleViewportExt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Modifies the viewport extent relative to the current values.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__scalewindowext">CDC::ScaleWindowExt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Modifies the window extents relative to the current values.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__scrolldc">CDC::ScrollDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Scrolls a rectangle of bits horizontally and vertically.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__selectclippath">CDC::SelectClipPath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects the current path as a clipping region for the device context, combining the new region with any existing clipping region by using the specified mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__selectcliprgn">CDC::SelectClipRgn</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Combines the given region with the current clipping region by using the specified mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__selectobject">CDC::SelectObject</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects a GDI drawing object such as a pen.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__selectpalette">CDC::SelectPalette</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects the logical palette.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__selectstockobject">CDC::SelectStockObject</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Selects one of the predefined stock pens, brushes, or fonts provided by Windows.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setabortproc">CDC::SetAbortProc</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets a programmer-supplied callback function that Windows calls if a print job must be aborted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setarcdirection">CDC::SetArcDirection</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the drawing direction to be used for arc and rectangle functions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setattribdc">CDC::SetAttribDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>, the attribute device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setbkcolor">CDC::SetBkColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the current background color.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setbkmode">CDC::SetBkMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the background mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setboundsrect">CDC::SetBoundsRect</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Controls the accumulation of bounding-rectangle information for the specified device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setbrushorg">CDC::SetBrushOrg</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Specifies the origin for the next brush selected into a device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setcoloradjustment">CDC::SetColorAdjustment</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the color adjustment values for the device context using the specified values.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setdcbrushcolor">CDC::SetDCBrushColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the current brush color.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setdcpencolor">CDC::SetDCPenColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the current pen color.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setgraphicsmode">CDC::SetGraphicsMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the current graphics mode for the specified device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setlayout">CDC::SetLayout</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Changes the layout of a device context (DC).</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setmapmode">CDC::SetMapMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the current mapping mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setmapperflags">CDC::SetMapperFlags</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Alters the algorithm that the font mapper uses when it maps logical fonts to physical fonts.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setmiterlimit">CDC::SetMiterLimit</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the limit for the length of miter joins for the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setoutputdc">CDC::SetOutputDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference>, the output device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setpixel">CDC::SetPixel</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the pixel at the specified point to the closest approximation of the specified color.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setpixelv">CDC::SetPixelV</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the pixel at the specified coordinates to the closest approximation of the specified color. <unmanagedCodeEntityReference>SetPixelV</unmanagedCodeEntityReference> is faster than <unmanagedCodeEntityReference>SetPixel</unmanagedCodeEntityReference> because it does not need to return the color value of the point actually painted.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setpolyfillmode">CDC::SetPolyFillMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the polygon-filling mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setrop2">CDC::SetROP2</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the current drawing mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setstretchbltmode">CDC::SetStretchBltMode</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the bitmap-stretching mode.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__settextalign">CDC::SetTextAlign</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the text-alignment flags.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__settextcharacterextra">CDC::SetTextCharacterExtra</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the amount of intercharacter spacing.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__settextcolor">CDC::SetTextColor</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the text color.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__settextjustification">CDC::SetTextJustification</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Adds space to the break characters in a string.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setviewportext">CDC::SetViewportExt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the x- and y-extents of the viewport.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setviewportorg">CDC::SetViewportOrg</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the viewport origin.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setwindowext">CDC::SetWindowExt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the x- and y-extents of the associated window.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setwindoworg">CDC::SetWindowOrg</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the window origin of the device context.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__setworldtransform">CDC::SetWorldTransform</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Sets the current world-space to page-space transformation.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__startdoc">CDC::StartDoc</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Informs the device driver that a new print job is starting.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__startpage">CDC::StartPage</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Informs the device driver that a new page is starting.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__stretchblt">CDC::StretchBlt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Moves a bitmap from a source rectangle and device into a destination rectangle, stretching or compressing the bitmap if necessary to fit the dimensions of the destination rectangle.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__strokeandfillpath">CDC::StrokeAndFillPath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Closes any open figures in a path, strikes the outline of the path by using the current pen, and fills its interior by using the current brush.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__strokepath">CDC::StrokePath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Renders the specified path by using the current pen.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__tabbedtextout">CDC::TabbedTextOut</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Writes a character string at a specified location, expanding tabs to the values specified in an array of tab-stop positions.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__textout">CDC::TextOut</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Writes a character string at a specified location using the currently selected font.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__transparentblt">CDC::TransparentBlt</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Transfers a bit-block of color data from the specified source device context into a destination device context, rendering a specified color transparent in the transfer.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__updatecolors">CDC::UpdateColors</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Updates the client area of the device context by matching the current colors in the client area to the system palette on a pixel-by-pixel basis.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__widenpath">CDC::WidenPath</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Redefines the current path as the area that would be painted if the path were stroked using the pen currently selected into the device context.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Operators</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__operator_hdc">CDC::operator HDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>Retrieves the handle of the device context.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
            <section>
                <title>Public Data Members</title>
                <content>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Name</para>
                                </TD>
                                <TD>
                                    <para>Description</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__m_hattribdc">CDC::m_hAttribDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The attribute-device context used by this <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <link xlink:href="#cdc__m_hdc">CDC::m_hDC</link>
                                    </para>
                                </TD>
                                <TD>
                                    <para>The output-device context used by this <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <languageReferenceRemarks>
        <content>
            <para>The <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object provides member functions for working with a device context, such as a display or printer, as well as members for working with a display context associated with the client area of a window.</para>
            <para>Do all drawing through the member functions of a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object. The class provides member functions for device-context operations, working with drawing tools, type-safe graphics device interface (GDI) object selection, and working with colors and palettes. It also provides member functions for getting and setting drawing attributes, mapping, working with the viewport, working with the window extent, converting coordinates, working with regions, clipping, drawing lines, and drawing simple shapes, ellipses, and polygons. Member functions are also provided for drawing text, working with fonts, using printer escapes, scrolling, and playing metafiles.</para>
            <para>To use a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object, construct it, and then call its member functions that parallel Windows functions that use device contexts.</para>
            <alert class="note">
                <para>Under Windows 95/98, all screen coordinates are limited to 16 bits. Therefore, an <languageKeyword>int</languageKeyword> passed to a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> member function must lie in the range –32768 to 32767.</para>
            </alert>
            <para>For specific uses, the Microsoft Foundation Class Library provides several classes derived from <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> . <unmanagedCodeEntityReference>CPaintDC</unmanagedCodeEntityReference> encapsulates calls to <unmanagedCodeEntityReference>BeginPaint</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>EndPaint</unmanagedCodeEntityReference>. <unmanagedCodeEntityReference>CClientDC</unmanagedCodeEntityReference> manages a display context associated with a window's client area. <unmanagedCodeEntityReference>CWindowDC</unmanagedCodeEntityReference> manages a display context associated with an entire window, including its frame and controls. <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> associates a device context with a metafile.</para>
            <para> <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> provides two member functions, <legacyLink xlink:href="#cdc__getlayout">GetLayout</legacyLink> and <legacyLink xlink:href="#cdc__setlayout">SetLayout</legacyLink>, for reversing the layout of a device context, which does not inherit its layout from a window. Such right-to-left orientation is necessary for applications written for cultures, such as Arabic or Hebrew, where the character layout is not the European standard.</para>
            <para> <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> contains two device contexts, <legacyLink xlink:href="#cdc__m_hdc">m_hDC</legacyLink> and <legacyLink xlink:href="#cdc__m_hattribdc">m_hAttribDC</legacyLink>, which, on creation of a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object, refer to the same device. <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> directs all output GDI calls to <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> and most attribute GDI calls to <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>. (An example of an attribute call is <unmanagedCodeEntityReference>GetTextColor</unmanagedCodeEntityReference>, while <unmanagedCodeEntityReference>SetTextColor</unmanagedCodeEntityReference> is an output call.)</para>
            <para>For example, the framework uses these two device contexts to implement a <unmanagedCodeEntityReference>CMetaFileDC</unmanagedCodeEntityReference> object that will send output to a metafile while reading attributes from a physical device. Print preview is implemented in the framework in a similar fashion. You can also use the two device contexts in a similar way in your application-specific code.</para>
            <para>There are times when you may need text-metric information from both the <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference> device contexts. The following pairs of functions provide this capability:</para>
            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                <thead>
                    <tr>
                        <TD>
                            <para>Uses m_hAttribDC</para>
                        </TD>
                        <TD>
                            <para>Uses m_hDC</para>
                        </TD>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                        <TD>
                            <para> <legacyLink xlink:href="#cdc__gettextextent">GetTextExtent</legacyLink>
                            </para>
                        </TD>
                        <TD>
                            <para> <legacyLink xlink:href="#cdc__getoutputtextextent">GetOutputTextExtent</legacyLink>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <legacyLink xlink:href="#cdc__gettabbedtextextent">GetTabbedTextExtent</legacyLink>
                            </para>
                        </TD>
                        <TD>
                            <para> <legacyLink xlink:href="#cdc__getoutputtabbedtextextent">GetOutputTabbedTextExtent</legacyLink>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <legacyLink xlink:href="#cdc__gettextmetrics">GetTextMetrics</legacyLink>
                            </para>
                        </TD>
                        <TD>
                            <para> <legacyLink xlink:href="#cdc__getoutputtextmetrics">GetOutputTextMetrics</legacyLink>
                            </para>
                        </TD>
                    </tr>
                    <tr>
                        <TD>
                            <para> <legacyLink xlink:href="#cdc__getcharwidth">GetCharWidth</legacyLink>
                            </para>
                        </TD>
                        <TD>
                            <para> <legacyLink xlink:href="#cdc__getoutputcharwidth">GetOutputCharWidth</legacyLink>
                            </para>
                        </TD>
                    </tr>
                </tbody>
            </table>
            <para>For more information on <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference>, see <legacyLink xlink:href="d0cd51f1-f778-4c7e-bf50-d738d10433c7">Device Contexts</legacyLink>.</para>
        </content>
    </languageReferenceRemarks>
    <section>
        <title>Inheritance Hierarchy</title>
        <content>
            <para> <legacyLink xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">CObject</legacyLink>
            </para>
            <para> <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference>
            </para>
        </content>
    </section>
    <requirements>
        <content>
            <para> <legacyBold>Header: </legacyBold>afxwin.h</para>
        </content>
    </requirements>
    <section address="cdc__abortdoc">
        <!--1aeec43f-e8ed-4264-89df-d69420fcad66-->
        <title>CDC::AbortDoc</title>
        <content>
            <para>Terminates the current print job and erases everything the application has written to the device since the last call to the <legacyLink xlink:href="#cdc__startdoc">StartDoc</legacyLink> member function.</para>
            <legacySyntax>int AbortDoc();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A value greater than or equal to 0 if successful, or a negative value if an error has occurred. The following list shows common error values and their meanings:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>SP_ERROR</legacyBold>   General error.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SP_OUTOFDISK</legacyBold>   Not enough disk space is currently available for spooling, and no more space will become available.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SP_OUTOFMEMORY</legacyBold>   Not enough memory is available for spooling.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SP_USERABORT</legacyBold>   User terminated the job through the Print Manager.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function replaces the <unmanagedCodeEntityReference>ABORTDOC</unmanagedCodeEntityReference> printer escape.</para>
                    <para> <legacyBold>AbortDoc</legacyBold> should be used to terminate the following:  </para>
                    <list class="bullet">
                        <listItem>
                            <para>Printing operations that do not specify an abort function using <legacyLink xlink:href="#cdc__setabortproc">SetAbortProc</legacyLink>.</para>
                        </listItem>
                        <listItem>
                            <para>Printing operations that have not yet reached their first <legacyBold>NEWFRAME</legacyBold> or <legacyBold>NEXTBAND</legacyBold> escape call.</para>
                        </listItem>
                    </list>
                    <para>If an application encounters a printing error or a canceled print operation, it must not attempt to terminate the operation by using either the <legacyLink xlink:href="#cdc__enddoc">EndDoc</legacyLink> or <legacyBold>AbortDoc</legacyBold> member functions of class <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference>. GDI automatically terminates the operation before returning the error value.</para>
                    <para>If the application displays a dialog box to allow the user to cancel the print operation, it must call <legacyBold>AbortDoc</legacyBold> before destroying the dialog box.</para>
                    <para>If Print Manager was used to start the print job, calling <legacyBold>AbortDoc</legacyBold> erases the entire spool job — the printer receives nothing. If Print Manager was not used to start the print job, the data may have been sent to the printer before <legacyBold>AbortDoc</legacyBold> was called. In this case, the printer driver would have reset the printer (when possible) and closed the print job.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cdc__startdoc">CDC::StartDoc</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__abortpath">
        <!--9f55961c-28b3-44a6-b29c-137f53207ab0-->
        <title>CDC::AbortPath</title>
        <content>
            <para>Closes and discards any paths in the device context.</para>
            <legacySyntax>BOOL AbortPath();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If there is an open path bracket in the device context, the path bracket is closed and the path is discarded. If there is a closed path in the device context, the path is discarded.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__addmetafilecomment">
        <!--93f376b3-5c84-4221-8675-7f39855e5402-->
        <title>CDC::AddMetaFileComment</title>
        <content>
            <para>Copies the comment from a buffer into a specified enhanced-format metafile.</para>
            <legacySyntax>BOOL AddMetaFileComment(
    UINT nDataSize,
    const BYTE* pCommentData );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>nDataSize</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the length of the comment buffer, in bytes.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>pCommentData</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to the buffer that contains the comment.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A comment may include any private information — for example, the source of the picture and the date it was created. A comment should begin with an application signature, followed by the data. Comments should not contain position-specific data. Position-specific data specifies the location of a record, and it should not be included because one metafile may be embedded within another metafile. This function can only be used with enhanced metafiles.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__alphablend">
        <!--f6409574-13a2-4126-adfd-84cc124b6c0f-->
        <title>CDC::AlphaBlend</title>
        <content>
            <para>Call this member function to display bitmaps that have transparent or semitransparent pixels.</para>
            <legacySyntax>BOOL AlphaBlend(
    int xDest,
    int yDest,
    int nDestWidth,
    int nDestHeight,
    CDC* pSrcDC,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    BLENDFUNCTION blend );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>xDest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate, in logical units, of the upper-left corner of the destination rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>yDest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate, in logical units, of the upper-left corner of the destination rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nDestWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width, in logical units, of the destination rectangle. </para>
                        </definition>
                        <definedTerm> <parameterReference>nDestHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height, in logical units, of the destination rectangle. </para>
                        </definition>
                        <definedTerm> <parameterReference>pSrcDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the source device context. </para>
                        </definition>
                        <definedTerm> <parameterReference>xSrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate, in logical units, of the upper-left corner of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>ySrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate, in logical units, of the upper-left corner of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nSrcWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width, in logical units, of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nSrcHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height, in logical units, of the source rectangle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>blend</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies a                                 <externalLink> <linkText>BLENDFUNCTION</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183393</linkUri>
                                </externalLink> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>TRUE</legacyBold> if successful; otherwise <legacyBold>FALSE</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>See                         <externalLink> <linkText>AlphaBlend</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183351</linkUri>
                        </externalLink> in the <token>winSDK</token> for more information.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__anglearc">
        <!--348e9fcf-0f14-49c8-98b8-439a077e2718-->
        <title>CDC::AngleArc</title>
        <content>
            <para>Draws a line segment and an arc.</para>
            <legacySyntax>BOOL AngleArc(
    int x,
    int y,
    int nRadius,
    float fStartAngle,
    float fSweepAngle );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the center of the circle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the center of the circle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>nRadius</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the radius of the circle in logical units. This value must be positive.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>fStartAngle</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the starting angle in degrees relative to the x-axis.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>fSweepAngle</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the sweep angle in degrees relative to the starting angle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The line segment is drawn from the current position to the beginning of the arc. The arc is drawn along the perimeter of a circle with the given radius and center. The length of the arc is defined by the given start and sweep angles.</para>
                    <para> <unmanagedCodeEntityReference>AngleArc</unmanagedCodeEntityReference> moves the current position to the ending point of the arc. The arc drawn by this function may appear to be elliptical, depending on the current transformation and mapping mode. Before drawing the arc, this function draws the line segment from the current position to the beginning of the arc. The arc is drawn by constructing an imaginary circle with the specified radius around the specified center point. The starting point of the arc is determined by measuring counterclockwise from the x-axis of the circle by the number of degrees in the start angle. The ending point is similarly located by measuring counterclockwise from the starting point by the number of degrees in the sweep angle.</para>
                    <para>If the sweep angle is greater than 360 degrees the arc is swept multiple times. This function draws lines by using the current pen. The figure is not filled.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__arc">
        <!--8d8ac5ad-4aef-4800-958e-ea1888ba85f6-->
        <title>CDC::Arc</title>
        <content>
            <para>Draws an elliptical arc.</para>
            <legacySyntax>BOOL Arc(
    int x1,
    int y1,
    int x2,
    int y2,
    int x3,
    int y3,
    int x4,
    int y4 );

BOOL Arc(
    LPCRECT lpRect,
    POINT ptStart,
    POINT ptEnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the upper-left corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the upper-left corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the lower-right corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the lower-right corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x3</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the point that defines the arc's starting point (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>y3</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the point that defines the arc's starting point (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>x4</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the point that defines the arc's endpoint (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>y4</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the point that defines the arc's endpoint (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the bounding rectangle (in logical units). You can pass either an <unmanagedCodeEntityReference>LPRECT</unmanagedCodeEntityReference> or a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>ptStart</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x- and y-coordinates of the point that defines the arc's starting point (in logical units). This point does not have to lie exactly on the arc. You can pass either a <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or a <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>ptEnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x- and y-coordinates of the point that defines the arc's ending point (in logical units). This point does not have to lie exactly on the arc. You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The arc drawn by using the function is a segment of the ellipse defined by the specified bounding rectangle. </para>
                    <para>The actual starting point of the arc is the point at which a ray drawn from the center of the bounding rectangle through the specified starting point intersects the ellipse. The actual ending point of the arc is the point at which a ray drawn from the center of the bounding rectangle through the specified ending point intersects the ellipse. The arc is drawn in a counterclockwise direction. Since an arc is not a closed figure, it is not filled. Both the width and height of the rectangle must be greater than 2 units and less than 32,767 units.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#29</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__arcto">
        <!--fa9021f9-30c0-4cb0-bcb6-6c40131a263f-->
        <title>CDC::ArcTo</title>
        <content>
            <para>Draws an elliptical arc.</para>
            <legacySyntax>BOOL ArcTo(
    int x1,
    int y1,
    int x2,
    int y2,
    int x3,
    int y3,
    int x4,
    int y4 );

BOOL ArcTo(
    LPCRECT lpRect,
    POINT ptStart,
    POINT ptEnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the upper-left corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the upper-left corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the lower-right corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the lower-right corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x3</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the point that defines the arc's starting point (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>y3</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the point that defines the arc's starting point (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>x4</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the point that defines the arc's endpoint (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>y4</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the point that defines the arc's endpoint (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the bounding rectangle (in logical units). You can pass either a pointer to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> data structure or a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>ptStart</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x- and y-coordinates of the point that defines the arc's starting point (in logical units). This point does not have to lie exactly on the arc. You can pass either a <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> data structure or a <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>ptEnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x- and y-coordinates of the point that defines the arc's ending point (in logical units). This point does not have to lie exactly on the arc. You can pass either a <legacyBold>POINT</legacyBold> data structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is similar to <unmanagedCodeEntityReference>CDC::Arc</unmanagedCodeEntityReference>, except that the current position is updated. The points ( <parameterReference>x1</parameterReference>, <parameterReference>y1</parameterReference>) and ( <parameterReference>x2</parameterReference>, <parameterReference>y2</parameterReference>) specify the bounding rectangle. An ellipse formed by the given bounding rectangle defines the curve of the arc. The arc extends counterclockwise (the default arc direction) from the point where it intersects the radial line from the center of the bounding rectangle to (                        <legacyItalic>x3</legacyItalic>, <parameterReference>y3</parameterReference>). The arc ends where it intersects the radial line from the center of the bounding rectangle to ( <parameterReference>x4</parameterReference>, <parameterReference>y4</parameterReference>). If the starting point and ending point are the same, a complete ellipse is drawn.</para>
                    <para>A line is drawn from the current position to the starting point of the arc. If no error occurs, the current position is set to the ending point of the arc. The arc is drawn using the current pen; it is not filled.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__attach">
        <!--a5791015-82f0-4f6a-859e-231e7f0c0e06-->
        <title>CDC::Attach</title>
        <content>
            <para>Use this member function to attach an <parameterReference>hDC</parameterReference> to the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL Attach( HDC hDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Windows device context.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <parameterReference>hDC</parameterReference> is stored in both <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference>, the output device context, and in <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>, the attribute device context.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__beginpath">
        <!--db3ab7ec-345f-4a9c-a494-627ce8e36fbd-->
        <title>CDC::BeginPath</title>
        <content>
            <para>Opens a path bracket in the device context.</para>
            <legacySyntax>BOOL BeginPath();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After a path bracket is open, an application can begin calling GDI drawing functions to define the points that lie in the path. An application can close an open path bracket by calling the <unmanagedCodeEntityReference>EndPath</unmanagedCodeEntityReference> member function. When an application calls <unmanagedCodeEntityReference>BeginPath</unmanagedCodeEntityReference>, any previous paths are discarded.</para>
                    <para>See                         <externalLink> <linkText>BeginPath</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183363</linkUri>
                        </externalLink> in the <token>winSDK</token> for a list of the drawing functions that define points in a path.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#30</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__bitblt">
        <!--0baab743-3040-45d4-99bf-470cc6780041-->
        <title>CDC::BitBlt</title>
        <content>
            <para>Copies a bitmap from the source device context to this current device context.</para>
            <legacySyntax>BOOL BitBlt(
    int x,
    int y,
    int nWidth,
    int nHeight,
    CDC* pSrcDC,
    int xSrc,
    int ySrc,
    DWORD dwRop );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the destination rectangle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the destination rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width (in logical units) of the destination rectangle and source bitmap.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height (in logical units) of the destination rectangle and source bitmap.</para>
                        </definition>
                        <definedTerm> <parameterReference>pSrcDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object that identifies the device context from which the bitmap will be copied. It must be <legacyBold>NULL</legacyBold> if                                 <legacyItalic>dwRop</legacyItalic> specifies a raster operation that does not include a source.</para>
                        </definition>
                        <definedTerm> <parameterReference>xSrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the source bitmap.</para>
                        </definition>
                        <definedTerm> <parameterReference>ySrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the source bitmap.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>dwRop</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the raster operation to be performed. Raster-operation codes define how the GDI combines colors in output operations that involve a current brush, a possible source bitmap, and a destination bitmap. See                                 <externalLink> <linkText>BitBlt</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183370</linkUri>
                                </externalLink> in the <token>winSDK</token> for a list of the raster-operation codes for                                 <legacyItalic>dwRop</legacyItalic> and their descriptions</para>
                        </definition>
                    </definitionTable>
                    <para>For a complete list of raster-operation codes, see                         <externalLink> <linkText>About Raster Operation Codes</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162892</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The application can align the windows or client areas on byte boundaries to ensure that the <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference> operations occur on byte-aligned rectangles. (Set the <legacyBold>CS_BYTEALIGNWINDOW</legacyBold> or <legacyBold>CS_BYTEALIGNCLIENT</legacyBold> flags when you register the window classes.) </para>
                    <para> <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference> operations on byte-aligned rectangles are considerably faster than <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference> operations on rectangles that are not byte aligned. If you want to specify class styles such as byte-alignment for your own device context, you will have to register a window class rather than relying on the Microsoft Foundation classes to do it for you. Use the global function <legacyLink xlink:href="62c7d4b1-7a29-4abb-86f7-dec541659db0">AfxRegisterWndClass</legacyLink>.</para>
                    <para>GDI transforms <parameterReference>nWidth</parameterReference> and <parameterReference>nHeight</parameterReference>, once by using the destination device context, and once by using the source device context. If the resulting extents do not match, GDI uses the Windows <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference> function to compress or stretch the source bitmap as necessary.</para>
                    <para>If destination, source, and pattern bitmaps do not have the same color format, the <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference> function converts the source and pattern bitmaps to match the destination. The foreground and background colors of the destination bitmap are used in the conversion. </para>
                    <para>When the <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference> function converts a monochrome bitmap to color, it sets white bits (1) to the background color and black bits (0) to the foreground color. The foreground and background colors of the destination device context are used. To convert color to monochrome, <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference> sets pixels that match the background color to white and sets all other pixels to black. <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference> uses the foreground and background colors of the color device context to convert from color to monochrome.</para>
                    <para>Note that not all device contexts support <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference>. To check whether a given device context does support <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference>, use the <unmanagedCodeEntityReference>GetDeviceCaps</unmanagedCodeEntityReference> member function and specify the <legacyBold>RASTERCAPS</legacyBold> index.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cdc__createcompatibledc">CDC::CreateCompatibleDC</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__cdc">
        <!--17f0596b-5030-426f-be34-b91c4a4e8ea7-->
        <title>CDC::CDC</title>
        <content>
            <para>Constructs a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CDC();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cdc__chord">
        <!--ea4b1556-25fd-4d21-ae7e-569323098dae-->
        <title>CDC::Chord</title>
        <content>
            <para>Draws a chord (a closed figure bounded by the intersection of an ellipse and a line segment).</para>
            <legacySyntax>BOOL Chord(
    int x1,
    int y1,
    int x2,
    int y2,
    int x3,
    int y3,
    int x4,
    int y4 );

BOOL Chord(
    LPCRECT lpRect,
    POINT ptStart,
    POINT ptEnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the upper-left corner of the chord's bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the upper-left corner of the chord's bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the lower-right corner of the chord's bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the lower-right corner of the chord's bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x3</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the point that defines the chord's starting point (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y3</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the point that defines the chord's starting point (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>x4</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the point that defines the chord's endpoint (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y4</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the point that defines the chord's endpoint (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the bounding rectangle (in logical units). You can pass either a <unmanagedCodeEntityReference>LPRECT</unmanagedCodeEntityReference> or a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>ptStart</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x- and y-coordinates of the point that defines the chord's starting point (in logical units). This point does not have to lie exactly on the chord. You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>ptEnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x- and y-coordinates of the point that defines the chord's ending point (in logical units). This point does not have to lie exactly on the chord. You can pass either a <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or a <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The ( <parameterReference>x1</parameterReference>, <parameterReference>y1</parameterReference>) and ( <parameterReference>x2</parameterReference>, <parameterReference>y2</parameterReference>) parameters specify the upper-left and lower-right corners, respectively, of a rectangle bounding the ellipse that is part of the chord. The (                        <legacyItalic>x3</legacyItalic>, <parameterReference>y3</parameterReference>) and ( <parameterReference>x4</parameterReference>, <parameterReference>y4</parameterReference>) parameters specify the endpoints of a line that intersects the ellipse. The chord is drawn by using the selected pen and filled by using the selected brush. </para>
                    <para>The figure drawn by the <unmanagedCodeEntityReference>Chord</unmanagedCodeEntityReference> function extends up to, but does not include the right and bottom coordinates. This means that the height of the figure is <parameterReference>y2</parameterReference> – <parameterReference>y1</parameterReference> and the width of the figure is <parameterReference>x2</parameterReference> – <parameterReference>x1</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#31</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__closefigure">
        <!--1fd77b2a-5bd5-4860-8ff7-272020bd0dd9-->
        <title>CDC::CloseFigure</title>
        <content>
            <para>Closes an open figure in a path.</para>
            <legacySyntax>BOOL CloseFigure();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function closes the figure by drawing a line from the current position to the first point of the figure (usually, the point specified by the most recent call to the <unmanagedCodeEntityReference>MoveTo</unmanagedCodeEntityReference> member function) and connects the lines by using the line join style. If a figure is closed by using the <unmanagedCodeEntityReference>LineTo</unmanagedCodeEntityReference> member function instead of <unmanagedCodeEntityReference>CloseFigure</unmanagedCodeEntityReference>, end caps are used to create the corner instead of a join. <unmanagedCodeEntityReference>CloseFigure</unmanagedCodeEntityReference> should only be called if there is an open path bracket in the device context.</para>
                    <para>A figure in a path is open unless it is explicitly closed by using this function. (A figure can be open even if the current point and the starting point of the figure are the same.) Any line or curve added to the path after <unmanagedCodeEntityReference>CloseFigure</unmanagedCodeEntityReference> starts a new figure.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__createcompatibledc">
        <!--3bf38d8a-bf02-4984-b2ba-23ecb64cbf49-->
        <title>CDC::CreateCompatibleDC</title>
        <content>
            <para>Creates a memory device context that is compatible with the device specified by <parameterReference>pDC</parameterReference>.</para>
            <legacySyntax>BOOL CreateCompatibleDC( CDC* pDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a device context. If <parameterReference>pDC</parameterReference> is <legacyBold>NULL</legacyBold>, the function creates a memory device context that is compatible with the system display.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A memory device context is a block of memory that represents a display surface. It can be used to prepare images in memory before copying them to the actual device surface of the compatible device.</para>
                    <para>When a memory device context is created, GDI automatically selects a 1-by-1 monochrome stock bitmap for it. GDI output functions can be used with a memory device context only if a bitmap has been created and selected into that context.</para>
                    <para>This function can only be used to create compatible device contexts for devices that support raster operations. See the <legacyLink xlink:href="#cdc__bitblt">CDC::BitBlt</legacyLink> member function for information regarding bit-block transfers between device contexts. To determine whether a device context supports raster operations, see the <legacyBold>RC_BITBLT</legacyBold> raster capability in the member function <unmanagedCodeEntityReference>CDC::GetDeviceCaps</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#32</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__createdc">
        <!--24f3ed45-313c-48b3-87ee-645239c452cb-->
        <title>CDC::CreateDC</title>
        <content>
            <para>Creates a device context for the specified device.</para>
            <legacySyntax>BOOL CreateDC(
    LPCTSTR lpszDriverName,
    LPCTSTR lpszDeviceName,
    LPCTSTR lpszOutput,
    const void* lpInitData );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszDriverName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the filename (without extension) of the device driver (for example, "EPSON"). You can also pass a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszDeviceName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the name of the specific device to be supported (for example, "EPSON FX-80"). The <parameterReference>lpszDeviceName</parameterReference> parameter is used if the module supports more than one device. You can also pass a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszOutput</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the file or device name for the physical output medium (file or output port). You can also pass a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpInitData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <unmanagedCodeEntityReference>DEVMODE</unmanagedCodeEntityReference> structure containing device-specific initialization data for the device driver. The Windows <legacyBold>DocumentProperties</legacyBold> function retrieves this structure filled in for a given device. The <parameterReference>lpInitData</parameterReference> parameter must be <legacyBold>NULL</legacyBold> if the device driver is to use the default initialization (if any) specified by the user through the Control Panel.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The PRINT.H header file is required if the                         <externalLink> <linkText>DEVMODE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183565</linkUri>
                        </externalLink> structure is used.</para>
                    <para>Device names follow these conventions: an ending colon (:) is recommended, but optional. Windows strips the terminating colon so that a device name ending with a colon is mapped to the same port as the same name without a colon. The driver and port names must not contain leading or trailing spaces. GDI output functions cannot be used with information contexts.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__createic">
        <!--ff5c8904-553a-4628-97b8-9fc3f5b07bf9-->
        <title>CDC::CreateIC</title>
        <content>
            <para>Creates an information context for the specified device.</para>
            <legacySyntax>BOOL CreateIC(
    LPCTSTR lpszDriverName,
    LPCTSTR lpszDeviceName,
    LPCTSTR lpszOutput,
    const void* lpInitData );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszDriverName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the filename (without extension) of the device driver (for example, "EPSON"). You can pass a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszDeviceName</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the name of the specific device to be supported (for example, "EPSON FX-80"). The <parameterReference>lpszDeviceName</parameterReference> parameter is used if the module supports more than one device. You can pass a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszOutput</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a null-terminated string that specifies the file or device name for the physical output medium (file or port). You can pass a <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpInitData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to device-specific initialization data for the device driver. The <parameterReference>lpInitData</parameterReference> parameter must be <legacyBold>NULL</legacyBold> if the device driver is to use the default initialization (if any) specified by the user through the Control Panel. See <unmanagedCodeEntityReference>CreateDC</unmanagedCodeEntityReference> for the data format for device-specific initialization.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The information context provides a fast way to get information about the device without creating a device context.</para>
                    <para>Device names follow these conventions: an ending colon (:) is recommended, but optional. Windows strips the terminating colon so that a device name ending with a colon is mapped to the same port as the same name without a colon. The driver and port names must not contain leading or trailing spaces. GDI output functions cannot be used with information contexts.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__deletedc">
        <!--6ea981e2-bc44-4380-a380-1b80aebee672-->
        <title>CDC::DeleteDC</title>
        <content>
            <para>In general, do not call this function; the destructor will do it for you.</para>
            <legacySyntax>BOOL DeleteDC();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function completed successfully; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>DeleteDC</unmanagedCodeEntityReference> member function deletes the Windows device contexts that are associated with <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> in the current <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object. If this <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object is the last active device context for a given device, the device is notified and all storage and system resources used by the device are released. </para>
                    <para>An application should not call <unmanagedCodeEntityReference>DeleteDC</unmanagedCodeEntityReference> if objects have been selected into the device context. Objects must first be selected out of the device context before it is deleted. </para>
                    <para>An application must not delete a device context whose handle was obtained by calling <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__getdc">CWnd::GetDC</legacyLink>. Instead, it must call <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__releasedc">CWnd::ReleaseDC</legacyLink> to free the device context. The <legacyLink xlink:href="8a871d6b-06f8-496e-9fa3-9a5780848369">CClientDC</legacyLink> and <legacyLink xlink:href="876a3641-4cde-471c-b0d1-fe58b32af79c">CWindowDC</legacyLink> classes are provided to wrap this functionality. </para>
                    <para>The <unmanagedCodeEntityReference>DeleteDC</unmanagedCodeEntityReference> function is generally used to delete device contexts created with <legacyLink xlink:href="#cdc__createdc">CreateDC</legacyLink>, <legacyLink xlink:href="#cdc__createic">CreateIC</legacyLink>, or <legacyLink xlink:href="#cdc__createcompatibledc">CreateCompatibleDC</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="5bdb2424-adf8-433d-a97c-df11a83bc4e4#cprintdialog__getprinterdc">CPrintDialog::GetPrinterDC</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__deletetempmap">
        <!--bcca71c0-8444-4c40-bb79-ff079ecf5498-->
        <title>CDC::DeleteTempMap</title>
        <content>
            <para>Called automatically by the <unmanagedCodeEntityReference>CWinApp</unmanagedCodeEntityReference> idle-time handler, <unmanagedCodeEntityReference>DeleteTempMap</unmanagedCodeEntityReference> deletes any temporary <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> objects created by <unmanagedCodeEntityReference>FromHandle</unmanagedCodeEntityReference>, but does not destroy the device context handles ( <unmanagedCodeEntityReference>hDC</unmanagedCodeEntityReference>s) temporarily associated with the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> objects.</para>
            <legacySyntax>static void PASCAL DeleteTempMap();</legacySyntax>
        </content>
        <sections/>
    </section>
    <section address="cdc__detach">
        <!--41500f76-6668-4e7b-bfbc-2c6d93f251cf-->
        <title>CDC::Detach</title>
        <content>
            <para>Call this function to detach <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> (the output device context) from the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object and set both <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference> to <legacyBold>NULL</legacyBold>.</para>
            <legacySyntax>HDC Detach();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A Windows device context.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__dptohimetric">
        <!--13792fac-de9c-4df1-aa7b-434b6f1e6274-->
        <title>CDC::DPtoHIMETRIC</title>
        <content>
            <para>Use this function when you give <legacyBold>HIMETRIC</legacyBold> sizes to OLE, converting pixels to <legacyBold>HIMETRIC</legacyBold>.</para>
            <legacySyntax>void DPtoHIMETRIC( LPSIZE lpSize ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <externalLink> <linkText>SIZE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the mapping mode of the device context object is <unmanagedCodeEntityReference>MM_LOENGLISH</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>MM_HIENGLISH</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>MM_LOMETRIC</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>MM_HIMETRIC</unmanagedCodeEntityReference>, then the conversion is based on the number of pixels in the physical inch. If the mapping mode is one of the other non-constrained modes (e.g., <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference>), then the conversion is based on the number of pixels in the logical inch.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__dptolp">
        <!--a2f0ce3a-e775-4646-813d-707a00eb2e0c-->
        <title>CDC::DPtoLP</title>
        <content>
            <para>Converts device units into logical units.</para>
            <legacySyntax>void DPtoLP(
    LPPOINT lpPoints,
    int nCount = 1 ) const;

void DPtoLP(
    LPRECT lpRect ) const;

void DPtoLP(
    LPSIZE lpSize ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structures or <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> objects.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of points in the array.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object. This parameter is used for the simple case of converting one rectangle from device points to logical points.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <externalLink> <linkText>SIZE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function maps the coordinates of each point, or dimension of a size, from the device coordinate system into GDI's logical coordinate system. The conversion depends on the current mapping mode and the settings of the origins and extents for the device's window and viewport.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__draw3drect">
        <!--d733b008-cccd-40b7-b4ee-40355e94dc64-->
        <title>CDC::Draw3dRect</title>
        <content>
            <para>Call this member function to draw a three-dimensional rectangle.</para>
            <legacySyntax>void Draw3dRect(
    LPCRECT lpRect,
    COLORREF clrTopLeft,
    COLORREF clrBottomRight );

void Draw3dRect(
    int x,
    int y,
    int cx,
    int cy,
    COLORREF clrTopLeft,
    COLORREF clrBottomRight );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the bounding rectangle (in logical units). You can pass either a pointer to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>clrTopLeft</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the color of the top and left sides of the three-dimensional rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>clrBottomRight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the color of the bottom and right sides of the three-dimensional rectangle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the three-dimensional rectangle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the three-dimensional rectangle.</para>
                        </definition>
                        <definedTerm>cx </definedTerm>
                        <definition>
                            <para>Specifies the width of the three-dimensional rectangle.</para>
                        </definition>
                        <definedTerm>cy </definedTerm>
                        <definition>
                            <para>Specifies the height of the three-dimensional rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The rectangle will be drawn with the top and left sides in the color specified by                         <legacyItalic>clrTopLeft </legacyItalic>and the bottom and right sides in the color specified by <parameterReference>clrBottomRight</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#33</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__drawdragrect">
        <!--3efa9ebc-7ea7-42bd-9e89-3d375cbb8bcf-->
        <title>CDC::DrawDragRect</title>
        <content>
            <para>Call this member function repeatedly to redraw a drag rectangle.</para>
            <legacySyntax>void DrawDragRect(
    LPCRECT lpRect,
    SIZE size,
    LPCRECT lpRectLast,
    SIZE sizeLast,
    CBrush* pBrush = NULL,
    CBrush* pBrushLast = NULL  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that specifies the logical coordinates of a rectangle — in this case, the end position of the rectangle being redrawn.</para>
                        </definition>
                        <definedTerm> <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the displacement from the top-left corner of the outer border to the top-left corner of the inner border (that is, the thickness of the border) of a rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRectLast</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that specifies the logical coordinates of the position of a rectangle — in this case, the original position of the rectangle being redrawn.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>sizeLast</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the displacement from the top-left corner of the outer border to the top-left corner of the inner border (that is, the thickness of the border) of the original rectangle being redrawn.</para>
                        </definition>
                        <definedTerm> <parameterReference>pBrush</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a brush object. Set to <legacyBold>NULL</legacyBold> to use the default halftone brush.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>pBrushLast</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the last brush object used. Set to <legacyBold>NULL</legacyBold> to use the default halftone brush.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Call it in a loop as you sample mouse position, in order to give visual feedback. When you call <unmanagedCodeEntityReference>DrawDragRect</unmanagedCodeEntityReference>, the previous rectangle is erased and a new one is drawn. For example, as the user drags a rectangle across the screen, <unmanagedCodeEntityReference>DrawDragRect</unmanagedCodeEntityReference> will erase the original rectangle and redraw a new one in its new position. By default, <unmanagedCodeEntityReference>DrawDragRect</unmanagedCodeEntityReference> draws the rectangle by using a halftone brush to eliminate flicker and to create the appearance of a smoothly moving rectangle. </para>
                    <para>The first time you call <unmanagedCodeEntityReference>DrawDragRect</unmanagedCodeEntityReference>, the <parameterReference>lpRectLast</parameterReference> parameter should be <legacyBold>NULL</legacyBold>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__drawedge">
        <!--e10d0fe1-f64d-4170-b38a-e0dd581cd5a3-->
        <title>CDC::DrawEdge</title>
        <content>
            <para>Call this member function to draw the edges of a rectangle of the specified type and style.</para>
            <legacySyntax>BOOL DrawEdge(
    LPRECT lpRect,
    UINT nEdge,
    UINT nFlags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyBold>RECT </legacyBold>structure that contains the logical coordinates of the rectangle. </para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>nEdge</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of inner and outer edge to draw. This parameter must be a combination of one inner-border flag and one outer-border flag. See                                 <externalLink> <linkText>DrawEdge</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162477</linkUri>
                                </externalLink> in the <token>winSDK</token> for a table of the parameter's types.</para>
                        </definition>
                        <definedTerm> <parameterReference>nFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The flags that specify the type of border to be drawn. See <unmanagedCodeEntityReference>DrawEdge</unmanagedCodeEntityReference> in the <token>winSDK</token> for a table of the parameter's values. For diagonal lines, the <legacyBold>BF_RECT</legacyBold> flags specify the end point of the vector bounded by the rectangle parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__drawescape">
        <!--8107c2d4-226f-4a2f-8d63-94ed376608de-->
        <title>CDC::DrawEscape</title>
        <content>
            <para>Accesses drawing capabilities of a video display that are not directly available through the graphics device interface (GDI).</para>
            <legacySyntax>int DrawEscape(
    int nEscape,
    int nInputSize,
    LPCSTR lpszInputData );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nEscape</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the escape function to be performed.</para>
                        </definition>
                        <definedTerm> <parameterReference>nInputSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of bytes of data pointed to by the <parameterReference>lpszInputData</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszInputData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the input structure required for the specified escape.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the outcome of the function. Greater than zero if successful, except for the <legacyBold>QUERYESCSUPPORT</legacyBold> draw escape, which checks for implementation only; or zero if the escape is not implemented; or less than zero if an error occurred.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When an application calls <unmanagedCodeEntityReference>DrawEscape</unmanagedCodeEntityReference>, the data identified by <parameterReference>nInputSize</parameterReference> and <parameterReference>lpszInputData</parameterReference> is passed directly to the specified display driver.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__drawfocusrect">
        <!--69ef59fb-5522-48ac-83ba-bf1325e4dd9e-->
        <title>CDC::DrawFocusRect</title>
        <content>
            <para>Draws a rectangle in the style used to indicate that the rectangle has the focus.</para>
            <legacySyntax>void DrawFocusRect( LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that specifies the logical coordinates of the rectangle to be drawn.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Since this is a Boolean XOR function, calling this function a second time with the same rectangle removes the rectangle from the display. The rectangle drawn by this function cannot be scrolled. To scroll an area containing a rectangle drawn by this function, first call <unmanagedCodeEntityReference>DrawFocusRect</unmanagedCodeEntityReference> to remove the rectangle from the display, then scroll the area, and then call <unmanagedCodeEntityReference>DrawFocusRect</unmanagedCodeEntityReference> again to draw the rectangle in the new position.</para>
                    <alert class="caution">
                        <para> <unmanagedCodeEntityReference>DrawFocusRect</unmanagedCodeEntityReference> works only in <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference> mode. In other modes, this function does not draw the focus rectangle correctly, but it does not return error values.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__drawframecontrol">
        <!--3bc8d0f1-0652-4480-80a1-3716b234556d-->
        <title>CDC::DrawFrameControl</title>
        <content>
            <para>Call this member function to draw a frame control of the specified type and style.</para>
            <legacySyntax>BOOL DrawFrameControl(
    LPRECT lpRect,
    UINT nType,
    UINT nState );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyBold>RECT </legacyBold>structure that contains the logical coordinates of the rectangle. </para>
                        </definition>
                        <definedTerm> <parameterReference>nType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of frame control to draw. See the                                 <legacyItalic>uType</legacyItalic> parameter in                                 <externalLink> <linkText>DrawFrameControl</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162480</linkUri>
                                </externalLink> in the <token>winSDK</token> for a list of this parameter's possible values.</para>
                        </definition>
                        <definedTerm> <parameterReference>nState</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the initial state of the frame control. Can be one or more of the values described for the                                 <legacyItalic>uState</legacyItalic> parameter in <unmanagedCodeEntityReference>DrawFrameControl</unmanagedCodeEntityReference> in the <token>winSDK</token>. Use the <parameterReference>nState</parameterReference> value <legacyBold>DFCS_ADJUSTRECT</legacyBold> to adjust the bounding rectangle to exclude the surrounding edge of the push button. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>In several cases, <parameterReference>nState</parameterReference> depends on the <parameterReference>nType</parameterReference> parameter. The following list shows the relationship between the four <parameterReference>nType</parameterReference> values and <parameterReference>nState</parameterReference>:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>DFC_BUTTON</legacyBold>
                            </para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>DFCS_BUTTON3STATE</legacyBold>   Three-state button</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_BUTTONCHECK</legacyBold>   Check box</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_BUTTONPUSH</legacyBold>   Push button</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_BUTTONRADIO</legacyBold>   Radio button</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_BUTTONRADIOIMAGE</legacyBold>   Image for radio button (nonsquare needs image)</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_BUTTONRADIOMASK</legacyBold>   Mask for radio button (nonsquare needs mask)</para>
                                </listItem>
                            </list>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>DFC_CAPTION</legacyBold>
                            </para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>DFCS_CAPTIONCLOSE</legacyBold>   Close button</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_CAPTIONHELP</legacyBold>   Help button</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_CAPTIONMAX</legacyBold>   Maximize button</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_CAPTIONMIN</legacyBold>   Minimize button</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_CAPTIONRESTORE</legacyBold>   Restore button</para>
                                </listItem>
                            </list>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>DFC_MENU</legacyBold>
                            </para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>DFCS_MENUARROW</legacyBold>   Submenu arrow</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_MENUBULLET</legacyBold>   Bullet</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_MENUCHECK</legacyBold>   Check mark</para>
                                </listItem>
                            </list>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>DFC_SCROLL</legacyBold>
                            </para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>DFCS_SCROLLCOMBOBOX</legacyBold>   Combo box scroll bar</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_SCROLLDOWN</legacyBold>   Down arrow of scroll bar</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_SCROLLLEFT</legacyBold>   Left arrow of scroll bar</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_SCROLLRIGHT</legacyBold>   Right arrow of scroll bar</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_SCROLLSIZEGRIP</legacyBold>   Size grip in bottom-right corner of window</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DFCS_SCROLLUP</legacyBold>   Up arrow of scroll bar</para>
                                </listItem>
                            </list>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>This code draws the size gripper in the bottom-right corner of your window. It's appropriate for the <unmanagedCodeEntityReference>OnPaint</unmanagedCodeEntityReference> handler of a dialog box, which has no styles and normally doesn't contain other controls (like a status bar) that may give it a size gripper.</para>
                    <codeReference>NVC_MFCDocView#34</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__drawicon">
        <!--58e4c033-e806-4449-b330-a6f91129a578-->
        <title>CDC::DrawIcon</title>
        <content>
            <para>Draws an icon on the device represented by the current <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL DrawIcon(
    int x,
    int y,
    HICON hIcon );

BOOL DrawIcon(
    POINT point,
    HICON hIcon );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the icon.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the icon.</para>
                        </definition>
                        <definedTerm> <parameterReference>hIcon</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the handle of the icon to be drawn.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x- and y-coordinates of the upper-left corner of the icon. You can pass a <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or a <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function completed successfully; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function places the icon's upper-left corner at the location specified by                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic>. The location is subject to the current mapping mode of the device context. </para>
                    <para>The icon resource must have been previously loaded by using the functions <unmanagedCodeEntityReference>CWinApp::LoadIcon</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>CWinApp::LoadStandardIcon</unmanagedCodeEntityReference>, or <unmanagedCodeEntityReference>CWinApp::LoadOEMIcon</unmanagedCodeEntityReference>. The <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference> mapping mode must be selected prior to using this function.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__isiconic">CWnd::IsIconic</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__drawstate">
        <!--bdf92d57-c45f-45f5-92b8-e66a74467837-->
        <title>CDC::DrawState</title>
        <content>
            <para>Call this member function to display an image and apply a visual effect to indicate a state, such as a disabled or default state.</para>
            <alert class="note">
                <para>For all <parameterReference>nFlag</parameterReference> states except <legacyBold>DSS_NORMAL</legacyBold>, the image is converted to monochrome before the visual effect is applied.</para>
            </alert>
            <legacySyntax>BOOL DrawState(
    CPoint pt,
    CSize size,
    HBITMAP hBitmap,
    UINT nFlags,
    HBRUSH hBrush = NULL  );

BOOL DrawState(
    CPoint pt,
    CSize size,
    CBitmap* pBitmap,
    UINT nFlags,
    CBrush* pBrush = NULL  );

BOOL DrawState(
    CPoint pt,
    CSize size,
    HICON hIcon,
    UINT nFlags,
    HBRUSH hBrush = NULL  );

BOOL DrawState(
    CPoint pt,
    CSize size,
    HICON hIcon,
    UINT nFlags,
    CBrush* pBrush = NULL  );

BOOL DrawState(
    CPoint pt,
    CSize size,
    LPCTSTR lpszText,
    UINT nFlags,
    BOOL bPrefixText = TRUE,
    int nTextLen = 0,
    HBRUSH hBrush = NULL  );

BOOL DrawState(
    CPoint pt,
    CSize size,
    LPCTSTR lpszText,
    UINT nFlags,
    BOOL bPrefixText = TRUE,
    int nTextLen = 0,
    CBrush* pBrush = NULL  );

BOOL DrawState(
    CPoint pt,
    CSize size,
    DRAWSTATEPROC lpDrawProc,
    LPARAM lData,
    UINT nFlags,
    HBRUSH hBrush = NULL  );

BOOL DrawState(
    CPoint pt,
    CSize size,
    DRAWSTATEPROC lpDrawProc,
    LPARAM lData,
    UINT nFlags,
    CBrush* pBrush = NULL  );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pt</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the location of the image.</para>
                        </definition>
                        <definedTerm> <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the size of the image.</para>
                        </definition>
                        <definedTerm> <parameterReference>hBitmap</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to a bitmap.</para>
                        </definition>
                        <definedTerm> <parameterReference>nFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Flags that specify the image type and state. See                                 <externalLink> <linkText>DrawState</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162496</linkUri>
                                </externalLink> in the <token>winSDK</token> for the possible <parameterReference>nFlags</parameterReference> types and states.</para>
                        </definition>
                        <definedTerm> <parameterReference>hBrush</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to a brush.</para>
                        </definition>
                        <definedTerm> <parameterReference>pBitmap</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a CBitmap object.</para>
                        </definition>
                        <definedTerm> <parameterReference>pBrush</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a CBrush object.</para>
                        </definition>
                        <definedTerm> <parameterReference>hIcon</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A handle to an icon.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszText</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to text.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>bPrefixText</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Text that may contain an accelerator mnemonic. The <parameterReference>lData</parameterReference> parameter specifies the address of the string, and the <parameterReference>nTextLen</parameterReference> parameter specifies the length. If <parameterReference>nTextLen</parameterReference> is 0, the string is assumed to be null-terminated.</para>
                        </definition>
                        <definedTerm> <parameterReference>nTextLen</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Length of the text string pointed to by <parameterReference>lpszText</parameterReference>. If <parameterReference>nTextLen</parameterReference> is 0, the string is assumed to be null-terminated.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpDrawProc</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a callback function used to render an image. This parameter is required if the image type in <parameterReference>nFlags</parameterReference> is <legacyBold>DST_COMPLEX</legacyBold>. It is optional and can be <legacyBold>NULL</legacyBold> if the image type is <legacyBold>DST_TEXT</legacyBold>. For all other image types, this parameter is ignored. For more information about the callback function, see the                                 <externalLink> <linkText>DrawStateProc</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162497</linkUri>
                                </externalLink> function in the <token>winSDK</token>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies information about the image. The meaning of this parameter depends on the image type.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__drawtext">
        <!--de687c9f-55f7-4e4e-8cb6-13fd6d9e7327-->
        <title>CDC::DrawText</title>
        <content>
            <para>Call this member function to format text in the given rectangle. To specify additional formatting options, use <legacyLink xlink:href="#cdc__drawtextex">CDC::DrawTextEx</legacyLink>.</para>
            <legacySyntax>virtual int DrawText(
    LPCTSTR lpszString,
    int nCount,
    LPRECT lpRect,
    UINT nFormat );

int DrawText(
    const CString&amp; str,
    LPRECT lpRect,
    UINT nFormat );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the string to be drawn. If <parameterReference>nCount</parameterReference> is –1, the string must be null-terminated.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of chars in the string. If <parameterReference>nCount</parameterReference> is –1, then <parameterReference>lpszString</parameterReference> is assumed to be a long pointer to a null-terminated string and <unmanagedCodeEntityReference>DrawText</unmanagedCodeEntityReference> computes the character count automatically.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that contains the rectangle (in logical coordinates) in which the text is to be formatted.</para>
                        </definition>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object that contains the specified characters to be drawn.</para>
                        </definition>
                        <definedTerm> <parameterReference>nFormat</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the method of formatting the text. It can be any combination of the values described for the <parameterReference>uFormat</parameterReference> parameter in                                 <externalLink> <linkText>DrawText</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162498</linkUri>
                                </externalLink> in the <token>winSDK</token>. (combine using the bitwise OR operator):</para>
                            <alert class="note">
                                <para>Some <parameterReference>uFormat</parameterReference> flag combinations can cause the passed string to be modified. Using <legacyBold>DT_MODIFYSTRING</legacyBold> with either <legacyBold>DT_END_ELLIPSIS</legacyBold> or <legacyBold>DT_PATH_ELLIPSIS</legacyBold> may cause the string to be modified, causing an assertion in the <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> override. The values <unmanagedCodeEntityReference>DT_CALCRECT</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>DT_EXTERNALLEADING</unmanagedCodeEntityReference>, <legacyBold>DT_INTERNAL</legacyBold>, <unmanagedCodeEntityReference>DT_NOCLIP</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>DT_NOPREFIX</unmanagedCodeEntityReference> cannot be used with the <unmanagedCodeEntityReference>DT_TABSTOP</unmanagedCodeEntityReference> value.</para>
                            </alert>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The height of the text if the function is successful.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>It formats text by expanding tabs into appropriate spaces, aligning text to the left, right, or center of the given rectangle, and breaking text into lines that fit within the given rectangle. The type of formatting is specified by <parameterReference>nFormat</parameterReference>. </para>
                    <para>This member function uses the device context's selected font, text color, and background color to draw the text. Unless the <unmanagedCodeEntityReference>DT_NOCLIP</unmanagedCodeEntityReference> format is used, <unmanagedCodeEntityReference>DrawText</unmanagedCodeEntityReference> clips the text so that the text does not appear outside the given rectangle. All formatting is assumed to have multiple lines unless the <unmanagedCodeEntityReference>DT_SINGLELINE</unmanagedCodeEntityReference> format is given. </para>
                    <para>If the selected font is too large for the specified rectangle, the <unmanagedCodeEntityReference>DrawText</unmanagedCodeEntityReference> member function does not attempt to substitute a smaller font.</para>
                    <para>If the <unmanagedCodeEntityReference>DT_CALCRECT</unmanagedCodeEntityReference> flag is specified, the rectangle specified by <parameterReference>lpRect</parameterReference> will be updated to reflect the width and height needed to draw the text.</para>
                    <para>If the <legacyBold>TA_UPDATECP</legacyBold> text-alignment flag has been set (see <legacyLink xlink:href="#cdc__settextalign">CDC::SetTextAlign</legacyLink>), <unmanagedCodeEntityReference>DrawText</unmanagedCodeEntityReference> will display text starting at the current position, rather than at the left of the given rectangle. <unmanagedCodeEntityReference>DrawText</unmanagedCodeEntityReference> will not wrap text when the <legacyBold>TA_UPDATECP</legacyBold> flag has been set (that is, the <unmanagedCodeEntityReference>DT_WORDBREAK</unmanagedCodeEntityReference> flag will have no effect).</para>
                    <para>The text color may be set by <legacyLink xlink:href="#cdc__settextcolor">CDC::SetTextColor</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__drawtextex">
        <!--ce88ed51-cf4f-4af2-b014-db9d5773aa5c-->
        <title>CDC::DrawTextEx</title>
        <content>
            <para>Formats text in the given rectangle.</para>
            <legacySyntax>virtual int DrawTextEx(
    LPTSTR lpszString,
    int nCount,
    LPRECT lpRect,
    UINT nFormat, LPDRAWTEXTPARAMS lpDTParams );

int DrawTextEx(
    const CString&amp; str,
    LPRECT lpRect,
    UINT nFormat, LPDRAWTEXTPARAMS lpDTParams );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the string to be drawn. If <parameterReference>nCount</parameterReference> is –1, the string must be null terminated.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of chars in the string. If <parameterReference>nCount</parameterReference> is –1, then <parameterReference>lpszString</parameterReference> is assumed to be a long pointer to a null-terminated string and <unmanagedCodeEntityReference>DrawText</unmanagedCodeEntityReference> computes the character count automatically.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that contains the rectangle (in logical coordinates) in which the text is to be formatted.</para>
                        </definition>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object that contains the specified characters to be drawn.</para>
                        </definition>
                        <definedTerm> <parameterReference>nFormat</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the method of formatting the text. It can be any combination of the values described for the <parameterReference>uFormat</parameterReference> parameter in                                 <externalLink> <linkText>DrawText</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162498</linkUri>
                                </externalLink> in the <token>winSDK</token>. (Combine using the bitwise <languageKeyword>OR</languageKeyword> operator):</para>
                            <alert class="note">
                                <para>Some <parameterReference>uFormat</parameterReference> flag combinations can cause the passed string to be modified. Using <legacyBold>DT_MODIFYSTRING</legacyBold> with either <legacyBold>DT_END_ELLIPSIS</legacyBold> or <legacyBold>DT_PATH_ELLIPSIS</legacyBold> may cause the string to be modified, causing an assertion in the <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> override. The values <unmanagedCodeEntityReference>DT_CALCRECT</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>DT_EXTERNALLEADING</unmanagedCodeEntityReference>, <legacyBold>DT_INTERNAL</legacyBold>, <unmanagedCodeEntityReference>DT_NOCLIP</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>DT_NOPREFIX</unmanagedCodeEntityReference> cannot be used with the <unmanagedCodeEntityReference>DT_TABSTOP</unmanagedCodeEntityReference> value.</para>
                            </alert>
                        </definition>
                        <definedTerm> <parameterReference>lpDTParams</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>DRAWTEXTPARAMS</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162500</linkUri>
                                </externalLink> structure that specifies additional formatting options. This parameter can be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>It formats text by expanding tabs into appropriate spaces, aligning text to the left, right, or center of the given rectangle, and breaking text into lines that fit within the given rectangle. The type of formatting is specified by <parameterReference>nFormat</parameterReference> and <parameterReference>lpDTParams</parameterReference>. For more information, see <legacyLink xlink:href="#cdc__drawtext">CDC::DrawText</legacyLink> and                         <externalLink> <linkText>DrawTextEx</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162499</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                    <para>The text color may be set by <legacyLink xlink:href="#cdc__settextcolor">CDC::SetTextColor</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__ellipse">
        <!--a77eaab4-a1b7-4108-a611-a242a97c4377-->
        <title>CDC::Ellipse</title>
        <content>
            <para>Draws an ellipse.</para>
            <legacySyntax>BOOL Ellipse(
    int x1,
    int y1,
    int x2,
    int y2 );

BOOL Ellipse(
    LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the ellipse's bounding rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the ellipse's bounding rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the lower-right corner of the ellipse's bounding rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the lower-right corner of the ellipse's bounding rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the ellipse's bounding rectangle. You can also pass a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The center of the ellipse is the center of the bounding rectangle specified by <parameterReference>x1</parameterReference>, <parameterReference>y1</parameterReference>, <parameterReference>x2</parameterReference>, and <parameterReference>y2</parameterReference>, or <parameterReference>lpRect</parameterReference>. The ellipse is drawn with the current pen, and its interior is filled with the current brush. </para>
                    <para>The figure drawn by this function extends up to, but does not include, the right and bottom coordinates. This means that the height of the figure is <parameterReference>y2</parameterReference> – <parameterReference>y1</parameterReference> and the width of the figure is <parameterReference>x2</parameterReference> – <parameterReference>x1</parameterReference>. </para>
                    <para>If either the width or the height of the bounding rectangle is 0, no ellipse is drawn.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__enddoc">
        <!--f3de0ffc-dd85-4bdb-8a8c-eb4cc4c0ca62-->
        <title>CDC::EndDoc</title>
        <content>
            <para>Ends a print job started by a call to the <legacyLink xlink:href="#cdc__startdoc">StartDoc</legacyLink> member function.</para>
            <legacySyntax>int EndDoc();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Greater than or equal to 0 if the function is successful, or a negative value if an error occurred.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function replaces the <legacyBold>ENDDOC</legacyBold> printer escape, and should be called immediately after finishing a successful print job. </para>
                    <para>If an application encounters a printing error or a canceled print operation, it must not attempt to terminate the operation by using either <unmanagedCodeEntityReference>EndDoc</unmanagedCodeEntityReference> or <legacyLink xlink:href="#cdc__abortdoc">AbortDoc</legacyLink>. GDI automatically terminates the operation before returning the error value.</para>
                    <para>This function should not be used inside metafiles.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cdc__startdoc">CDC::StartDoc</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__endpage">
        <!--bf4a85bd-08e9-444f-970b-ded418cdc283-->
        <title>CDC::EndPage</title>
        <content>
            <para>Informs the device that the application has finished writing to a page.</para>
            <legacySyntax>int EndPage();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Greater than or equal to 0 if the function is successful, or a negative value if an error occurred.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function is typically used to direct the device driver to advance to a new page. </para>
                    <para>This member function replaces the <legacyBold>NEWFRAME</legacyBold> printer escape. Unlike <legacyBold>NEWFRAME</legacyBold>, this function is always called after printing a page.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cdc__startdoc">CDC::StartDoc</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__endpath">
        <!--b8bc2da7-f2b4-4475-a3c5-98f20a4f7b06-->
        <title>CDC::EndPath</title>
        <content>
            <para>Closes a path bracket and selects the path defined by the bracket into the device context.</para>
            <legacySyntax>BOOL EndPath();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cdc__beginpath">CDC::BeginPath</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__enumobjects">
        <!--62703ddf-7eec-4f13-85d6-fef9d6f3df62-->
        <title>CDC::EnumObjects</title>
        <content>
            <para>Enumerates the pens and brushes available in a device context.</para>
            <legacySyntax>int EnumObjects(
    int nObjectType,
    int (
    CALLBACK * lpfn )(
    LPVOID, LPARAM ),
    LPARAM lpData );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>nObjectType</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the object type. It can have the values <legacyBold>OBJ_BRUSH</legacyBold> or <legacyBold>OBJ_PEN</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpfn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Is the procedure-instance address of the application-supplied callback function. See the "Remarks" section below.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the application-supplied data. The data is passed to the callback function along with the object information.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the last value returned by the <legacyLink xlink:href="380088b1-88a5-4fb4-bbb5-dd9e8386572b">callback function</legacyLink>. Its meaning is user-defined. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For each object of a given type, the callback function that you pass is called with the information for that object. The system calls the callback function until there are no more objects or the callback function returns 0.</para>
                    <para>Note that new features of Microsoft Visual C++ let you use an ordinary function as the function passed to <unmanagedCodeEntityReference>EnumObjects</unmanagedCodeEntityReference>. The address passed to <unmanagedCodeEntityReference>EnumObjects</unmanagedCodeEntityReference> is a pointer to a function exported with <legacyBold>EXPORT</legacyBold> and with the Pascal calling convention. In protect-mode applications, you do not have to create this function with the Windows                         <externalLink> <linkText>MakeProcInstance</linkText> <linkUri>https://msdn.microsoft.com/en-us/library/aa383722.aspx</linkUri>
                        </externalLink> function or free the function after use with the                         <externalLink> <linkText>FreeProcInstance</linkText> <linkUri>https://msdn.microsoft.com/en-us/library/aa383722.aspx</linkUri>
                        </externalLink> Windows function. </para>
                    <para>You also do not have to export the function name in an <legacyBold>EXPORTS</legacyBold> statement in your application's module-definition file. You can instead use the <legacyBold>EXPORT</legacyBold> function modifier, as in</para>
                    <para> <legacyBold>int CALLBACK EXPORT</legacyBold> AFunction <legacyBold>(</legacyBold> <legacyBold>LPSTR</legacyBold>, <legacyBold>LPSTR</legacyBold> <legacyBold>);</legacyBold>
                    </para>
                    <para>to cause the compiler to emit the proper export record for export by name without aliasing. This works for most needs. For some special cases, such as exporting a function by ordinal or aliasing the export, you still need to use an <legacyBold>EXPORTS</legacyBold> statement in a module-definition file.</para>
                    <para>For compiling Microsoft Foundation programs, you will normally use the /GA and /GEs compiler options. The /Gw compiler option is not used with the Microsoft Foundation classes. (If you do use the Windows function <legacyBold>MakeProcInstance</legacyBold>, you will need to explicitly cast the returned function pointer from <legacyBold>FARPROC</legacyBold> to the type needed in this API.) Callback registration interfaces are now type-safe (you must pass in a function pointer that points to the right kind of function for the specific callback).</para>
                    <para>Also note that all callback functions must trap Microsoft Foundation exceptions before returning to Windows, since exceptions cannot be thrown across callback boundaries. For more information about exceptions, see the article <legacyLink xlink:href="0926627d-2ba7-44a6-babe-d851a4a2517c">Exceptions</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#35</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__escape">
        <!--1e8a1228-d250-4200-acb0-f9c931d1a0ac-->
        <title>CDC::Escape</title>
        <content>
            <para>This member function is practically obsolete for Win32 programming.</para>
            <legacySyntax>virtual int Escape(
    int nEscape,
    int nCount,
    LPCSTR lpszInData,
    LPVOID lpOutData );

int Escape(
    int nEscape,
    int nInputSize,
    LPCSTR lpszInputData,
    int nOutputSize,
    LPSTR lpszOutputData );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nEscape</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the escape function to be performed.</para>
                            <para>For a complete list of escape functions, see                                 <externalLink> <linkText>Escape</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162701</linkUri>
                                </externalLink> in the <token>winSDK</token>. </para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of bytes of data pointed to by <parameterReference>lpszInData</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszInData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the input data structure required for this escape.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpOutData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the structure that is to receive output from this escape. The <parameterReference>lpOutData</parameterReference> parameter is <legacyBold>NULL</legacyBold> if no data is returned.</para>
                        </definition>
                        <definedTerm> <parameterReference>nInputSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of bytes of data pointed to by the <parameterReference>lpszInputData</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszInputData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the input structure required for the specified escape.</para>
                        </definition>
                        <definedTerm> <parameterReference>nOutputSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of bytes of data pointed to by the <parameterReference>lpszOutputData</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszOutputData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the structure that receives output from this escape. This parameter should be <legacyBold>NULL</legacyBold> if no data is returned.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A positive value is returned if the function is successful, except for the <legacyBold>QUERYESCSUPPORT</legacyBold> escape, which only checks for implementation. Zero is returned if the escape is not implemented. A negative value is returned if an error occurred. The following are common error values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>SP_ERROR</legacyBold>   General error.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SP_OUTOFDISK</legacyBold>   Not enough disk space is currently available for spooling, and no more space will become available.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SP_OUTOFMEMORY</legacyBold>   Not enough memory is available for spooling.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SP_USERABORT</legacyBold>   User ended the job through the Print Manager.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Of the original printer escapes, only <legacyBold>QUERYESCSUPPORT</legacyBold> is supported for Win32 applications. All other printer escapes are obsolete and are supported only for compatibility with 16-bit applications. </para>
                    <para>For Win32 programming, <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> now provides six member functions that supersede their corresponding printer escapes:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyLink xlink:href="#cdc__abortdoc">CDC::AbortDoc</legacyLink>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyLink xlink:href="#cdc__enddoc">CDC::EndDoc</legacyLink>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyLink xlink:href="#cdc__endpage">CDC::EndPage</legacyLink>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyLink xlink:href="#cdc__setabortproc">CDC::SetAbortProc</legacyLink>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyLink xlink:href="#cdc__startdoc">CDC::StartDoc</legacyLink>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <legacyLink xlink:href="#cdc__startpage">CDC::StartPage</legacyLink>
                            </para>
                        </listItem>
                    </list>
                    <para>In addition, <legacyLink xlink:href="#cdc__getdevicecaps">CDC::GetDeviceCaps</legacyLink> supports Win32 indexes that supersede other printer escapes. See                         <externalLink> <linkText>GetDeviceCaps</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144877</linkUri>
                        </externalLink> in the <token>winSDK</token> for more information.</para>
                    <para>This member function allows applications to access facilities of a particular device that are not directly available through GDI. </para>
                    <para>Use the first version if your application uses predefined escape values. Use the second version if your application defines private escape values. See                         <externalLink> <linkText>ExtEscape</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162708</linkUri>
                        </externalLink> in the <token>winSDK</token> for more information about the second version.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__excludecliprect">
        <!--7a5f5014-0dd4-46e4-9f63-d5283a79d7bc-->
        <title>CDC::ExcludeClipRect</title>
        <content>
            <para>Creates a new clipping region that consists of the existing clipping region minus the specified rectangle.</para>
            <legacySyntax>int ExcludeClipRect(
    int x1,
    int y1,
    int x2,
    int y2 );

int ExcludeClipRect(
    LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the lower-right corner of the rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the lower-right corner of the rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the rectangle. Can also be a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the new clipping region's type. It can be any of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>   The region has overlapping borders.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold>   No region was created.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   The region is empty.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>   The region has no overlapping borders.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The width of the rectangle, specified by the absolute value of <parameterReference>x2</parameterReference> – <parameterReference>x1</parameterReference>, must not exceed 32,767 units. This limit applies to the height of the rectangle as well.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__excludeupdatergn">
        <!--8a94611f-a076-4768-8cee-eac08c546942-->
        <title>CDC::ExcludeUpdateRgn</title>
        <content>
            <para>Prevents drawing within invalid areas of a window by excluding an updated region in the window from the clipping region associated with the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>int ExcludeUpdateRgn( CWnd* pWnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pWnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the window object whose window is being updated.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The type of excluded region. It can be any one of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>   The region has overlapping borders.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold>   No region was created.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   The region is empty.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>   The region has no overlapping borders.</para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__extfloodfill">
        <!--44c713e0-1f66-4aa5-8c98-8fd618d62394-->
        <title>CDC::ExtFloodFill</title>
        <content>
            <para>Fills an area of the display surface with the current brush.</para>
            <legacySyntax>BOOL ExtFloodFill(
    int x,
    int y,
    COLORREF crColor,
    UINT nFillType );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the point where filling begins.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the point where filling begins.</para>
                        </definition>
                        <definedTerm> <parameterReference>crColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the color of the boundary or of the area to be filled. The interpretation of <parameterReference>crColor</parameterReference> depends on the value of <parameterReference>nFillType</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nFillType</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of flood fill to be performed. It must be either of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>FLOODFILLBORDER</legacyBold>   The fill area is bounded by the color specified by <parameterReference>crColor</parameterReference>. This style is identical to the filling performed by <unmanagedCodeEntityReference>FloodFill</unmanagedCodeEntityReference>.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>FLOODFILLSURFACE</legacyBold>   The fill area is defined by the color specified by <parameterReference>crColor</parameterReference>. Filling continues outward in all directions as long as the color is encountered. This style is useful for filling areas with multicolored boundaries.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0 if the filling could not be completed, if the given point has the boundary color specified by <parameterReference>crColor</parameterReference> (if <legacyBold>FLOODFILLBORDER</legacyBold> was requested), if the given point does not have the color specified by <parameterReference>crColor</parameterReference> (if <legacyBold>FLOODFILLSURFACE</legacyBold> was requested), or if the point is outside the clipping region.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function offers more flexibility than <unmanagedCodeEntityReference>FloodFill</unmanagedCodeEntityReference> because you can specify a fill type in <parameterReference>nFillType</parameterReference>. </para>
                    <para>If <parameterReference>nFillType</parameterReference> is set to <legacyBold>FLOODFILLBORDER</legacyBold>, the area is assumed to be completely bounded by the color specified by <parameterReference>crColor</parameterReference>. The function begins at the point specified by                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> and fills in all directions to the color boundary. </para>
                    <para>If <parameterReference>nFillType</parameterReference> is set to <legacyBold>FLOODFILLSURFACE</legacyBold>, the function begins at the point specified by                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> and continues in all directions, filling all adjacent areas containing the color specified by <parameterReference>crColor</parameterReference>.</para>
                    <para>Only memory-device contexts and devices that support raster-display technology support <unmanagedCodeEntityReference>ExtFloodFill</unmanagedCodeEntityReference>. For more information, see the <legacyLink xlink:href="#cdc__getdevicecaps">GetDeviceCaps</legacyLink> member function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__exttextout">
        <!--8f1fbcbc-3195-4955-8cc4-bbc60d4226be-->
        <title>CDC::ExtTextOut</title>
        <content>
            <para>Call this member function to write a character string within a rectangular region using the currently selected font.</para>
            <legacySyntax>virtual BOOL ExtTextOut(
    int x,
    int y,
    UINT nOptions,
    LPCRECT lpRect,
    LPCTSTR lpszString,
    UINT nCount,
    LPINT lpDxWidths );

BOOL ExtTextOut(
    int x,
    int y,
    UINT nOptions,
    LPCRECT lpRect,
    const CString&amp; str,
    LPINT lpDxWidths );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the character cell for the first character in the specified string.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the top of the character cell for the first character in the specified string.</para>
                        </definition>
                        <definedTerm> <parameterReference>nOptions</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the rectangle type. This parameter can be one, both, or neither of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>ETO_CLIPPED</legacyBold>   Specifies that text is clipped to the rectangle.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>ETO_OPAQUE</legacyBold>   Specifies that the current background color fills the rectangle. (You can set and query the current background color with the <legacyLink xlink:href="#cdc__setbkcolor">SetBkColor</legacyLink> and <legacyLink xlink:href="#cdc__getbkcolor">GetBkColor</legacyLink> member functions.)</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure that determines the dimensions of the rectangle. This parameter can be <legacyBold>NULL</legacyBold>. You can also pass a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the specified character string to be drawn. You can also pass a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of characters in the string. </para>
                        </definition>
                        <definedTerm> <parameterReference>lpDxWidths</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of values that indicate the distance between origins of adjacent character cells. For instance, <parameterReference>lpDxWidths</parameterReference>[                                <legacyItalic>i</legacyItalic>] logical units will separate the origins of character cell                                 <legacyItalic>i</legacyItalic> and character cell                                 <legacyItalic>i</legacyItalic> + 1. If <parameterReference>lpDxWidths</parameterReference> is <legacyBold>NULL</legacyBold>, <unmanagedCodeEntityReference>ExtTextOut</unmanagedCodeEntityReference> uses the default spacing between characters.</para>
                        </definition>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> A <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that contains the specified characters to be drawn.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The rectangular region can be opaque (filled with the current background color), and it can be a clipping region.</para>
                    <para>If <parameterReference>nOptions</parameterReference> is 0 and <parameterReference>lpRect</parameterReference> is <legacyBold>NULL</legacyBold>, the function writes text to the device context without using a rectangular region. By default, the current position is not used or updated by the function. If an application needs to update the current position when it calls <unmanagedCodeEntityReference>ExtTextOut</unmanagedCodeEntityReference>, the application can call the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> member function <legacyLink xlink:href="#cdc__settextalign">SetTextAlign</legacyLink> with <parameterReference>nFlags</parameterReference> set to <legacyBold>TA_UPDATECP</legacyBold>. When this flag is set, Windows ignores                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> on subsequent calls to <unmanagedCodeEntityReference>ExtTextOut</unmanagedCodeEntityReference> and uses the current position instead. When an application uses <legacyBold>TA_UPDATECP</legacyBold> to update the current position, <unmanagedCodeEntityReference>ExtTextOut</unmanagedCodeEntityReference> sets the current position either to the end of the previous line of text or to the position specified by the last element of the array pointed to by <parameterReference>lpDxWidths</parameterReference>, whichever is greater.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__fillpath">
        <!--70f45fc4-09f4-4afd-af50-56a4a165a343-->
        <title>CDC::FillPath</title>
        <content>
            <para>Closes any open figures in the current path and fills the path's interior by using the current brush and polygon-filling mode.</para>
            <legacySyntax>BOOL FillPath();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>After its interior is filled, the path is discarded from the device context.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__fillrect">
        <!--4012ec08-2713-4806-ad30-31c36ab589ac-->
        <title>CDC::FillRect</title>
        <content>
            <para>Call this member function to fill a given rectangle using the specified brush.</para>
            <legacySyntax>void FillRect(
    LPCRECT lpRect,
    CBrush* pBrush );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure that contains the logical coordinates of the rectangle to be filled. You can also pass a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>pBrush</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the brush used to fill the rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function fills the complete rectangle, including the left and top borders, but it does not fill the right and bottom borders.</para>
                    <para>The brush needs to either be created using the <legacyLink xlink:href="e5ef2c62-dd95-4973-9090-f52f605900e1">CBrush</legacyLink> member functions <legacyLink xlink:href="e5ef2c62-dd95-4973-9090-f52f605900e1#cbrush__createhatchbrush">CreateHatchBrush</legacyLink>, <legacyLink xlink:href="e5ef2c62-dd95-4973-9090-f52f605900e1#cbrush__createpatternbrush">CreatePatternBrush</legacyLink>, and <legacyLink xlink:href="e5ef2c62-dd95-4973-9090-f52f605900e1#cbrush__createsolidbrush">CreateSolidBrush</legacyLink>, or retrieved by the <languageKeyword>GetStockObject</languageKeyword> Windows function. </para>
                    <para>When filling the specified rectangle, <unmanagedCodeEntityReference>FillRect</unmanagedCodeEntityReference> does not include the rectangle's right and bottom sides. GDI fills a rectangle up to, but does not include, the right column and bottom row, regardless of the current mapping mode. <unmanagedCodeEntityReference>FillRect</unmanagedCodeEntityReference> compares the values of the <legacyBold>top</legacyBold>, <legacyBold>bottom</legacyBold>, <legacyBold>left</legacyBold>, and <legacyBold>right</legacyBold> members of the specified rectangle. If <legacyBold>bottom</legacyBold> is less than or equal to <legacyBold>top</legacyBold>, or if <legacyBold>right</legacyBold> is less than or equal to <legacyBold>left</legacyBold>, the rectangle is not drawn.</para>
                    <para> <unmanagedCodeEntityReference>FillRect</unmanagedCodeEntityReference> is similar to <legacyLink xlink:href="#cdc__fillsolidrect">CDC::FillSolidRect</legacyLink>; however, <unmanagedCodeEntityReference>FillRect</unmanagedCodeEntityReference> takes a brush and therefore can be used to fill a rectangle with a solid color, a dithered color, hatched brushes, or a pattern. <unmanagedCodeEntityReference>FillSolidRect</unmanagedCodeEntityReference> uses only solid colors (indicated by a <legacyBold>COLORREF</legacyBold> parameter). <unmanagedCodeEntityReference>FillRect</unmanagedCodeEntityReference> usually is slower than <unmanagedCodeEntityReference>FillSolidRect</unmanagedCodeEntityReference>. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__fillrgn">
        <!--f40489dc-526a-4917-b265-25120bfb1167-->
        <title>CDC::FillRgn</title>
        <content>
            <para>Fills the region specified by <parameterReference>pRgn</parameterReference> with the brush specified by <parameterReference>pBrush</parameterReference>.</para>
            <legacySyntax>BOOL FillRgn(
    CRgn* pRgn,
    CBrush* pBrush );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pRgn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the region to be filled. The coordinates for the given region are specified in logical units.</para>
                        </definition>
                        <definedTerm> <parameterReference>pBrush</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the brush to be used to fill the region.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The brush must either be created using the <unmanagedCodeEntityReference>CBrush</unmanagedCodeEntityReference> member functions <unmanagedCodeEntityReference>CreateHatchBrush</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>CreatePatternBrush</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>CreateSolidBrush</unmanagedCodeEntityReference>, or be retrieved by <legacyBold>GetStockObject</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="d904da84-76aa-481e-8780-b09485f49e64#crgn__createroundrectrgn">CRgn::CreateRoundRectRgn</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__fillsolidrect">
        <!--51aa0f73-bca4-4555-af74-2741304c3978-->
        <title>CDC::FillSolidRect</title>
        <content>
            <para>Call this member function to fill the given rectangle with the specified solid color.</para>
            <legacySyntax>void FillSolidRect(
    LPCRECT lpRect,
    COLORREF clr );

void FillSolidRect(
    int x,
    int y,
    int cx,
    int cy,
    COLORREF clr );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the bounding rectangle (in logical units). You can pass either a pointer to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> data structure or a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                    <para> <parameterReference>clr</parameterReference>   Specifies the color to be used to fill the rectangle.  </para>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the rectangle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the destination rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>cx</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width of the rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>cy</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height of the rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>FillSolidRect</unmanagedCodeEntityReference> is very similar to <legacyLink xlink:href="#cdc__fillrect">CDC::FillRect</legacyLink>; however, <unmanagedCodeEntityReference>FillSolidRect</unmanagedCodeEntityReference> uses only solid colors (indicated by the <legacyBold>COLORREF</legacyBold> parameter), while <unmanagedCodeEntityReference>FillRect</unmanagedCodeEntityReference> takes a brush and therefore can be used to fill a rectangle with a solid color, a dithered color, hatched brushes, or a pattern. <unmanagedCodeEntityReference>FillSolidRect</unmanagedCodeEntityReference> usually is faster than <unmanagedCodeEntityReference>FillRect</unmanagedCodeEntityReference>.</para>
                    <alert class="note">
                        <para>When you call <unmanagedCodeEntityReference>FillSolidRect</unmanagedCodeEntityReference>, the background color, which was previously set using <legacyLink xlink:href="#cdc__setbkcolor">SetBkColor</legacyLink>, is set to the color indicated by <parameterReference>clr</parameterReference>.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__flattenpath">
        <!--b37b47f9-c6c5-4da6-bd73-ea42a631a7fa-->
        <title>CDC::FlattenPath</title>
        <content>
            <para>Transforms any curves in the path selected into the current device context, and turns each curve into a sequence of lines.</para>
            <legacySyntax>BOOL FlattenPath();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__floodfill">
        <!--2a66a229-d1e7-44b1-9c98-420c9bb6bcb9-->
        <title>CDC::FloodFill</title>
        <content>
            <para>Fills an area of the display surface with the current brush.</para>
            <legacySyntax>BOOL FloodFill(
    int x,
    int y,
    COLORREF crColor );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the point where filling begins.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the point where filling begins.</para>
                        </definition>
                        <definedTerm> <parameterReference>crColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the color of the boundary.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0 is returned if the filling could not be completed, the given point has the boundary color specified by <parameterReference>crColor</parameterReference>, or the point is outside the clipping region.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The area is assumed to be bounded as specified by <parameterReference>crColor</parameterReference>. The <unmanagedCodeEntityReference>FloodFill</unmanagedCodeEntityReference> function begins at the point specified by                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> and continues in all directions to the color boundary. </para>
                    <para>Only memory-device contexts and devices that support raster-display technology support the <unmanagedCodeEntityReference>FloodFill</unmanagedCodeEntityReference> member function. For information about <legacyBold>RC_BITBLT</legacyBold> capability, see the <unmanagedCodeEntityReference>GetDeviceCaps</unmanagedCodeEntityReference> member function. </para>
                    <para>The <unmanagedCodeEntityReference>ExtFloodFill</unmanagedCodeEntityReference> function provides similar capability but greater flexibility.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__framerect">
        <!--750bbdd5-cebe-4875-bf14-52db98cf7526-->
        <title>CDC::FrameRect</title>
        <content>
            <para>Draws a border around the rectangle specified by <parameterReference>lpRect</parameterReference>.</para>
            <legacySyntax>void FrameRect(
    LPCRECT lpRect,
    CBrush* pBrush );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that contains the logical coordinates of the upper-left and lower-right corners of the rectangle. You can also pass a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>pBrush</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the brush to be used for framing the rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function uses the given brush to draw the border. The width and height of the border is always 1 logical unit. </para>
                    <para>If the rectangle's <legacyBold>bottom</legacyBold> coordinate is less than or equal to <legacyBold>top</legacyBold>, or if <legacyBold>right</legacyBold> is less than or equal to <legacyBold>left</legacyBold>, the rectangle is not drawn. </para>
                    <para>The border drawn by <unmanagedCodeEntityReference>FrameRect</unmanagedCodeEntityReference> is in the same position as a border drawn by the <legacyBold>Rectangle</legacyBold> member function using the same coordinates (if <legacyBold>Rectangle</legacyBold> uses a pen that is 1 logical unit wide). The interior of the rectangle is not filled by <unmanagedCodeEntityReference>FrameRect</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__framergn">
        <!--994d2c49-67f3-4674-b72c-1907b920b567-->
        <title>CDC::FrameRgn</title>
        <content>
            <para>Draws a border around the region specified by <parameterReference>pRgn</parameterReference> using the brush specified by <parameterReference>pBrush</parameterReference>.</para>
            <legacySyntax>BOOL FrameRgn(
    CRgn* pRgn,
    CBrush* pBrush,
    int nWidth,
    int nHeight );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pRgn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the <unmanagedCodeEntityReference>CRgn</unmanagedCodeEntityReference> object that identifies the region to be enclosed in a border. The coordinates for the given region are specified in logical units.</para>
                        </definition>
                        <definedTerm> <parameterReference>pBrush</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the <unmanagedCodeEntityReference>CBrush</unmanagedCodeEntityReference> object that identifies the brush to be used to draw the border.</para>
                        </definition>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width of the border in vertical brush strokes in device units.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height of the border in horizontal brush strokes in device units.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="d904da84-76aa-481e-8780-b09485f49e64#crgn__combinergn">CRgn::CombineRgn</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__fromhandle">
        <!--ced3d088-bf98-4f33-880e-00abfeb5d6e9-->
        <title>CDC::FromHandle</title>
        <content>
            <para>Returns a pointer to a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object when given a handle to a device context.</para>
            <legacySyntax>static CDC* PASCAL FromHandle( HDC hDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Contains a handle to a Windows device context.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The pointer may be temporary and should not be stored beyond immediate use.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object is not attached to the handle, a temporary <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object is created and attached.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="5bdb2424-adf8-433d-a97c-df11a83bc4e4#cprintdialog__getprinterdc">CPrintDialog::GetPrinterDC</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getarcdirection">
        <!--7de180f5-be03-4b62-87da-33c6e16f375a-->
        <title>CDC::GetArcDirection</title>
        <content>
            <para>Returns the current arc direction for the device context.</para>
            <legacySyntax>int GetArcDirection() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the current arc direction, if successful. Following are the valid return values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>AD_COUNTERCLOCKWISE</legacyBold>   Arcs and rectangles drawn counterclockwise.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>AD_CLOCKWISE</legacyBold>   Arcs and rectangles drawn clockwise.</para>
                        </listItem>
                    </list>
                    <para>If an error occurs, the return value is zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Arc and rectangle functions use the arc direction.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getaspectratiofilter">
        <!--97fdf519-0e98-4be1-847a-2387718046f2-->
        <title>CDC::GetAspectRatioFilter</title>
        <content>
            <para>Retrieves the setting for the current aspect-ratio filter.</para>
            <legacySyntax>CSize GetAspectRatioFilter() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object representing the aspect ratio used by the current aspect ratio filter.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The aspect ratio is the ratio formed by a device's pixel width and height. Information about a device's aspect ratio is used in the creation, selection, and display of fonts. Windows provides a special filter, the aspect-ratio filter, to select fonts designed for a particular aspect ratio from all of the available fonts. The filter uses the aspect ratio specified by the <unmanagedCodeEntityReference>SetMapperFlags</unmanagedCodeEntityReference> member function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getbkcolor">
        <!--d5511e3b-5a2f-4c92-b506-b13f0fb00695-->
        <title>CDC::GetBkColor</title>
        <content>
            <para>Returns the current background color.</para>
            <legacySyntax>COLORREF GetBkColor() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An RGB color value.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the background mode is <legacyBold>OPAQUE</legacyBold>, the system uses the background color to fill the gaps in styled lines, the gaps between hatched lines in brushes, and the background in character cells. The system also uses the background color when converting bitmaps between color and monochrome device contexts.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getbkmode">
        <!--29cfe535-e5b3-40cb-b9b5-32a45f954ce3-->
        <title>CDC::GetBkMode</title>
        <content>
            <para>Returns the background mode.</para>
            <legacySyntax>int GetBkMode() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current background mode, which can be <legacyBold>OPAQUE</legacyBold> or <legacyBold>TRANSPARENT</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The background mode defines whether the system removes existing background colors on the drawing surface before drawing text, hatched brushes, or any pen style that is not a solid line.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getboundsrect">
        <!--4d591bac-b199-4d3e-b472-151db4f86f72-->
        <title>CDC::GetBoundsRect</title>
        <content>
            <para>Returns the current accumulated bounding rectangle for the specified device context.</para>
            <legacySyntax>UINT GetBoundsRect(
    LPRECT lpRectBounds,
    UINT flags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRectBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a buffer that will receive the current bounding rectangle. The rectangle is returned in logical coordinates.</para>
                        </definition>
                        <definedTerm> <parameterReference>flags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the bounding rectangle is to be cleared after it is returned. This parameter should be  zero or set to the following value:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>DCB_RESET</legacyBold>   Forces the bounding rectangle to be cleared after it is returned.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the current state of the bounding rectangle if the function is successful. It can be a combination of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>DCB_ACCUMULATE</legacyBold>   Bounding rectangle accumulation is occurring.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>DCB_RESET</legacyBold>   Bounding rectangle is empty.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>DCB_SET</legacyBold>   Bounding rectangle is not empty.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>DCB_ENABLE</legacyBold>   Bounding accumulation is on.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>DCB_DISABLE</legacyBold>   Bounding accumulation is off.</para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getbrushorg">
        <!--7aa9dd42-f6b7-405a-b99c-79e148dcc0ed-->
        <title>CDC::GetBrushOrg</title>
        <content>
            <para>Retrieves the origin (in device units) of the brush currently selected for the device context.</para>
            <legacySyntax>CPoint GetBrushOrg() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current origin of the brush (in device units) as a <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The initial brush origin is at (0,0) of the client area. The return value specifies this point in device units relative to the origin of the desktop window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcharacterplacement">
        <!--0c0290b9-b273-4c42-9a4f-2c2be3018136-->
        <title>CDC::GetCharacterPlacement</title>
        <content>
            <para>Retrieves various types of information on a character string.</para>
            <legacySyntax>DWORD GetCharacterPlacement(
    LPCTSTR lpString,
    int nCount,
    int nMaxExtent,
    LPGCP_RESULTS lpResults,
    DWORD dwFlags ) const;
DWORD GetCharacterPlacement(
    CString&amp; str,
    int nMaxExtent,
    LPGCP_RESULTS lpResults,
    DWORD dwFlags ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the character string to process.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the length of the string. For the ANSI version, it is a BYTE count and for the Unicode function it is a WORD count. For more information, see                                 <externalLink> <linkText>GetCharacterPlacement</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144860(v=vs.85).aspx</linkUri>
                                </externalLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nMaxExtent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the maximum extent (in logical units) to which the string is processed. Characters that, if processed, would exceed this extent are ignored. Computations for any required ordering or glyph arrays apply only to the included characters. This parameter is used only if the GCP_MAXEXTENT value is specified in the <parameterReference>dwFlags</parameterReference> parameter. As the function processes the input string, each character and its extent is added to the output, extent, and other arrays only if the total extent has not yet exceeded the maximum. Once the limit is reached, processing will stop.</para>
                        </definition>
                        <definedTerm>lpResults</definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>GCP_Results</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144842(v=vs.85).aspx</linkUri>
                                </externalLink> structure that receives the results of the function.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies how to process the string into the required arrays. This parameter can be one or more of the values listed in the <parameterReference>dwFlags</parameterReference> section of the                                 <externalLink> <linkText>GetCharacterPlacement</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144860(v=vs.85).aspx</linkUri>
                                </externalLink> topic.</para>
                        </definition>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object to process.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the function succeeds, the return value is the width and height of the string in logical units.</para>
                    <para>If the function fails, the return value is zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function emulates the functionality of the function                         <externalLink> <linkText>GetCharacterPlacement</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144860(v=vs.85).aspx</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcharabcwidths">
        <!--ca59c5d5-e2fb-44fa-b061-911bd2407212-->
        <title>CDC::GetCharABCWidths</title>
        <content>
            <para>Retrieves the widths of consecutive characters in a specified range from the current TrueType font.</para>
            <legacySyntax>BOOL GetCharABCWidths(
    UINT nFirstChar,
    UINT nLastChar,
    LPABC lpabc ) const;

BOOL GetCharABCWidths(
    UINT nFirstChar,
    UINT nLastChar,
    LPABCFLOAT lpABCF ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nFirstChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the first character in the range of characters from the current font for which character widths are returned.</para>
                        </definition>
                        <definedTerm> <parameterReference>nLastChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the last character in the range of characters from the current font for which character widths are returned.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpabc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of <legacyLink xlink:href="32663839-c3b7-4f47-896c-b15329c96bc8">ABC</legacyLink> structures that receive the character widths when the function returns. This array must contain at least as many <legacyBold>ABC</legacyBold> structures as there are characters in the range specified by the <parameterReference>nFirstChar</parameterReference> and <parameterReference>nLastChar</parameterReference> parameters.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpABCF</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to an application-supplied buffer with an array of <legacyLink xlink:href="338e7e15-9d2c-42d0-aa80-273acfde5cc5">ABCFLOAT</legacyLink> structures to receive the character widths when the function returns. The widths returned by this function are in the IEEE floating-point format. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The widths are returned in logical units. This function succeeds only with TrueType fonts.</para>
                    <para>The TrueType rasterizer provides "ABC" character spacing after a specific point size has been selected. "A" spacing is the distance that is added to the current position before placing the glyph. "B" spacing is the width of the black part of the glyph. "C" spacing is added to the current position to account for the white space to the right of the glyph. The total advanced width is given by A + B + C.</para>
                    <para>When the <unmanagedCodeEntityReference>GetCharABCWidths</unmanagedCodeEntityReference> member function retrieves negative "A" or "C" widths for a character, that character includes underhangs or overhangs.</para>
                    <para>To convert the ABC widths to font design units, an application should create a font whose height (as specified in the <legacyBold>lfHeight</legacyBold> member of the                         <externalLink> <linkText>LOGFONT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145037</linkUri>
                        </externalLink> structure) is equal to the value stored in the <legacyBold>ntmSizeEM</legacyBold> member of the                         <externalLink> <linkText>NEWTEXTMETRIC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162741</linkUri>
                        </externalLink> structure. (The value of the <legacyBold>ntmSizeEM</legacyBold> member can be retrieved by calling the                         <externalLink> <linkText>EnumFontFamilies</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162619</linkUri>
                        </externalLink> Windows function.)</para>
                    <para>The ABC widths of the default character are used for characters that are outside the range of the currently selected font. </para>
                    <para>To retrieve the widths of characters in non-TrueType fonts, applications should use the                         <externalLink> <linkText>GetCharWidth</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144861</linkUri>
                        </externalLink> Windows function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcharabcwidthsi">
        <!--113d98b9-33a1-4937-852f-ff14a1e947a6-->
        <title>CDC::GetCharABCWidthsI</title>
        <content>
            <para>Retrieves the widths, in logical units, of consecutive glyph indices in a specified range from the current TrueType font.</para>
            <legacySyntax>BOOL GetCharABCWidthsI(
    UINT giFirst,
    UINT cgi,
    LPWORD pgi,
    LPABC lpabc ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>giFirst</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the first glyph index in the group of consecutive glyph indices from the current font. This parameter is only used if the <parameterReference>pgi</parameterReference> parameter is <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>cgi</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of glyph indices.</para>
                        </definition>
                        <definedTerm> <parameterReference>pgi</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an array containing glyph indices. If the value is <legacyBold>NULL</legacyBold>, the <parameterReference>giFirst</parameterReference> parameter is used instead. The <parameterReference>cgi</parameterReference> parameter specifies the number of glyph indices in this array.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpabc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to an array of                                 <externalLink> <linkText>ABC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162454</linkUri>
                                </externalLink> structures receiving the character widths. This array must contain at least as many <legacyBold>ABC</legacyBold> structures as there are glyph indices specified by the <parameterReference>cgi</parameterReference> parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function emulates the functionality of the function                         <externalLink> <linkText>GetCharABCWidthsI</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144859</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcharwidth">
        <!--da149f64-6077-4d2e-bcfd-e36cff1a3664-->
        <title>CDC::GetCharWidth</title>
        <content>
            <para>Retrieves the widths of individual characters in a consecutive group of characters from the current font, using <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>, the input device context.</para>
            <legacySyntax>BOOL GetCharWidth(
    UINT nFirstChar,
    UINT nLastChar,
    LPINT lpBuffer ) const;

BOOL GetCharWidth(
    UINT nFirstChar,
    UINT nLastChar,
    float* lpFloatBuffer ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nFirstChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the first character in a consecutive group of characters in the current font.</para>
                        </definition>
                        <definedTerm> <parameterReference>nLastChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the last character in a consecutive group of characters in the current font.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpBuffer</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a buffer that will receive the width values for a consecutive group of characters in the current font.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpFloatBuffer</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to a buffer to receive the character widths. The returned widths are in the 32-bit IEEE floating-point format. (The widths are measured along the base line of the characters.)</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For example, if <parameterReference>nFirstChar</parameterReference> identifies the letter 'a' and <parameterReference>nLastChar</parameterReference> identifies the letter 'z', the function retrieves the widths of all lowercase characters. </para>
                    <para>The function stores the values in the buffer pointed to by <parameterReference>lpBuffer</parameterReference>. This buffer must be large enough to hold all of the widths. That is, there must be at least 26 entries in the example given. </para>
                    <para>If a character in the consecutive group of characters does not exist in a particular font, it will be assigned the width value of the default character.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcharwidthi">
        <!--bd75679f-ca62-46dc-b313-861d2ba52c5c-->
        <title>CDC::GetCharWidthI</title>
        <content>
            <para>Retrieves the widths, in logical coordinates, of consecutive glyph indices in a specified range from the current font.</para>
            <legacySyntax>BOOL GetCharWidthI(
    UINT giFirst,
    UINT cgi,
    LPWORD pgi,
    LPINT lpBuffer ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>giFirst</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the first glyph index in the group of consecutive glyph indices from the current font. This parameter is only used if the <parameterReference>pgi</parameterReference> parameter is <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>cgi</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of glyph indices.</para>
                        </definition>
                        <definedTerm> <parameterReference>pgi</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an array containing glyph indices. If the value is <legacyBold>NULL</legacyBold>, the <parameterReference>giFirst</parameterReference> parameter is used instead. The <parameterReference>cgi</parameterReference> parameter specifies the number of glyph indices in this array.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpBuffer</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a buffer that receives the widths.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function emulates the functionality of the function                         <externalLink> <linkText>GetCharWidthI</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144864</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getclipbox">
        <!--50c825a9-4af1-452b-82b6-029c32c89ae7-->
        <title>CDC::GetClipBox</title>
        <content>
            <para>Retrieves the dimensions of the tightest bounding rectangle around the current clipping boundary.</para>
            <legacySyntax>virtual int GetClipBox( LPRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object that is to receive the rectangle dimensions.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The clipping region's type. It can be any of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>   Clipping region has overlapping borders.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold>   Device context is not valid.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   Clipping region is empty.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>   Clipping region has no overlapping borders.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The dimensions are copied to the buffer pointed to by <parameterReference>lpRect</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcoloradjustment">
        <!--a4b47c38-bf33-4fcd-a948-13dde5277b3a-->
        <title>CDC::GetColorAdjustment</title>
        <content>
            <para>Retrieves the color adjustment values for the device context.</para>
            <legacySyntax>BOOL GetColorAdjustment( LPCOLORADJUSTMENT lpColorAdjust ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpColorAdjust</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="67fc4e63-0e0e-4fcb-8c45-aa5ebfefa013">COLORADJUSTMENT</legacyLink> data structure to receive the color adjustment values.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcurrentbitmap">
        <!--7039f57f-ca41-46b0-a3ca-f4d44bfba0bd-->
        <title>CDC::GetCurrentBitmap</title>
        <content>
            <para>Returns a pointer to the currently selected <unmanagedCodeEntityReference>CBitmap</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CBitmap* GetCurrentBitmap() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to a <unmanagedCodeEntityReference>CBitmap</unmanagedCodeEntityReference> object, if successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function may return temporary objects.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcurrentbrush">
        <!--d5fb2b6d-b197-48cf-8167-2b6641c08eaa-->
        <title>CDC::GetCurrentBrush</title>
        <content>
            <para>Returns a pointer to the currently selected <unmanagedCodeEntityReference>CBrush</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CBrush* GetCurrentBrush() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to a <unmanagedCodeEntityReference>CBrush</unmanagedCodeEntityReference> object, if successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function may return temporary objects.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcurrentfont">
        <!--c4fbfc39-c081-499c-bc96-f34d7ec75dde-->
        <title>CDC::GetCurrentFont</title>
        <content>
            <para>Returns a pointer to the currently selected <unmanagedCodeEntityReference>CFont</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CFont* GetCurrentFont() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to a <unmanagedCodeEntityReference>CFont</unmanagedCodeEntityReference> object, if successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function may return temporary objects.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcurrentpalette">
        <!--7afb12a8-dbfe-4f1c-955a-631f30fd6ab0-->
        <title>CDC::GetCurrentPalette</title>
        <content>
            <para>Returns a pointer to the currently selected <unmanagedCodeEntityReference>CPalette</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CPalette* GetCurrentPalette() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to a <unmanagedCodeEntityReference>CPalette</unmanagedCodeEntityReference> object, if successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function may return temporary objects.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcurrentpen">
        <!--7598e774-69f3-4261-aed5-71df44c757bd-->
        <title>CDC::GetCurrentPen</title>
        <content>
            <para>Returns a pointer to the currently selected <unmanagedCodeEntityReference>CPen</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>CPen* GetCurrentPen() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to a <unmanagedCodeEntityReference>CPen</unmanagedCodeEntityReference> object, if successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function may return temporary objects.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getcurrentposition">
        <!--fb8888d3-a207-424a-9a96-b8340a3f2f73-->
        <title>CDC::GetCurrentPosition</title>
        <content>
            <para>Retrieves the current position (in logical coordinates).</para>
            <legacySyntax>CPoint GetCurrentPosition() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current position as a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The current position can be set with the <unmanagedCodeEntityReference>MoveTo</unmanagedCodeEntityReference> member function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getdcbrushcolor">
        <!--8ccc197c-611b-4ea0-a1cc-5dc083d00a55-->
        <title>CDC::GetDCBrushColor</title>
        <content>
            <para>Retrieves the current brush color.</para>
            <legacySyntax>COLORREF GetDCBrushColor() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the function succeeds, the return value is the                         <externalLink> <linkText>COLORREF</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183449</linkUri>
                        </externalLink> value for the current brush color.</para>
                    <para>If the function fails, the return value is <legacyBold>CLR_INVALID</legacyBold>. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function emulates the functionality of the function                         <externalLink> <linkText>GetDCBrushColor</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144872</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getdcpencolor">
        <!--76db090f-0e73-4f20-803a-7c1f7679401f-->
        <title>CDC::GetDCPenColor</title>
        <content>
            <para>Retrieves the current pen color.</para>
            <legacySyntax>COLORREF GetDCPenColor() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the function succeeds, the return value is the                         <externalLink> <linkText>COLORREF</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183449</linkUri>
                        </externalLink> value for the current pen color.</para>
                    <para>If the function fails, the return value is <legacyBold>CLR_INVALID</legacyBold>. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function utilizes the Win32 function                         <externalLink> <linkText>GetDCPenColor</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144875</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getdevicecaps">
        <!--9f95b97e-32a3-49aa-8cbd-aa2b598ac7be-->
        <title>CDC::GetDeviceCaps</title>
        <content>
            <para>Retrieves a wide range of device-specific information about the display device.</para>
            <legacySyntax>int GetDeviceCaps( int nIndex ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the type of information to return. See                                 <externalLink> <linkText>GetDeviceCaps</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144877</linkUri>
                                </externalLink> in the <token>winSDK</token> for a list of values.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The value of the requested capability if the function is successful.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="5bdb2424-adf8-433d-a97c-df11a83bc4e4#cprintdialog__getdefaults">CPrintDialog::GetDefaults</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getfontdata">
        <!--ed0ec949-5823-4250-96a9-cc217cc463ba-->
        <title>CDC::GetFontData</title>
        <content>
            <para>Retrieves font-metric information from a scalable font file.</para>
            <legacySyntax>DWORD GetFontData(
    DWORD dwTable,
    DWORD dwOffset,
    LPVOID lpData,
    DWORD cbData ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwTable</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the name of the metric table to be returned. This parameter can be one of the metric tables documented in the TrueType Font Files specification published by Microsoft Corporation. If this parameter is 0, the information is retrieved starting at the beginning of the font file.</para>
                        </definition>
                        <definedTerm> <parameterReference>dwOffset</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the offset from the beginning of the table at which to begin retrieving information. If this parameter is 0, the information is retrieved starting at the beginning of the table specified by the <parameterReference>dwTable</parameterReference> parameter. If this value is greater than or equal to the size of the table, <unmanagedCodeEntityReference>GetFontData</unmanagedCodeEntityReference> returns 0.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a buffer that will receive the font information. If this value is <legacyBold>NULL</legacyBold>, the function returns the size of the buffer required for the font data specified in the <parameterReference>dwTable</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>cbData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the length, in bytes, of the information to be retrieved. If this parameter is 0, <unmanagedCodeEntityReference>GetFontData</unmanagedCodeEntityReference> returns the size of the data specified in the <parameterReference>dwTable</parameterReference> parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the number of bytes returned in the buffer pointed to by <parameterReference>lpData</parameterReference> if the function is successful; otherwise –1.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The information to retrieve is identified by specifying an offset into the font file and the length of the information to return. </para>
                    <para>An application can sometimes use the <unmanagedCodeEntityReference>GetFontData</unmanagedCodeEntityReference> member function to save a TrueType font with a document. To do this, the application determines whether the font can be embedded and then retrieves the entire font file, specifying 0 for the <parameterReference>dwTable</parameterReference>, <parameterReference>dwOffset</parameterReference>, and <parameterReference>cbData</parameterReference> parameters.</para>
                    <para>Applications can determine whether a font can be embedded by checking the <legacyBold>otmfsType</legacyBold> member of the                         <externalLink> <linkText>OUTLINETEXTMETRIC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162755</linkUri>
                        </externalLink> structure. If bit 1 of <legacyBold>otmfsType</legacyBold> is set, embedding is not permitted for the font. If bit 1 is clear, the font can be embedded. If bit 2 is set, the embedding is read only. </para>
                    <para>If an application attempts to use this function to retrieve information for a non-TrueType font, the <unmanagedCodeEntityReference>GetFontData</unmanagedCodeEntityReference> member function returns –1.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getfontlanguageinfo">
        <!--d55d7e89-7616-4eaf-9a76-1ee7ba4f440d-->
        <title>CDC::GetFontLanguageInfo</title>
        <content>
            <para>Returns information about the currently selected font for the specified display context.</para>
            <legacySyntax>DWORD GetFontLanguageInfo() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The return value identifies characteristics of the currently selected font. For a complete listing of possible values, see                         <externalLink> <linkText>GetFontLanguageInfo</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144886</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function emulates the functionality of the function                         <externalLink> <linkText>GetFontLanguageInfo</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144886</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getglyphoutline">
        <!--3700567b-afb0-4f3c-a29c-fd7f6aff3d00-->
        <title>CDC::GetGlyphOutline</title>
        <content>
            <para>Retrieves the outline curve or bitmap for an outline character in the current font.</para>
            <legacySyntax>DWORD GetGlyphOutline(
    UINT nChar,
    UINT nFormat,
    LPGLYPHMETRICS lpgm,
    DWORD cbBuffer,
    LPVOID lpBuffer,
    const MAT2* lpmat2 ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the character for which information is to be returned.</para>
                        </definition>
                        <definedTerm> <parameterReference>nFormat</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the format in which the function is to return information. It can be one of the following values, or 0:</para>
                            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                                <thead>
                                    <tr>
                                        <TD>
                                            <para>Value</para>
                                        </TD>
                                        <TD>
                                            <para>Meaning</para>
                                        </TD>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>GGO_BITMAP</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>Returns the glyph bitmap. When the function returns, the buffer pointed to by <parameterReference>lpBuffer</parameterReference> contains a 1-bit-per-pixel bitmap whose rows start on doubleword boundaries.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>GGO_NATIVE</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>Returns the curve data points in the rasterizer's native format, using device units. When this value is specified, any transformation specified in <parameterReference>lpmat2</parameterReference> is ignored.</para>
                                        </TD>
                                    </tr>
                                </tbody>
                            </table>
                            <para>When the value of <parameterReference>nFormat</parameterReference> is 0, the function fills in a                                 <externalLink> <linkText>GLYPHMETRICS</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144955</linkUri>
                                </externalLink> structure but does not return glyph-outline data. </para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpgm</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyBold>GLYPHMETRICS</legacyBold> structure that describes the placement of the glyph in the character cell.</para>
                        </definition>
                        <definedTerm> <parameterReference>cbBuffer</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the size of the buffer into which the function copies information about the outline character. If this value is 0 and the <parameterReference>nFormat</parameterReference> parameter is either the <legacyBold>GGO_BITMAP</legacyBold> or <legacyBold>GGO_NATIVE</legacyBold> values, the function returns the required size of the buffer.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpBuffer</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a buffer into which the function copies information about the outline character. If <parameterReference>nFormat</parameterReference> specifies the <legacyBold>GGO_NATIVE</legacyBold> value, the information is copied in the form of <legacyBold>TTPOLYGONHEADER</legacyBold> and <legacyBold>TTPOLYCURVE</legacyBold> structures. If this value is <legacyBold>NULL</legacyBold> and <parameterReference>nFormat</parameterReference> is either the <legacyBold>GGO_BITMAP</legacyBold> or <legacyBold>GGO_NATIVE</legacyBold> value, the function returns the required size of the buffer.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpmat2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <externalLink> <linkText>MAT2</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145048</linkUri>
                                </externalLink> structure that contains a transformation matrix for the character. This parameter cannot be <legacyBold>NULL</legacyBold>, even when the <legacyBold>GGO_NATIVE</legacyBold> value is specified for <parameterReference>nFormat</parameterReference>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The size, in bytes, of the buffer required for the retrieved information if <parameterReference>cbBuffer</parameterReference> is 0 or <parameterReference>lpBuffer</parameterReference> is <legacyBold>NULL</legacyBold>. Otherwise, it is a positive value if the function is successful, or –1 if there is an error.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>An application can rotate characters retrieved in bitmap format by specifying a 2-by-2 transformation matrix in the structure pointed to by <parameterReference>lpmat2</parameterReference>.</para>
                    <para>A glyph outline is returned as a series of contours. Each contour is defined by a                         <externalLink> <linkText>TTPOLYGONHEADER</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145158</linkUri>
                        </externalLink> structure followed by as many <legacyBold>TTPOLYCURVE</legacyBold> structures as are required to describe it. All points are returned as                         <externalLink> <linkText>POINTFX</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162806</linkUri>
                        </externalLink> structures and represent absolute positions, not relative moves. The starting point given by the <legacyBold>pfxStart</legacyBold> member of the                         <externalLink> <linkText>TTPOLYGONHEADER</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145158</linkUri>
                        </externalLink> structure is the point at which the outline for a contour begins. The                         <externalLink> <linkText>TTPOLYCURVE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145157</linkUri>
                        </externalLink> structures that follow can be either polyline records or spline records. Polyline records are a series of points; lines drawn between the points describe the outline of the character. Spline records represent the quadratic curves used by TrueType (that is, quadratic b-splines).</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getgraphicsmode">
        <!--cd6aab41-e26a-40f8-982c-6ab403e76610-->
        <title>CDC::GetGraphicsMode</title>
        <content>
            <para>Retrieves the current graphics mode for the specified device context.</para>
            <legacySyntax>int GetGraphicsMode() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns the current graphics mode on success. For a list of the values that this method can return, see                         <externalLink> <linkText>GetGraphicsMode</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144892</linkUri>
                        </externalLink>.</para>
                    <para>Returns 0 on failure.</para>
                    <para>To get extended error information, call                         <externalLink> <linkText>GetLastError</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms679360</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method wraps the Windows GDI function                         <externalLink> <linkText>GetGraphicsMode</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144892</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gethalftonebrush">
        <!--8592d5f3-dc4a-486c-aa0c-2f6014e4ce3f-->
        <title>CDC::GetHalftoneBrush</title>
        <content>
            <para>Call this member function to retrieve a halftone brush.</para>
            <legacySyntax>static CBrush* PASCAL GetHalftoneBrush();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to a <unmanagedCodeEntityReference>CBrush</unmanagedCodeEntityReference> object if successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A halftone brush shows pixels that are alternately foreground and background colors to create a dithered pattern. The following is an example of a dithered pattern created by a halftone brush.</para>
                    <mediaLink>
                        <image xlink:href="ac0667b2-be8a-4c39-9c51-b0d94ccf979d"/>
                    </mediaLink>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getkerningpairs">
        <!--11262555-8d96-4000-b689-9d8b165eedf3-->
        <title>CDC::GetKerningPairs</title>
        <content>
            <para>Retrieves the character kerning pairs for the font that is currently selected in the specified device context.</para>
            <legacySyntax>int GetKerningPairs(
    int nPairs,
    LPKERNINGPAIR lpkrnpair ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nPairs</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of                                 <externalLink> <linkText>KERNINGPAIR</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145024</linkUri>
                                </externalLink> structures pointed to by <parameterReference>lpkrnpair</parameterReference>. The function will not copy more kerning pairs than specified by <parameterReference>nPairs</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpkrnpair</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of <legacyBold>KERNINGPAIR</legacyBold> structures that receive the kerning pairs when the function returns. This array must contain at least as many structures as specified by <parameterReference>nPairs</parameterReference>. If this parameter is <legacyBold>NULL</legacyBold>, the function returns the total number of kerning pairs for the font.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the number of kerning pairs retrieved or the total number of kerning pairs in the font, if the function is successful. Zero is returned if the function fails or there are no kerning pairs for the font.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getlayout">
        <!--dac9f7fd-634d-4161-8471-e325f5f3f4a7-->
        <title>CDC::GetLayout</title>
        <content>
            <para>Call this member function to determine the layout of the text and graphics for a device context, such as a printer or a metafile.</para>
            <legacySyntax>DWORD GetLayout() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, the layout flags for the current device context. Otherwise, <legacyBold>GDI_ERROR</legacyBold>. For extended error information, call                         <externalLink> <linkText>GetLastError</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms679360</linkUri>
                        </externalLink>. For a list of the layout flags, see <legacyLink xlink:href="#cdc__setlayout">CDC::SetLayout</legacyLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default layout is left to right. </para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getmapmode">
        <!--c84f7e08-e965-44e0-acb3-3d74e463db2a-->
        <title>CDC::GetMapMode</title>
        <content>
            <para>Retrieves the current mapping mode.</para>
            <legacySyntax>int GetMapMode() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The mapping mode.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For a description of the mapping modes, see the <unmanagedCodeEntityReference>SetMapMode</unmanagedCodeEntityReference> member function.</para>
                    <alert class="note">
                        <para>If you call <legacyLink xlink:href="#cdc__setlayout">SetLayout</legacyLink> to change the DC to right-to-left layout, <legacyBold>SetLayout</legacyBold> automatically changes the mapping mode to <unmanagedCodeEntityReference>MM_ISOTROPIC</unmanagedCodeEntityReference>. Consequently, any subsequent call to <unmanagedCodeEntityReference>GetMapMode</unmanagedCodeEntityReference> will return <unmanagedCodeEntityReference>MM_ISOTROPIC</unmanagedCodeEntityReference>.</para>
                    </alert>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getmiterlimit">
        <!--63eaa0c2-9ae9-4d9b-bd37-455260c2ee11-->
        <title>CDC::GetMiterLimit</title>
        <content>
            <para>Returns the miter limit for the device context.</para>
            <legacySyntax>float GetMiterLimit() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The miter limit is used when drawing geometric lines that have miter joins.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getnearestcolor">
        <!--6204fae3-f439-4434-ae8e-c18448f071b4-->
        <title>CDC::GetNearestColor</title>
        <content>
            <para>Returns the solid color that best matches a specified logical color.</para>
            <legacySyntax>COLORREF GetNearestColor( COLORREF crColor ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>crColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the color to be matched.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An RGB (red, green, blue) color value that defines the solid color closest to the <parameterReference>crColor</parameterReference> value that the device can represent.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The given device must be able to represent this color.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getoutlinetextmetrics">
        <!--eaecfdb0-bac3-4dc0-a739-aa5e1d7d8415-->
        <title>CDC::GetOutlineTextMetrics</title>
        <content>
            <para>Retrieves metric information for TrueType fonts.</para>
            <legacySyntax>UINT GetOutlineTextMetrics(
    UINT cbData,
    LPOUTLINETEXTMETRIC lpotm ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpotm</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of                                 <externalLink> <linkText>OUTLINETEXTMETRIC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162755</linkUri>
                                </externalLink> structures. If this parameter is <legacyBold>NULL</legacyBold>, the function returns the size of the buffer required for the retrieved metric data.</para>
                        </definition>
                        <definedTerm> <parameterReference>cbData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the size, in bytes, of the buffer to which information is returned.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpotm</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an <legacyBold>OUTLINETEXTMETRIC</legacyBold> structure. If this parameter is <legacyBold>NULL</legacyBold>, the function returns the size of the buffer required for the retrieved metric information.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The                         <externalLink> <linkText>OUTLINETEXTMETRIC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162755</linkUri>
                        </externalLink> structure contains most of the font metric information provided with the TrueType format, including a                         <externalLink> <linkText>TEXTMETRIC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145132</linkUri>
                        </externalLink> structure. The last four members of the <legacyBold>OUTLINETEXTMETRIC</legacyBold> structure are pointers to strings. Applications should allocate space for these strings in addition to the space required for the other members. Because there is no system-imposed limit to the size of the strings, the simplest method for allocating memory is to retrieve the required size by specifying <legacyBold>NULL</legacyBold> for <parameterReference>lpotm</parameterReference> in the first call to the <unmanagedCodeEntityReference>GetOutlineTextMetrics</unmanagedCodeEntityReference> function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getoutputcharwidth">
        <!--2b5c67de-6e96-4658-91aa-15defd8737b2-->
        <title>CDC::GetOutputCharWidth</title>
        <content>
            <para>Uses the output device context, <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference>, and retrieves the widths of individual characters in a consecutive group of characters from the current font.</para>
            <legacySyntax>BOOL GetOutputCharWidth(
    UINT nFirstChar,
    UINT nLastChar,
    LPINT lpBuffer ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nFirstChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the first character in a consecutive group of characters in the current font.</para>
                        </definition>
                        <definedTerm> <parameterReference>nLastChar</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the last character in a consecutive group of characters in the current font.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpBuffer</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a buffer that will receive the width values for a consecutive group of characters in the current font.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For example, if <parameterReference>nFirstChar</parameterReference> identifies the letter 'a' and <parameterReference>nLastChar</parameterReference> identifies the letter 'z', the function retrieves the widths of all lowercase characters. </para>
                    <para>The function stores the values in the buffer pointed to by <parameterReference>lpBuffer</parameterReference>. This buffer must be large enough to hold all of the widths; that is, there must be at least 26 entries in the example given. </para>
                    <para>If a character in the consecutive group of characters does not exist in a particular font, it will be assigned the width value of the default character.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getoutputtabbedtextextent">
        <!--a29c05ed-fae4-4ec8-b360-2c79ac5fbd31-->
        <title>CDC::GetOutputTabbedTextExtent</title>
        <content>
            <para>Call this member function to compute the width and height of a character string using <legacyLink xlink:href="#cdc__m_hdc">m_hDC</legacyLink>, the output device context.</para>
            <legacySyntax>CSize GetOutputTabbedTextExtent(
    LPCTSTR lpszString,
    int nCount,
    int nTabPositions,
    LPINT lpnTabStopPositions ) const;

CSize GetOutputTabbedTextExtent(
    const CString&amp; str,
    int nTabPositions,
    LPINT lpnTabStopPositions ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a character string to be measured. You can also pass a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of characters in the string. If <parameterReference>nCount</parameterReference> is –1, the length is calculated.</para>
                        </definition>
                        <definedTerm> <parameterReference>nTabPositions</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of tab-stop positions in the array pointed to by <parameterReference>lpnTabStopPositions</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpnTabStopPositions</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of integers containing the tab-stop positions in logical units. The tab stops must be sorted in increasing order; the smallest x-value should be the first item in the array. Back tabs are not allowed.</para>
                        </definition>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> A <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that contains the specified characters to be measured.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The dimensions of the string (in logical units) in a <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the string contains one or more tab characters, the width of the string is based upon the tab stops specified by <parameterReference>lpnTabStopPositions</parameterReference>. The function uses the currently selected font to compute the dimensions of the string. </para>
                    <para>The current clipping region does not offset the width and height returned by the <unmanagedCodeEntityReference>GetOutputTabbedTextExtent</unmanagedCodeEntityReference> function.</para>
                    <para>Since some devices do not place characters in regular cell arrays (that is, they kern the characters), the sum of the extents of the characters in a string may not be equal to the extent of the string.</para>
                    <para>If <parameterReference>nTabPositions</parameterReference> is 0 and <parameterReference>lpnTabStopPositions</parameterReference> is <legacyBold>NULL</legacyBold>, tabs are expanded to eight average character widths. If <parameterReference>nTabPositions</parameterReference> is 1, the tab stops will be separated by the distance specified by the first value in the array to which <parameterReference>lpnTabStopPositions</parameterReference> points. If <parameterReference>lpnTabStopPositions</parameterReference> points to more than a single value, a tab stop is set for each value in the array, up to the number specified by <parameterReference>nTabPositions</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getoutputtextextent">
        <!--bb6e0ea6-df8f-4e73-bfeb-4178c9a6be4b-->
        <title>CDC::GetOutputTextExtent</title>
        <content>
            <para>Call this member function to use the output device context, <legacyLink xlink:href="#cdc__m_hdc">m_hDC</legacyLink>, and compute the width and height of a line of text, using the current font.</para>
            <legacySyntax>CSize GetOutputTextExtent(
    LPCTSTR lpszString,
    int nCount ) const;

CSize GetOutputTextExtent(
    const CString&amp; str ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a string of characters. You can also pass a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of characters in the string. If <parameterReference>nCount</parameterReference> is –1, the length is calculated.</para>
                        </definition>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> A <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that contains the specified characters to be measured.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The dimensions of the string (in logical units) returned in a <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The current clipping region does not affect the width and height returned by <unmanagedCodeEntityReference>GetOutputTextExtent</unmanagedCodeEntityReference>.</para>
                    <para>Since some devices do not place characters in regular cell arrays (that is, they carry out kerning), the sum of the extents of the characters in a string may not be equal to the extent of the string.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getoutputtextmetrics">
        <!--cc4bc814-993a-40bc-b37b-68097a6b6f31-->
        <title>CDC::GetOutputTextMetrics</title>
        <content>
            <para>Retrieves the metrics for the current font using <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference>, the output device context.</para>
            <legacySyntax>BOOL GetOutputTextMetrics( LPTEXTMETRIC lpMetrics ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpMetrics</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <externalLink> <linkText>TEXTMETRIC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145132</linkUri>
                                </externalLink> structure that receives the metrics.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getpath">
        <!--4290e500-7ccc-4590-87e7-e688b2b8e938-->
        <title>CDC::GetPath</title>
        <content>
            <para>Retrieves the coordinates defining the endpoints of lines and the control points of curves found in the path that is selected into the device context.</para>
            <legacySyntax>int GetPath(
    LPPOINT lpPoints,
    LPBYTE lpTypes,
    int nCount ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> data structures or <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> objects where the line endpoints and curve control points are placed.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpTypes</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of bytes where the vertex types are placed. Values are one of the following:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>PT_MOVETO</legacyBold>   Specifies that the corresponding point in <parameterReference>lpPoints</parameterReference> starts a disjoint figure.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PT_LINETO</legacyBold>   Specifies that the previous point and the corresponding point in <parameterReference>lpPoints</parameterReference> are the endpoints of a line.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PT_BEZIERTO</legacyBold>   Specifies that the corresponding point in <parameterReference>lpPoints</parameterReference> is a control point or ending point for a Bzier curve. </para>
                                    <para> <legacyBold>PT_BEZIERTO</legacyBold> types always occur in sets of three. The point in the path immediately preceding them defines the starting point for the Bzier curve. The first two <legacyBold>PT_BEZIERTO</legacyBold> points are the control points, and the third <legacyBold>PT_BEZIERTO</legacyBold> point is the end point (if hard-coded).  </para>
                                    <para>A <legacyBold>PT_LINETO</legacyBold> or <legacyBold>PT_BEZIERTO</legacyBold> type may be combined with the following flag (by using the bitwise operator <languageKeyword>OR</languageKeyword>) to indicate that the corresponding point is the last point in a figure and that the figure should be closed: </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PT_CLOSEFIGURE</legacyBold>   Specifies that the figure is automatically closed after the corresponding line or curve is drawn. The figure is closed by drawing a line from the line or curve endpoint to the point corresponding to the last <legacyBold>PT_MOVETO</legacyBold>.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the total number of <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> data structures that may be placed in the <parameterReference>lpPoints</parameterReference> array. This value must be the same as the number of bytes that may be placed in the <parameterReference>lpTypes</parameterReference> array.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the <parameterReference>nCount</parameterReference> parameter is nonzero, the number of points enumerated. If <parameterReference>nCount</parameterReference> is 0, the total number of points in the path (and <unmanagedCodeEntityReference>GetPath</unmanagedCodeEntityReference> writes nothing to the buffers). If <parameterReference>nCount</parameterReference> is nonzero and is less than the number of points in the path, the return value is -1.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The device context must contain a closed path. The points of the path are returned in logical coordinates. Points are stored in the path in device coordinates, so <unmanagedCodeEntityReference>GetPath</unmanagedCodeEntityReference> changes the points from device coordinates to logical coordinates by using the inverse of the current transformation. The <unmanagedCodeEntityReference>FlattenPath</unmanagedCodeEntityReference> member function may be called before <unmanagedCodeEntityReference>GetPath</unmanagedCodeEntityReference>, to convert all curves in the path into line segments.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cdc__beginpath">CDC::BeginPath</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getpixel">
        <!--87698b87-38cc-42dc-a411-2d9d6d94c15a-->
        <title>CDC::GetPixel</title>
        <content>
            <para>Retrieves the RGB color value of the pixel at the point specified by                 <legacyItalic>x</legacyItalic> and                 <legacyItalic>y</legacyItalic>.</para>
            <legacySyntax>COLORREF GetPixel(
    int x,
    int y ) const;

COLORREF GetPixel(
    POINT point ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the point to be examined.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the point to be examined.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x- and y-coordinates of the point to be examined.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>For either version of the function, an RGB color value for the color of the given point. It is –1 if the coordinates do not specify a point in the clipping region.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The point must be in the clipping region. If the point is not in the clipping region, the function has no effect and returns –1. </para>
                    <para>Not all devices support the <legacyBold>GetPixel</legacyBold> function. For more information, see the <legacyBold>RC_BITBLT</legacyBold> raster capability under the <legacyLink xlink:href="#cdc__getdevicecaps">GetDeviceCaps</legacyLink> member function.</para>
                    <para>The <legacyBold>GetPixel</legacyBold> member function has two forms. The first takes two coordinate values; the second takes either a <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or a <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getpolyfillmode">
        <!--432f6a3a-61b6-4ee6-a72c-62ef327feac4-->
        <title>CDC::GetPolyFillMode</title>
        <content>
            <para>Retrieves the current polygon-filling mode.</para>
            <legacySyntax>int GetPolyFillMode() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current polygon-filled mode, <legacyBold>ALTERNATE</legacyBold> or <legacyBold>WINDING</legacyBold>, if the function is successful.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>See the <unmanagedCodeEntityReference>SetPolyFillMode</unmanagedCodeEntityReference> member function for a description of the polygon-filling modes.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getrop2">
        <!--2e1e4339-fa54-40c8-9a9a-9e0e81159788-->
        <title>CDC::GetROP2</title>
        <content>
            <para>Retrieves the current drawing mode.</para>
            <legacySyntax>int GetROP2() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The drawing mode. For a list of the drawing mode values, see the <unmanagedCodeEntityReference>SetROP2</unmanagedCodeEntityReference> member function.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The drawing mode specifies how the colors of the pen and the interior of filled objects are combined with the color already on the display surface.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getsafehdc">
        <!--7e845e30-2da1-4c70-a205-47ae10e76992-->
        <title>CDC::GetSafeHdc</title>
        <content>
            <para>Call this member function to get <legacyLink xlink:href="#cdc__m_hdc">m_hDC</legacyLink>, the output device context.</para>
            <legacySyntax>HDC GetSafeHdc() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A device context handle.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function also works with null pointers.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getstretchbltmode">
        <!--30ccb298-b518-405a-8b7e-fdc3fe5520fc-->
        <title>CDC::GetStretchBltMode</title>
        <content>
            <para>Retrieves the current bitmap-stretching mode.</para>
            <legacySyntax>int GetStretchBltMode() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The return value specifies the current bitmap-stretching mode — <legacyBold>STRETCH_ANDSCANS</legacyBold>, <legacyBold>STRETCH_DELETESCANS</legacyBold>, or <legacyBold>STRETCH_ORSCANS</legacyBold> — if the function is successful.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The bitmap-stretching mode defines how information is removed from bitmaps that are stretched or compressed by the <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference> member function. </para>
                    <para>The <legacyBold>STRETCH_ANDSCANS</legacyBold> and <legacyBold>STRETCH_ORSCANS</legacyBold> modes are typically used to preserve foreground pixels in monochrome bitmaps. The <legacyBold>STRETCH_DELETESCANS</legacyBold> mode is typically used to preserve color in color bitmaps.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gettabbedtextextent">
        <!--a94c04e6-339a-4b2f-9e0b-3a527e830c52-->
        <title>CDC::GetTabbedTextExtent</title>
        <content>
            <para>Call this member function to compute the width and height of a character string using <legacyLink xlink:href="#cdc__m_hattribdc">m_hAttribDC</legacyLink>, the attribute device context.</para>
            <legacySyntax>CSize GetTabbedTextExtent(
    LPCTSTR lpszString,
    int nCount,
    int nTabPositions,
    LPINT lpnTabStopPositions ) const;

CSize GetTabbedTextExtent(
    const CString&amp; str,
    int nTabPositions,
    LPINT lpnTabStopPositions ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a character string. You can also pass a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of characters in the string. If <parameterReference>nCount</parameterReference> is –1, the length is calculated.</para>
                        </definition>
                        <definedTerm> <parameterReference>nTabPositions</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of tab-stop positions in the array pointed to by <parameterReference>lpnTabStopPositions</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpnTabStopPositions</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of integers containing the tab-stop positions in logical units. The tab stops must be sorted in increasing order; the smallest x-value should be the first item in the array. Back tabs are not allowed.</para>
                        </definition>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> A <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that contains the specified characters to be drawn.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The dimensions of the string (in logical units) in a <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the string contains one or more tab characters, the width of the string is based upon the tab stops specified by <parameterReference>lpnTabStopPositions</parameterReference>. The function uses the currently selected font to compute the dimensions of the string. </para>
                    <para>The current clipping region does not offset the width and height returned by the <unmanagedCodeEntityReference>GetTabbedTextExtent</unmanagedCodeEntityReference> function.</para>
                    <para>Since some devices do not place characters in regular cell arrays (that is, they kern the characters), the sum of the extents of the characters in a string may not be equal to the extent of the string.</para>
                    <para>If <parameterReference>nTabPositions</parameterReference> is 0 and <parameterReference>lpnTabStopPositions</parameterReference> is <legacyBold>NULL</legacyBold>, tabs are expanded to eight times the average character width. If <parameterReference>nTabPositions</parameterReference> is 1, the tab stops will be separated by the distance specified by the first value in the array to which <parameterReference>lpnTabStopPositions</parameterReference> points. If <parameterReference>lpnTabStopPositions</parameterReference> points to more than a single value, a tab stop is set for each value in the array, up to the number specified by <parameterReference>nTabPositions</parameterReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gettextalign">
        <!--8fdec670-fede-44ad-9446-7b1627f4257e-->
        <title>CDC::GetTextAlign</title>
        <content>
            <para>Retrieves the status of the text-alignment flags for the device context.</para>
            <legacySyntax>UINT GetTextAlign() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The status of the text-alignment flags. The return value is one or more of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>TA_BASELINE</legacyBold>   Specifies alignment of the x-axis and the baseline of the chosen font within the bounding rectangle.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>TA_BOTTOM</legacyBold>   Specifies alignment of the x-axis and the bottom of the bounding rectangle.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>TA_CENTER</legacyBold>   Specifies alignment of the y-axis and the center of the bounding rectangle.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>TA_LEFT</legacyBold>   Specifies alignment of the y-axis and the left side of the bounding rectangle.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>TA_NOUPDATECP</legacyBold>   Specifies that the current position is not updated.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>TA_RIGHT</legacyBold>   Specifies alignment of the y-axis and the right side of the bounding rectangle.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>TA_TOP</legacyBold>   Specifies alignment of the x-axis and the top of the bounding rectangle.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>TA_UPDATECP</legacyBold>   Specifies that the current position is updated.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The text-alignment flags determine how the <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ExtTextOut</unmanagedCodeEntityReference> member functions align a string of text in relation to the string's starting point. The text-alignment flags are not necessarily single-bit flags and may be equal to 0. To test whether a flag is set, an application should follow these steps:  </para>
                    <list class="ordered">
                        <listItem>
                            <para>Apply the bitwise OR operator to the flag and its related flags, grouped as follows: </para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>TA_LEFT</legacyBold>, <legacyBold>TA_CENTER</legacyBold>, and <legacyBold>TA_RIGHT</legacyBold>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TA_BASELINE</legacyBold>, <legacyBold>TA_BOTTOM</legacyBold>, and <legacyBold>TA_TOP</legacyBold>
                                    </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TA_NOUPDATECP</legacyBold> and <legacyBold>TA_UPDATECP</legacyBold>
                                    </para>
                                </listItem>
                            </list>
                        </listItem>
                        <listItem>
                            <para>Apply the bitwise-AND operator to the result and the return value of <unmanagedCodeEntityReference>GetTextAlign</unmanagedCodeEntityReference>.</para>
                        </listItem>
                        <listItem>
                            <para>Test for the equality of this result and the flag.</para>
                        </listItem>
                    </list>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gettextcharacterextra">
        <!--ce1ef793-a738-4d3b-9ab3-53955885ab6b-->
        <title>CDC::GetTextCharacterExtra</title>
        <content>
            <para>Retrieves the current setting for the amount of intercharacter spacing.</para>
            <legacySyntax>int GetTextCharacterExtra() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The amount of the intercharacter spacing.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>GDI adds this spacing to each character, including break characters, when it writes a line of text to the device context. </para>
                    <para>The default value for the amount of intercharacter spacing is 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gettextcolor">
        <!--13b1e59e-a246-49e4-8e4b-c1b100d34e3f-->
        <title>CDC::GetTextColor</title>
        <content>
            <para>Retrieves the current text color.</para>
            <legacySyntax>COLORREF GetTextColor() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current text color as an RGB color value.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The text color is the foreground color of characters drawn by using the GDI text-output member functions <legacyLink xlink:href="#cdc__textout">TextOut</legacyLink>, <legacyLink xlink:href="#cdc__exttextout">ExtTextOut</legacyLink>, and <legacyLink xlink:href="#cdc__tabbedtextout">TabbedTextOut</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gettextextent">
        <!--80905cf9-876a-4e51-b1bf-9c7e837cd978-->
        <title>CDC::GetTextExtent</title>
        <content>
            <para>Call this member function to compute the width and height of a line of text using the current font to determine the dimensions.</para>
            <legacySyntax>CSize GetTextExtent(
    LPCTSTR lpszString,
    int nCount ) const;

CSize GetTextExtent(
    const CString&amp; str ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a string of characters. You can also pass a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of characters in the string.</para>
                        </definition>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that contains the specified characters.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The dimensions of the string (in logical units) in a <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The information is retrieved from <legacyLink xlink:href="#cdc__m_hattribdc">m_hAttribDC</legacyLink>, the attribute device context. </para>
                    <para>By default, <unmanagedCodeEntityReference>GetTextExtent</unmanagedCodeEntityReference> assumes the text for which it retrieves the dimension is set along a horizontal line (that is, the escapement is 0). If you create a font specifying a non-zero escapement, you must convert the angle of the text explicitly to get the dimensions of the string.</para>
                    <para>The current clipping region does not affect the width and height returned by <unmanagedCodeEntityReference>GetTextExtent</unmanagedCodeEntityReference>.</para>
                    <para>Since some devices do not place characters in regular cell arrays (that is, they carry out kerning), the sum of the extents of the characters in a string may not be equal to the extent of the string.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gettextextentexpointi">
        <!--3ecddf3a-a4a6-418c-bac6-ba28fa24abbd-->
        <title>CDC::GetTextExtentExPointI</title>
        <content>
            <para>Retrieves the number of characters in a specified string that will fit within a specified space and fills an array with the text extent for each of those characters.</para>
            <legacySyntax>BOOL GetTextExtentExPointI(
    LPWORD pgiIn,
    int cgi,
    int nMaxExtent,
    LPINT lpnFit,
    LPINT alpDx,
    LPSIZE lpSize ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pgiIn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an array of glyph indices for which extents are to be retrieved.</para>
                        </definition>
                        <definedTerm> <parameterReference>cgi</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of glyphs in the array pointed to by <parameterReference>pgiIn</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>nMaxExtent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the maximum allowable width, in logical units, of the formatted string.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpnFit</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an integer that receives a count of the maximum number of characters that will fit in the space specified by <parameterReference>nMaxExtent</parameterReference>. When <parameterReference>lpnFit</parameterReference> is <legacyBold>NULL</legacyBold>, <parameterReference>nMaxExtent</parameterReference> is ignored.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>alpDx</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an array of integers that receives partial glyph extents. Each element in the array gives the distance, in logical units, between the beginning of the glyph indices array and one of the glyphs that fits in the space specified by <parameterReference>nMaxExtent</parameterReference>. Although this array should have at least as many elements as glyph indices specified by <parameterReference>cgi</parameterReference>, the function fills the array with extents only for as many glyph indices as are specified by <parameterReference>lpnFit</parameterReference>. If                                 <legacyItalic>lpnDx</legacyItalic> is <legacyBold>NULL</legacyBold>, the function does not compute partial string widths.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>SIZE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure that receives the dimensions of the glyph indices array, in logical units. This value cannot be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function emulates the functionality of the function                         <externalLink> <linkText>GetTextExtentExPointI</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144936</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gettextextentpointi">
        <!--37d9032d-e790-42cb-a567-20f3ea0bd8ef-->
        <title>CDC::GetTextExtentPointI</title>
        <content>
            <para>Retrieves the width and height of the specified array of glyph indices.</para>
            <legacySyntax>BOOL GetTextExtentPointI(
    LPWORD pgiIn,
    int cgi,
    LPSIZE lpSize ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pgiIn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to an array of glyph indices for which extents are to be retrieved.</para>
                        </definition>
                        <definedTerm> <parameterReference>cgi</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of glyphs in the array pointed to by <parameterReference>pgiIn</parameterReference>.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a                                 <externalLink> <linkText>SIZE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure that receives the dimensions of the glyph indices array, in logical units. This value cannot be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function emulates the functionality of the function                         <externalLink> <linkText>GetTextExtentPointI</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144939</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gettextface">
        <!--e6ef3bc1-361a-4b4a-b89b-e7de0cdc4bfb-->
        <title>CDC::GetTextFace</title>
        <content>
            <para>Call this member function to copy the typeface name of the current font into a buffer.</para>
            <legacySyntax>int GetTextFace(
    int nCount,
    LPTSTR lpszFacename ) const;

int GetTextFace(
    CString&amp; rString ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the size of the buffer (in bytes). If the typeface name is longer than the number of bytes specified by this parameter, the name is truncated.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpszFacename</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to the buffer for the typeface name.</para>
                        </definition>
                        <definedTerm> <parameterReference>rString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> A reference to a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The number of bytes copied to the buffer, not including the terminating null character. It is 0 if an error occurs.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The typeface name is copied as a null-terminated string.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gettextmetrics">
        <!--1e0db5a0-2277-4abb-9de5-c48ea52cff2f-->
        <title>CDC::GetTextMetrics</title>
        <content>
            <para>Retrieves the metrics for the current font using the attribute device context.</para>
            <legacySyntax>BOOL GetTextMetrics( LPTEXTMETRIC lpMetrics ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpMetrics</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the                                 <externalLink> <linkText>TEXTMETRIC</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145132</linkUri>
                                </externalLink> structure that receives the metrics.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getviewportext">
        <!--50c9e8e7-0255-46bd-a372-aa6a28a7ad9c-->
        <title>CDC::GetViewportExt</title>
        <content>
            <para>Retrieves the x- and y-extents of the device context's viewport.</para>
            <legacySyntax>CSize GetViewportExt() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The x- and y-extents (in device units) as a <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getviewportorg">
        <!--7408ef38-0349-4562-9337-ac0144de3cd7-->
        <title>CDC::GetViewportOrg</title>
        <content>
            <para>Retrieves the x- and y-coordinates of the origin of the viewport associated with the device context.</para>
            <legacySyntax>CPoint GetViewportOrg() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The origin of the viewport (in device coordinates) as a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getwindow">
        <!--b22663fe-81a0-4145-a4c1-87b6939c81e6-->
        <title>CDC::GetWindow</title>
        <content>
            <para>Returns the window associated with the display device context.</para>
            <legacySyntax>CWnd* GetWindow() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Pointer to a <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> object if successful; otherwise <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This is an advanced function. For example, this member function may not return the view window when printing or in print preview. It always returns the window associated with output. Output functions that use the given DC draw into this window.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getwindowext">
        <!--aab8812d-a2e0-4c4b-83c1-a531dbb553ad-->
        <title>CDC::GetWindowExt</title>
        <content>
            <para>Retrieves the x- and y-extents of the window associated with the device context.</para>
            <legacySyntax>CSize GetWindowExt() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The x- and y-extents (in logical units) as a <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getwindoworg">
        <!--f12d84ad-9bd9-4331-a403-9e5da503884c-->
        <title>CDC::GetWindowOrg</title>
        <content>
            <para>Retrieves the x- and y-coordinates of the origin of the window associated with the device context.</para>
            <legacySyntax>CPoint GetWindowOrg() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The origin of the window (in logical coordinates) as a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__getworldtransform">
        <!--991f3c7f-e5eb-4601-9364-d024150f0bf5-->
        <title>CDC::GetWorldTransform</title>
        <content>
            <para>Retrieves the current world-space to page-space transformation.</para>
            <legacySyntax>BOOL GetWorldTransform( XFORM&amp; rXform ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>rXform</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to an                                 <externalLink> <linkText>XFORM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145228</linkUri>
                                </externalLink> structure that receives the current world-space to page-space transformation.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns a nonzero value on success.</para>
                    <para>Returns 0 on failure.</para>
                    <para>To get extended error information, call                         <externalLink> <linkText>GetLastError</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms679360</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method wraps the Windows GDI function                         <externalLink> <linkText>GetWorldTransform</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144953</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__gradientfill">
        <!--934ed8c3-35f5-40fb-98bd-6919acff262b-->
        <title>CDC::GradientFill</title>
        <content>
            <para>Call this member function to fill rectangle and triangle structures with color that smoothly fades from one side to the other.</para>
            <legacySyntax>BOOL GradientFill(
    TRIVERTEX* pVertices,
    ULONG nVertices,
    void* pMesh,
    ULONG nMeshElements,
    DWORD dwMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pVertices</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to an array of                                 <externalLink> <linkText>TRIVERTEX</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145142</linkUri>
                                </externalLink> structures that each define a triangle vertex. </para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>nVertices</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The number of vertices.</para>
                        </definition>
                        <definedTerm> <parameterReference>pMesh</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Array of                                 <externalLink> <linkText>GRADIENT_TRIANGLE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144959</linkUri>
                                </externalLink> structures in triangle mode, or an array of                                 <externalLink> <linkText>GRADIENT_RECT</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144958</linkUri>
                                </externalLink> structures in rectangle mode.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>nMeshElements</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>The number of elements (triangles or rectangles) in <parameterReference>pMesh</parameterReference>. </para>
                        </definition>
                        <definedTerm> <parameterReference>dwMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies gradient fill mode. For a list of possible values, see                                 <externalLink> <linkText>GradientFill</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144957</linkUri>
                                </externalLink> in the <token>winSDK</token>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>TRUE</legacyBold> if successful; otherwise <legacyBold>FALSE</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>For more information, see <unmanagedCodeEntityReference>GradientFill</unmanagedCodeEntityReference> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__graystring">
        <!--c15e6ae3-a172-4505-b9e8-fe400c6d1a3a-->
        <title>CDC::GrayString</title>
        <content>
            <para>Draws dimmed (gray) text at the given location by writing the text in a memory bitmap, dimming the bitmap, and then copying the bitmap to the display.</para>
            <legacySyntax>virtual BOOL GrayString(
    CBrush* pBrush,
    BOOL (
    CALLBACK* lpfnOutput )(
    HDC, LPARAM, int ),
    LPARAM lpData,
    int nCount,
    int x,
    int y,
    int nWidth,
    int nHeight );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pBrush</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the brush to be used for dimming (graying).</para>
                        </definition>
                        <definedTerm> <parameterReference>lpfnOutput</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the procedure-instance address of the application-supplied callback function that will draw the string. For more information, see the description of the Windows <legacyBold>OutputFunc </legacyBold> <legacyLink xlink:href="5217e183-df48-426b-931b-6245022ca36f">callback function</legacyLink>. If this parameter is <legacyBold>NULL</legacyBold>, the system uses the Windows <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference> function to draw the string, and <parameterReference>lpData</parameterReference> is assumed to be a long pointer to the character string to be output.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpData</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies a far pointer to data to be passed to the output function. If <parameterReference>lpfnOutput</parameterReference> is <legacyBold>NULL</legacyBold>, <parameterReference>lpData</parameterReference> must be a long pointer to the string to be output.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of characters to be output. If this parameter is 0, <unmanagedCodeEntityReference>GrayString</unmanagedCodeEntityReference> calculates the length of the string (assuming that <parameterReference>lpData</parameterReference> is a pointer to the string). If <parameterReference>nCount</parameterReference> is –1 and the function pointed to by <parameterReference>lpfnOutput</parameterReference> returns 0, the image is shown but not dimmed.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the starting position of the rectangle that encloses the string.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the starting position of the rectangle that encloses the string.</para>
                        </definition>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width (in logical units) of the rectangle that encloses the string. If <parameterReference>nWidth</parameterReference> is 0, <unmanagedCodeEntityReference>GrayString</unmanagedCodeEntityReference> calculates the width of the area, assuming <parameterReference>lpData</parameterReference> is a pointer to the string.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height (in logical units) of the rectangle that encloses the string. If <parameterReference>nHeight</parameterReference> is 0, <unmanagedCodeEntityReference>GrayString</unmanagedCodeEntityReference> calculates the height of the area, assuming <parameterReference>lpData</parameterReference> is a pointer to the string.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the string is drawn, or 0 if either the <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference> function or the application-supplied output function returned 0, or if there was insufficient memory to create a memory bitmap for dimming.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function dims the text regardless of the selected brush and background. The <unmanagedCodeEntityReference>GrayString</unmanagedCodeEntityReference> member function uses the currently selected font. The <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference> mapping mode must be selected before using this function.</para>
                    <para>An application can draw dimmed (grayed) strings on devices that support a solid gray color without calling the <unmanagedCodeEntityReference>GrayString</unmanagedCodeEntityReference> member function. The system color <legacyBold>COLOR_GRAYTEXT</legacyBold> is the solid-gray system color used to draw disabled text. The application can call the <legacyBold>GetSysColor</legacyBold> Windows function to retrieve the color value of <legacyBold>COLOR_GRAYTEXT</legacyBold>. If the color is other than 0 (black), the application can call the <unmanagedCodeEntityReference>SetTextColor</unmanagedCodeEntityReference> member function to set the text color to the color value and then draw the string directly. If the retrieved color is black, the application must call <unmanagedCodeEntityReference>GrayString</unmanagedCodeEntityReference> to dim (gray) the text.</para>
                    <para>If <parameterReference>lpfnOutput</parameterReference> is <legacyBold>NULL</legacyBold>, GDI uses the Windows                         <externalLink> <linkText>TextOut</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145133</linkUri>
                        </externalLink> function, and <parameterReference>lpData</parameterReference> is assumed to be a far pointer to the character to be output. If the characters to be output cannot be handled by the <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference> member function (for example, the string is stored as a bitmap), the application must supply its own output function. </para>
                    <para>Also note that all callback functions must trap Microsoft Foundation exceptions before returning to Windows, since exceptions cannot be thrown across callback boundaries. For more information about exceptions, see the article <legacyLink xlink:href="0926627d-2ba7-44a6-babe-d851a4a2517c">Exceptions</legacyLink>.</para>
                    <para>The callback function passed to <unmanagedCodeEntityReference>GrayString</unmanagedCodeEntityReference> must use the <languageKeyword>__stdcall</languageKeyword> calling convention and must be exported with <languageKeyword>__declspec</languageKeyword>.</para>
                    <para>When the framework is in preview mode, a call to the <unmanagedCodeEntityReference>GrayString</unmanagedCodeEntityReference> member function is translated to a <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference> call, and the callback function is not called.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__himetrictodp">
        <!--98a71f0e-94a7-4fe4-9cb3-1b18f1c3ac6e-->
        <title>CDC::HIMETRICtoDP</title>
        <content>
            <para>Use this function when you convert <legacyBold>HIMETRIC</legacyBold> sizes from OLE to pixels.</para>
            <legacySyntax>void HIMETRICtoDP( LPSIZE lpSize ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <externalLink> <linkText>SIZE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the mapping mode of the device context object is <unmanagedCodeEntityReference>MM_LOENGLISH</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>MM_HIENGLISH</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>MM_LOMETRIC</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>MM_HIMETRIC</unmanagedCodeEntityReference>, then the conversion is based on the number of pixels in the physical inch. If the mapping mode is one of the other non-constrained modes (e.g., <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference>), then the conversion is based on the number of pixels in the logical inch.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__himetrictolp">
        <!--3d1b132d-1713-4f78-8820-02582715d680-->
        <title>CDC::HIMETRICtoLP</title>
        <content>
            <para>Call this function to convert <legacyBold>HIMETRIC</legacyBold> units into logical units.</para>
            <legacySyntax>void HIMETRICtoLP( LPSIZE lpSize ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <externalLink> <linkText>SIZE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this function when you get <legacyBold>HIMETRIC</legacyBold> sizes from OLE and wish to convert them to your application's natural mapping mode.</para>
                    <para>The conversion is accomplished by first converting the <legacyBold>HIMETRIC</legacyBold> units into pixels and then converting these units into logical units using the device context's current mapping units. Note that the extents of the device's window and viewport will affect the result.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__intersectcliprect">
        <!--157e2969-e7e7-4eec-a63d-c0220ab48dfa-->
        <title>CDC::IntersectClipRect</title>
        <content>
            <para>Creates a new clipping region by forming the intersection of the current region and the rectangle specified by <parameterReference>x1</parameterReference>, <parameterReference>y1</parameterReference>, <parameterReference>x2</parameterReference>, and <parameterReference>y2</parameterReference>.</para>
            <legacySyntax>int IntersectClipRect(
    int x1,
    int y1,
    int x2,
    int y2 );

int IntersectClipRect(
    LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the lower-right corner of the rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the lower-right corner of the rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the rectangle. You can pass either a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object or a pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The new clipping region's type. It can be any one of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>   New clipping region has overlapping borders.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold>   Device context is not valid.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   New clipping region is empty.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>   New clipping region has no overlapping borders.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>GDI clips all subsequent output to fit within the new boundary. The width and height must not exceed 32,767.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__invertrect">
        <!--f55adc31-4b36-499a-8de2-f7ea4f440a06-->
        <title>CDC::InvertRect</title>
        <content>
            <para>Inverts the contents of the given rectangle.</para>
            <legacySyntax>void InvertRect( LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> that contains the logical coordinates of the rectangle to be inverted. You can also pass a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Inversion is a logical NOT operation and flips the bits of each pixel. On monochrome displays, the function makes white pixels black and black pixels white. On color displays, the inversion depends on how colors are generated for the display. Calling <unmanagedCodeEntityReference>InvertRect</unmanagedCodeEntityReference> twice with the same rectangle restores the display to its previous colors. </para>
                    <para>If the rectangle is empty, nothing is drawn.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#36</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__invertrgn">
        <!--cfb6c105-a1b7-4f2b-ba30-250d0b3761bc-->
        <title>CDC::InvertRgn</title>
        <content>
            <para>Inverts the colors in the region specified by <parameterReference>pRgn</parameterReference>.</para>
            <legacySyntax>BOOL InvertRgn( CRgn* pRgn );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pRgn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the region to be inverted. The coordinates for the region are specified in logical units.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>On monochrome displays, the function makes white pixels black and black pixels white. On color displays, the inversion depends on how the colors are generated for the display.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__isprinting">
        <!--806c72e1-8e48-4b6c-8949-44f9f0b66d8f-->
        <title>CDC::IsPrinting</title>
        <content>
            <para>Determines whether the device context is being used for printing.</para>
            <legacySyntax>BOOL IsPrinting() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object is a printer DC; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__lineto">
        <!--2a4b0c65-8189-4bca-aa6b-35d29995cfc2-->
        <title>CDC::LineTo</title>
        <content>
            <para>Draws a line from the current position up to, but not including, the point specified by                 <legacyItalic>x</legacyItalic> and                 <legacyItalic>y</legacyItalic> (or <parameterReference>point</parameterReference>).</para>
            <legacySyntax>BOOL LineTo(
    int x,
    int y );

BOOL LineTo(
    POINT point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the endpoint for the line.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the endpoint for the line.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the endpoint for the line. You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the line is drawn; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The line is drawn with the selected pen. The current position is set to                         <legacyItalic>x</legacyItalic>,                        <legacyItalic>y</legacyItalic> or to <parameterReference>point</parameterReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="66e7b0b5-b0d2-41d2-8b3d-76e8af845ca4">CRect::CenterPoint</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__lptodp">
        <!--70d1438d-57f9-4390-9486-f6ceb58da1c4-->
        <title>CDC::LPtoDP</title>
        <content>
            <para>Converts logical units into device units.</para>
            <legacySyntax>void LPtoDP(
    LPPOINT lpPoints,
    int nCount = 1 ) const;

void LPtoDP(
    LPRECT lpRect ) const;

void LPtoDP(
    LPSIZE lpSize ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of points. Each point in the array is a <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or a <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of points in the array.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="1b3160de-64e9-40d1-89eb-af3e0fd6acf0">RECT</legacyLink> structure or a <legacyLink xlink:href="dee4e752-15d6-4db4-b68f-1ad65b2ed6ca">CRect</legacyLink> object. This parameter is used for the common case of mapping a rectangle from logical to device units.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <externalLink> <linkText>SIZE</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri>
                                </externalLink> structure or a <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function maps the coordinates of each point, or dimensions of a size, from GDI's logical coordinate system into a device coordinate system. The conversion depends on the current mapping mode and the settings of the origins and extents of the device's window and viewport.</para>
                    <para>The x- and y-coordinates of points are 2-byte signed integers in the range –32,768 through 32,767. In cases where the mapping mode would result in values larger than these limits, the system sets the values to –32,768 and 32,767, respectively.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__lptohimetric">
        <!--a015787c-0312-4f9d-a2a3-017c377db1ad-->
        <title>CDC::LPtoHIMETRIC</title>
        <content>
            <para>Call this function to convert logical units into <legacyBold>HIMETRIC</legacyBold> units.</para>
            <legacySyntax>void LPtoHIMETRIC( LPSIZE lpSize ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpSize</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyBold>SIZE</legacyBold> structure or a <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Use this function when you give <legacyBold>HIMETRIC</legacyBold> sizes to OLE, converting from your application's natural mapping mode. Note that the extents of the device's window and viewport will affect the result.</para>
                    <para>The conversion is accomplished by first converting the logical units into pixels using the device context's current mapping units and then converting these units into <legacyBold>HIMETRIC</legacyBold> units.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__m_hattribdc">
        <!--00bdf972-da70-4f01-aaa0-b94a8b1e477f-->
        <title>CDC::m_hAttribDC</title>
        <content>
            <para>The attribute device context for this <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>HDC m_hAttribDC;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, this device context is equal to <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference>. In general, <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> GDI calls that request information from the device context are directed to <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>. See the <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2">CDC</legacyLink> class description for more on the use of these two device contexts.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__m_hdc">
        <!--81c10ba5-75be-4bc1-9687-13bbc6fcd0d1-->
        <title>CDC::m_hDC</title>
        <content>
            <para>The output device context for this <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>HDC m_hDC;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>By default, <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> is equal to <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>, the other device context wrapped by <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference>. In general, <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> GDI calls that create output go to the <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> device context. You can initialize <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference> to point to different devices. See the <legacyLink xlink:href="715b3334-cb2b-4c9c-8067-02eb7c66c8b2">CDC</legacyLink> class description for more on the use of these two device contexts.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__maskblt">
        <!--9ff9b7b7-1539-485e-bc7c-51eb161fa91b-->
        <title>CDC::MaskBlt</title>
        <content>
            <para>Combines the color data for the source and destination bitmaps using the given mask and raster operation.</para>
            <legacySyntax>BOOL MaskBlt(
    int x,
    int y,
    int nWidth,
    int nHeight,
    CDC* pSrcDC,
    int xSrc,
    int ySrc,
    CBitmap&amp; maskBitmap,
    int xMask,
    int yMask,
    DWORD dwRop );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the destination rectangle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the destination rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width, in logical units, of the destination rectangle and source bitmap.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height, in logical units, of the destination rectangle and source bitmap.</para>
                        </definition>
                        <definedTerm> <parameterReference>pSrcDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the device context from which the bitmap is to be copied. It must be zero if the                                 <legacyItalic>dwRop</legacyItalic> parameter specifies a raster operation that does not include a source.</para>
                        </definition>
                        <definedTerm> <parameterReference>xSrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the source bitmap.</para>
                        </definition>
                        <definedTerm> <parameterReference>ySrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the source bitmap.</para>
                        </definition>
                        <definedTerm> <parameterReference>maskBitmap</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the monochrome mask bitmap combined with the color bitmap in the source device context.</para>
                        </definition>
                        <definedTerm> <parameterReference>xMask</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the horizontal pixel offset for the mask bitmap specified by the <parameterReference>maskBitmap</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>yMask</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the vertical pixel offset for the mask bitmap specified by the <parameterReference>maskBitmap</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>dwRop</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies both foreground and background ternary raster operation codes, which the function uses to control the combination of source and destination data. The background raster operation code is stored in the high byte of the high word of this value; the foreground raster operation code is stored in the low byte of the high word of this value; the low word of this value is ignored, and should be zero. The macro <legacyBold>MAKEROP4</legacyBold> creates such combinations of foreground and background raster operation codes. See the Remarks section for a discussion of foreground and background in the context of this function. See the <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference> member function for a list of common raster operation codes.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A value of 1 in the mask specified by <parameterReference>maskBitmap</parameterReference> indicates that the foreground raster operation code specified by                         <legacyItalic>dwRop</legacyItalic> should be applied at that location. A value of 0 in the mask indicates that the background raster operation code specified by                         <legacyItalic>dwRop</legacyItalic> should be applied at that location. If the raster operations require a source, the mask rectangle must cover the source rectangle. If it does not, the function will fail. If the raster operations do not require a source, the mask rectangle must cover the destination rectangle. If it does not, the function will fail.</para>
                    <para>If a rotation or shear transformation is in effect for the source device context when this function is called, an error occurs. However, other types of transformations are allowed.</para>
                    <para>If the color formats of the source, pattern, and destination bitmaps differ, this function converts the pattern or source format, or both, to match the destination format. If the mask bitmap is not a monochrome bitmap, an error occurs. When an enhanced metafile is being recorded, an error occurs (and the function returns 0) if the source device context identifies an enhanced-metafile device context. Not all devices support <unmanagedCodeEntityReference>MaskBlt</unmanagedCodeEntityReference>. An application should call <unmanagedCodeEntityReference>GetDeviceCaps</unmanagedCodeEntityReference> to determine whether a device supports this function. If no mask bitmap is supplied, this function behaves exactly like <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference>, using the foreground raster operation code. The pixel offsets in the mask bitmap map to the point (0,0) in the source device context's bitmap. This is useful for cases in which a mask bitmap contains a set of masks; an application can easily apply any one of them to a mask-blitting task by adjusting the pixel offsets and rectangle sizes sent to <unmanagedCodeEntityReference>MaskBlt</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__modifyworldtransform">
        <!--b58cf614-29c8-4fac-a3f9-98d72962ff3a-->
        <title>CDC::ModifyWorldTransform</title>
        <content>
            <para>Changes the world transformation for a device context using the specified mode.</para>
            <legacySyntax>BOOL ModifyWorldTransform(
    const XFORM&amp; rXform,
    DWORD iMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>rXform</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to an                                 <externalLink> <linkText>XFORM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145228</linkUri>
                                </externalLink> structure used to modify the world transformation for the given device context.</para>
                        </definition>
                        <definedTerm> <parameterReference>iMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies how the transformation data modifies the current world transformation. For a list of the values that this parameter can take, see                                 <externalLink> <linkText>ModifyWorldTransform</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145060</linkUri>
                                </externalLink>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns a nonzero value on success.</para>
                    <para>Returns 0 on failure.</para>
                    <para>To get extended error information, call                         <externalLink> <linkText>GetLastError</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms679360</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method wraps the Windows GDI function                         <externalLink> <linkText>ModifyWorldTransform</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145060</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__moveto">
        <!--3fe1531e-2d59-4c11-b25f-4cea279e73d0-->
        <title>CDC::MoveTo</title>
        <content>
            <para>Moves the current position to the point specified by                 <legacyItalic>x</legacyItalic> and                 <legacyItalic>y</legacyItalic> (or by <parameterReference>point</parameterReference>).</para>
            <legacySyntax>CPoint MoveTo(
    int x,
    int y );

CPoint MoveTo(
    POINT point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the new position.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the new position.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new position. You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The x- and y-coordinates of the previous position as a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="66e7b0b5-b0d2-41d2-8b3d-76e8af845ca4">CRect::CenterPoint</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__offsetcliprgn">
        <!--d39e4bca-89d2-440b-bfbb-15619f7bd2f9-->
        <title>CDC::OffsetClipRgn</title>
        <content>
            <para>Moves the clipping region of the device context by the specified offsets.</para>
            <legacySyntax>int OffsetClipRgn(
    int x,
    int y );

int OffsetClipRgn(
    SIZE size );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of logical units to move left or right.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of logical units to move up or down.</para>
                        </definition>
                        <definedTerm> <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount to offset.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The new region's type. It can be any one of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>   Clipping region has overlapping borders.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold>   Device context is not valid.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   Clipping region is empty.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>   Clipping region has no overlapping borders.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function moves the region                         <legacyItalic>x</legacyItalic> units along the x-axis and                         <legacyItalic>y</legacyItalic> units along the y-axis.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__offsetviewportorg">
        <!--784c6724-73e9-46fa-9c75-aa040f00af0b-->
        <title>CDC::OffsetViewportOrg</title>
        <content>
            <para>Modifies the coordinates of the viewport origin relative to the coordinates of the current viewport origin.</para>
            <legacySyntax>virtual CPoint OffsetViewportOrg(
    int nWidth,
    int nHeight );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of device units to add to the current origin's x-coordinate.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of device units to add to the current origin's y-coordinate.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous viewport origin (in device coordinates) as a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__offsetwindoworg">
        <!--220b2e48-3a18-4828-bc2d-6dba103a5c34-->
        <title>CDC::OffsetWindowOrg</title>
        <content>
            <para>Modifies the coordinates of the window origin relative to the coordinates of the current window origin.</para>
            <legacySyntax>CPoint OffsetWindowOrg(
    int nWidth,
    int nHeight );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of logical units to add to the current origin's x-coordinate.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of logical units to add to the current origin's y-coordinate.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous window origin (in logical coordinates) as a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__operator_hdc">
        <!--583e82ec-8adb-4fe3-9cdb-e82cd5b1bdcf-->
        <title>CDC::operator HDC</title>
        <content>
            <para>Use this operator to retrieve the device context handle of the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>operator HDC() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, the handle of the device context object; otherwise, <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>You can use the handle to call Windows APIs directly.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__paintrgn">
        <!--f7870834-a3d2-47ab-99bd-ef0b3ef56e32-->
        <title>CDC::PaintRgn</title>
        <content>
            <para>Fills the region specified by <parameterReference>pRgn</parameterReference> using the current brush.</para>
            <legacySyntax>BOOL PaintRgn( CRgn* pRgn );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pRgn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the region to be filled. The coordinates for the given region are specified in logical units.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__patblt">
        <!--7d90adc1-4beb-4e9c-ac94-3e345a70f0d1-->
        <title>CDC::PatBlt</title>
        <content>
            <para>Creates a bit pattern on the device.</para>
            <legacySyntax>BOOL PatBlt(
    int x,
    int y,
    int nWidth,
    int nHeight,
    DWORD dwRop );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the upper-left corner of the rectangle that is to receive the pattern.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the upper-left corner of the rectangle that is to receive the pattern.</para>
                        </definition>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width (in logical units) of the rectangle that is to receive the pattern.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height (in logical units) of the rectangle that is to receive the pattern.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>dwRop</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the raster-operation code. Raster-operation codes (ROPs) define how GDI combines colors in output operations that involve a current brush, a possible source bitmap, and a destination bitmap. This parameter can be one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>PATCOPY</legacyBold>   Copies pattern to destination bitmap.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PATINVERT</legacyBold>   Combines destination bitmap with pattern using the Boolean XOR operator.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DSTINVERT</legacyBold>   Inverts the destination bitmap.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>BLACKNESS</legacyBold>   Turns all output black.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>WHITENESS</legacyBold>   Turns all output white.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The pattern is a combination of the selected brush and the pattern already on the device. The raster-operation code specified by                         <legacyItalic>dwRop</legacyItalic> defines how the patterns are to be combined. The raster operations listed for this function are a limited subset of the full 256 ternary raster-operation codes; in particular, a raster-operation code that refers to a source cannot be used.</para>
                    <para>Not all device contexts support the <unmanagedCodeEntityReference>PatBlt</unmanagedCodeEntityReference> function. To determine whether a device context supports <unmanagedCodeEntityReference>PatBlt</unmanagedCodeEntityReference>, call the <unmanagedCodeEntityReference>GetDeviceCaps</unmanagedCodeEntityReference> member function with the <legacyBold>RASTERCAPS</legacyBold> index and check the return value for the <legacyBold>RC_BITBLT</legacyBold> flag.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__pie">
        <!--1cf0e870-973c-471e-aec9-1822a2e6f51b-->
        <title>CDC::Pie</title>
        <content>
            <para>Draws a pie-shaped wedge by drawing an elliptical arc whose center and two endpoints are joined by lines.</para>
            <legacySyntax>BOOL Pie(
    int x1,
    int y1,
    int x2,
    int y2,
    int x3,
    int y3,
    int x4,
    int y4 );

BOOL Pie(
    LPCRECT lpRect, POINT ptStart, POINT ptEnd );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the upper-left corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the upper-left corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the lower-right corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the lower-right corner of the bounding rectangle (in logical units).</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x3</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the arc's starting point (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>y3</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the arc's starting point (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>x4</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the arc's endpoint (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>y4</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the arc's endpoint (in logical units). This point does not have to lie exactly on the arc.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the bounding rectangle. You can pass either a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object or a pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>ptStart</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the starting point of the arc. This point does not have to lie exactly on the arc. You can pass either a <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> structure or a <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>ptEnd</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the endpoint of the arc. This point does not have to lie exactly on the arc. You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The center of the arc is the center of the bounding rectangle specified by <parameterReference>x1</parameterReference>, <parameterReference>y1</parameterReference>, <parameterReference>x2</parameterReference>, and <parameterReference>y2</parameterReference> (or by <parameterReference>lpRect</parameterReference>). The starting and ending points of the arc are specified by                         <legacyItalic>x3</legacyItalic>, <parameterReference>y3</parameterReference>, <parameterReference>x4</parameterReference>, and <parameterReference>y4</parameterReference> (or by <parameterReference>ptStart</parameterReference> and <parameterReference>ptEnd</parameterReference>). </para>
                    <para>The arc is drawn with the selected pen, moving in a counterclockwise direction. Two additional lines are drawn from each endpoint to the arc's center. The pie-shaped area is filled with the current brush. If                         <legacyItalic>x3</legacyItalic> equals <parameterReference>x4</parameterReference> and <parameterReference>y3</parameterReference> equals <parameterReference>y4</parameterReference>, the result is an ellipse with a single line from the center of the ellipse to the point (                        <legacyItalic>x3</legacyItalic>, <parameterReference>y3</parameterReference>) or ( <parameterReference>x4</parameterReference>, <parameterReference>y4</parameterReference>). </para>
                    <para>The figure drawn by this function extends up to but does not include the right and bottom coordinates. This means that the height of the figure is <parameterReference>y2</parameterReference> – <parameterReference>y1</parameterReference> and the width of the figure is <parameterReference>x2</parameterReference> – <parameterReference>x1</parameterReference>. Both the width and the height of the bounding rectangle must be greater than 2 units and less than 32,767 units.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#37</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__playmetafile">
        <!--e5e3d13a-20e9-4186-b5eb-0257558d45a7-->
        <title>CDC::PlayMetaFile</title>
        <content>
            <para>Plays the contents of the specified metafile on the device context.</para>
            <legacySyntax>BOOL PlayMetaFile(
    HMETAFILE hMF );

BOOL PlayMetaFile(
    HENHMETAFILE hEnhMetaFile,
    LPCRECT lpBounds );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>hMF</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Identifies the metafile to be played.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>hEnhMetaFile</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Identifies the enhanced metafile.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the coordinates of the bounding rectangle used to display the picture. The coordinates are specified in logical units.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The metafile can be played any number of times.</para>
                    <para>The second version of <unmanagedCodeEntityReference>PlayMetaFile</unmanagedCodeEntityReference> displays the picture stored in the given enhanced-format metafile. When an application calls the second version of <unmanagedCodeEntityReference>PlayMetaFile</unmanagedCodeEntityReference>, Windows uses the picture frame in the enhanced-metafile header to map the picture onto the rectangle pointed to by the <parameterReference>lpBounds</parameterReference> parameter. (This picture may be sheared or rotated by setting the world transform in the output device before calling <unmanagedCodeEntityReference>PlayMetaFile</unmanagedCodeEntityReference>.) Points along the edges of the rectangle are included in the picture. An enhanced-metafile picture can be clipped by defining the clipping region in the output device before playing the enhanced metafile.</para>
                    <para>If an enhanced metafile contains an optional palette, an application can achieve consistent colors by setting up a color palette on the output device before calling the second version of <unmanagedCodeEntityReference>PlayMetaFile</unmanagedCodeEntityReference>. To retrieve the optional palette, use the <legacyBold>GetEnhMetaFilePaletteEntries</legacyBold> Windows function. An enhanced metafile can be embedded in a newly created enhanced metafile by calling the second version of <unmanagedCodeEntityReference>PlayMetaFile</unmanagedCodeEntityReference> and playing the source enhanced metafile into the device context for the new enhanced metafile.</para>
                    <para>The states of the output device context are preserved by this function. Any object created but not deleted in the enhanced metafile is deleted by this function. To stop this function, an application can call the <legacyBold>CancelDC</legacyBold> Windows function from another thread to terminate the operation. In this case, the function returns zero.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__plgblt">
        <!--7f1aa275-59df-4f27-85b3-4924eb546ebf-->
        <title>CDC::PlgBlt</title>
        <content>
            <para>Performs a bit-block transfer of the bits of color data from the specified rectangle in the source device context to the specified parallelogram in the given device context.</para>
            <legacySyntax>BOOL PlgBlt(
    LPPOINT lpPoint,
    CDC* pSrcDC,
    int xSrc,
    int ySrc,
    int nWidth,
    int nHeight,
    CBitmap&amp; maskBitmap,
    int xMask,
    int yMask );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoint</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of three points in logical space that identifies three corners of the destination parallelogram. The upper-left corner of the source rectangle is mapped to the first point in this array, the upper-right corner to the second point in this array, and the lower-left corner to the third point. The lower-right corner of the source rectangle is mapped to the implicit fourth point in the parallelogram.</para>
                        </definition>
                        <definedTerm> <parameterReference>pSrcDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the source device context.</para>
                        </definition>
                        <definedTerm> <parameterReference>xSrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate, in logical units, of the upper-left corner of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>ySrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate, in logical units, of the upper-left corner of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width, in logical units, of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height, in logical units, of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>maskBitmap</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies an optional monochrome bitmap that is used to mask the colors of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>xMask</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the upper-left corner of the monochrome bitmap.</para>
                        </definition>
                        <definedTerm> <parameterReference>yMask</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the upper-left corner of the monochrome bitmap.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the given bitmask handle identifies a valid monochrome bitmap, the function uses this bitmap to mask the bits of color data from the source rectangle.</para>
                    <para>The fourth vertex of the parallelogram (D) is defined by treating the first three points (A, B, and C) as vectors and computing D = B + C - A.</para>
                    <para>If the bitmask exists, a value of 1 in the mask indicates that the source pixel color should be copied to the destination. A value of 0 in the mask indicates that the destination pixel color is not to be changed.</para>
                    <para>If the mask rectangle is smaller than the source and destination rectangles, the function replicates the mask pattern.</para>
                    <para>Scaling, translation, and reflection transformations are allowed in the source device context; however, rotation and shear transformations are not. If the mask bitmap is not a monochrome bitmap, an error occurs. The stretching mode for the destination device context is used to determine how to stretch or compress the pixels, if that is necessary. When an enhanced metafile is being recorded, an error occurs if the source device context identifies an enhanced-metafile device context.</para>
                    <para>The destination coordinates are transformed according to the destination device context; the source coordinates are transformed according to the source device context. If the source transformation has a rotation or shear, an error is returned. If the destination and source rectangles do not have the same color format, <unmanagedCodeEntityReference>PlgBlt</unmanagedCodeEntityReference> converts the source rectangle to match the destination rectangle. Not all devices support <unmanagedCodeEntityReference>PlgBlt</unmanagedCodeEntityReference>. For more information, see the description of the <legacyBold>RC_BITBLT</legacyBold> raster capability in the <unmanagedCodeEntityReference>CDC::GetDeviceCaps</unmanagedCodeEntityReference> member function.</para>
                    <para>If the source and destination device contexts represent incompatible devices, <unmanagedCodeEntityReference>PlgBlt</unmanagedCodeEntityReference> returns an error.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__polybezier">
        <!--2c57937a-348d-48d3-a027-961466df9366-->
        <title>CDC::PolyBezier</title>
        <content>
            <para>Draws one or more Bzier splines.</para>
            <legacySyntax>BOOL PolyBezier(
    const POINT* lpPoints,
    int nCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> data structures that contain the endpoints and control points of the spline(s).</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of points in the <parameterReference>lpPoints</parameterReference> array. This value must be one more than three times the number of splines to be drawn, because each Bzier spline requires two control points and an endpoint, and the initial spline requires an additional starting point.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function draws cubic Bzier splines by using the endpoints and control points specified by the <parameterReference>lpPoints</parameterReference> parameter. The first spline is drawn from the first point to the fourth point by using the second and third points as control points. Each subsequent spline in the sequence needs exactly three more points: the end point of the previous spline is used as the starting point, the next two points in the sequence are control points, and the third is the end point.</para>
                    <para>The current position is neither used nor updated by the <unmanagedCodeEntityReference>PolyBezier</unmanagedCodeEntityReference> function. The figure is not filled. This function draws lines by using the current pen.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__polybezierto">
        <!--c7783261-ff4e-4fa8-9d78-0c91071c4898-->
        <title>CDC::PolyBezierTo</title>
        <content>
            <para>Draws one or more Bzier splines.</para>
            <legacySyntax>BOOL PolyBezierTo(
    const POINT* lpPoints,
    int nCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> data structures that contains the endpoints and control points.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of points in the <parameterReference>lpPoints</parameterReference> array. This value must be three times the number of splines to be drawn, because each Bzier spline requires two control points and an end point.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function draws cubic Bzier splines by using the control points specified by the <parameterReference>lpPoints</parameterReference> parameter. The first spline is drawn from the current position to the third point by using the first two points as control points. For each subsequent spline, the function needs exactly three more points, and uses the end point of the previous spline as the starting point for the next. <unmanagedCodeEntityReference>PolyBezierTo</unmanagedCodeEntityReference> moves the current position to the end point of the last Bzier spline. The figure is not filled. This function draws lines by using the current pen.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cdc__beginpath">CDC::BeginPath</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__polydraw">
        <!--23c25cc4-ed47-4c39-b47a-e2c33641e76e-->
        <title>CDC::PolyDraw</title>
        <content>
            <para>Draws a set of line segments and Bzier splines.</para>
            <legacySyntax>BOOL PolyDraw(
    const POINT* lpPoints,
    const BYTE* lpTypes,
    int nCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> data structures that contains the endpoints for each line segment and the endpoints and control points for each Bzier spline.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpTypes</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array that specifies how each point in the <parameterReference>lpPoints</parameterReference> array is used. Values can be one of the following:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>PT_MOVETO</legacyBold>   Specifies that this point starts a disjoint figure. This point becomes the new current position.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PT_LINETO</legacyBold>   Specifies that a line is to be drawn from the current position to this point, which then becomes the new current position.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PT_BEZIERTO</legacyBold>   Specifies that this point is a control point or ending point for a Bzier spline. </para>
                                    <para> <legacyBold>PT_BEZIERTO</legacyBold> types always occur in sets of three. The current position defines the starting point for the Bzier spline. The first two <legacyBold>PT_BEZIERTO</legacyBold> points are the control points, and the third <legacyBold>PT_BEZIERTO</legacyBold> point is the ending point. The ending point becomes the new current position. If there are not three consecutive <legacyBold>PT_BEZIERTO</legacyBold> points, an error results.  </para>
                                    <para>A <legacyBold>PT_LINETO</legacyBold> or <legacyBold>PT_BEZIERTO</legacyBold> type can be combined with the following constant by using the bitwise operator OR to indicate that the corresponding point is the last point in a figure and the figure is closed: </para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PT_CLOSEFIGURE</legacyBold>   Specifies that the figure is automatically closed after the <legacyBold>PT_LINETO</legacyBold> or <legacyBold>PT_BEZIERTO</legacyBold> type for this point is done. A line is drawn from this point to the most recent <legacyBold>PT_MOVETO</legacyBold> or <unmanagedCodeEntityReference>MoveTo</unmanagedCodeEntityReference> point. </para>
                                    <para>This flag is combined with the <legacyBold>PT_LINETO</legacyBold> type for a line, or with the <legacyBold>PT_BEZIERTO</legacyBold> type of ending point for a Bzier spline, by using the bitwise <languageKeyword>OR</languageKeyword> operator. The current position is set to the ending point of the closing line. </para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the total number of points in the <parameterReference>lpPoints</parameterReference> array, the same as the number of bytes in the <parameterReference>lpTypes</parameterReference> array.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function can be used to draw disjoint figures in place of consecutive calls to <unmanagedCodeEntityReference>CDC::MoveTo</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>CDC::LineTo</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>CDC::PolyBezierTo</unmanagedCodeEntityReference> member functions. The lines and splines are drawn using the current pen, and figures are not filled. If there is an active path started by calling the <unmanagedCodeEntityReference>CDC::BeginPath</unmanagedCodeEntityReference> member function, <unmanagedCodeEntityReference>PolyDraw</unmanagedCodeEntityReference> adds to the path. The points contained in the <parameterReference>lpPoints</parameterReference> array and in <parameterReference>lpTypes</parameterReference> indicate whether each point is part of a <unmanagedCodeEntityReference>CDC::MoveTo</unmanagedCodeEntityReference>, a <unmanagedCodeEntityReference>CDC::LineTo</unmanagedCodeEntityReference>, or a <legacyBold>CDC::BezierTo</legacyBold> operation. It is also possible to close figures. This function updates the current position.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cdc__beginpath">CDC::BeginPath</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__polygon">
        <!--a2621785-7f54-49fd-8ef1-3fa558e9b6fd-->
        <title>CDC::Polygon</title>
        <content>
            <para>Draws a polygon consisting of two or more points (vertices) connected by lines, using the current pen.</para>
            <legacySyntax>BOOL Polygon(
    LPPOINT lpPoints,
    int nCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of points that specifies the vertices of the polygon. Each point in the array is a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of vertices in the array.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The system closes the polygon automatically, if necessary, by drawing a line from the last vertex to the first. </para>
                    <para>The current polygon-filling mode can be retrieved or set by using the <unmanagedCodeEntityReference>GetPolyFillMode</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>SetPolyFillMode</unmanagedCodeEntityReference> member functions.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#38</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__polyline">
        <!--afb30642-057a-46ef-b7df-61a4397be3b0-->
        <title>CDC::Polyline</title>
        <content>
            <para>Draws a set of line segments connecting the points specified by <parameterReference>lpPoints</parameterReference>.</para>
            <legacySyntax>BOOL Polyline(
    LPPOINT lpPoints,
    int nCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of <legacyBold>POINT</legacyBold> structures or <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> objects to be connected.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of points in the array. This value must be at least 2.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The lines are drawn from the first point through subsequent points using the current pen. Unlike the <unmanagedCodeEntityReference>LineTo</unmanagedCodeEntityReference> member function, the <unmanagedCodeEntityReference>Polyline</unmanagedCodeEntityReference> function neither uses nor updates the current position.</para>
                    <para>For more information, see                         <externalLink> <linkText>PolyLine</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162815</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__polylineto">
        <!--94e4a0db-78f0-4e28-9621-94d9647038f3-->
        <title>CDC::PolylineTo</title>
        <content>
            <para>Draws one or more straight lines.</para>
            <legacySyntax>BOOL PolylineTo(
    const POINT* lpPoints,
    int nCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> data structures that contains the vertices of the line.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of points in the array.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A line is drawn from the current position to the first point specified by the <parameterReference>lpPoints</parameterReference> parameter by using the current pen. For each additional line, the function draws from the ending point of the previous line to the next point specified by <parameterReference>lpPoints</parameterReference>. <unmanagedCodeEntityReference>PolylineTo</unmanagedCodeEntityReference> moves the current position to the ending point of the last line. If the line segments drawn by this function form a closed figure, the figure is not filled.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__polypolygon">
        <!--168d7220-637a-4ccf-8fb1-0b9f09a01fef-->
        <title>CDC::PolyPolygon</title>
        <content>
            <para>Creates two or more polygons that are filled using the current polygon-filling mode.</para>
            <legacySyntax>BOOL PolyPolygon(
    LPPOINT lpPoints,
    LPINT lpPolyCounts,
    int nCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of <legacyBold>POINT</legacyBold> structures or <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> objects that define the vertices of the polygons.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpPolyCounts</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of integers, each of which specifies the number of points in one of the polygons in the <parameterReference>lpPoints</parameterReference> array.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The number of entries in the <parameterReference>lpPolyCounts</parameterReference> array. This number specifies the number of polygons to be drawn. This value must be at least 2.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The polygons may be disjoint or overlapping. </para>
                    <para>Each polygon specified in a call to the <unmanagedCodeEntityReference>PolyPolygon</unmanagedCodeEntityReference> function must be closed. Unlike polygons created by the <legacyBold>Polygon</legacyBold> member function, the polygons created by <unmanagedCodeEntityReference>PolyPolygon</unmanagedCodeEntityReference> are not closed automatically.</para>
                    <para>The function creates two or more polygons. To create a single polygon, an application should use the <legacyBold>Polygon</legacyBold> member function. </para>
                    <para>The current polygon-filling mode can be retrieved or set by using the <unmanagedCodeEntityReference>GetPolyFillMode</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>SetPolyFillMode</unmanagedCodeEntityReference> member functions.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__polypolyline">
        <!--b51ac8e3-2388-40b6-a59f-4247a5e7a106-->
        <title>CDC::PolyPolyline</title>
        <content>
            <para>Draws multiple series of connected line segments.</para>
            <legacySyntax>BOOL PolyPolyline(
    const POINT* lpPoints,
    const DWORD* lpPolyPoints,
    int nCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of structures that contains the vertices of the polylines. The polylines are specified consecutively.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpPolyPoints</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array of variables specifying the number of points in the <parameterReference>lpPoints</parameterReference> array for the corresponding polygon. Each entry must be greater than or equal to 2.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the total number of counts in the <parameterReference>lpPolyPoints</parameterReference> array.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The line segments are drawn by using the current pen. The figures formed by the segments are not filled. The current position is neither used nor updated by this function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__ptvisible">
        <!--04775cc7-0002-41e5-bba8-e1e075648d01-->
        <title>CDC::PtVisible</title>
        <content>
            <para>Determines whether the given point is within the clipping region of the device context.</para>
            <legacySyntax>virtual BOOL PtVisible(
    int x,
    int y ) const;

BOOL PtVisible(
    POINT point ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the point.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the point.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the point to check in logical coordinates. You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the specified point is within the clipping region; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__queryabort">
        <!--24c23370-94e2-433c-a886-89755c3ce7e3-->
        <title>CDC::QueryAbort</title>
        <content>
            <para>Calls the abort function installed by the <legacyLink xlink:href="#cdc__setabortproc">SetAbortProc</legacyLink> member function for a printing application and queries whether the printing should be terminated.</para>
            <legacySyntax>BOOL QueryAbort() const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The return value is nonzero if printing should continue or if there is no abort procedure. It is 0 if the print job should be terminated. The return value is supplied by the abort function.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__realizepalette">
        <!--5b55e0a3-dfa2-484b-b24d-ffa05bffcd90-->
        <title>CDC::RealizePalette</title>
        <content>
            <para>Maps entries from the current logical palette to the system palette.</para>
            <legacySyntax>UINT RealizePalette();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Indicates how many entries in the logical palette were mapped to different entries in the system palette. This represents the number of entries that this function remapped to accommodate changes in the system palette since the logical palette was last realized.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>A logical color palette acts as a buffer between color-intensive applications and the system, allowing an application to use as many colors as needed without interfering with its own displayed colors or with colors displayed by other windows. </para>
                    <para>When a window has the input focus and calls <unmanagedCodeEntityReference>RealizePalette</unmanagedCodeEntityReference>, Windows ensures that the window will display all the requested colors, up to the maximum number simultaneously available on the screen. Windows also displays colors not found in the window's palette by matching them to available colors. </para>
                    <para>In addition, Windows matches the colors requested by inactive windows that call the function as closely as possible to the available colors. This significantly reduces undesirable changes in the colors displayed in inactive windows.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__rectangle">
        <!--63a3f745-7815-4747-b96d-7c6e7374a274-->
        <title>CDC::Rectangle</title>
        <content>
            <para>Draws a rectangle using the current pen.</para>
            <legacySyntax>BOOL Rectangle(
    int x1,
    int y1,
    int x2,
    int y2 );

BOOL Rectangle(
    LPCRECT lpRect );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the upper-left corner of the rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the upper-left corner of the rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the lower-right corner of the rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the lower-right corner of the rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the rectangle in logical units. You can pass either a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object or a pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The interior of the rectangle is filled using the current brush. </para>
                    <para>The rectangle extends up to, but does not include, the right and bottom coordinates. This means that the height of the rectangle is <parameterReference>y2</parameterReference> – <parameterReference>y1</parameterReference> and the width of the rectangle is <parameterReference>x2</parameterReference> – <parameterReference>x1</parameterReference>. Both the width and the height of a rectangle must be greater than 2 units and less than 32,767 units.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#39</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__rectvisible">
        <!--d2935997-9948-476e-a682-d193e83597de-->
        <title>CDC::RectVisible</title>
        <content>
            <para>Determines whether any part of the given rectangle lies within the clipping region of the display context.</para>
            <legacySyntax>virtual BOOL RectVisible( LPCRECT lpRect ) const;</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the logical coordinates of the specified rectangle.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if any portion of the given rectangle lies within the clipping region; otherwise 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__releaseattribdc">
        <!--ae0ad0d0-505e-4e0f-a535-a3fa3ce5bbc7-->
        <title>CDC::ReleaseAttribDC</title>
        <content>
            <para>Call this member function to set <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference> to <legacyBold>NULL</legacyBold>.</para>
            <legacySyntax>virtual void ReleaseAttribDC();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This does not cause a <legacyBold>Detach</legacyBold> to occur. Only the output device context is attached to the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object, and only it can be detached.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__releaseoutputdc">
        <!--a646b79c-097a-4363-8e27-e6d0e88dfb7e-->
        <title>CDC::ReleaseOutputDC</title>
        <content>
            <para>Call this member function to set the <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> member to <legacyBold>NULL</legacyBold>.</para>
            <legacySyntax>virtual void ReleaseOutputDC();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function cannot be called when the output device context is attached to the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object. Use the <legacyBold>Detach</legacyBold> member function to detach the output device context.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__resetdc">
        <!--b54a395c-6e2d-4304-8253-1e954510cdcd-->
        <title>CDC::ResetDC</title>
        <content>
            <para>Call this member function to update the device context wrapped by the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
            <legacySyntax>BOOL ResetDC( const DEVMODE* lpDevMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpDevMode</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a Windows <unmanagedCodeEntityReference>DEVMODE</unmanagedCodeEntityReference> structure.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The device context is updated from the information specified in the Windows <unmanagedCodeEntityReference>DEVMODE</unmanagedCodeEntityReference> structure. This member function only resets the attribute device context.</para>
                    <para>An application will typically use the <unmanagedCodeEntityReference>ResetDC</unmanagedCodeEntityReference> member function when a window processes a <unmanagedCodeEntityReference>WM_DEVMODECHANGE</unmanagedCodeEntityReference> message. You can also use this member function to change the paper orientation or paper bins while printing a document.</para>
                    <para>You cannot use this member function to change the driver name, device name, or output port. When the user changes the port connection or device name, you must delete the original device context and create a new device context with the new information.</para>
                    <para>Before you call this member function, you must ensure that all objects (other than stock objects) that had been selected into the device context have been selected out.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__restoredc">
        <!--fd8aaceb-712b-4d57-8363-be7586a22cae-->
        <title>CDC::RestoreDC</title>
        <content>
            <para>Restores the device context to the previous state identified by <parameterReference>nSavedDC</parameterReference>.</para>
            <legacySyntax>virtual BOOL RestoreDC( int nSavedDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nSavedDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the device context to be restored. It can be a value returned by a previous <unmanagedCodeEntityReference>SaveDC</unmanagedCodeEntityReference> function call. If <parameterReference>nSavedDC</parameterReference> is –1, the most recently saved device context is restored.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the specified context was restored; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>RestoreDC</unmanagedCodeEntityReference> restores the device context by popping state information off a stack created by earlier calls to the <unmanagedCodeEntityReference>SaveDC</unmanagedCodeEntityReference> member function. </para>
                    <para>The stack can contain the state information for several device contexts. If the context specified by <parameterReference>nSavedDC</parameterReference> is not at the top of the stack, <unmanagedCodeEntityReference>RestoreDC</unmanagedCodeEntityReference> deletes all state information between the device context specified by <parameterReference>nSavedDC</parameterReference> and the top of the stack. The deleted information is lost.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__roundrect">
        <!--c20e1713-7569-40a4-ac52-4c68cbc56f7c-->
        <title>CDC::RoundRect</title>
        <content>
            <para>Draws a rectangle with rounded corners using the current pen.</para>
            <legacySyntax>BOOL RoundRect(
    int x1,
    int y1,
    int x2,
    int y2,
    int x3,
    int y3 );

BOOL RoundRect(
    LPCRECT lpRect, POINT point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>x1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the upper-left corner of the rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y1</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the upper-left corner of the rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>x2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the lower-right corner of the rectangle (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y2</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate of the lower-right corner of the rectangle (in logical units).</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>x3</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width of the ellipse used to draw the rounded corners (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>y3</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height of the ellipse used to draw the rounded corners (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRect</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the bounding rectangle in logical units. You can pass either a <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object or a pointer to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The x-coordinate of <parameterReference>point</parameterReference> specifies the width of the ellipse to draw the rounded corners (in logical units). The y-coordinate of <parameterReference>point</parameterReference> specifies the height of the ellipse to draw the rounded corners (in logical units). You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The interior of the rectangle is filled using the current brush. </para>
                    <para>The figure this function draws extends up to but does not include the right and bottom coordinates. This means that the height of the figure is <parameterReference>y2</parameterReference> – <parameterReference>y1</parameterReference> and the width of the figure is <parameterReference>x2</parameterReference> – <parameterReference>x1</parameterReference>. Both the height and the width of the bounding rectangle must be greater than 2 units and less than 32,767 units.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <codeReference>NVC_MFCDocView#40</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__savedc">
        <!--93d6913a-adcb-4481-9a6f-f2697abf1ec6-->
        <title>CDC::SaveDC</title>
        <content>
            <para>Saves the current state of the device context by copying state information (such as clipping region, selected objects, and mapping mode) to a context stack maintained by Windows.</para>
            <legacySyntax>virtual int SaveDC();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An integer identifying the saved device context. It is 0 if an error occurs. This return value can be used to restore the device context by calling <unmanagedCodeEntityReference>RestoreDC</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The saved device context can later be restored by using <unmanagedCodeEntityReference>RestoreDC</unmanagedCodeEntityReference>.</para>
                    <para> <unmanagedCodeEntityReference>SaveDC</unmanagedCodeEntityReference> can be used any number of times to save any number of device-context states.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__scaleviewportext">
        <!--7b2ef940-ffa2-4f45-85d5-7fea81f0e530-->
        <title>CDC::ScaleViewportExt</title>
        <content>
            <para>Modifies the viewport extents relative to the current values.</para>
            <legacySyntax>virtual CSize ScaleViewportExt(
    int xNum,
    int xDenom,
    int yNum,
    int yDenom );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>xNum</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount by which to multiply the current x-extent.</para>
                        </definition>
                        <definedTerm> <parameterReference>xDenom</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount by which to divide the result of multiplying the current x-extent by the value of the <parameterReference>xNum</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>yNum</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount by which to multiply the current y-extent.</para>
                        </definition>
                        <definedTerm> <parameterReference>yDenom</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount by which to divide the result of multiplying the current y-extent by the value of the <parameterReference>yNum</parameterReference> parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous viewport extents (in device units) as a <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The formulas are written as follows:</para>
                    <para> <codeInline>xNewVE = ( xOldVE * xNum ) / xDenom</codeInline>
                    </para>
                    <para> <codeInline>yNewVE = ( yOldVE * yNum ) / yDenom</codeInline>
                    </para>
                    <para>The new viewport extents are calculated by multiplying the current extents by the given numerator and then dividing by the given denominator.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__scalewindowext">
        <!--62b47e71-fdb7-42e8-acf1-ac3f49f990dd-->
        <title>CDC::ScaleWindowExt</title>
        <content>
            <para>Modifies the window extents relative to the current values.</para>
            <legacySyntax>virtual CSize ScaleWindowExt(
    int xNum,
    int xDenom,
    int yNum,
    int yDenom );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>xNum</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount by which to multiply the current x-extent.</para>
                        </definition>
                        <definedTerm> <parameterReference>xDenom</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount by which to divide the result of multiplying the current x-extent by the value of the <parameterReference>xNum</parameterReference> parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>yNum</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount by which to multiply the current y-extent.</para>
                        </definition>
                        <definedTerm> <parameterReference>yDenom</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount by which to divide the result of multiplying the current y-extent by the value of the <parameterReference>yNum</parameterReference> parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous window extents (in logical units) as a <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The formulas are written as follows:</para>
                    <para> <codeInline>xNewWE = ( xOldWE * xNum ) / xDenom</codeInline>
                    </para>
                    <para> <codeInline>yNewWE = ( yOldWE * yNum ) / yDenom</codeInline>
                    </para>
                    <para>The new window extents are calculated by multiplying the current extents by the given numerator and then dividing by the given denominator.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__scrolldc">
        <!--7d3cb1e8-c93b-4c92-a36f-50fd631a5bff-->
        <title>CDC::ScrollDC</title>
        <content>
            <para>Scrolls a rectangle of bits horizontally and vertically.</para>
            <legacySyntax>BOOL ScrollDC(
    int dx,
    int dy,
    LPCRECT lpRectScroll,
    LPCRECT lpRectClip,
    CRgn* pRgnUpdate,
    LPRECT lpRectUpdate );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dx</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of horizontal scroll units.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>dy</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of vertical scroll units.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRectScroll</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the coordinates of the scrolling rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRectClip</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that contains the coordinates of the clipping rectangle. When this rectangle is smaller than the original one pointed to by <parameterReference>lpRectScroll</parameterReference>, scrolling occurs only in the smaller rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>pRgnUpdate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the region uncovered by the scrolling process. The <unmanagedCodeEntityReference>ScrollDC</unmanagedCodeEntityReference> function defines this region; it is not necessarily a rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpRectUpdate</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that receives the coordinates of the rectangle that bounds the scrolling update region. This is the largest rectangular area that requires repainting. The values in the structure or object when the function returns are in client coordinates, regardless of the mapping mode for the given device context.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if scrolling is executed; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If <parameterReference>lpRectUpdate</parameterReference> is <legacyBold>NULL</legacyBold>, Windows does not compute the update rectangle. If both <parameterReference>pRgnUpdate</parameterReference> and <parameterReference>lpRectUpdate</parameterReference> are <legacyBold>NULL</legacyBold>, Windows does not compute the update region. If <parameterReference>pRgnUpdate</parameterReference> is not <legacyBold>NULL</legacyBold>, Windows assumes that it contains a valid pointer to the region uncovered by the scrolling process (defined by the <unmanagedCodeEntityReference>ScrollDC</unmanagedCodeEntityReference> member function). The update region returned in <parameterReference>lpRectUpdate</parameterReference> can be passed to <unmanagedCodeEntityReference>CWnd::InvalidateRgn</unmanagedCodeEntityReference> if required.</para>
                    <para>An application should use the <unmanagedCodeEntityReference>ScrollWindow</unmanagedCodeEntityReference> member function of class <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference> when it is necessary to scroll the entire client area of a window. Otherwise, it should use <unmanagedCodeEntityReference>ScrollDC</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__selectclippath">
        <!--6800f7d8-9726-4246-a9c4-93e850181a12-->
        <title>CDC::SelectClipPath</title>
        <content>
            <para>Selects the current path as a clipping region for the device context, combining the new region with any existing clipping region by using the specified mode.</para>
            <legacySyntax>BOOL SelectClipPath( int nMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the way to use the path. The following values are allowed:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>RGN_AND</legacyBold>   The new clipping region includes the intersection (overlapping areas) of the current clipping region and the current path.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_COPY</legacyBold>   The new clipping region is the current path.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_DIFF</legacyBold>   The new clipping region includes the areas of the current clipping region, and those of the current path are excluded.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_OR</legacyBold>   The new clipping region includes the union (combined areas) of the current clipping region and the current path.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_XOR</legacyBold>   The new clipping region includes the union of the current clipping region and the current path, but without the overlapping areas.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The device context identified must contain a closed path.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__selectcliprgn">
        <!--a56735b9-b7b4-4191-aa58-fa3b168a90dd-->
        <title>CDC::SelectClipRgn</title>
        <content>
            <para>Selects the given region as the current clipping region for the device context.</para>
            <legacySyntax>int SelectClipRgn(
    CRgn* pRgn );

int SelectClipRgn(
    CRgn* pRgn,
    int nMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pRgn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the region to be selected. </para>
                            <list class="bullet">
                                <listItem>
                                    <para>For the first version of this function, if this value is <legacyBold>NULL</legacyBold>, the entire client area is selected and output is still clipped to the window.</para>
                                </listItem>
                                <listItem>
                                    <para>For the second version of this function, this handle can be <legacyBold>NULL</legacyBold> only when the <legacyBold>RGN_COPY</legacyBold> mode is specified.</para>
                                </listItem>
                            </list>
                        </definition>
                        <definedTerm> <parameterReference>nMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the operation to be performed. It must be one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>RGN_AND</legacyBold>   The new clipping region combines the overlapping areas of the current clipping region and the region identified by <parameterReference>pRgn</parameterReference>.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_COPY</legacyBold>   The new clipping region is a copy of the region identified by <parameterReference>pRgn</parameterReference>. This is functionality is identical to the first version of <unmanagedCodeEntityReference>SelectClipRgn</unmanagedCodeEntityReference>. If the region identified by <parameterReference>pRgn</parameterReference> is <legacyBold>NULL</legacyBold>, the new clipping region becomes the default clipping region (a null region).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_DIFF</legacyBold>   The new clipping region combines the areas of the current clipping region with those areas excluded from the region identified by <parameterReference>pRgn</parameterReference>.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_OR</legacyBold>   The new clipping region combines the current clipping region and the region identified by <parameterReference>pRgn</parameterReference>.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>RGN_XOR</legacyBold>   The new clipping region combines the current clipping region and the region identified by <parameterReference>pRgn</parameterReference> but excludes any overlapping areas.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The region's type. It can be any of the following values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>   New clipping region has overlapping borders.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold>   Device context or region is not valid.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   New clipping region is empty.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>   New clipping region has no overlapping borders.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Only a copy of the selected region is used. The region itself can be selected for any number of other device contexts, or it can be deleted.</para>
                    <para>The function assumes that the coordinates for the given region are specified in device units. Some printer devices support text output at a higher resolution than graphics output in order to retain the precision needed to express text metrics. These devices report device units at the higher resolution, that is, in text units. These devices then scale coordinates for graphics so that several reported device units map to only 1 graphic unit. You should always call the <unmanagedCodeEntityReference>SelectClipRgn</unmanagedCodeEntityReference> function using text units.</para>
                    <para>Applications that must take the scaling of graphics objects in the GDI can use the <legacyBold>GETSCALINGFACTOR</legacyBold> printer escape to determine the scaling factor. This scaling factor affects clipping. If a region is used to clip graphics, GDI divides the coordinates by the scaling factor. If the region is used to clip text, GDI makes no scaling adjustment. A scaling factor of 1 causes the coordinates to be divided by 2; a scaling factor of 2 causes the coordinates to be divided by 4; and so on.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__selectobject">
        <!--b23aa641-a6bb-43cd-bcd9-9171f81f97f3-->
        <title>CDC::SelectObject</title>
        <content>
            <para>Selects an object into the device context.</para>
            <legacySyntax>CPen* SelectObject( CPen* pPen );

CBrush* SelectObject( CBrush* pBrush );

virtual CFont* SelectObject( CFont* pFont );

CBitmap* SelectObject( CBitmap* pBitmap );

int SelectObject( CRgn* pRgn );

CGdiObject* SelectObject( CGdiObject* pObject );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>pPen</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="93175a3a-d46c-4768-be8d-863254f97a5f">CPen</legacyLink> object to be selected.</para>
                        </definition>
                        <definedTerm> <parameterReference>pBrush</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="e5ef2c62-dd95-4973-9090-f52f605900e1">CBrush</legacyLink> object to be selected.</para>
                        </definition>
                        <definedTerm> <parameterReference>pFont</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="3fad6bfe-d6ce-4ab9-967a-5ce0aa102800">CFont</legacyLink> object to be selected.</para>
                        </definition>
                        <definedTerm> <parameterReference>pBitmap</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="3980616a-c59d-495a-86e6-62bd3889c84c">CBitmap</legacyLink> object to be selected.</para>
                        </definition>
                        <definedTerm> <parameterReference>pRgn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="d904da84-76aa-481e-8780-b09485f49e64">CRgn</legacyLink> object to be selected.</para>
                        </definition>
                        <definedTerm> <parameterReference>pObject</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to a <legacyLink xlink:href="1cba3ba5-3d49-4e43-8293-209299f2f6f4">CGdiObject</legacyLink> object to be selected.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the object being replaced. This is a pointer to an object of one of the classes derived from <unmanagedCodeEntityReference>CGdiObject</unmanagedCodeEntityReference>, such as <unmanagedCodeEntityReference>CPen</unmanagedCodeEntityReference>, depending on which version of the function is used. The return value is <legacyBold>NULL</legacyBold> if there is an error. This function may return a pointer to a temporary object. This temporary object is only valid during the processing of one Windows message. For more information, see <unmanagedCodeEntityReference>CGdiObject::FromHandle</unmanagedCodeEntityReference>.</para>
                    <para>The version of the member function that takes a region parameter performs the same task as the <unmanagedCodeEntityReference>SelectClipRgn</unmanagedCodeEntityReference> member function. Its return value can be any of the following:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>COMPLEXREGION</legacyBold>   New clipping region has overlapping borders.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>ERROR</legacyBold>   Device context or region is not valid.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>NULLREGION</legacyBold>   New clipping region is empty.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SIMPLEREGION</legacyBold>   New clipping region has no overlapping borders.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Class <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> provides five versions specialized for particular kinds of GDI objects, including pens, brushes, fonts, bitmaps, and regions. The newly selected object replaces the previous object of the same type. For example, if <parameterReference>pObject</parameterReference> of the general version of <unmanagedCodeEntityReference>SelectObject</unmanagedCodeEntityReference> points to a <legacyLink xlink:href="93175a3a-d46c-4768-be8d-863254f97a5f">CPen</legacyLink> object, the function replaces the current pen with the pen specified by <parameterReference>pObject</parameterReference>.</para>
                    <para>An application can select a bitmap into memory device contexts only and into only one memory device context at a time. The format of the bitmap must either be monochrome or compatible with the device context; if it is not, <unmanagedCodeEntityReference>SelectObject</unmanagedCodeEntityReference> returns an error.</para>
                    <para>For Windows 3.1 and later, the <unmanagedCodeEntityReference>SelectObject</unmanagedCodeEntityReference> function returns the same value whether it is used in a metafile or not. Under previous versions of Windows, <unmanagedCodeEntityReference>SelectObject</unmanagedCodeEntityReference> returned a nonzero value for success and 0 for failure when it was used in a metafile.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__selectpalette">
        <!--d3897fe0-7222-4a7d-bd52-089d2376b29d-->
        <title>CDC::SelectPalette</title>
        <content>
            <para>Selects the logical palette that is specified by <parameterReference>pPalette</parameterReference> as the selected palette object of the device context.</para>
            <legacySyntax>CPalette* SelectPalette(
    CPalette* pPalette,
    BOOL bForceBackground );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>pPalette</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Identifies the logical palette to be selected. This palette must already have been created with the <unmanagedCodeEntityReference>CPalette</unmanagedCodeEntityReference> member function <legacyLink xlink:href="8cd95498-53ed-4852-85e1-70e522541114#cpalette__createpalette">CreatePalette</legacyLink>.</para>
                        </definition>
                        <definedTerm> <parameterReference>bForceBackground</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the logical palette is forced to be a background palette. If <parameterReference>bForceBackground</parameterReference> is nonzero, the selected palette is always a background palette, regardless of whether the window has the input focus. If <parameterReference>bForceBackground</parameterReference> is 0 and the device context is attached to a window, the logical palette is a foreground palette when the window has the input focus.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to a <unmanagedCodeEntityReference>CPalette</unmanagedCodeEntityReference> object identifying the logical palette replaced by the palette specified by <parameterReference>pPalette</parameterReference>. It is <legacyBold>NULL</legacyBold> if there is an error.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The new palette becomes the palette object used by GDI to control colors displayed in the device context and replaces the previous palette. </para>
                    <para>An application can select a logical palette into more than one device context. However, changes to a logical palette will affect all device contexts for which it is selected. If an application selects a palette into more than one device context, the device contexts must all belong to the same physical device.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__selectstockobject">
        <!--e135edec-c283-49e7-b682-4b3e077b4ca4-->
        <title>CDC::SelectStockObject</title>
        <content>
            <para>Selects a <legacyLink xlink:href="1cba3ba5-3d49-4e43-8293-209299f2f6f4">CGdiObject</legacyLink> object that corresponds to one of the predefined stock pens, brushes, or fonts.</para>
            <legacySyntax>virtual CGdiObject* SelectStockObject( int nIndex );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nIndex</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the kind of stock object desired. It can be one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>BLACK_BRUSH</legacyBold>   Black brush.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DKGRAY_BRUSH</legacyBold>   Dark gray brush.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>GRAY_BRUSH</legacyBold>   Gray brush.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>HOLLOW_BRUSH</legacyBold>   Hollow brush.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>LTGRAY_BRUSH</legacyBold>   Light gray brush.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>NULL_BRUSH</legacyBold>   Null brush.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>WHITE_BRUSH</legacyBold>   White brush.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>BLACK_PEN</legacyBold>   Black pen.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>NULL_PEN</legacyBold>   Null pen.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>WHITE_PEN</legacyBold>   White pen.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>ANSI_FIXED_FONT</legacyBold>   ANSI fixed system font.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>ANSI_VAR_FONT</legacyBold>   ANSI variable system font.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DEVICE_DEFAULT_FONT</legacyBold>   Device-dependent font.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>OEM_FIXED_FONT</legacyBold>   OEM-dependent fixed font.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SYSTEM_FONT</legacyBold>   The system font. By default, Windows uses the system font to draw menus, dialog-box controls, and other text. It is best, however, not to rely on SYSTEM_FONT to obtain the font used by dialogs and windows. Instead, use the <unmanagedCodeEntityReference>SystemParametersInfo</unmanagedCodeEntityReference> function with the SPI_GETNONCLIENTMETRICS parameter to retrieve the current font. <unmanagedCodeEntityReference>SystemParametersInfo</unmanagedCodeEntityReference> takes into account the current theme and provides font information for captions, menus, and message dialogs.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SYSTEM_FIXED_FONT</legacyBold>   The fixed-width system font used in Windows prior to version 3.0. This object is available for compatibility with earlier versions of Windows.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DEFAULT_PALETTE</legacyBold>   Default color palette. This palette consists of the 20 static colors in the system palette.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>A pointer to the <unmanagedCodeEntityReference>CGdiObject</unmanagedCodeEntityReference> object that was replaced if the function is successful. The actual object pointed to is a <legacyLink xlink:href="93175a3a-d46c-4768-be8d-863254f97a5f">CPen</legacyLink>, <legacyLink xlink:href="e5ef2c62-dd95-4973-9090-f52f605900e1">CBrush</legacyLink>, or <legacyLink xlink:href="3fad6bfe-d6ce-4ab9-967a-5ce0aa102800">CFont</legacyLink> object. If the call is unsuccessful, the return value is <legacyBold>NULL</legacyBold>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setabortproc">
        <!--6b6dfdfb-9c53-4476-ba0c-d51107bf410f-->
        <title>CDC::SetAbortProc</title>
        <content>
            <para>Installs the abort procedure for the print job.</para>
            <legacySyntax>int SetAbortProc(
    BOOL (
    CALLBACK* lpfn )(
    HDC, int ) );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpfn</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A pointer to the abort function to install as the abort procedure. For more about the callback function, see <legacyLink xlink:href="daa36d5d-15de-40fc-8d37-a865d06c4710">Callback Function for CDC::SetAbortProc</legacyLink>. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the outcome of the <unmanagedCodeEntityReference>SetAbortProc</unmanagedCodeEntityReference> function. Some of the following values are more probable than others, but all are possible.  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>SP_ERROR</legacyBold>   General error.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SP_OUTOFDISK</legacyBold>   Not enough disk space is currently available for spooling, and no more space will become available.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SP_OUTOFMEMORY</legacyBold>   Not enough memory is available for spooling.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>SP_USERABORT</legacyBold>   User ended the job through the Print Manager.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If an application is to allow the print job to be canceled during spooling, it must set the abort function before the print job is started with the <legacyLink xlink:href="#cdc__startdoc">StartDoc</legacyLink> member function. The Print Manager calls the abort function during spooling to allow the application to cancel the print job or to process out-of-disk-space conditions. If no abort function is set, the print job will fail if there is not enough disk space for spooling.</para>
                    <para>Note that the features of Microsoft Visual C++ simplify the creation of the callback function passed to <unmanagedCodeEntityReference>SetAbortProc</unmanagedCodeEntityReference>. The address passed to the <unmanagedCodeEntityReference>EnumObjects</unmanagedCodeEntityReference> member function is a pointer to a function exported with <legacyBold>__declspec(dllexport)</legacyBold> and with the <languageKeyword>__stdcall</languageKeyword> calling convention.</para>
                    <para>You also do not have to export the function name in an <legacyBold>EXPORTS</legacyBold> statement in your application's module-definition file. You can instead use the <legacyBold>EXPORT</legacyBold> function modifier, as in</para>
                    <para> <legacyBold>BOOL</legacyBold> <legacyBold>CALLBACK</legacyBold> <legacyBold>EXPORT</legacyBold> AFunction( <legacyBold>HDC</legacyBold>, <languageKeyword>int</languageKeyword> <legacyBold>);</legacyBold>
                    </para>
                    <para>to cause the compiler to emit the proper export record for export by name without aliasing. This works for most needs. For some special cases, such as exporting a function by ordinal or aliasing the export, you still need to use an <legacyBold>EXPORTS</legacyBold> statement in a module-definition file.</para>
                    <para>Callback registration interfaces are now type-safe (you must pass in a function pointer that points to the right kind of function for the specific callback).</para>
                    <para>Also note that all callback functions must trap Microsoft Foundation exceptions before returning to Windows, since exceptions cannot be thrown across callback boundaries. For more information about exceptions, see the article <legacyLink xlink:href="0926627d-2ba7-44a6-babe-d851a4a2517c">Exceptions</legacyLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setarcdirection">
        <!--52684208-cf55-490a-8ded-c2be64b19b5a-->
        <title>CDC::SetArcDirection</title>
        <content>
            <para>Sets the drawing direction to be used for arc and rectangle functions.</para>
            <legacySyntax>int SetArcDirection( int nArcDirection );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>nArcDirection</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new arc direction. This parameter can be either of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>AD_COUNTERCLOCKWISE</legacyBold>   Figures drawn counterclockwise.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>AD_CLOCKWISE</legacyBold>   Figures drawn clockwise.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Specifies the old arc direction, if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default direction is counterclockwise. The <unmanagedCodeEntityReference>SetArcDirection</unmanagedCodeEntityReference> function specifies the direction in which the following functions draw:</para>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>Arc</para>
                                </TD>
                                <TD>
                                    <para>Pie</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>ArcTo</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <legacyBold>Rectangle</legacyBold>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>Chord</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>RoundRect</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <legacyBold>Ellipse</legacyBold>
                                    </para>
                                </TD>
                                <TD>
                                    <para> </para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setattribdc">
        <!--df7ed86b-285e-4850-ac89-6e31c8ba644c-->
        <title>CDC::SetAttribDC</title>
        <content>
            <para>Call this function to set the attribute device context, <unmanagedCodeEntityReference>m_hAttribDC</unmanagedCodeEntityReference>.</para>
            <legacySyntax>virtual void SetAttribDC( HDC hDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Windows device context.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function does not attach the device context to the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object. Only the output device context is attached to a <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setbkcolor">
        <!--a553f8ad-83f8-4bbc-ab89-438597421c47-->
        <title>CDC::SetBkColor</title>
        <content>
            <para>Sets the current background color to the specified color.</para>
            <legacySyntax>virtual COLORREF SetBkColor( COLORREF crColor );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>crColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new background color.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous background color as an RGB color value. If an error occurs, the return value is 0x80000000.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>If the background mode is <legacyBold>OPAQUE</legacyBold>, the system uses the background color to fill the gaps in styled lines, the gaps between hatched lines in brushes, and the background in character cells. The system also uses the background color when converting bitmaps between color and monochrome device contexts. </para>
                    <para>If the device cannot display the specified color, the system sets the background color to the nearest physical color.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setbkmode">
        <!--671fedb7-6648-4a69-a624-34a57be86112-->
        <title>CDC::SetBkMode</title>
        <content>
            <para>Sets the background mode.</para>
            <legacySyntax>int SetBkMode( int nBkMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>nBkMode</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the mode to be set. This parameter can be either of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>OPAQUE</legacyBold>   Background is filled with the current background color before the text, hatched brush, or pen is drawn. This is the default background mode.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TRANSPARENT</legacyBold>   Background is not changed before drawing.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous background mode.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The background mode defines whether the system removes existing background colors on the drawing surface before drawing text, hatched brushes, or any pen style that is not a solid line.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onctlcolor">CWnd::OnCtlColor</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setboundsrect">
        <!--3960fcb0-6fbc-4bfc-9473-68b4f24d35c5-->
        <title>CDC::SetBoundsRect</title>
        <content>
            <para>Controls the accumulation of bounding-rectangle information for the specified device context.</para>
            <legacySyntax>UINT SetBoundsRect(
    LPCRECT lpRectBounds,
    UINT flags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpRectBounds</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <unmanagedCodeEntityReference>RECT</unmanagedCodeEntityReference> structure or <unmanagedCodeEntityReference>CRect</unmanagedCodeEntityReference> object that is used to set the bounding rectangle. Rectangle dimensions are given in logical coordinates. This parameter can be <legacyBold>NULL</legacyBold>.</para>
                        </definition>
                        <definedTerm> <parameterReference>flags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies how the new rectangle will be combined with the accumulated rectangle. This parameter can be a combination of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>DCB_ACCUMULATE</legacyBold>   Add the rectangle specified by <parameterReference>lpRectBounds</parameterReference> to the bounding rectangle (using a rectangle-union operation).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DCB_DISABLE</legacyBold>   Turn off bounds accumulation.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DCB_ENABLE</legacyBold>   Turn on bounds accumulation. (The default setting for bounds accumulation is disabled.)</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The current state of the bounding rectangle, if the function is successful. Like <parameterReference>flags</parameterReference>, the return value can be a combination of <legacyBold>DCB_</legacyBold> values:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <legacyBold>DCB_ACCUMULATE</legacyBold>   The bounding rectangle is not empty. This value will always be set.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>DCB_DISABLE</legacyBold>   Bounds accumulation is off.</para>
                        </listItem>
                        <listItem>
                            <para> <legacyBold>DCB_ENABLE</legacyBold>   Bounds accumulation is on.</para>
                        </listItem>
                    </list>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Windows can maintain a bounding rectangle for all drawing operations. This rectangle can be queried and reset by the application. The drawing bounds are useful for invalidating bitmap caches.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setbrushorg">
        <!--9568c03a-dcd9-492e-b2a8-3beef5a7dcbe-->
        <title>CDC::SetBrushOrg</title>
        <content>
            <para>Specifies the origin that GDI will assign to the next brush that the application selects into the device context.</para>
            <legacySyntax>CPoint SetBrushOrg(
    int x,
    int y );

CPoint SetBrushOrg(
    POINT point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate (in device units) of the new origin. This value must be in the range 0–7.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate (in device units) of the new origin. This value must be in the range 0–7.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x- and y-coordinates of the new origin. Each value must be in the range 0–7. You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous origin of the brush in device units.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The default coordinates for the brush origin are (0, 0). To alter the origin of a brush, call the <unmanagedCodeEntityReference>UnrealizeObject</unmanagedCodeEntityReference> function for the <unmanagedCodeEntityReference>CBrush</unmanagedCodeEntityReference> object, call <unmanagedCodeEntityReference>SetBrushOrg</unmanagedCodeEntityReference>, and then call the <unmanagedCodeEntityReference>SelectObject</unmanagedCodeEntityReference> member function to select the brush into the device context. </para>
                    <para>Do not use <unmanagedCodeEntityReference>SetBrushOrg</unmanagedCodeEntityReference> with stock <unmanagedCodeEntityReference>CBrush</unmanagedCodeEntityReference> objects.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setcoloradjustment">
        <!--3258d2bc-193e-4bbc-a36e-72b6f27ef708-->
        <title>CDC::SetColorAdjustment</title>
        <content>
            <para>Sets the color adjustment values for the device context using the specified values.</para>
            <legacySyntax>BOOL SetColorAdjustment( const COLORADJUSTMENT* lpColorAdjust );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>lpColorAdjust</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to a <legacyLink xlink:href="67fc4e63-0e0e-4fcb-8c45-aa5ebfefa013">COLORADJUSTMENT</legacyLink> data structure containing the color adjustment values.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The color adjustment values are used to adjust the input color of the source bitmap for calls to the <unmanagedCodeEntityReference>CDC::StretchBlt</unmanagedCodeEntityReference> member function when <legacyBold>HALFTONE</legacyBold> mode is set.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setdcbrushcolor">
        <!--677688cd-c6dc-4e70-9056-2f235a561d9f-->
        <title>CDC::SetDCBrushColor</title>
        <content>
            <para>Sets the current device context (DC) brush color to the specified color value.</para>
            <legacySyntax>COLORREF SetDCBrushColor( COLORREF crColor );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>crColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new brush color.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the function succeeds, the return value specifies the previous DC brush color as a <languageKeyword>COLORREF</languageKeyword> value.</para>
                    <para>If the function fails, the return value is <languageKeyword>CLR_INVALID</languageKeyword>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method emulates the functionality of the function                         <externalLink> <linkText>SetDCBrushColor</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162969</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setdcpencolor">
        <!--dfe9ea6b-ce7c-4b68-9260-f01f176b256d-->
        <title>CDC::SetDCPenColor</title>
        <content>
            <para>Sets the current device context (DC) pen color to the specified color value.</para>
            <legacySyntax>COLORREF SetDCPenColor( COLORREF crColor );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>crColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new pen color.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function utilizes the Win32 function                         <externalLink> <linkText>SetDCPenColor</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162970</linkUri>
                        </externalLink>, as described in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setgraphicsmode">
        <!--75358949-ebc1-4aa0-b121-4d1681bc5ad6-->
        <title>CDC::SetGraphicsMode</title>
        <content>
            <para>Sets the graphics mode for the specified device context.</para>
            <legacySyntax>int SetGraphicsMode( int iMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>iMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the graphics mode. For a list of the values that this parameter can take, see                                 <externalLink> <linkText>SetGraphicsMode</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162977</linkUri>
                                </externalLink>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns the old graphics mode on success.</para>
                    <para>Returns 0 on failure. To get extended error information, call                         <externalLink> <linkText>GetLastError</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms679360</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method wraps the Windows GDI function                         <externalLink> <linkText>SetGraphicsMode</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162977</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setlayout">
        <!--6f562bb6-cf73-465b-a1c6-eb3d560c2980-->
        <title>CDC::SetLayout</title>
        <content>
            <para>Call this member function to change the layout of the text and graphics for a device context to right to left, the standard layout for cultures such as Arabic and Hebrew.</para>
            <legacySyntax>DWORD SetLayout( DWORD dwLayout );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwLayout</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Device context layout and bitmap control flags. It can be a combination of the following values.</para>
                            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                                <thead>
                                    <tr>
                                        <TD>
                                            <para>Value</para>
                                        </TD>
                                        <TD>
                                            <para>Meaning</para>
                                        </TD>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr>
                                        <TD>
                                            <para>LAYOUT_BITMAPORIENTATIONPRESERVED</para>
                                        </TD>
                                        <TD>
                                            <para>Disables any reflection for calls to <legacyLink xlink:href="#cdc__bitblt">CDC::BitBlt</legacyLink> and <legacyLink xlink:href="#cdc__stretchblt">CDC::StretchBlt</legacyLink>.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>LAYOUT_RTL</para>
                                        </TD>
                                        <TD>
                                            <para>Sets the default horizontal layout to be right to left.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para>LAYOUT_LTR</para>
                                        </TD>
                                        <TD>
                                            <para>Sets the default layout to be left to right.</para>
                                        </TD>
                                    </tr>
                                </tbody>
                            </table>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If successful, the previous layout of the device context.</para>
                    <para>If unsuccessful, <legacyBold>GDI_ERROR</legacyBold>. To get extended error information, call                         <externalLink> <linkText>GetLastError</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms679360</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Normally, you would not call <legacyBold>SetLayout</legacyBold> for a window. Rather, you control the right-to-left layout in a window by setting the <legacyLink xlink:href="d18e6c69-0a01-49ed-b58a-55b3802b47c1">extended window styles</legacyLink> such as <legacyBold>WS_EX_RTLREADING</legacyBold>. A device context, such as a printer or a metafile, does not inherit this layout. The only way to set the device context for a right-to-left layout is by calling <legacyBold>SetLayout</legacyBold>.</para>
                    <para>If you call <legacyBold>SetLayout(</legacyBold> <legacyBold>LAYOUT_RTL</legacyBold> ), <legacyBold>SetLayout</legacyBold> automatically changes the mapping mode to <unmanagedCodeEntityReference>MM_ISOTROPIC</unmanagedCodeEntityReference>. As a result, a subsequent call to <legacyLink xlink:href="#cdc__getmapmode">GetMapMode</legacyLink> will return <legacyBold>MM_ISOTROPIC </legacyBold>instead of <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference>.</para>
                    <para>In some cases, such as with many bitmaps, you may want to preserve the left-to-right layout. In these cases, render the image by calling <unmanagedCodeEntityReference>BitBlt</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference>, then set the bitmap control flag for <parameterReference>dwLayout</parameterReference> to <legacyBold>LAYOUT_BITMAPORIENTATIONPRESERVED</legacyBold>.</para>
                    <para>Once you change the layout with the <legacyBold>LAYOUT_RTL</legacyBold> flag, the flags normally specifying right or left are reversed. To avoid confusion, you may want to define alternate names for the standard flags. For a list of suggested alternate flag names, see                         <externalLink> <linkText>SetLayout</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162979</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setmapmode">
        <!--3fbe6ca9-bc3f-4df3-b2cc-66c37e815ed5-->
        <title>CDC::SetMapMode</title>
        <content>
            <para>Sets the mapping mode.</para>
            <legacySyntax>virtual int SetMapMode( int nMapMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nMapMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new mapping mode. It can be any one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>MM_ANISOTROPIC</unmanagedCodeEntityReference>   Logical units are converted to arbitrary units with arbitrarily scaled axes. Setting the mapping mode to <unmanagedCodeEntityReference>MM_ANISOTROPIC</unmanagedCodeEntityReference> does not change the current window or viewport settings. To change the units, orientation, and scaling, call the <legacyLink xlink:href="#cdc__setwindowext">SetWindowExt</legacyLink> and <legacyLink xlink:href="#cdc__setviewportext">SetViewportExt</legacyLink> member functions.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>MM_HIENGLISH</unmanagedCodeEntityReference>   Each logical unit is converted to 0.001 inch. Positive x is to the right; positive y is up.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>MM_HIMETRIC</unmanagedCodeEntityReference>   Each logical unit is converted to 0.01 millimeter. Positive x is to the right; positive y is up.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>MM_ISOTROPIC</unmanagedCodeEntityReference>   Logical units are converted to arbitrary units with equally scaled axes; that is, 1 unit along the x-axis is equal to 1 unit along the y-axis. Use the <unmanagedCodeEntityReference>SetWindowExt</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>SetViewportExt</unmanagedCodeEntityReference> member functions to specify the desired units and the orientation of the axes. GDI makes adjustments as necessary to ensure that the x and y units remain the same size.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>MM_LOENGLISH</unmanagedCodeEntityReference>   Each logical unit is converted to 0.01 inch. Positive x is to the right; positive y is up.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>MM_LOMETRIC</unmanagedCodeEntityReference>   Each logical unit is converted to 0.1 millimeter. Positive x is to the right; positive y is up.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference>   Each logical unit is converted to 1 device pixel. Positive x is to the right; positive y is down.</para>
                                </listItem>
                                <listItem>
                                    <para> <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference>   Each logical unit is converted to 1/20 of a point. (Because a point is 1/72 inch, a twip is 1/1440 inch.) Positive x is to the right; positive y is up.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous mapping mode.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The mapping mode defines the unit of measure used to convert logical units to device units; it also defines the orientation of the device's x- and y-axes. GDI uses the mapping mode to convert logical coordinates into the appropriate device coordinates. The <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference> mode allows applications to work in device pixels, where 1 unit is equal to 1 pixel. The physical size of a pixel varies from device to device. </para>
                    <para>The <unmanagedCodeEntityReference>MM_HIENGLISH</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>MM_HIMETRIC</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>MM_LOENGLISH</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>MM_LOMETRIC</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference> modes are useful for applications that must draw in physically meaningful units (such as inches or millimeters). The <unmanagedCodeEntityReference>MM_ISOTROPIC</unmanagedCodeEntityReference> mode ensures a 1:1 aspect ratio, which is useful when it is important to preserve the exact shape of an image. The <unmanagedCodeEntityReference>MM_ANISOTROPIC</unmanagedCodeEntityReference> mode allows the x- and y-coordinates to be adjusted independently.</para>
                    <alert class="note">
                        <para>If you call <legacyLink xlink:href="#cdc__setlayout">SetLayout</legacyLink> to change the DC (device context) to right-to-left layout, <legacyBold>SetLayout</legacyBold> automatically changes the mapping mode to <unmanagedCodeEntityReference>MM_ISOTROPIC</unmanagedCodeEntityReference>.</para>
                    </alert>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755#cview__onpreparedc">CView::OnPrepareDC</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setmapperflags">
        <!--56f71b79-06ce-4aca-b399-28b9c6f1252b-->
        <title>CDC::SetMapperFlags</title>
        <content>
            <para>Changes the method used by the font mapper when it converts a logical font to a physical font.</para>
            <legacySyntax>DWORD SetMapperFlags( DWORD dwFlag );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>dwFlag</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies whether the font mapper attempts to match a font's aspect height and width to the device. When this value is <legacyBold>ASPECT_FILTERING</legacyBold>, the mapper selects only fonts whose x-aspect and y-aspect exactly match those of the specified device.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous value of the font-mapper flag.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>An application can use <unmanagedCodeEntityReference>SetMapperFlags</unmanagedCodeEntityReference> to cause the font mapper to attempt to choose only a physical font that exactly matches the aspect ratio of the specified device. </para>
                    <para>An application that uses only raster fonts can use the <unmanagedCodeEntityReference>SetMapperFlags</unmanagedCodeEntityReference> function to ensure that the font selected by the font mapper is attractive and readable on the specified device. Applications that use scalable (TrueType) fonts typically do not use <unmanagedCodeEntityReference>SetMapperFlags</unmanagedCodeEntityReference>. </para>
                    <para>If no physical font has an aspect ratio that matches the specification in the logical font, GDI chooses a new aspect ratio and selects a font that matches this new aspect ratio.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setmiterlimit">
        <!--3626c99f-6fb7-446a-b91a-9b01542bf5cc-->
        <title>CDC::SetMiterLimit</title>
        <content>
            <para>Sets the limit for the length of miter joins for the device context.</para>
            <legacySyntax>BOOL SetMiterLimit( float fMiterLimit );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>fMiterLimit</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new miter limit for the device context.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The miter length is defined as the distance from the intersection of the line walls on the inside of the join to the intersection of the line walls on the outside of the join. The miter limit is the maximum allowed ratio of the miter length to the line width. The default miter limit is 10.0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setoutputdc">
        <!--b7600ced-49fb-4ac0-bc4b-9da02f0ee558-->
        <title>CDC::SetOutputDC</title>
        <content>
            <para>Call this member function to set the output device context, <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference>.</para>
            <legacySyntax>virtual void SetOutputDC( HDC hDC );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>hDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A Windows device context.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This member function can only be called when a device context has not been attached to the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object. This member function sets <unmanagedCodeEntityReference>m_hDC</unmanagedCodeEntityReference> but does not attach the device context to the <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setpixel">
        <!--ee50da62-f0c5-46fc-bfdc-6411db207a11-->
        <title>CDC::SetPixel</title>
        <content>
            <para>Sets the pixel at the point specified to the closest approximation of the color specified by <parameterReference>crColor</parameterReference>.</para>
            <legacySyntax>COLORREF SetPixel(
    int x,
    int y,
    COLORREF crColor );

COLORREF SetPixel(
    POINT point,
    COLORREF crColor );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the point to be set.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the point to be set.</para>
                        </definition>
                        <definedTerm> <parameterReference>crColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <legacyBold>COLORREF</legacyBold> RGB value that specifies the color used to paint the point. See                                 <externalLink> <linkText>COLORREF</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183449</linkUri>
                                </externalLink> in the <token>winSDK</token> for a description of this value.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x- and y-coordinates of the point to be set. You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An RGB value for the color that the point is actually painted. This value can be different from that specified by <parameterReference>crColor</parameterReference> if an approximation of that color is used. If the function fails (if the point is outside the clipping region), the return value is –1.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The point must be in the clipping region. If the point is not in the clipping region, the function does nothing. </para>
                    <para>Not all devices support the <unmanagedCodeEntityReference>SetPixel</unmanagedCodeEntityReference> function. To determine whether a device supports <unmanagedCodeEntityReference>SetPixel</unmanagedCodeEntityReference>, call the <unmanagedCodeEntityReference>GetDeviceCaps</unmanagedCodeEntityReference> member function with the <legacyBold>RASTERCAPS</legacyBold> index and check the return value for the <legacyBold>RC_BITBLT</legacyBold> flag.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setpixelv">
        <!--9dbd4d4f-151d-463f-b57d-acd69fd37c79-->
        <title>CDC::SetPixelV</title>
        <content>
            <para>Sets the pixel at the specified coordinates to the closest approximation of the specified color.</para>
            <legacySyntax>BOOL SetPixelV(
    int x,
    int y,
    COLORREF crColor );

BOOL SetPixelV(
    POINT point,
    COLORREF crColor );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate, in logical units, of the point to be set.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate, in logical units, of the point to be set.</para>
                        </definition>
                        <definedTerm> <parameterReference>crColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the color to be used to paint the point.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x- and y-coordinates of the point to be set. You can pass either a <legacyLink xlink:href="965736d8-4e53-41b6-9b8b-6961992dd21f">POINT</legacyLink> data structure or a <legacyLink xlink:href="a6d4db93-35cc-444d-9221-c3e160f6edaa">CPoint</legacyLink> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The point must be in both the clipping region and the visible part of the device surface. Not all devices support the member function. For more information, see the <legacyBold>RC_BITBLT</legacyBold> capability in the <unmanagedCodeEntityReference>CDC::GetDeviceCaps</unmanagedCodeEntityReference> member function. <unmanagedCodeEntityReference>SetPixelV</unmanagedCodeEntityReference> is faster than <unmanagedCodeEntityReference>SetPixel</unmanagedCodeEntityReference> because it does not need to return the color value of the point actually painted.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setpolyfillmode">
        <!--9519f767-8e99-400c-83ee-1ab28518c3a0-->
        <title>CDC::SetPolyFillMode</title>
        <content>
            <para>Sets the polygon-filling mode.</para>
            <legacySyntax>int SetPolyFillMode( int nPolyFillMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nPolyFillMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new filling mode. This value may be either <legacyBold>ALTERNATE</legacyBold> or <legacyBold>WINDING</legacyBold>. The default mode set in Windows is <legacyBold>ALTERNATE</legacyBold>.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous filling mode, if successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>When the polygon-filling mode is <legacyBold>ALTERNATE</legacyBold>, the system fills the area between odd-numbered and even-numbered polygon sides on each scan line. That is, the system fills the area between the first and second side, between the third and fourth side, and so on. This mode is the default. </para>
                    <para>When the polygon-filling mode is <legacyBold>WINDING</legacyBold>, the system uses the direction in which a figure was drawn to determine whether to fill an area. Each line segment in a polygon is drawn in either a clockwise or a counterclockwise direction. Whenever an imaginary line drawn from an enclosed area to the outside of a figure passes through a clockwise line segment, a count is incremented. When the line passes through a counterclockwise line segment, the count is decremented. The area is filled if the count is nonzero when the line reaches the outside of the figure.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setrop2">
        <!--dfd7a6c2-6c08-4fda-9466-fc783fcaaa00-->
        <title>CDC::SetROP2</title>
        <content>
            <para>Sets the current drawing mode.</para>
            <legacySyntax>int SetROP2( int nDrawMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nDrawMode</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the new drawing mode. It can be any of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>R2_BLACK</legacyBold>   Pixel is always black.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_WHITE</legacyBold>   Pixel is always white.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_NOP</legacyBold>   Pixel remains unchanged.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_NOT</legacyBold>   Pixel is the inverse of the screen color.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_COPYPEN</legacyBold>   Pixel is the pen color.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_NOTCOPYPEN</legacyBold>   Pixel is the inverse of the pen color.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_MERGEPENNOT</legacyBold>   Pixel is a combination of the pen color and the inverse of the screen color (final pixel = (NOT screen pixel) OR pen).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_MASKPENNOT</legacyBold>   Pixel is a combination of the colors common to both the pen and the inverse of the screen (final pixel = (NOT screen pixel) AND pen).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_MERGENOTPEN</legacyBold>   Pixel is a combination of the screen color and the inverse of the pen color (final pixel = (NOT pen) OR screen pixel).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_MASKNOTPEN</legacyBold>   Pixel is a combination of the colors common to both the screen and the inverse of the pen (final pixel = (NOT pen) AND screen pixel).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_MERGEPEN</legacyBold>   Pixel is a combination of the pen color and the screen color (final pixel = pen OR screen pixel).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_NOTMERGEPEN</legacyBold>   Pixel is the inverse of the <legacyBold>R2_MERGEPEN</legacyBold> color (final pixel = NOT(pen OR screen pixel)).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_MASKPEN</legacyBold>   Pixel is a combination of the colors common to both the pen and the screen (final pixel = pen AND screen pixel).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_NOTMASKPEN</legacyBold>   Pixel is the inverse of the <legacyBold>R2_MASKPEN</legacyBold> color (final pixel = NOT(pen AND screen pixel)).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_XORPEN</legacyBold>   Pixel is a combination of the colors that are in the pen or in the screen, but not in both (final pixel = pen XOR screen pixel).</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>R2_NOTXORPEN</legacyBold>   Pixel is the inverse of the <legacyBold>R2_XORPEN</legacyBold> color (final pixel = NOT(pen XOR screen pixel)).</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous drawing mode. </para>
                    <para>It can be any of the values given in the <token>winSDK</token>. </para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The drawing mode specifies how the colors of the pen and the interior of filled objects are combined with the color already on the display surface. </para>
                    <para>The drawing mode is for raster devices only; it does not apply to vector devices. Drawing modes are binary raster-operation codes representing all possible Boolean combinations of two variables, using the binary operators AND, OR, and XOR (exclusive OR), and the unary operation NOT.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setstretchbltmode">
        <!--0fc3542c-cb4a-435d-a32b-04300e88b9c6-->
        <title>CDC::SetStretchBltMode</title>
        <content>
            <para>Sets the bitmap-stretching mode for the <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference> member function.</para>
            <legacySyntax>int SetStretchBltMode( int nStretchMode );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>nStretchMode</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the stretching mode. It can be any of the following values:</para>
                            <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                                <thead>
                                    <tr>
                                        <TD>
                                            <para>Value</para>
                                        </TD>
                                        <TD>
                                            <para>Description</para>
                                        </TD>
                                    </tr>
                                </thead>
                                <tbody>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>BLACKONWHITE</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>Performs a Boolean AND operation using the color values for the eliminated and existing pixels. If the bitmap is a monochrome bitmap, this mode preserves black pixels at the expense of white pixels.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>COLORONCOLOR</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>Deletes the pixels. This mode deletes all eliminated lines of pixels without trying to preserve their information.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>HALFTONE</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>Maps pixels from the source rectangle into blocks of pixels in the destination rectangle. The average color over the destination block of pixels approximates the color of the source pixels.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> </para>
                                        </TD>
                                        <TD>
                                            <para>After setting the <legacyBold>HALFTONE</legacyBold> stretching mode, an application must call the Win32 function                                                 <externalLink> <linkText>SetBrushOrgEx</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162967</linkUri>
                                                </externalLink> to set the brush origin. If it fails to do so, brush misalignment occurs.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>STRETCH_ANDSCANS</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>Windows 95/98</legacyBold>: Same as <legacyBold>BLACKONWHITE</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>STRETCH_DELETESCANS</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>Windows 95/98</legacyBold>: Same as <legacyBold>COLORONCOLOR</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>STRETCH_HALFTONE</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>Windows 95/98</legacyBold>: Same as <legacyBold>HALFTONE</legacyBold>.</para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>STRETCH_ORSCANS</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para> <legacyBold>Windows 95/98</legacyBold>: Same as <legacyBold>WHITEONBLACK</legacyBold>
                                            </para>
                                        </TD>
                                    </tr>
                                    <tr>
                                        <TD>
                                            <para> <legacyBold>WHITEONBLACK</legacyBold>
                                            </para>
                                        </TD>
                                        <TD>
                                            <para>Performs a Boolean OR operation using the color values for the eliminated and existing pixels. If the bitmap is a monochrome bitmap, this mode preserves white pixels at the expense of black pixels.</para>
                                        </TD>
                                    </tr>
                                </tbody>
                            </table>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous stretching mode. It can be <legacyBold>STRETCH_ANDSCANS</legacyBold>, <legacyBold>STRETCH_DELETESCANS</legacyBold>, or <legacyBold>STRETCH_ORSCANS</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The bitmap-stretching mode defines how information is removed from bitmaps that are compressed by using the function.</para>
                    <para>The <legacyBold>BLACKONWHITE</legacyBold> ( <legacyBold>STRETCH_ANDSCANS</legacyBold>) and <legacyBold>WHITEONBLACK</legacyBold> ( <legacyBold>STRETCH_ORSCANS</legacyBold>) modes are typically used to preserve foreground pixels in monochrome bitmaps. The <legacyBold>COLORONCOLOR</legacyBold> ( <legacyBold>STRETCH_DELETESCANS</legacyBold>) mode is typically used to preserve color in color bitmaps. </para>
                    <para>The <legacyBold> HALFTONE</legacyBold> mode requires more processing of the source image than the other three modes; it is slower than the others, but produces higher quality images. Also note that <legacyBold>SetBrushOrgEx</legacyBold> must be called after setting the <legacyBold>HALFTONE</legacyBold> mode to avoid brush misalignment. </para>
                    <para>Additional stretching modes might also be available depending on the capabilities of the device driver.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__settextalign">
        <!--b5f47e43-0f47-4dde-a959-892e9cc733d4-->
        <title>CDC::SetTextAlign</title>
        <content>
            <para>Sets the text-alignment flags.</para>
            <legacySyntax>UINT SetTextAlign( UINT nFlags );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nFlags</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies text-alignment flags. The flags specify the relationship between a point and a rectangle that bounds the text. The point can be either the current position or coordinates specified by a text-output function. The rectangle that bounds the text is defined by the adjacent character cells in the text string. The <parameterReference>nFlags</parameterReference> parameter can be one or more flags from the following three categories. Choose only one flag from each category. The first category affects text alignment in the x-direction:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>TA_CENTER</legacyBold>   Aligns the point with the horizontal center of the bounding rectangle.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TA_LEFT</legacyBold>   Aligns the point with the left side of the bounding rectangle. This is the default setting.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TA_RIGHT</legacyBold>   Aligns the point with the right side of the bounding rectangle.</para>
                                </listItem>
                            </list>
                            <para>The second category affects text alignment in the y-direction:   </para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>TA_BASELINE</legacyBold>   Aligns the point with the base line of the chosen font.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TA_BOTTOM</legacyBold>   Aligns the point with the bottom of the bounding rectangle.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TA_TOP</legacyBold>   Aligns the point with the top of the bounding rectangle. This is the default setting.</para>
                                </listItem>
                            </list>
                            <para>The third category determines whether the current position is updated when text is written:   </para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>TA_NOUPDATECP</legacyBold>   Does not update the current position after each call to a text-output function. This is the default setting.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>TA_UPDATECP</legacyBold>   Updates the current x-position after each call to a text-output function. The new position is at the right side of the bounding rectangle for the text. When this flag is set, the coordinates specified in calls to the <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference> member function are ignored.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous text-alignment setting, if successful. The low-order byte contains the horizontal setting and the high-order byte contains the vertical setting; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>ExtTextOut</unmanagedCodeEntityReference> member functions use these flags when positioning a string of text on a display or device. The flags specify the relationship between a specific point and a rectangle that bounds the text. The coordinates of this point are passed as parameters to the <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference> member function. The rectangle that bounds the text is formed by the adjacent character cells in the text string.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__settextcharacterextra">
        <!--0bc765bf-f160-4001-9de6-a301193ace8d-->
        <title>CDC::SetTextCharacterExtra</title>
        <content>
            <para>Sets the amount of intercharacter spacing.</para>
            <legacySyntax>int SetTextCharacterExtra( int nCharExtra );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nCharExtra</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the amount of extra space (in logical units) to be added to each character. If the current mapping mode is not <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference>, <parameterReference>nCharExtra</parameterReference> is transformed and rounded to the nearest pixel.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The amount of the previous intercharacter spacing.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>GDI adds this spacing to each character, including break characters, when it writes a line of text to the device context. The default value for the amount of intercharacter spacing is 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__settextcolor">
        <!--150dcfe8-4320-4950-89db-f594dbb68034-->
        <title>CDC::SetTextColor</title>
        <content>
            <para>Sets the text color to the specified color.</para>
            <legacySyntax>virtual COLORREF SetTextColor( COLORREF crColor );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>crColor</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the color of the text as an RGB color value.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>An RGB value for the previous text color.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The system will use this text color when writing text to this device context and also when converting bitmaps between color and monochrome device contexts. </para>
                    <para>If the device cannot represent the specified color, the system sets the text color to the nearest physical color. The background color for a character is specified by the <unmanagedCodeEntityReference>SetBkColor</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>SetBkMode</unmanagedCodeEntityReference> member functions.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="49a832ee-bc34-4126-88b3-bc1d9974f6c4#cwnd__onctlcolor">CWnd::OnCtlColor</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__settextjustification">
        <!--b4b1043d-1578-4d14-8e94-f4ebdfb4b39e-->
        <title>CDC::SetTextJustification</title>
        <content>
            <para>Adds space to the break characters in a string.</para>
            <legacySyntax>int SetTextJustification(
    int nBreakExtra,
    int nBreakCount );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>nBreakExtra</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the total extra space to be added to the line of text (in logical units). If the current mapping mode is not <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference>, the value given by this parameter is converted to the current mapping mode and rounded to the nearest device unit.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>nBreakCount</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of break characters in the line.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>One if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>An application can use the <unmanagedCodeEntityReference>GetTextMetrics</unmanagedCodeEntityReference> member functions to retrieve a font's break character. </para>
                    <para>After the <unmanagedCodeEntityReference>SetTextJustification</unmanagedCodeEntityReference> member function is called, a call to a text-output function (such as <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference>) distributes the specified extra space evenly among the specified number of break characters. The break character is usually the space character (ASCII 32), but may be defined by a font as some other character.</para>
                    <para>The member function <unmanagedCodeEntityReference>GetTextExtent</unmanagedCodeEntityReference> is typically used with <unmanagedCodeEntityReference>SetTextJustification</unmanagedCodeEntityReference>. <unmanagedCodeEntityReference>GetTextExtent</unmanagedCodeEntityReference> computes the width of a given line before alignment. An application can determine how much space to specify in the <parameterReference>nBreakExtra</parameterReference> parameter by subtracting the value returned by <unmanagedCodeEntityReference>GetTextExtent</unmanagedCodeEntityReference> from the width of the string after alignment.</para>
                    <para>The <unmanagedCodeEntityReference>SetTextJustification</unmanagedCodeEntityReference> function can be used to align a line that contains multiple runs in different fonts. In this case, the line must be created piecemeal by aligning and writing each run separately. </para>
                    <para>Because rounding errors can occur during alignment, the system keeps a running error term that defines the current error. When aligning a line that contains multiple runs, <unmanagedCodeEntityReference>GetTextExtent</unmanagedCodeEntityReference> automatically uses this error term when it computes the extent of the next run. This allows the text-output function to blend the error into the new run. </para>
                    <para>After each line has been aligned, this error term must be cleared to prevent it from being incorporated into the next line. The term can be cleared by calling <unmanagedCodeEntityReference>SetTextJustification</unmanagedCodeEntityReference> with <parameterReference>nBreakExtra</parameterReference> set to 0.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setviewportext">
        <!--eba2b828-7620-4c9d-80e6-707d21d8f6ad-->
        <title>CDC::SetViewportExt</title>
        <content>
            <para>Sets the x- and y-extents of the viewport of the device context.</para>
            <legacySyntax>virtual CSize SetViewportExt(
    int cx,
    int cy );

CSize SetViewportExt(
    SIZE size );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cx</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-extent of the viewport (in device units).</para>
                        </definition>
                        <definedTerm> <parameterReference>cy</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-extent of the viewport (in device units).</para>
                        </definition>
                        <definedTerm> <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x- and y-extents of the viewport (in device units).</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous extents of the viewport as a <legacyLink xlink:href="fb2cf85a-0bc1-46f8-892b-309c108b52ae">CSize</legacyLink> object. When an error occurs, the x- and y-coordinates of the returned <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object are both set to 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The viewport, along with the device-context window, defines how GDI maps points in the logical coordinate system to points in the coordinate system of the actual device. In other words, they define how GDI converts logical coordinates into device coordinates. </para>
                    <para>When the following mapping modes are set, calls to <unmanagedCodeEntityReference>SetWindowExt</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>SetViewportExt</unmanagedCodeEntityReference> are ignored:</para>
                    <table xmlns:caps="http://schemas.microsoft.com/build/caps/2013/11">
                        <thead>
                            <tr>
                                <TD>
                                    <para>MM_HIENGLISH</para>
                                </TD>
                                <TD>
                                    <para>MM_LOMETRIC</para>
                                </TD>
                            </tr>
                        </thead>
                        <tbody>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>MM_HIMETRIC</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                            </tr>
                            <tr>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>MM_LOENGLISH</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                                <TD>
                                    <para> <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference>
                                    </para>
                                </TD>
                            </tr>
                        </tbody>
                    </table>
                    <para>When <unmanagedCodeEntityReference>MM_ISOTROPIC</unmanagedCodeEntityReference> mode is set, an application must call the <unmanagedCodeEntityReference>SetWindowExt</unmanagedCodeEntityReference> member function before it calls <unmanagedCodeEntityReference>SetViewportExt</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755#cview__onpreparedc">CView::OnPrepareDC</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setviewportorg">
        <!--92a53b70-f11b-4b37-9c5b-71e03b3ddefa-->
        <title>CDC::SetViewportOrg</title>
        <content>
            <para>Sets the viewport origin of the device context.</para>
            <legacySyntax>virtual CPoint SetViewportOrg(
    int x,
    int y );

CPoint SetViewportOrg(
    POINT point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate (in device units) of the origin of the viewport. The value must be within the range of the device coordinate system.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate (in device units) of the origin of the viewport. The value must be within the range of the device coordinate system.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the origin of the viewport. The values must be within the range of the device coordinate system. You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous origin of the viewport (in device coordinates) as a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The viewport, along with the device-context window, defines how GDI maps points in the logical coordinate system to points in the coordinate system of the actual device. In other words, they define how GDI converts logical coordinates into device coordinates. </para>
                    <para>The viewport origin marks the point in the device coordinate system to which GDI maps the window origin, a point in the logical coordinate system specified by the <legacyBold>SetWindowOrg</legacyBold> member function. GDI maps all other points by following the same process required to map the window origin to the viewport origin. For example, all points in a circle around the point at the window origin will be in a circle around the point at the viewport origin. Similarly, all points in a line that passes through the window origin will be in a line that passes through the viewport origin.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755#cview__onpreparedc">CView::OnPrepareDC</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setwindowext">
        <!--1fc4f139-14b2-4deb-b3b6-5d4048a90707-->
        <title>CDC::SetWindowExt</title>
        <content>
            <para>Sets the x- and y-extents of the window associated with the device context.</para>
            <legacySyntax>virtual CSize SetWindowExt(
    int cx,
    int cy );

CSize SetWindowExt(
    SIZE size );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>cx</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-extent (in logical units) of the window.</para>
                        </definition>
                        <definedTerm> <parameterReference>cy</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-extent (in logical units) of the window.</para>
                        </definition>
                        <definedTerm> <parameterReference>size</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x- and y-extents (in logical units) of the window.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous extents of the window (in logical units) as a <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object. If an error occurs, the x- and y-coordinates of the returned <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object are both set to 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The window, along with the device-context viewport, defines how GDI maps points in the logical coordinate system to points in the device coordinate system. </para>
                    <para>When the following mapping modes are set, calls to <unmanagedCodeEntityReference>SetWindowExt</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>SetViewportExt</unmanagedCodeEntityReference> functions are ignored:  </para>
                    <list class="bullet">
                        <listItem>
                            <para> <unmanagedCodeEntityReference>MM_HIENGLISH</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>MM_HIMETRIC</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>MM_LOENGLISH</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>MM_LOMETRIC</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>MM_TEXT</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                        <listItem>
                            <para> <unmanagedCodeEntityReference>MM_TWIPS</unmanagedCodeEntityReference>
                            </para>
                        </listItem>
                    </list>
                    <para>When <unmanagedCodeEntityReference>MM_ISOTROPIC</unmanagedCodeEntityReference> mode is set, an application must call the <unmanagedCodeEntityReference>SetWindowExt</unmanagedCodeEntityReference> member function before calling <unmanagedCodeEntityReference>SetViewportExt</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755#cview__onpreparedc">CView::OnPrepareDC</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setwindoworg">
        <!--ef4e9dc9-03be-4cbe-abe9-27b1a0a5652d-->
        <title>CDC::SetWindowOrg</title>
        <content>
            <para>Sets the window origin of the device context.</para>
            <legacySyntax>CPoint SetWindowOrg(
    int x,
    int y );

CPoint SetWindowOrg(
    POINT point );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the new origin of the window.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the new origin of the window.</para>
                        </definition>
                        <definedTerm> <parameterReference>point</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical coordinates of the new origin of the window. You can pass either a <legacyBold>POINT</legacyBold> structure or a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object for this parameter.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The previous origin of the window as a <unmanagedCodeEntityReference>CPoint</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The window, along with the device-context viewport, defines how GDI maps points in the logical coordinate system to points in the device coordinate system. </para>
                    <para>The window origin marks the point in the logical coordinate system from which GDI maps the viewport origin, a point in the device coordinate system specified by the <legacyBold>SetWindowOrg</legacyBold> function. GDI maps all other points by following the same process required to map the window origin to the viewport origin. For example, all points in a circle around the point at the window origin will be in a circle around the point at the viewport origin. Similarly, all points in a line that passes through the window origin will be in a line that passes through the viewport origin.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__setworldtransform">
        <!--d46e16a0-8b4b-4b3e-be55-a544e8805ada-->
        <title>CDC::SetWorldTransform</title>
        <content>
            <para>Sets a two-dimensional linear transformation between world space and page space for the specified device context. This transformation can be used to scale, rotate, shear, or translate graphics output.</para>
            <legacySyntax>BOOL SetWorldTransform( const XFORM&amp; rXform );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>rXform</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Reference to an                                 <externalLink> <linkText>XFORM</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145228</linkUri>
                                </externalLink> structure that contains the transformation data.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Returns a nonzero value on success.</para>
                    <para>Returns 0 on failure.</para>
                    <para>To get extended error information, call                         <externalLink> <linkText>GetLastError</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/ms679360</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This method wraps the Windows GDI function                         <externalLink> <linkText>SetWorldTransform</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145104</linkUri>
                        </externalLink>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__startdoc">
        <!--46f816f0-589d-4f90-8a3a-d0ce90a8a3ab-->
        <title>CDC::StartDoc</title>
        <content>
            <para>Informs the device driver that a new print job is starting and that all subsequent <unmanagedCodeEntityReference>StartPage</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>EndPage</unmanagedCodeEntityReference> calls should be spooled under the same job until an <unmanagedCodeEntityReference>EndDoc</unmanagedCodeEntityReference> call occurs.</para>
            <legacySyntax>int StartDoc( LPDOCINFO lpDocInfo );

int StartDoc( LPCTSTR lpszDocName );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>lpDocInfo</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Points to a                                 <externalLink> <linkText>DOCINFO</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd183574</linkUri>
                                </externalLink> structure containing the name of the document file and the name of the output file.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>lpszDocName</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Pointer to a string containing the name of the document file.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>If the function succeeds, the return value is greater than zero. This value is the print job identifier for the document.</para>
                    <para>If the function fails, the return value is less than or equal to zero.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This ensures that documents longer than one page will not be interspersed with other jobs.</para>
                    <para>For Windows versions 3.1 and later, this function replaces the <legacyBold>STARTDOC</legacyBold> printer escape. Using this function ensures that documents containing more than one page are not interspersed with other print jobs.</para>
                    <para> <unmanagedCodeEntityReference>StartDoc</unmanagedCodeEntityReference> should not be used inside metafiles.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <para>This code fragment gets the default printer, opens a print job, and spools one page with "Hello, World!" on it. Because the text printed by this code isn't scaled to the printer's logical units, the output text may be in such small letters that the result is unreadable. The CDC scaling functions, such as <unmanagedCodeEntityReference>SetMapMode</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>SetViewportOrg</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>SetWindowExt</unmanagedCodeEntityReference>, can be used to fix the scaling.</para>
                    <codeReference>NVC_MFCDocView#41</codeReference>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__startpage">
        <!--0f9a5df5-e225-4955-b016-58633feb7d37-->
        <title>CDC::StartPage</title>
        <content>
            <para>Call this member function to prepare the printer driver to receive data.</para>
            <legacySyntax>int StartPage();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Greater than or equal to 0 if the function is successful, or a negative value if an error occurred.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>StartPage</unmanagedCodeEntityReference> supersedes the <legacyBold>NEWFRAME</legacyBold> and <legacyBold>BANDINFO</legacyBold> escapes. </para>
                    <para>For an overview of the sequence of printing calls, see the <legacyLink xlink:href="#cdc__startdoc">StartDoc</legacyLink> member function.</para>
                    <para>The system disables the <unmanagedCodeEntityReference>ResetDC</unmanagedCodeEntityReference> member function between calls to <unmanagedCodeEntityReference>StartPage</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>EndPage</unmanagedCodeEntityReference>.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cdc__startdoc">CDC::StartDoc</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__stretchblt">
        <!--3823b3f3-609b-4506-915b-0f28d5d77b8f-->
        <title>CDC::StretchBlt</title>
        <content>
            <para>Copies a bitmap from a source rectangle into a destination rectangle, stretching or compressing the bitmap if necessary to fit the dimensions of the destination rectangle.</para>
            <legacySyntax>BOOL StretchBlt(
    int x,
    int y,
    int nWidth,
    int nHeight,
    CDC* pSrcDC,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    DWORD dwRop );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate (in logical units) of the upper-left corner of the destination rectangle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate (in logical units) of the upper-left corner of the destination rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width (in logical units) of the destination rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height (in logical units) of the destination rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>pSrcDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the source device context.</para>
                        </definition>
                        <definedTerm> <parameterReference>xSrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate (in logical units) of the upper-left corner of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>ySrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate (in logical units) of the upper-left corner of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nSrcWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width (in logical units) of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nSrcHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height (in logical units) of the source rectangle.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>dwRop</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the raster operation to be performed. Raster operation codes define how GDI combines colors in output operations that involve a current brush, a possible source bitmap, and a destination bitmap. This parameter may be one of the following values:</para>
                            <list class="bullet">
                                <listItem>
                                    <para> <legacyBold>BLACKNESS</legacyBold>   Turns all output black.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>DSTINVERT</legacyBold>   Inverts the destination bitmap.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>MERGECOPY</legacyBold>   Combines the pattern and the source bitmap using the Boolean AND operator.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>MERGEPAINT</legacyBold>   Combines the inverted source bitmap with the destination bitmap using the Boolean OR operator.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>NOTSRCCOPY</legacyBold>   Copies the inverted source bitmap to the destination.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>NOTSRCERASE</legacyBold>   Inverts the result of combining the destination and source bitmaps using the Boolean OR operator.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PATCOPY</legacyBold>   Copies the pattern to the destination bitmap.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PATINVERT</legacyBold>   Combines the destination bitmap with the pattern using the Boolean XOR operator.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>PATPAINT</legacyBold>   Combines the inverted source bitmap with the pattern using the Boolean OR operator. Combines the result of this operation with the destination bitmap using the Boolean OR operator.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SRCAND</legacyBold>   Combines pixels of the destination and source bitmaps using the Boolean AND operator.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SRCCOPY</legacyBold>   Copies the source bitmap to the destination bitmap.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SRCERASE</legacyBold>   Inverts the destination bitmap and combines the result with the source bitmap using the Boolean AND operator.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SRCINVERT</legacyBold>   Combines pixels of the destination and source bitmaps using the Boolean XOR operator.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>SRCPAINT</legacyBold>   Combines pixels of the destination and source bitmaps using the Boolean OR operator.</para>
                                </listItem>
                                <listItem>
                                    <para> <legacyBold>WHITENESS</legacyBold>   Turns all output white.</para>
                                </listItem>
                            </list>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the bitmap is drawn; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The function uses the stretching mode of the destination device context (set by <unmanagedCodeEntityReference>SetStretchBltMode</unmanagedCodeEntityReference>) to determine how to stretch or compress the bitmap.</para>
                    <para>The <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference> function moves the bitmap from the source device given by <parameterReference>pSrcDC</parameterReference> to the destination device represented by the device-context object whose member function is being called. The <parameterReference>xSrc</parameterReference>, <parameterReference>ySrc</parameterReference>, <parameterReference>nSrcWidth</parameterReference>, and <parameterReference>nSrcHeight</parameterReference> parameters define the upper-left corner and dimensions of the source rectangle. The                         <legacyItalic>x</legacyItalic>,                         <legacyItalic>y</legacyItalic>, <parameterReference>nWidth</parameterReference>, and <parameterReference>nHeight</parameterReference> parameters give the upper-left corner and dimensions of the destination rectangle. The raster operation specified by                         <legacyItalic>dwRop</legacyItalic> defines how the source bitmap and the bits already on the destination device are combined.</para>
                    <para>The <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference> function creates a mirror image of a bitmap if the signs of the <parameterReference>nSrcWidth</parameterReference> and <parameterReference>nWidth</parameterReference> or <parameterReference>nSrcHeight</parameterReference> and <parameterReference>nHeight</parameterReference> parameters differ. If <parameterReference>nSrcWidth</parameterReference> and <parameterReference>nWidth</parameterReference> have different signs, the function creates a mirror image of the bitmap along the x-axis. If <parameterReference>nSrcHeight</parameterReference> and <parameterReference>nHeight</parameterReference> have different signs, the function creates a mirror image of the bitmap along the y-axis.</para>
                    <para>The <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference> function stretches or compresses the source bitmap in memory and then copies the result to the destination. If a pattern is to be merged with the result, it is not merged until the stretched source bitmap is copied to the destination. If a brush is used, it is the selected brush in the destination device context. The destination coordinates are transformed according to the destination device context; the source coordinates are transformed according to the source device context.</para>
                    <para>If the destination, source, and pattern bitmaps do not have the same color format, <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference> converts the source and pattern bitmaps to match the destination bitmaps. The foreground and background colors of the destination device context are used in the conversion. </para>
                    <para>If <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference> must convert a monochrome bitmap to color, it sets white bits (1) to the background color and black bits (0) to the foreground color. To convert color to monochrome, it sets pixels that match the background color to white (1) and sets all other pixels to black (0). The foreground and background colors of the device context with color are used.</para>
                    <para>Not all devices support the <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference> function. To determine whether a device supports <unmanagedCodeEntityReference>StretchBlt</unmanagedCodeEntityReference>, call the <unmanagedCodeEntityReference>GetDeviceCaps</unmanagedCodeEntityReference> member function with the <legacyBold>RASTERCAPS</legacyBold> index and check the return value for the <legacyBold>RC_STRETCHBLT</legacyBold> flag.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__strokeandfillpath">
        <!--581e12ed-4ebc-42cd-9682-55260778ef19-->
        <title>CDC::StrokeAndFillPath</title>
        <content>
            <para>Closes any open figures in a path, strokes the outline of the path by using the current pen, and fills its interior by using the current brush.</para>
            <legacySyntax>BOOL StrokeAndFillPath();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The device context must contain a closed path. The <unmanagedCodeEntityReference>StrokeAndFillPath</unmanagedCodeEntityReference> member function has the same effect as closing all the open figures in the path, and stroking and filling the path separately, except that the filled region will not overlap the stroked region even if the pen is wide.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__strokepath">
        <!--3603723f-eaa9-4d40-b342-a62d51d48460-->
        <title>CDC::StrokePath</title>
        <content>
            <para>Renders the specified path by using the current pen.</para>
            <legacySyntax>BOOL StrokePath();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>The device context must contain a closed path.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__tabbedtextout">
        <!--0f3bff56-f67c-4a8d-b316-f351021791e2-->
        <title>CDC::TabbedTextOut</title>
        <content>
            <para>Call this member function to write a character string at the specified location, expanding tabs to the values specified in the array of tab-stop positions.</para>
            <legacySyntax>virtual CSize TabbedTextOut(
    int x,
    int y,
    LPCTSTR lpszString,
    int nCount,
    int nTabPositions,
    LPINT lpnTabStopPositions,
    int nTabOrigin );

CSize TabbedTextOut(
    int x,
    int y,
    const CString&amp; str,
    int nTabPositions,
    LPINT lpnTabStopPositions,
    int nTabOrigin );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the starting point of the string.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the starting point of the string.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the character string to draw. You can pass either a pointer to an array of characters or a <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CString</legacyLink> object for this parameter.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of characters in the string. If <parameterReference>nCount</parameterReference> is –1, the length is calculated.</para>
                        </definition>
                        <definedTerm> <parameterReference>nTabPositions</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of values in the array of tab-stop positions.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpnTabStopPositions</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to an array containing the tab-stop positions (in logical units). The tab stops must be sorted in increasing order; the smallest x-value should be the first item in the array.</para>
                        </definition>
                        <definedTerm> <parameterReference>nTabOrigin</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate of the starting position from which tabs are expanded (in logical units).</para>
                        </definition>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para> A <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that contains the specified characters.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>The dimensions of the string (in logical units) as a <unmanagedCodeEntityReference>CSize</unmanagedCodeEntityReference> object.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Text is written in the currently selected font. If <parameterReference>nTabPositions</parameterReference> is 0 and <parameterReference>lpnTabStopPositions</parameterReference> is <legacyBold>NULL</legacyBold>, tabs are expanded to eight times the average character width. </para>
                    <para>If <parameterReference>nTabPositions</parameterReference> is 1, the tab stops are separated by the distance specified by the first value in the <parameterReference>lpnTabStopPositions</parameterReference> array. If the <parameterReference>lpnTabStopPositions</parameterReference> array contains more than one value, a tab stop is set for each value in the array, up to the number specified by <parameterReference>nTabPositions</parameterReference>. The <parameterReference>nTabOrigin</parameterReference> parameter allows an application to call the <unmanagedCodeEntityReference>TabbedTextOut</unmanagedCodeEntityReference> function several times for a single line. If the application calls the function more than once with the <parameterReference>nTabOrigin</parameterReference> set to the same value each time, the function expands all tabs relative to the position specified by <parameterReference>nTabOrigin</parameterReference>.</para>
                    <para>By default, the current position is not used or updated by the function. If an application needs to update the current position when it calls the function, the application can call the <legacyLink xlink:href="#cdc__settextalign">SetTextAlign</legacyLink> member function with <parameterReference>nFlags</parameterReference> set to <legacyBold>TA_UPDATECP</legacyBold>. When this flag is set, Windows ignores the                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> parameters on subsequent calls to <unmanagedCodeEntityReference>TabbedTextOut</unmanagedCodeEntityReference>, using the current position instead.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__textout">
        <!--3c81bd37-a3d3-4550-bca6-7ebc3ac2d976-->
        <title>CDC::TextOut</title>
        <content>
            <para>Writes a character string at the specified location using the currently selected font.</para>
            <legacySyntax>virtual BOOL TextOut(
    int x,
    int y,
    LPCTSTR lpszString,
    int nCount );

BOOL TextOut(
    int x, int y, const CString&amp; str );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm>
                            <legacyItalic>x</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical x-coordinate of the starting point of the text.</para>
                        </definition>
                        <definedTerm>
                            <legacyItalic>y</legacyItalic>
                        </definedTerm>
                        <definition>
                            <para>Specifies the logical y-coordinate of the starting point of the text.</para>
                        </definition>
                        <definedTerm> <parameterReference>lpszString</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Points to the character string to be drawn.</para>
                        </definition>
                        <definedTerm> <parameterReference>nCount</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the number of characters in the string.</para>
                        </definition>
                        <definedTerm> <parameterReference>str</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>A <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> object that contains the characters to be drawn.</para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>Character origins are at the upper-left corner of the character cell. By default, the current position is not used or updated by the function. </para>
                    <para>If an application needs to update the current position when it calls <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference>, the application can call the <unmanagedCodeEntityReference>SetTextAlign</unmanagedCodeEntityReference> member function with <parameterReference>nFlags</parameterReference> set to <legacyBold>TA_UPDATECP</legacyBold>. When this flag is set, Windows ignores the                         <legacyItalic>x</legacyItalic> and                         <legacyItalic>y</legacyItalic> parameters on subsequent calls to <unmanagedCodeEntityReference>TextOut</unmanagedCodeEntityReference>, using the current position instead.</para>
                </content>
            </section>
            <section>
                <title>Example</title>
                <content>
                    <!--startsnip-->
                            <para>See the example for <legacyLink xlink:href="#cdc__beginpath">CDC::BeginPath</legacyLink>.</para>
                        <!--endsnip-->
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__transparentblt">
        <!--225ba60a-943a-434b-ab48-7bcf3955dda7-->
        <title>CDC::TransparentBlt</title>
        <content>
            <para>Call this member function to transfer a bit-block of the color data, which corresponds to a rectangle of pixels from the specified source device context, into a destination device context.</para>
            <legacySyntax>BOOL TransparentBlt(
    int xDest,
    int yDest, int nDestWidth, int nDestHeight,
    CDC* pSrcDC,
    int xSrc,
    int ySrc,
    int nSrcWidth,
    int nSrcHeight,
    UINT clrTransparent );</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Parameters</title>
                <content>
                    <definitionTable>
                        <definedTerm> <parameterReference>xDest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate, in logical units, of the upper-left corner of the destination rectangle. </para>
                        </definition>
                        <definedTerm> <parameterReference>yDest</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate, in logical units, of the upper-left corner of the destination rectangle. </para>
                        </definition>
                        <definedTerm> <parameterReference>nDestWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width, in logical units, of the destination rectangle. </para>
                        </definition>
                        <definedTerm> <parameterReference>nDestHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height, in logical units, of the destination rectangle. </para>
                        </definition>
                        <definedTerm> <parameterReference>pSrcDC</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Pointer to the source device context.</para>
                        </definition>
                        <definedTerm> <parameterReference>xSrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the x-coordinate, in logical units, of the source rectangle. </para>
                        </definition>
                        <definedTerm> <parameterReference>ySrc</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the y-coordinate, in logical units, of the source rectangle. </para>
                        </definition>
                        <definedTerm> <parameterReference>nSrcWidth</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the width, in logical units, of the source rectangle.</para>
                        </definition>
                        <definedTerm> <parameterReference>nSrcHeight</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>Specifies the height, in logical units, of the source rectangle. </para>
                        </definition>
                        <definedTerm> <parameterReference>clrTransparent</parameterReference>
                        </definedTerm>
                        <definition>
                            <para>The RGB color in the source bitmap to treat as transparent. </para>
                        </definition>
                    </definitionTable>
                </content>
            </section>
            <section>
                <title>Return Value</title>
                <content>
                    <para> <legacyBold>TRUE</legacyBold> if successful; otherwise <legacyBold>FALSE</legacyBold>.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para> <unmanagedCodeEntityReference>TransparentBlt</unmanagedCodeEntityReference> allows for transparency; that is, the RGB color indicated by <parameterReference>clrTransparent</parameterReference> is rendered transparent for the transfer.</para>
                    <para>For more information, see                         <externalLink> <linkText>TransparentBlt</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145141</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__updatecolors">
        <!--b86393c4-f7d2-4428-8db6-8b8c157d60a7-->
        <title>CDC::UpdateColors</title>
        <content>
            <para>Updates the client area of the device context by matching the current colors in the client area to the system palette on a pixel-by-pixel basis.</para>
            <legacySyntax>void UpdateColors();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Remarks</title>
                <content>
                    <para>An inactive window with a realized logical palette may call <unmanagedCodeEntityReference>UpdateColors</unmanagedCodeEntityReference> as an alternative to redrawing its client area when the system palette changes. </para>
                    <para>For more information about using color palettes, see                         <externalLink> <linkText>UpdateColors</linkText> <linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145166</linkUri>
                        </externalLink> in the <token>winSDK</token>.</para>
                    <para>The <unmanagedCodeEntityReference>UpdateColors</unmanagedCodeEntityReference> member function typically updates a client area faster than redrawing the area. However, because the function performs the color translation based on the color of each pixel before the system palette changed, each call to this function results in the loss of some color accuracy.</para>
                </content>
            </section>
        </sections>
    </section>
    <section address="cdc__widenpath">
        <!--0b40fba8-8028-4278-a114-3397709384a3-->
        <title>CDC::WidenPath</title>
        <content>
            <para>Redefines the current path as the area that would be painted if the path were stroked using the pen currently selected into the device context.</para>
            <legacySyntax>BOOL WidenPath();</legacySyntax>
        </content>
        <sections>
            <section>
                <title>Return Value</title>
                <content>
                    <para>Nonzero if the function is successful; otherwise 0.</para>
                </content>
            </section>
            <section>
                <title>Remarks</title>
                <content>
                    <para>This function is successful only if the current pen is a geometric pen created by the second version of <unmanagedCodeEntityReference>CreatePen</unmanagedCodeEntityReference> member function, or if the pen is created with the first version of <unmanagedCodeEntityReference>CreatePen</unmanagedCodeEntityReference> and has a width, in device units, of greater than 1. The device context must contain a closed path. Any Bzier curves in the path are converted to sequences of straight lines approximating the widened curves. As such, no Bzier curves remain in the path after <unmanagedCodeEntityReference>WidenPath</unmanagedCodeEntityReference> is called.</para>
                </content>
            </section>
        </sections>
    </section>
    <relatedTopics> <link xlink:href="95e9acd3-d9eb-4ac0-b52b-ca4a501a7a3a">Base Class</link> <link xlink:href="19d70341-e391-4a72-94c6-35755ce975d4">Hierarchy Chart</link> <link xlink:href="7e245baa-bf9b-403e-a637-7218adf28fab">CPaintDC</link> <link xlink:href="876a3641-4cde-471c-b0d1-fe58b32af79c">CWindowDC</link> <link xlink:href="8a871d6b-06f8-496e-9fa3-9a5780848369">CClientDC</link> <link xlink:href="ffce60fa-4181-4d46-9832-25e46fad4db4">CMetaFileDC</link>
    </relatedTopics>
</developerReferenceWithSyntaxDocument>



