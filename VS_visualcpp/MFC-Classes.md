---
title: "MFC Classes"
ms.custom: na
ms.date: 10/08/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 7b6db805-a572-43fd-9046-0fa6e3663e63
caps.latest.revision: 26
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# MFC Classes
<?xml version="1.0" encoding="utf-8"?>
<developerConceptualDocument xmlns="http://ddue.schemas.microsoft.com/authoring/2003/5" xmlns:xlink="http://www.w3.org/1999/xlink" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://ddue.schemas.microsoft.com/authoring/2003/5 http://dduestorage.blob.core.windows.net/ddueschema/developer.xsd">
  <introduction>
    <para>The classes in the following list are included in the Microsoft Foundation Class (MFC) Library.</para>
    <alert class="tip">
      <para>For information about <legacyLink xlink:href="7cacc59c-425f-40f1-8f5b-6db921318ec9">CStringT</legacyLink> and other classes that are common to both MFC and ATL programming, see <link xlink:href="ca8b4b6b-744d-430b-b31f-d5b2f17bf210">Classes Shared by MFC and ATL</link>.</para>
    </alert>
    <alert class="important">
      <para>The MFC classes and their members cannot be used in applications that execute in the <token>wrt</token>.</para>
    </alert>
  </introduction>
  <section>
    <title>In This Section</title>
    <content>
      <definitionTable>
        <definedTerm> <link xlink:href="b1f31ee8-bb11-4ccc-b124-365fb02b025c">CAccelerateDecelerateTransition</link>
        </definedTerm>
        <definition>
          <para>Implements an accelerate-decelerate transition.</para>
        </definition>
        <definedTerm> <link xlink:href="5E8EB1BD-96B7-47B8-8DE2-6BCBB3CC299B">CAnimateCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common animation control.</para>
        </definition>
        <definedTerm> <link xlink:href="76b25917-940e-4eba-940f-31d270702603">CAnimationBaseObject Class</link>
        </definedTerm>
        <definition>
          <para>The base class for all animation objects.</para>
        </definition>
        <definedTerm> <link xlink:href="88bfabd4-efeb-4652-87e8-304253d8e48c">CAnimationColor Class</link>
        </definedTerm>
        <definition>
          <para>Implements the functionality of a color whose red, green, and blue components can be animated.</para>
        </definition>
        <definedTerm> <link xlink:href="ed294c98-695e-40a6-b940-33ef1d40aa6b">CAnimationController Class</link>
        </definedTerm>
        <definition>
          <para>Implements the animation controller, which provides a central interface for creating and managing animations.</para>
        </definition>
        <definedTerm> <link xlink:href="8bc18ceb-33a2-41d0-9731-71811adacab7">CAnimationGroup Class</link>
        </definedTerm>
        <definition>
          <para>Implements the animation controller, which provides a central interface for creating and managing animations.</para>
        </definition>
        <definedTerm> <link xlink:href="6089ec07-e661-4805-b227-823b4652aade">CAnimationManagerEventHandler Class</link>
        </definedTerm>
        <definition>
          <para>Implements a callback, which is called by the Animation API when a status of an animation manager is changed.</para>
        </definition>
        <definedTerm> <link xlink:href="5dc4d46f-e695-4681-b15c-544b78b3e317">CAnimationPoint Class</link>
        </definedTerm>
        <definition>
          <para>Implements the functionality of a point whose coordinates can be animated.</para>
        </definition>
        <definedTerm> <link xlink:href="0294156d-241e-4a57-92b2-31234fe557d6">CAnimationRect Class</link>
        </definedTerm>
        <definition>
          <para>Implements the functionality of a rectangle whose sides can be animated.</para>
        </definition>
        <definedTerm> <link xlink:href="ea06d1b5-502c-44a3-82ca-8bd6ba6a9364">CAnimationSize Class</link>
        </definedTerm>
        <definition>
          <para>Implements the functionality of a size object whose dimensions can be animated.</para>
        </definition>
        <definedTerm> <link xlink:href="10a7e86b-c02d-4124-9a2e-61ecf8ac62fc">CAnimationStoryboardEventHandler Class</link>
        </definedTerm>
        <definition>
          <para>Implements a callback, which is called by the Animation API when the status of a storyboard is changed or a storyboard is updated.</para>
        </definition>
        <definedTerm> <link xlink:href="188dea3b-4b5e-4f6b-8df9-09d993a21619">CAnimationTimerEventHandler Class</link>
        </definedTerm>
        <definition>
          <para>Implements a callback, which is called by the Animation API when timing events occur.</para>
        </definition>
        <definedTerm> <link xlink:href="78c5ae19-ede5-4f20-bfbe-68b467b603c2">CAnimationValue Class</link>
        </definedTerm>
        <definition>
          <para>Implements the functionality of animation object that has one value.</para>
        </definition>
        <definedTerm> <link xlink:href="506e697e-31a8-4033-a27e-292f4d7b42d9">CAnimationVariable Class</link>
        </definedTerm>
        <definition>
          <para>Represents an animation variable.</para>
        </definition>
        <definedTerm> <link xlink:href="2ea4996d-5c04-4dfc-be79-d42d55050795">CAnimationVariableChangeHandler Class</link>
        </definedTerm>
        <definition>
          <para>Implements a callback, which is called by the Animation API when the value of an animation variable changes.</para>
        </definition>
        <definedTerm> <link xlink:href="6ac8e91b-e514-4ff6-babd-33f77c4b2b61">CAnimationVariableIntegerChangeHandler Class</link>
        </definedTerm>
        <definition>
          <para>Implements a callback, which is called by the Animation API when the value of an animation variable changes.</para>
        </definition>
        <definedTerm> <link xlink:href="9E950D23-B874-456E-AE4B-FE00781A7699">CArchive</link>
        </definedTerm>
        <definition>
          <para>Lets you save a complex network of objects in a permanent binary form (usually disk storage) that persists after those objects are deleted. </para>
        </definition>
        <definedTerm> <link xlink:href="DA31A127-E86C-41D1-B0B6-BED0865B1B49">CArchiveException</link>
        </definedTerm>
        <definition>
          <para>Represents a serialization exception condition.</para>
        </definition>
        <definedTerm> <link xlink:href="FEAD8B00-4CFD-4625-AD0E-251DF62BA92F">CArray</link>
        </definedTerm>
        <definition>
          <para>Supports arrays that resemble C arrays, but can dynamically reduce and grow as necessary.</para>
        </definition>
        <definedTerm> <link xlink:href="17378B66-A49A-4B67-88E3-7756AD26A2FC">CAsyncMonikerFile</link>
        </definedTerm>
        <definition>
          <para>Provides functionality for the use of asynchronous monikers in ActiveX controls (formerly OLE controls).</para>
        </definition>
        <definedTerm> <link xlink:href="CCA4D5A1-AA0F-48BD-843E-EF0E2D7FC00B">CAsyncSocket</link>
        </definedTerm>
        <definition>
          <para>Represents a Windows Socket, which is an endpoint of network communication.</para>
        </definition>
        <definedTerm> <link xlink:href="2a0f6bec-c369-4ab7-977d-564e7946ebad">CAutoHideDockSite</link>
        </definedTerm>
        <definition>
          <para>Extends the <link xlink:href="0fcfff79-5f50-4281-b2de-a55653bbea40">CDockSite Class</link> to implement auto-hide dock panes.</para>
        </definition>
        <definedTerm> <link xlink:href="285a2eff-e7c4-43be-b5aa-737727e6866d">CBaseKeyFrame Class</link>
        </definedTerm>
        <definition>
          <para>Implements the basic functionality of a keyframe.</para>
        </definition>
        <definedTerm> <link xlink:href="8163dd51-d7c7-4def-9c74-61f8ecdfad82">CBasePane</link>
        </definedTerm>
        <definition>
          <para>Base class for all panes.</para>
        </definition>
        <definedTerm> <link xlink:href="f22c0080-5b29-4a0a-8f74-8f0a4cd2dbcf">CBaseTabbedPane</link>
        </definedTerm>
        <definition>
          <para>Extends the functionality of the <link xlink:href="e2495f4c-765f-48f9-a2e2-e45e47608d91">CDockablePane Class</link> to support the creation of tabbed windows.</para>
        </definition>
        <definedTerm> <link xlink:href="dfe84007-bbc5-43b7-b5b8-fae9145573bf">CBaseTransition Class</link>
        </definedTerm>
        <definition>
          <para>Represents a basic transition.</para>
        </definition>
        <definedTerm> <link xlink:href="3980616A-C59D-495A-86E6-62BD3889C84C">CBitmap</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a Windows graphics device interface (GDI) bitmap and provides member functions to manipulate the bitmap.</para>
        </definition>
        <definedTerm> <link xlink:href="9AD6CB45-C3C4-4FB1-96D3-1FE3DF7BBCFC">CBitmapButton</link>
        </definedTerm>
        <definition>
          <para>Creates pushbutton controls labeled with bitmapped images instead of text.</para>
        </definition>
        <definedTerm> <link xlink:href="c89a4437-812e-4943-acb2-b429a04cc4d2">CBitmapRenderTarget Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1BitmapRenderTarget</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="E5EF2C62-DD95-4973-9090-F52F605900E1">CBrush</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a Windows graphics device interface (GDI) brush. </para>
        </definition>
        <definedTerm> <link xlink:href="CDC76D5B-31DA-43C5-BC43-FDE4CB39DE5B">CButton</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of Windows button controls. </para>
        </definition>
        <definedTerm> <link xlink:href="53D4A512-657C-4187-9609-E3F5339A78E0">CByteArray</link>
        </definedTerm>
        <definition>
          <para>Supports dynamic arrays of bytes. </para>
        </definition>
        <definedTerm> <link xlink:href="0D81356B-4FE5-43F6-AED2-2EB5A5485706">CCachedDataPathProperty</link>
        </definedTerm>
        <definition>
          <para>Implements an OLE control property transferred asynchronously and cached in a memory file.</para>
        </definition>
        <definedTerm> <link xlink:href="1DD78438-00E8-441C-B36F-9C4F9AC0D019">CCheckListBox</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows checklist box.</para>
        </definition>
        <definedTerm> <link xlink:href="8A871D6B-06F8-496E-9FA3-9A5780848369">CClientDC</link>
        </definedTerm>
        <definition>
          <para>Handles the calling of the Windows functions <externalLink><linkText>GetDC</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/dd144871</linkUri></externalLink> at construction time and <externalLink><linkText>ReleaseDC</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/dd162920</linkUri></externalLink> at destruction time.</para>
        </definition>
        <definedTerm> <link xlink:href="8883B132-2057-4CE0-A5F2-88979F8F2B13">CCmdTarget</link>
        </definedTerm>
        <definition>
          <para>Base class for the Microsoft Foundation Class Library message-map architecture.</para>
        </definition>
        <definedTerm> <link xlink:href="04EAAAF5-F510-48AB-B425-94665BA24766">CCmdUI</link>
        </definedTerm>
        <definition>
          <para>Used only within an <unmanagedCodeEntityReference>ON_UPDATE_COMMAND_UI</unmanagedCodeEntityReference> handler in a <unmanagedCodeEntityReference>CCmdTarget</unmanagedCodeEntityReference>-derived class.</para>
        </definition>
        <definedTerm> <link xlink:href="D013DC25-9290-4B5D-A97E-95AD7208E13B">CColorDialog</link>
        </definedTerm>
        <definition>
          <para>Lets you incorporate a color-selection dialog box into your application.</para>
        </definition>
        <definedTerm> <link xlink:href="4E73B5DF-0D2E-4658-9706-38133FB10513">CComboBox</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows combo box. </para>
        </definition>
        <definedTerm> <link xlink:href="33CA960A-2409-478C-84A4-A2EE8ECFE8F7">CComboBoxEx</link>
        </definedTerm>
        <definition>
          <para>Extends the combo box control by providing support for image lists.</para>
        </definition>
        <definedTerm> <link xlink:href="3E313DDB-0A82-4991-87AC-A27FEFF4668C">CCommandLineInfo</link>
        </definedTerm>
        <definition>
          <para>Aids in parsing the command line at application startup.</para>
        </definition>
        <definedTerm> <link xlink:href="1F68D65F-A0FD-4778-BE22-EBBE51A95F95">CCommonDialog</link>
        </definedTerm>
        <definition>
          <para>The base class for classes that encapsulate functionality of the Windows common dialogs.</para>
        </definition>
        <definedTerm> <link xlink:href="F0F23A1E-5E8C-41A9-AA6C-1A4793B28E8F">CConnectionPoint</link>
        </definedTerm>
        <definition>
          <para>Defines a special type of interface used to communicate with other OLE objects, called a "connection point."</para>
        </definition>
        <definedTerm> <link xlink:href="f6fa4780-a71b-4cd6-80aa-d4792ace36c2">CConstantTransition Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a constant transition.</para>
        </definition>
        <definedTerm> <link xlink:href="1de20640-243c-47e1-85de-1baa4153bc83">CContextMenuManager</link>
        </definedTerm>
        <definition>
          <para>Manages shortcut menus, also known as context menus.</para>
        </definition>
        <definedTerm> <link xlink:href="4D668C55-9B42-4838-97AC-CF2B3000B82C">CControlBar</link>
        </definedTerm>
        <definition>
          <para>Base class for the control-bar classes <link xlink:href="A3BDE3DB-E71C-4881-A3CA-1D5481C345BA">CStatusBar</link>, <link xlink:href="E868DA26-5E07-4607-9651-E2F863AD9059">CToolBar</link>, <link xlink:href="DA2F7A30-970C-44E3-87F0-6094BD002CAB">CDialogBar</link>, <link xlink:href="C1AD2720-1D33-4106-8E4E-80AA84F93559">CReBar</link>, and <link xlink:href="56A708D9-28C5-4EB0-9404-77B688D91C63">COleResizeBar</link>.</para>
        </definition>
        <definedTerm> <link xlink:href="F776F74B-5B0B-4F32-9C13-2B8E4A0D7B2B">CCriticalSection</link>
        </definedTerm>
        <definition>
          <para>Represents a "critical section", which is a synchronization object that enables one thread at a time to access a resource or section of code.</para>
        </definition>
        <definedTerm> <link xlink:href="FF488596-1E71-451F-8FEC-B0831A7B44E0">CCtrlView</link>
        </definedTerm>
        <definition>
          <para>Adapts the document-view architecture to the common controls supported by Windows 98 and Windows NT versions 3.51 and later.</para>
        </definition>
        <definedTerm> <link xlink:href="4fc30e9c-160c-45e1-bdbe-51adf8fee9c5">CCubicTransition Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a cubic transition.</para>
        </definition>
        <definedTerm> <link xlink:href="28d85595-989a-40a3-b003-e0e38437a94d">CCustomInterpolator Class</link>
        </definedTerm>
        <definition>
          <para>Implements a basic interpolator.</para>
        </definition>
        <definedTerm> <link xlink:href="5bd3f492-940f-4290-a38b-fa68eb8f8401">CCustomTransition Class</link>
        </definedTerm>
        <definition>
          <para>Implements a custom transition.</para>
        </definition>
        <definedTerm> <link xlink:href="2b3686f1-812c-462b-b449-9f0cb6949bf6">CD2DBitmap Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1Bitmap</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="46ebbe34-66e0-44c8-af1d-d129e851de5e">CD2DBitmapBrush Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1BitmapBrush</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="0d2c0857-2261-48a8-8ee0-a88cbf08499a">CD2DBrush Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1Brush</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="c77d717f-0a16-4d74-b2ce-0ae1766ed6f9">CD2DBrushProperties Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>D2D1_BRUSH_PROPERTIES</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="e9f02f54-acf2-427e-b349-db50cd9a77df">CD2DEllipse Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>D2D1_BRUSH_PROPERTIES</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="3f95054b-fdb8-4e87-87f2-9fc3df7279ec">CD2DGeometry Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1Geometry</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="e5e07f41-0343-4ab1-9d6b-8c62ed33c04a">CD2DGeometrySink Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1GeometrySink</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="5bf133e6-16b7-4e3a-845d-0ce63fafe5ec">CD2DGradientBrush Class</link>
        </definedTerm>
        <definition>
          <para>The base class of the <unmanagedCodeEntityReference>CD2DLinearGradientBrush</unmanagedCodeEntityReference> and the <unmanagedCodeEntityReference>CD2DRadialGradientBrush</unmanagedCodeEntityReference> classes.</para>
        </definition>
        <definedTerm> <link xlink:href="2f96378e-66bb-40d1-9661-6afe324de3c1">CD2DLayer Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1Layer</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="d4be9ff9-0ea8-45e6-9b8d-f3bc5673cbac">CD2DLinearGradientBrush Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1LinearGradientBrush</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="11a2c78a-1367-40e8-a34f-44aa0509a4c9">CD2DMesh Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1Mesh</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="686216eb-5080-4242-ace5-8fa1ce96307c">CD2DPathGeometry Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1PathGeometry</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="30f72083-1c8a-4f50-adb2-72dbbe3522d4">CD2DPointF Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>D2D1_POINT_2F</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="04733f96-b6de-4a89-82e3-caad1e8087a9">CD2DPointU Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>D2D1_POINT_2U</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="6c76d84a-d831-4ee2-96f1-82c1f5b0d6a9">CD2DRadialGradientBrush Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1RadialGradientBrush</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="87c12d87-9d18-4a19-ba14-0f51d6b6835a">CD2DRectF Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>D2D1_RECT_F</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="a62f17d1-011d-4867-8f51-fd7e7c00561d">CD2DRectU Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>D2D1_RECT_U</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="34e3ee18-aab6-4c39-9294-de869e1f7820">CD2DResource Class</link>
        </definedTerm>
        <definition>
          <para>An abstract class that provides a interface for creating and managing <languageKeyword>D2D</languageKeyword> resources such as brushes, layers, and texts.</para>
        </definition>
        <definedTerm> <link xlink:href="06207fb5-e92b-41c0-bceb-b45d8f466531">CD2DRoundedRect Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>D2D1_ROUNDED_RECT</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="f486a1e1-997d-4286-8cb9-26369dc82055">CD2DSizeF Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>D2D1_SIZE_F</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="6e679ba8-2112-43c3-8275-70b660856f02">CD2DSizeU Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>D2D1_SIZE_U</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="d4506637-acce-4f74-8a9b-f0a45571a735">CD2DSolidColorBrush Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1SolidColorBrush</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="db194cec-9dae-4644-ab84-7c43b7164117">CD2DTextFormat Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>IDWriteTextFormat</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="724bd13c-f2ef-4e55-a775-8cb04b7b7908">CD2DTextLayout Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>IDWriteTextLayout</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="8FF5B342-964D-449D-BEF1-D0FF56AADF6D">CDaoDatabase</link>
        </definedTerm>
        <definition>
          <para>Represents a connection to a database through which you can operate on the data.</para>
        </definition>
        <definedTerm> <link xlink:href="B2B01FA9-7CE2-42A1-842E-40F13DC50DA4">CDaoException</link>
        </definedTerm>
        <definition>
          <para>Represents an exception condition arising from the MFC database classes based on data access objects (DAO).</para>
        </definition>
        <definedTerm> <link xlink:href="350A663E-92FF-44AB-AD53-D94EFA2E5823">CDaoFieldExchange</link>
        </definedTerm>
        <definition>
          <para>Supports the DAO record field exchange (DFX) routines used by the DAO database classes.</para>
        </definition>
        <definedTerm> <link xlink:href="9676A4A3-C712-44D4-8C5D-D1CC78288D3A">CDaoQueryDef</link>
        </definedTerm>
        <definition>
          <para>Represents a query definition, or "querydef," usually one saved in a database.</para>
        </definition>
        <definedTerm> <link xlink:href="2322067F-1027-4662-A5D7-AA2FC7488630">CDaoRecordset</link>
        </definedTerm>
        <definition>
          <para>Represents a set of records selected from a data source.</para>
        </definition>
        <definedTerm> <link xlink:href="5AA7D0E2-BD05-413E-B216-80C404CE18AC">CDaoRecordView</link>
        </definedTerm>
        <definition>
          <para>A view that displays database records in controls.</para>
        </definition>
        <definedTerm> <link xlink:href="7C5D2254-8475-43C4-8A6C-2D32EAD194C9">CDaoTableDef</link>
        </definedTerm>
        <definition>
          <para>Represents the stored definition of a base table or an attached table.</para>
        </definition>
        <definedTerm> <link xlink:href="64F60DE6-4DF1-4D4A-A65B-C489B5257D52">CDaoWorkspace</link>
        </definedTerm>
        <definition>
          <para>Manages a named, password-protected database session from login to logoff, by a single user.</para>
        </definition>
        <definedTerm> <link xlink:href="BD0DE70A-E3C3-4441-BCAA-BBF434426CA8">CDatabase</link>
        </definedTerm>
        <definition>
          <para>Represents a connection to a data source, through which you can operate on the data source.</para>
        </definition>
        <definedTerm> <link xlink:href="84ED6113-325D-493E-A75D-223F03A992B8">CDataExchange</link>
        </definedTerm>
        <definition>
          <para>Supports the dialog data exchange (DDX) and dialog data validation (DDV) routines used by the Microsoft Foundation classes.</para>
        </definition>
        <definedTerm> <link xlink:href="1F96EFDB-54E4-460B-862C-EBA5D4103488">CDataPathProperty</link>
        </definedTerm>
        <definition>
          <para>Implements an OLE control property that can be loaded asynchronously.</para>
        </definition>
        <definedTerm> <link xlink:href="7794802c-e583-4eba-90b9-2fed1a161f9c">CDataRecoveryHandler</link>
        </definedTerm>
        <definition>
          <para>Autosaves documents and restores them if an application unexpectedly exits.</para>
        </definition>
        <definedTerm> <link xlink:href="7113993B-5D37-4148-939F-500A190C5BDC">CDateTimeCtrl</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the functionality of a date and time picker control.</para>
        </definition>
        <definedTerm> <link xlink:href="EB9E1119-89F5-49A7-B9D4-B91CEE1CCC82">CDBException</link>
        </definedTerm>
        <definition>
          <para>Represents an exception condition arising from the database classes.</para>
        </definition>
        <definedTerm> <link xlink:href="DE23609C-C560-4B24-BD6B-9D8903FD5B49">CDBVariant</link>
        </definedTerm>
        <definition>
          <para>Represents a variant data type for the MFC ODBC classes.</para>
        </definition>
        <definedTerm> <link xlink:href="715B3334-CB2B-4C9C-8067-02EB7C66C8B2">CDC</link>
        </definedTerm>
        <definition>
          <para>Defines a class of device-context objects.</para>
        </definition>
        <definedTerm> <link xlink:href="aa8059c9-08e6-49e4-9b8c-00fa54077a61">CDCRenderTarget Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1DCRenderTarget</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="3F941C85-87E1-4F0F-9CC5-FFEE8498B312">CDHtmlDialog</link>
        </definedTerm>
        <definition>
          <para>Used to create dialog boxes that use HTML rather than dialog resources to implement their user interface.</para>
        </definition>
        <definedTerm> <link xlink:href="CA64B77E-2CD2-47E3-8EFF-C2645AD578F9">CDialog</link>
        </definedTerm>
        <definition>
          <para>Base class used for displaying dialog boxes on the screen.</para>
        </definition>
        <definedTerm> <link xlink:href="DA2F7A30-970C-44E3-87F0-6094BD002CAB">CDialogBar</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows modeless dialog box in a control bar.</para>
        </definition>
        <definedTerm> <link xlink:href="a6ed3b1f-aef8-4b66-ac78-2160faf63c13">CDialogEx</link>
        </definedTerm>
        <definition>
          <para>Specifies the background color and background image of a dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="b4d84fb3-ccaa-451c-a69b-6b50dcb9b9c8">CDiscreteTransition Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a discrete transition.</para>
        </definition>
        <definedTerm> <link xlink:href="84FB8610-A4C8-4211-ADC0-E70E8D002C11">CDocItem</link>
        </definedTerm>
        <definition>
          <para>The base class for document items, which are components of a document's data.</para>
        </definition>
        <definedTerm> <link xlink:href="e2495f4c-765f-48f9-a2e2-e45e47608d91">CDockablePane</link>
        </definedTerm>
        <definition>
          <para>Implements a pane that can either be docked in a dock site or included in a tabbed pane.</para>
        </definition>
        <definedTerm> <link xlink:href="6ed6cf82-f39c-4d0c-bf7c-8641495cf8f3">CDockablePaneAdapter</link>
        </definedTerm>
        <definition>
          <para>Provides docking support for <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference>-derived panes.</para>
        </definition>
        <definedTerm> <link xlink:href="98e69c43-55d8-4f43-b861-4fda80ec1e32">CDockingManager</link>
        </definedTerm>
        <definition>
          <para>Implements the core functionality that controls docking layout in a main frame window.</para>
        </definition>
        <definedTerm> <link xlink:href="e7a17832-0ebb-4bce-b799-cec9b60f76fe">CDockingPanesRow</link>
        </definedTerm>
        <definition>
          <para>Manages a list of panes that are located in the same horizontal or vertical row (column) of a dock site.</para>
        </definition>
        <definedTerm> <link xlink:href="0fcfff79-5f50-4281-b2de-a55653bbea40">CDockSite</link>
        </definedTerm>
        <definition>
          <para>Provides functionality for arranging panes that are derived from the <link xlink:href="5c651a64-3c79-4d94-9676-45f6402a6bc5">CPane Class</link> into sets of rows.</para>
        </definition>
        <definedTerm> <link xlink:href="09E7C10B-3ABD-4CB2-AD36-42420FE6BC36">CDockState</link>
        </definedTerm>
        <definition>
          <para>A serialized <unmanagedCodeEntityReference>CObject</unmanagedCodeEntityReference> class that loads, unloads, or clears the state of one or more docking control bars in persistent memory (a file).</para>
        </definition>
        <definedTerm> <link xlink:href="18CD0DFF-0616-4472-B8D9-66C081BC383A">CDocObjectServer</link>
        </definedTerm>
        <definition>
          <para>Implements the additional OLE interfaces needed to make a normal <unmanagedCodeEntityReference>COleDocument</unmanagedCodeEntityReference> server into a full DocObject server: <unmanagedCodeEntityReference>IOleDocument</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>IOleDocumentView</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>IOleCommandTarget</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>IPrint</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="530F7156-50C8-4806-9328-602C9133F622">CDocObjectServerItem</link>
        </definedTerm>
        <definition>
          <para>Implements OLE server verbs specifically for DocObject servers.</para>
        </definition>
        <definedTerm> <link xlink:href="14B41A1F-BF9D-4EAC-B6A8-4C54FFCC77F6">CDocTemplate</link>
        </definedTerm>
        <definition>
          <para>An abstract base class that defines the basic functionality for document templates.</para>
        </definition>
        <definedTerm> <link xlink:href="E5A2891D-E1E1-4599-8C7E-AFA9B4945446">CDocument</link>
        </definedTerm>
        <definition>
          <para>Provides the basic functionality for user-defined document classes.</para>
        </definition>
        <definedTerm> <link xlink:href="FEE20B42-60AE-4AA9-83F9-5A3D9B96E33B">CDragListBox</link>
        </definedTerm>
        <definition>
          <para>In addition to providing the functionality of a Windows list box, the <unmanagedCodeEntityReference>CDragListBox</unmanagedCodeEntityReference> class lets the user move list box items, such as filenames, within the list box.</para>
        </definition>
        <definedTerm> <link xlink:href="9e4775ca-101b-4aa9-a85a-4d047c701215">CDrawingManager</link>
        </definedTerm>
        <definition>
          <para>Implements complex drawing algorithms.</para>
        </definition>
        <definedTerm> <link xlink:href="98C52B2D-14B5-48ED-B423-479A4D1C60FA">CDumpContext</link>
        </definedTerm>
        <definition>
          <para>Supports stream-oriented diagnostic output in the form of human-readable text.</para>
        </definition>
        <definedTerm> <link xlink:href="581BE11E-CED6-47D1-8679-E0B8E7D99494">CDWordArray</link>
        </definedTerm>
        <definition>
          <para>Supports arrays of 32-bit doublewords.</para>
        </definition>
        <definedTerm> <link xlink:href="B1533C30-7F10-4663-88D3-8B7F2C9F7024">CEdit</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows edit control.</para>
        </definition>
        <definedTerm> <link xlink:href="BF38255C-FCBE-450C-95B2-3C5E35F86C37">CEditView</link>
        </definedTerm>
        <definition>
          <para>A type of view class that provides the functionality of a Windows edit control and can be used to implement simple text-editor functionality.</para>
        </definition>
        <definedTerm> <link xlink:href="DF676042-CE27-4702-800A-E73FF4F44395">CEvent</link>
        </definedTerm>
        <definition>
          <para>Represents an "event", which is a synchronization object that enables one thread to notify another that an event has occurred.</para>
        </definition>
        <definedTerm> <link xlink:href="CFACF14D-BFE4-4666-A5C7-38B800512920">CException</link>
        </definedTerm>
        <definition>
          <para>The base class for all exceptions in the Microsoft Foundation Class Library.</para>
        </definition>
        <definedTerm> <link xlink:href="24C5C0B3-06A6-430E-9B6F-005A2C65E29F">CFieldExchange</link>
        </definedTerm>
        <definition>
          <para>Supports the record field exchange (RFX) and bulk record field exchange (Bulk RFX) routines used by the database classes.</para>
        </definition>
        <definedTerm> <link xlink:href="B2EB5757-D499-4E67-B044-DD7D1ABAA0F8">CFile</link>
        </definedTerm>
        <definition>
          <para>The base class for Microsoft Foundation Class file classes.</para>
        </definition>
        <definedTerm> <link xlink:href="FDA4FD3C-08B8-4CE0-8E9D-7BAB23F8C6C0">CFileDialog</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the common file dialog box for Windows.</para>
        </definition>
        <definedTerm> <link xlink:href="F6491BB9-BFBC-42FD-A952-B33F9B62323F">CFileException</link>
        </definedTerm>
        <definition>
          <para>Represents a file-related exception condition.</para>
        </definition>
        <definedTerm> <link xlink:href="9990068C-B023-4114-9580-A50182D15240">CFileFind</link>
        </definedTerm>
        <definition>
          <para>Performs local file searches and is the base class for <link xlink:href="8465A979-6323-496D-AB4B-E81383FB999D">CGopherFileFind</link> and <link xlink:href="9667CF01-657F-4B11-B9DB-F11E5A7B4E4C">CFtpFileFind</link>, which perform Internet file searches.</para>
        </definition>
        <definedTerm> <link xlink:href="610F0B5D-B398-4EF6-8C05-E9D6641E50A8">CFindReplaceDialog</link>
        </definedTerm>
        <definition>
          <para>Lets you implement standard string Find/Replace dialog boxes in your application.</para>
        </definition>
        <definedTerm> <link xlink:href="8db01684-dd1d-4e9c-989e-07a2318a8156">CFolderPickerDialog Class</link>
        </definedTerm>
        <definition>
          <para>Implements CFileDialog in the folder picker mode.</para>
        </definition>
        <definedTerm> <link xlink:href="3FAD6BFE-D6CE-4AB9-967A-5CE0AA102800">CFont</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a Windows graphics device interface (GDI) font and provides member functions for manipulating the font.</para>
        </definition>
        <definedTerm> <link xlink:href="6228D500-ED0F-4156-81E5-AB0D57D1DCF4">CFontDialog</link>
        </definedTerm>
        <definition>
          <para>Lets you incorporate a font-selection dialog box into your application.</para>
        </definition>
        <definedTerm> <link xlink:href="728AB472-0C97-440D-889F-1324C6E1B6B8">CFontHolder</link>
        </definedTerm>
        <definition>
          <para>Implements the stock Font property and encapsulates the functionality of a Windows font object and the <unmanagedCodeEntityReference>IFont</unmanagedCodeEntityReference> interface.</para>
        </definition>
        <definedTerm> <link xlink:href="A99EC313-36F0-4F28-9D2B-DE11DE14AC19">CFormView</link>
        </definedTerm>
        <definition>
          <para>The base class used for form views.</para>
        </definition>
        <definedTerm> <link xlink:href="E2220ABA-5BF4-4002-B960-FBCAFCAD01F1">CFrameWnd</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows single document interface (SDI) overlapped or pop-up frame window, along with members for managing the window.</para>
        </definition>
        <definedTerm> <link xlink:href="5830aca8-4a21-4f31-91f1-dd5477ffcc8d">CFrameWndEx</link>
        </definedTerm>
        <definition>
          <para>Implements the functionality of a Windows single document interface (SDI) overlapped or popup frame window, and provides members for managing the window. It extends the <link xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1">CFrameWnd</link> class.</para>
        </definition>
        <definedTerm> <link xlink:href="5E3A0501-8893-49CF-A3D5-0628D8D6B936">CFtpConnection</link>
        </definedTerm>
        <definition>
          <para>Manages your FTP connection to an Internet server and enables direct manipulation of directories and files on that server.</para>
        </definition>
        <definedTerm> <link xlink:href="9667CF01-657F-4B11-B9DB-F11E5A7B4E4C">CFtpFileFind</link>
        </definedTerm>
        <definition>
          <para>Aids in Internet file searches of FTP servers.</para>
        </definition>
        <definedTerm> <link xlink:href="1CBA3BA5-3D49-4E43-8293-209299F2F6F4">CGdiObject</link>
        </definedTerm>
        <definition>
          <para>Provides a base class for various kinds of Windows graphics device interface (GDI) objects such as bitmaps, regions, brushes, pens, palettes, and fonts.</para>
        </definition>
        <definedTerm> <link xlink:href="B5B96AEA-AC99-430E-BD84-D1372B43F78F">CGopherConnection</link>
        </definedTerm>
        <definition>
          <para>Manages your connection to a gopher Internet server.</para>
        </definition>
        <definedTerm> <link xlink:href="3CA9898F-8CDB-4495-BBDE-46D40100FEDA">CGopherFile</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality to find and read files on a gopher server.</para>
        </definition>
        <definedTerm> <link xlink:href="8465A979-6323-496D-AB4B-E81383FB999D">CGopherFileFind</link>
        </definedTerm>
        <definition>
          <para>Aids in Internet file searches of gopher servers.</para>
        </definition>
        <definedTerm> <link xlink:href="6FCC015F-5AE6-4959-B936-858634C71019">CGopherLocator</link>
        </definedTerm>
        <definition>
          <para>Gets a gopher "locator" from a gopher server, determines the locator's type, and makes the locator available to <link xlink:href="8465A979-6323-496D-AB4B-E81383FB999D">CGopherFileFind</link>.</para>
        </definition>
        <definedTerm> <link xlink:href="B847AC90-5FAE-4A87-88E0-CA45F77B8B3B">CHeaderCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common header control.</para>
        </definition>
        <definedTerm> <link xlink:href="896F9766-0718-4F58-AAB2-20325E118CA6">CHotKeyCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common hot key control.</para>
        </definition>
        <definedTerm> <link xlink:href="0FC4A238-B05F-4874-9EDC-6A6701F064D9">CHtmlEditCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the WebBrowser ActiveX control in an MFC window.</para>
        </definition>
        <definedTerm> <link xlink:href="E0CC74B4-8320-4570-B673-16C03D2AE266">CHtmlEditCtrlBase</link>
        </definedTerm>
        <definition>
          <para>Represents an HTML editing component.</para>
        </definition>
        <definedTerm> <link xlink:href="B2CCA61F-E5D6-4099-B0D1-46BF85F0BD64">CHtmlEditDoc</link>
        </definedTerm>
        <definition>
          <para>With <link xlink:href="166C8BA8-3FB5-4DD7-A9EA-5BCA662D00F6">CHtmlEditView</link>, provides the functionality of the WebBrowser editing platform within the context of the MFC document-view architecture.</para>
        </definition>
        <definedTerm> <link xlink:href="166C8BA8-3FB5-4DD7-A9EA-5BCA662D00F6">CHtmlEditView</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the WebBrowser editing platform within the context of MFC's document/view architecture.</para>
        </definition>
        <definedTerm> <link xlink:href="904976AF-73DE-4ABA-84AC-CFAE8E2BE09A">CHtmlView</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the WebBrowser control within the context of MFC's document/view architecture.</para>
        </definition>
        <definedTerm> <link xlink:href="A402B662-C445-4988-800D-C8278551BABE">CHttpConnection</link>
        </definedTerm>
        <definition>
          <para>Manages your connection to an HTTP server.</para>
        </definition>
        <definedTerm> <link xlink:href="399E7C68-BBCE-4374-8C55-206E9C7BAAC6">CHttpFile</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality to request and read files on an HTTP server.</para>
        </definition>
        <definedTerm> <link xlink:href="aa65b69f-7202-46ea-af81-ef325da0b840">CHwndRenderTarget Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1HwndRenderTarget</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="B6D1A704-1C82-4548-8A8F-77972ADC98A5">CImageList</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common image list control.</para>
        </definition>
        <definedTerm> <link xlink:href="c3d5121f-2c6b-4221-9e57-10e082a31120">CInstantaneousTransition Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates an instantaneous transition.</para>
        </definition>
        <definedTerm> <link xlink:href="62A5D1C3-8471-4E36-A064-48831829B2A7">CInternetConnection</link>
        </definedTerm>
        <definition>
          <para>Manages your connection to an Internet server.</para>
        </definition>
        <definedTerm> <link xlink:href="44FB3CBE-523E-4754-8843-A77909990B14">CInternetException</link>
        </definedTerm>
        <definition>
          <para>Represents an exception condition related to an Internet operation.</para>
        </definition>
        <definedTerm> <link xlink:href="96935681-EE71-4A8D-9783-5ABC7B3E6F10">CInternetFile</link>
        </definedTerm>
        <definition>
          <para>Enables access to files on remote systems that use Internet protocols.</para>
        </definition>
        <definedTerm> <link xlink:href="EF54FEB4-9D0F-4E65-A45D-7A4CF6C40E51">CInternetSession</link>
        </definedTerm>
        <definition>
          <para>Creates and initializes a single or several simultaneous Internet sessions and, if necessary, describes your connection to a proxy server.</para>
        </definition>
        <definedTerm> <link xlink:href="bbc3dce7-8398-47f9-b97e-e4fd2d737232">CInterpolatorBase Class</link>
        </definedTerm>
        <definition>
          <para>Implements a callback, which is called by the Animation API when it has to calculate a new value of an animation variable.</para>
        </definition>
        <definedTerm> <link xlink:href="e43d7c67-1157-47f8-817a-804083e8186e">CInvalidArgException</link>
        </definedTerm>
        <definition>
          <para>This class represents an invalid argument exception condition.</para>
        </definition>
        <definedTerm> <link xlink:href="9764D2F4-CB14-4BA8-B799-7F57A55A47C6">CIPAddressCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common IP Address control.</para>
        </definition>
        <definedTerm> <link xlink:href="d364d27e-f512-4b12-9872-c2a17c78ab1f">CJumpList</link>
        </definedTerm>
        <definition>
          <para>The list of shortcuts revealed when you right click on an icon in the task bar.</para>
        </definition>
        <definedTerm> <link xlink:href="4809ece6-89df-4479-8b53-9bf476ee107b">CKeyboardManager</link>
        </definedTerm>
        <definition>
          <para>Manages shortcut key tables for the main frame window and child frame windows.</para>
        </definition>
        <definedTerm> <link xlink:href="d050a562-20f6-4c65-8ce5-ccb3aef1a20e">CKeyFrame Class</link>
        </definedTerm>
        <definition>
          <para>Represents an animation keyframe.</para>
        </definition>
        <definedTerm> <link xlink:href="7fcb2dba-beb8-4933-9f5d-3b7fb1585ef0">CLinearTransition Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a linear transition.</para>
        </definition>
        <definedTerm> <link xlink:href="8f159a1c-8893-4017-951e-09e5758aba7d">CLinearTransitionFromSpeed Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a linear-speed transition.</para>
        </definition>
        <definedTerm> <link xlink:href="D1CD876A-ECCA-42DB-8AC4-9CD327DF0CD4">CLinkCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common SysLink control.</para>
        </definition>
        <definedTerm> <link xlink:href="6F6273C3-C8F6-47F5-AC2A-0A950379AE5D">CList</link>
        </definedTerm>
        <definition>
          <para>Supports ordered lists of nonunique objects accessible sequentially or by value.</para>
        </definition>
        <definedTerm> <link xlink:href="7BA3C699-C286-4CD9-9066-532C41EC05D1">CListBox</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows list box.</para>
        </definition>
        <definedTerm> <link xlink:href="FE08A1CA-4B05-4FF7-A12A-EE4C765A2197">CListCtrl</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the functionality of a "list view control," which displays a collection of items each consisting of an icon (from an image list) and a label.</para>
        </definition>
        <definedTerm> <link xlink:href="7626BDB2-A1B8-4EAB-B631-6743710A8432">CListView</link>
        </definedTerm>
        <definition>
          <para>Simplifies use of the list control and of <link xlink:href="FE08A1CA-4B05-4FF7-A12A-EE4C765A2197">CListCtrl</link>, the class that encapsulates list-control functionality, with MFC's document-view architecture.</para>
        </definition>
        <definedTerm> <link xlink:href="F4320059-AEB4-4EE5-BC2B-25F19D898EF5">CLongBinary</link>
        </definedTerm>
        <definition>
          <para>Simplifies working with very large binary data objects (often called BLOBs, or "binary large objects") in a database.</para>
        </definition>
        <definedTerm> <link xlink:href="640A45AB-0993-4DEF-97EC-42CC78EB10B9">CMap</link>
        </definedTerm>
        <definition>
          <para>A dictionary collection class that maps unique keys to values.</para>
        </definition>
        <definedTerm> <link xlink:href="23CBBAEC-9D64-48F2-92AE-5E24FA64B926">CMapPtrToPtr</link>
        </definedTerm>
        <definition>
          <para>Supports maps of void pointers keyed by void pointers.</para>
        </definition>
        <definedTerm> <link xlink:href="4631C6B6-D49F-49D9-ADC0-1E0491E32D7B">CMapPtrToWord</link>
        </definedTerm>
        <definition>
          <para>Supports maps of 16-bit words keyed by void pointers.</para>
        </definition>
        <definedTerm> <link xlink:href="09653980-B885-4F3A-8594-0AEB7F94C601">CMapStringToOb</link>
        </definedTerm>
        <definition>
          <para>A dictionary collection class that maps unique <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> objects to <unmanagedCodeEntityReference>CObject</unmanagedCodeEntityReference> pointers.</para>
        </definition>
        <definedTerm> <link xlink:href="1AC11143-EB0A-4511-A662-2DF0D1D9005B">CMapStringToPtr</link>
        </definedTerm>
        <definition>
          <para>Supports maps of void pointers keyed by <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> objects.</para>
        </definition>
        <definedTerm> <link xlink:href="B45794C2-FE6B-4EDB-A8CA-FAA03B57B4A8">CMapStringToString</link>
        </definedTerm>
        <definition>
          <para>Supports maps of <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> objects keyed by <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> objects.</para>
        </definition>
        <definedTerm> <link xlink:href="9C9BCD76-456F-4CF9-B03C-DD28B49D5E4F">CMapWordToOb</link>
        </definedTerm>
        <definition>
          <para>Supports maps of <unmanagedCodeEntityReference>CObject</unmanagedCodeEntityReference> pointers keyed by 16-bit words.</para>
        </definition>
        <definedTerm> <link xlink:href="B204D87F-6427-43E1-93E3-A4B1BB41099F">CMapWordToPtr</link>
        </definedTerm>
        <definition>
          <para>Supports maps of void pointers keyed by 16-bit words.</para>
        </definition>
        <definedTerm> <link xlink:href="6D07F5D4-9A3E-4723-9FA5-E65BB669FDD5">CMDIChildWnd</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows multiple document interface (MDI) child window, along with members for managing the window.</para>
        </definition>
        <definedTerm> <link xlink:href="d39fec06-0bd6-4271-917d-35aae3b24d8e">CMDIChildWndEx</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows multiple document interface (MDI) child window. It extends the functionality of <link xlink:href="6d07f5d4-9a3e-4723-9fa5-e65bb669fdd5">CMDIChildWnd</link>. The framework requires this class when an MDI application uses certain MFC classes.</para>
        </definition>
        <definedTerm> <link xlink:href="FA8736E6-511B-4C51-8B4D-EBA78378AEB9">CMDIFrameWnd</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows multiple document interface (MDI) frame window, along with members for managing the window.</para>
        </definition>
        <definedTerm> <link xlink:href="dbcafcb3-9a7a-4f11-9dfe-ba57565c81d0">CMDIFrameWndEx</link>
        </definedTerm>
        <definition>
          <para>Extends the functionality of <link xlink:href="e2220aba-5bf4-4002-b960-fbcafcad01f1">CMDIFrameWnd</link>, a Windows Multiple Document Interface (MDI) frame window.</para>
        </definition>
        <definedTerm> <link xlink:href="988ae1b7-4f7f-4239-b88f-7e28b3291c5e">CMDITabInfo</link>
        </definedTerm>
        <definition>
          <para>Used to pass parameters to <link xlink:href="62C7F189-CE9E-466D-8CF2-D9A7E8006045">CMDIFrameWndEx::EnableMDITabbedGroups</link> method. Set members of this class to control the behavior of MDI tabbed groups.</para>
        </definition>
        <definedTerm> <link xlink:href="20E86515-E465-4F73-B2EA-E49789D63165">CMemFile</link>
        </definedTerm>
        <definition>
          <para>The <link xlink:href="B2EB5757-D499-4E67-B044-DD7D1ABAA0F8">CFile</link>-derived class that supports memory files.</para>
        </definition>
        <definedTerm> <link xlink:href="9AF0ED57-D12A-45CA-82B5-C910A60F7EDF">CMemoryException</link>
        </definedTerm>
        <definition>
          <para>Represents an out-of-memory exception condition.</para>
        </definition>
        <definedTerm> <link xlink:href="40CACFDC-D45C-4EC7-BF28-991C72812499">CMenu</link>
        </definedTerm>
        <definition>
          <para>An encapsulation of the Windows <unmanagedCodeEntityReference>HMENU</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="ab7ca272-ce42-4678-95f7-6ad75038f5a0">CMenuTearOffManager</link>
        </definedTerm>
        <definition>
          <para>Manages tear-off menus. A tear-off menu is a menu on the menu bar. The user can remove a tear-off menu from the menu bar, causing the tear-off menu to float.</para>
        </definition>
        <definedTerm> <link xlink:href="FFCE60FA-4181-4D46-9832-25E46FAD4DB4">CMetaFileDC</link>
        </definedTerm>
        <definition>
          <para>Implements a Windows metafile, which contains a sequence of graphics device interface (GDI) commands that you can replay to create a desired image or text.</para>
        </definition>
        <definedTerm> <link xlink:href="d140fbf7-23db-45ea-a63e-414a5ec7b3d5">CMFCAcceleratorKey</link>
        </definedTerm>
        <definition>
          <para>Helper class that implements virtual key mapping and formatting.</para>
        </definition>
        <definedTerm> <link xlink:href="89fb8e62-596e-4e71-8c9a-32740347aaab">CMFCAcceleratorKeyAssignCtrl Class</link>
        </definedTerm>
        <definition>
          <para>Extends the <link xlink:href="b1533c30-7f10-4663-88d3-8b7f2c9f7024">CEdit Class</link> to support extra system buttons such as ALT, CONTROL, and SHIFT.</para>
        </definition>
        <definedTerm> <link xlink:href="c80e6b8b-25ca-4d12-9d27-457731028ab0">CMFCAutoHideButton</link>
        </definedTerm>
        <definition>
          <para>A button that displays or hides a <link xlink:href="e2495f4c-765f-48f9-a2e2-e45e47608d91">CDockablePane Class</link> that is configured to hide.</para>
        </definition>
        <definedTerm> <link xlink:href="7270c55f-6f6e-4dd2-b0d2-291afeac3882">CMFCBaseTabCtrl</link>
        </definedTerm>
        <definition>
          <para>Implements the base functionality for tabbed windows.</para>
        </definition>
        <definedTerm> <link xlink:href="4b32f57c-7a53-4734-afb9-d47e3359f62e">CMFCButton</link>
        </definedTerm>
        <definition>
          <para>Adds functionality to the <link xlink:href="cdc76d5b-31da-43c5-bc43-fde4cb39de5b">CButton</link> class such as aligning button text, combining button text and an image, selecting a cursor, and specifying a tool tip.</para>
        </definition>
        <definedTerm> <link xlink:href="acb54d5f-14ff-4c96-aeb3-7717cf566d9a">CMFCCaptionBars</link>
        </definedTerm>
        <definition>
          <para>Control bar that can display three elements: a button, a text label, and a bitmap. It can only display one element of each type at a time. You can align each element to the left or right edges of the control or to the center. You can also apply a flat or 3D style to the top and bottom borders of the caption bar.</para>
        </definition>
        <definedTerm> <link xlink:href="c5774b38-c0dd-414a-9ede-3b2f78f233ec">CMFCCaptionButton</link>
        </definedTerm>
        <definition>
          <para>Implements a button that is displayed on the caption bar for a docking pane or a mini-frame window. Typically, the framework creates caption buttons automatically.</para>
        </definition>
        <definedTerm> <link xlink:href="4756ee40-25a5-4cee-af7f-acab7993d1c7">CMFCColorBar</link>
        </definedTerm>
        <definition>
          <para>Represents a docking control bar that can select colors in a document or application.</para>
        </definition>
        <definedTerm> <link xlink:href="9fdf34ae-4cc5-4c5e-9d89-1c50e8a73699">CMFCColorButton</link>
        </definedTerm>
        <definition>
          <para>The <unmanagedCodeEntityReference>CMFCColorButton</unmanagedCodeEntityReference> and <link xlink:href="4756EE40-25A5-4CEE-AF7F-ACAB7993D1C7">CMFCColorBar</link> classes are used together to implement a color picker control.</para>
        </definition>
        <definedTerm> <link xlink:href="235bbbbc-a3b1-46e0-801b-fb55093ec579">CMFCColorDialog</link>
        </definedTerm>
        <definition>
          <para>Represents a color selection dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="42685704-e994-4f7b-9553-62283c27b754">CMFCColorMenuButton</link>
        </definedTerm>
        <definition>
          <para>Supports a menu command or a toolbar button that starts a color picker dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="b9bbd03c-beb0-4b55-9765-9985fd05e5dc">CMFCColorPickerCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides functionality for a control that is used to select colors.</para>
        </definition>
        <definedTerm> <link xlink:href="a53c60aa-9607-485b-b826-ec64962075f6">CMFCDesktopAlertDialog</link>
        </definedTerm>
        <definition>
          <para>Used together with the <link xlink:href="73a2dd7b-ea84-4ae2-9830-7cf6e8dd2425">CMFCDesktopAlertWnd Class</link> to display a custom dialog in a popup window.</para>
        </definition>
        <definedTerm> <link xlink:href="73a2dd7b-ea84-4ae2-9830-7cf6e8dd2425">CMFCDesktopAlertWnd</link>
        </definedTerm>
        <definition>
          <para>Implements the functionality of a modeless dialog box which appears on the screen to inform the user about an event.</para>
        </definition>
        <definedTerm> <link xlink:href="5c9bb84e-6c96-4748-8e74-6951b6ae8e84">CMFCDesktopAlertWndInfo</link>
        </definedTerm>
        <definition>
          <para>Used with the <link xlink:href="73a2dd7b-ea84-4ae2-9830-7cf6e8dd2425">CMFCDesktopAlertWnd Class</link>. It specifies the controls that are displayed if the desktop alert window pops up.</para>
        </definition>
        <definedTerm> <link xlink:href="500cd824-8188-43c2-8754-b7bb46b5648a">CMFCDragFrameImpl</link>
        </definedTerm>
        <definition>
          <para>Draws the drag rectangle that appears when the user drags a pane in the standard dock mode.</para>
        </definition>
        <definedTerm> <link xlink:href="78818ec5-83ce-42fa-a0d4-2d9d5ecc8770">CMFCDropDownToolBar</link>
        </definedTerm>
        <definition>
          <para>A toolbar that appears when the user presses and holds a top-level toolbar button.</para>
        </definition>
        <definedTerm> <link xlink:href="bc9d69e6-bd3e-4c15-9368-e80a504a0ba7">CMFCDropDownToolbarButton</link>
        </definedTerm>
        <definition>
          <para>A type of toolbar button that behaves like a regular button when it is clicked. However, it opens a drop-down toolbar (<link xlink:href="78818EC5-83CE-42FA-A0D4-2D9D5ECC8770">CMFCDropDownToolBar</link> if the user presses and holds the toolbar button down.</para>
        </definition>
        <definedTerm> <link xlink:href="c2df2976-f049-47fc-9cf0-abe3e01948bc">CMFCDynamicLayout</link>
        </definedTerm>
        <definition>
          <para>Specifies how controls in a window are moved and resized as the user resizes the window.</para>
        </definition>
        <definedTerm> <link xlink:href="69cfd886-3d35-4bee-8901-7c88fcf9520f">CMFCEditBrowseCtrl</link>
        </definedTerm>
        <definition>
          <para>Supports the edit browse control, which is an editable text box that optionally contains a browse button. When the user clicks the browse button, the control performs a custom action or displays a standard dialog box that contains a file browser or a folder browser.</para>
        </definition>
        <definedTerm> <link xlink:href="3c833f23-5b88-4d08-9e09-ca6a8aec88bf">CMFCFilterChunkValueImpl Class</link>
        </definedTerm>
        <definition>
          <para>Simplifies both chunk and property value pair logic.</para>
        </definition>
        <definedTerm> <link xlink:href="9a53fb0c-7b45-486d-8187-2a4c723d9fbb">CMFCFontComboBox</link>
        </definedTerm>
        <definition>
          <para>Creates a combo box control that contains a list of fonts.</para>
        </definition>
        <definedTerm> <link xlink:href="f88329b2-d74e-4921-9441-a3bb6536a049">CMFCFontInfo</link>
        </definedTerm>
        <definition>
          <para>Describes the name and other attributes of a font.</para>
        </definition>
        <definedTerm> <link xlink:href="2f5fbf7b-5c75-42db-9216-640b1628f777">CMFCHeaderCtrl</link>
        </definedTerm>
        <definition>
          <para>Supports sorting multiple columns in a header control.</para>
        </definition>
        <definedTerm> <link xlink:href="6a7d08f3-1ec2-4062-9b79-a0c2776b58d1">CMFCImageEditorDialog</link>
        </definedTerm>
        <definition>
          <para>Supports an image editor dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="5feb4942-d636-462d-a162-0104dd320f4e">CMFCKeyMapDialog</link>
        </definedTerm>
        <definition>
          <para>Supports a control that maps commands to keys on the keyboard.</para>
        </definition>
        <definedTerm> <link xlink:href="80f3874d-7cc8-410e-9ff1-62a225f5034b">CMFCLinkCtrl</link>
        </definedTerm>
        <definition>
          <para>Displays a button as a hyperlink and invokes the link's target when the button is clicked.</para>
        </definition>
        <definedTerm> <link xlink:href="50d16aee-138c-4f34-8690-cb75d544ef2e">CMFCListCtrl</link>
        </definedTerm>
        <definition>
          <para>Extends the functionality of <link xlink:href="fe08a1ca-4b05-4ff7-a12a-ee4c765a2197">CListCtrl</link> class by supporting the advanced header control functionality of the <link xlink:href="2f5fbf7b-5c75-42db-9216-640b1628f777">CMFCHeaderCtrl Class</link>.</para>
        </definition>
        <definedTerm> <link xlink:href="13b1a645-2d5d-4c37-8599-16d5003f23a5">CMFCMaskedEdit</link>
        </definedTerm>
        <definition>
          <para>Supports a masked edit control, which validates user input against a mask and displays the validated results according to a template.</para>
        </definition>
        <definedTerm> <link xlink:href="8a3ce4c7-b012-4dc0-b4f8-53c10b4b86b8">CMFCMenuBar</link>
        </definedTerm>
        <definition>
          <para>A menu bar that implements docking.</para>
        </definition>
        <definedTerm> <link xlink:href="53d3d459-1e5a-47c5-8b7f-2e61f6af5187">CMFCMenuButton</link>
        </definedTerm>
        <definition>
          <para>A button that displays a pop-up menu and reports on the user's menu selections.</para>
        </definition>
        <definedTerm> <link xlink:href="2b335f71-ce99-4efd-b103-e65ba43ffc36">CMFCOutlookBar</link>
        </definedTerm>
        <definition>
          <para>A tabbed pane with the visual appearance of the <ui>Navigation Pane</ui> in Microsoft Outlook 2000 or Outlook 2003. The <unmanagedCodeEntityReference>CMFCOutlookBar</unmanagedCodeEntityReference> object contains a <link xlink:href="B1F2B3F7-CC59-49A3-99D8-7FF9B37C044B">CMFCOutlookBarTabCtrl</link> object and a series of tabs. The tabs can be either <link xlink:href="094e2ef3-a118-487e-a4cc-27626108fe08">CMFCOutlookBarPane</link> objects or <unmanagedCodeEntityReference>CWnd</unmanagedCodeEntityReference>-derived objects. To the user, the Outlook bar appears as a series of buttons and a display area. When the user clicks a button, the corresponding control or button pane is displayed.  </para>
        </definition>
        <definedTerm> <link xlink:href="094e2ef3-a118-487e-a4cc-27626108fe08">CMFCOutlookBarPane</link>
        </definedTerm>
        <definition>
          <para>A control derived from <link xlink:href="E7679C01-FB94-44C0-98C6-3AF955292FB5">CMFCToolBar</link> that can be inserted into an Outlook bar (<link xlink:href="2b335f71-ce99-4efd-b103-e65ba43ffc36">CMFCOutlookBar</link>). The Outlook bar pane contains a column of large buttons. The user can scroll up and down the list of buttons if it is larger than the pane. When the user detaches an Outlook bar pane from the Outlook bar, it can float or dock in the main frame window.</para>
        </definition>
        <definedTerm> <link xlink:href="b1f2b3f7-cc59-49a3-99d8-7ff9b37c044b">CMFCOutlookBarTabCtrl</link>
        </definedTerm>
        <definition>
          <para>A tab control that has the visual appearance of the <ui>Navigation Pane</ui> in Microsoft Outlook.</para>
        </definition>
        <definedTerm> <link xlink:href="9555dca1-8c9c-44c9-af72-0659ddad128e">CMFCPopupMenu</link>
        </definedTerm>
        <definition>
          <para>Implements Windows pop-up menu functionality and extends it by adding features such as tear-off menus and tooltips.</para>
        </definition>
        <definedTerm> <link xlink:href="4c93c459-7f70-4240-8c63-280bb811e374">CMFCPopupMenuBar</link>
        </definedTerm>
        <definition>
          <para>A menu bar embedded into a pop-up menu.</para>
        </definition>
        <definedTerm> <link xlink:href="06257fa0-54c9-478d-9d68-c9698c3f93ed">CMFCPreviewCtrlImpl Class</link>
        </definedTerm>
        <definition>
          <para>Implements a window that is placed on a host window provided by the Shell for Rich Preview.</para>
        </definition>
        <definedTerm> <link xlink:href="af37be93-a91e-40a2-9a65-0f3412c6f0f8">CMFCPropertyGridColorProperty</link>
        </definedTerm>
        <definition>
          <para>Supports a property list control item that opens a color selection dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="95877cae-2311-4a2a-9031-0c8c3cf0a5f9">CMFCPropertyGridCtrl</link>
        </definedTerm>
        <definition>
          <para>Supports an editable property grid control that can display properties in alphabetical or hierarchical order.</para>
        </definition>
        <definedTerm> <link xlink:href="2bb8b8b4-47fc-4798-bd5e-dc8ea0b4cd9d">CMFCPropertyGridFileProperty</link>
        </definedTerm>
        <definition>
          <para>Supports a property list control item that opens a file selection dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="83693f33-bbd3-4fcb-a9ad-fa79fcf2ca24">CMFCPropertyGridFontProperty</link>
        </definedTerm>
        <definition>
          <para>Supports a property list control item that opens a font selection dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="36f3fabe-0efe-468b-8a0b-5a7956db38a2">CMFCPropertyGridProperty</link>
        </definedTerm>
        <definition>
          <para>Represents a list item in a property list control.</para>
        </definition>
        <definedTerm> <link xlink:href="d279d7f2-2d81-418d-9f23-6147d6e8df09">CMFCPropertyPage</link>
        </definedTerm>
        <definition>
          <para>Supports the display of pop-up menus on a property page.</para>
        </definition>
        <definedTerm> <link xlink:href="01d93573-9698-440f-a6a4-5bebbee879dc">CMFCPropertySheet</link>
        </definedTerm>
        <definition>
          <para>Supports a property sheet where each property page is denoted by a page tab, a toolbar button, a tree control node, or a list item.</para>
        </definition>
        <definedTerm> <link xlink:href="02a60e29-6224-49c1-9e74-e0a7d9f8d023">CMFCReBar</link>
        </definedTerm>
        <definition>
          <para>Control bar that provides layout, persistence, and state information for rebar controls.</para>
        </definition>
        <definedTerm> <link xlink:href="beb81757-fabd-4641-9130-876ba8505b78">CMFCRibbonApplicationButton</link>
        </definedTerm>
        <definition>
          <para>Implements a special button located in the top-left corner of the application window. When clicked, the button opens a menu that usually contains common <ui>File</ui> commands like <ui>Open</ui>, <ui>Save</ui>, and <ui>Exit</ui>.</para>
        </definition>
        <definedTerm> <link xlink:href="419ea91b-5062-44cc-b0a3-f87d29566f62">CMFCRibbonBaseElement</link>
        </definedTerm>
        <definition>
          <para>Base class for all elements that you can add to a <link xlink:href="A65D06FA-1A28-4CC0-8971-BC9D7C9198FE">ribbon bar</link>. Examples of ribbon elements are ribbon buttons, ribbon check boxes, and ribbon combo boxes.</para>
        </definition>
        <definedTerm> <link xlink:href="732e941c-9504-4b83-a691-d18075965d53">CMFCRibbonButton</link>
        </definedTerm>
        <definition>
          <para>Implements buttons that you can position on ribbon bar elements such as panels, Quick Access Toolbars, and pop-up menus.</para>
        </definition>
        <definedTerm> <link xlink:href="b993d93e-fc1a-472f-a87f-1d7b7b499845">CMFCRibbonButtonsGroup</link>
        </definedTerm>
        <definition>
          <para>Lets you organize a set of ribbon buttons into a group. All buttons in the group are directly adjacent to each other horizontally and enclosed in a border.</para>
        </definition>
        <definedTerm> <link xlink:href="99ba25b6-d060-4fdd-bfab-3c46c22981bb">CMFCRibbonCategory</link>
        </definedTerm>
        <definition>
          <para>Implements a ribbon tab that contains a group of <link xlink:href="51d70749-1140-4386-b103-f14082049ba6">ribbon panels</link>.</para>
        </definition>
        <definedTerm> <link xlink:href="3a6c3891-c8d1-4af0-b954-7b9ab048782a">CMFCRibbonCheckBox</link>
        </definedTerm>
        <definition>
          <para>Implements a check box that you can add to a ribbon panel, Quick Access Toolbar, or popup menu.</para>
        </definition>
        <definedTerm> <link xlink:href="6b4b4ee3-8cc0-41b4-a4eb-93e8847008e1">CMFCRibbonColorButton</link>
        </definedTerm>
        <definition>
          <para>Implements a color button that you can add to a ribbon bar. The ribbon color button displays a drop-down menu that contains one or more color palettes.</para>
        </definition>
        <definedTerm> <link xlink:href="9b29a6a4-cf17-4152-9b13-0bf90784b30d">CMFCRibbonComboBox</link>
        </definedTerm>
        <definition>
          <para>Implements a combo box control that you can add to a ribbon bar, a ribbon panel, or a ribbon popup menu.</para>
        </definition>
        <definedTerm> <link xlink:href="cce2c0a2-8370-4266-997e-f8d0eeb3d616">CMFCRibbonContextCaption</link>
        </definedTerm>
        <definition>
          <para>Implements a colored caption that appears at the top of a ribbon category or a context category.</para>
        </definition>
        <definedTerm> <link xlink:href="9b85f1f2-446b-454e-9af9-104fdad8a897">CMFCRibbonEdit</link>
        </definedTerm>
        <definition>
          <para>Implements an edit control that is positioned on a ribbon.</para>
        </definition>
        <definedTerm> <link xlink:href="33b4db50-df4f-45fa-8f05-2e6e73c31435">CMFCRibbonFontComboBox</link>
        </definedTerm>
        <definition>
          <para>Implements a combo box that contains a list of fonts. You place the combo box on a ribbon panel.</para>
        </definition>
        <definedTerm> <link xlink:href="9734c9c9-981c-4b3f-8c59-264fd41811b4">CMFCRibbonGallery</link>
        </definedTerm>
        <definition>
          <para>Implements Office 2007-style ribbon galleries.</para>
        </definition>
        <definedTerm> <link xlink:href="4d459d9b-8b1a-4371-92f6-dc4ce6cc42c8">CMFCRibbonGalleryMenuButton</link>
        </definedTerm>
        <definition>
          <para>Implements a ribbon menu button that contains ribbon galleries.</para>
        </definition>
        <definedTerm> <link xlink:href="0346c891-83bf-4f20-b8a1-c84cf2aadced">CMFCRibbonLabel</link>
        </definedTerm>
        <definition>
          <para>Implements a non-clickable text label for a ribbon.</para>
        </definition>
        <definedTerm> <link xlink:href="77ae1941-e0ab-4a9d-911e-1752d34c079b">CMFCRibbonLinkCtrl</link>
        </definedTerm>
        <definition>
          <para>Implements a hyperlink that is positioned on a ribbon. The hyperlink opens a Web page when you click it.</para>
        </definition>
        <definedTerm> <link xlink:href="1af78798-5e75-4365-9c81-a54aa5679602">CMFCRibbonMainPanel</link>
        </definedTerm>
        <definition>
          <para>Implements a ribbon panel that displays when you click the <link xlink:href="beb81757-fabd-4641-9130-876ba8505b78">CMFCRibbonApplicationButton</link>.</para>
        </definition>
        <definedTerm> <link xlink:href="7017e963-aeaf-4fe9-b540-e15a7ed41e94">CMFCRibbonMiniToolBar</link>
        </definedTerm>
        <definition>
          <para>Implements a contextual popup toolbar.</para>
        </definition>
        <definedTerm> <link xlink:href="51d70749-1140-4386-b103-f14082049ba6">CMFCRibbonPanel</link>
        </definedTerm>
        <definition>
          <para>Implements a panel that contains a set of ribbon elements. When the panel is drawn, it displays as many elements as possible, given the size of the panel.</para>
        </definition>
        <definedTerm> <link xlink:href="de3d9f2e-ed59-480e-aa7d-08a33ab36c67">CMFCRibbonProgressBar</link>
        </definedTerm>
        <definition>
          <para>Implements a control that visually indicates the progress of a lengthy operation.</para>
        </definition>
        <definedTerm> <link xlink:href="9351ac34-f234-4e42-91e2-763f1989c8ff">CMFCRibbonSlider</link>
        </definedTerm>
        <definition>
          <para>Implements a slider control that you can add to a ribbon bar or ribbon status bar. The ribbon slider control resembles the zoom sliders that appear in Office 2007 applications.</para>
        </definition>
        <definedTerm> <link xlink:href="921eb57f-3b40-49fa-a38c-3f2fb6dc2893">CMFCRibbonStatusBar</link>
        </definedTerm>
        <definition>
          <para>Implements a status bar control that can display ribbon elements.</para>
        </definition>
        <definedTerm> <link xlink:href="5d034c3c-ecca-4267-b88c-0f55a2884dd0">CMFCRibbonStatusBarPane</link>
        </definedTerm>
        <definition>
          <para>Implements a ribbon element that you can add to a ribbon status bar.</para>
        </definition>
        <definedTerm> <link xlink:href="5c42adf7-871d-4239-901e-47ae7fb816fc">CMFCRibbonUndoButton</link>
        </definedTerm>
        <definition>
          <para>Implements a split button<?Comment MM: People should know what this is. 2009-06-23T15:02:00Z  Id='1?>, a small button with a downward pointing triangle on the rightmost part of the main button<?CommentEnd Id='1'
    ?>. Users can click the triangle to display a drop-down list of their most recently performed actions. Users can then select one or more actions from the drop-down list. However, if the user clicks the button, only the last (the most recently added) action on the drop-down list is undone. You should populate the list with <?Comment MM: Action is an abstract entity that a user performs. What exactly are you populating the list with? 2009-06-23T15:02:00Z  Id='2?>actions <?CommentEnd Id='2'
    ?>as the user performs them.</para>
        </definition>
        <definedTerm> <link xlink:href="ad472958-5586-4c50-aadf-1844c30bf6e7">CMFCShellListCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides Windows list control functionality and expands it by including the ability to display a list of shell items.</para>
        </definition>
        <definedTerm> <link xlink:href="3d1da715-9554-4ed7-968c-055c48146267">CMFCShellTreeCtrl</link>
        </definedTerm>
        <definition>
          <para>Extends <link xlink:href="96e20031-6161-4143-8c12-8d1816c66d90">CTreeCtrl Class</link> functionality by displaying a hierarchy of Shell items.</para>
        </definition>
        <definedTerm> <link xlink:href="8773f259-4d3f-4bca-a71c-09e0c71bc843">CMFCSpinButtonCtrl</link>
        </definedTerm>
        <definition>
          <para>Supports a visual manager that draws a spin button control.</para>
        </definition>
        <definedTerm> <link xlink:href="f2960d1d-f4ed-41e8-bd99-0382b2f8d88e">CMFCStatusBar</link>
        </definedTerm>
        <definition>
          <para>Implements a status bar similar to the <unmanagedCodeEntityReference>CStatusBar</unmanagedCodeEntityReference> class. However, the <unmanagedCodeEntityReference>CMFCStatusBar</unmanagedCodeEntityReference> class has features not offered by the <unmanagedCodeEntityReference>CStatusBar</unmanagedCodeEntityReference> class, such as the ability to display images, animations, and progress bars; and the ability to respond to mouse double-clicks.</para>
        </definition>
        <definedTerm> <link xlink:href="d441385d-2c72-4203-96fa-deae2273da35">CMFCTabCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides functionality for a tab control. The tab control displays a dockable window with flat or three-dimensional tabs at its top or bottom. The tabs can display text and an image and can change color when active.</para>
        </definition>
        <definedTerm> <link xlink:href="9c3b3fb9-1497-4d59-932b-0da9348dd5e2">CMFCTabToolTipInfo</link>
        </definedTerm>
        <definition>
          <para>Provides information about the MDI tab that the user is hovering over.</para>
        </definition>
        <definedTerm> <link xlink:href="b456328e-2525-4642-b78b-9edd1a1a7d3f">CMFCTasksPane</link>
        </definedTerm>
        <definition>
          <para>Implements a list of clickable items (tasks).</para>
        </definition>
        <definedTerm> <link xlink:href="c5a7513b-cd8f-4e2e-b16f-650e1fe30954">CMFCTasksPaneTask</link>
        </definedTerm>
        <definition>
          <para>Helper class that represents tasks for the task pane control (<link xlink:href="b456328e-2525-4642-b78b-9edd1a1a7d3f">CMFCTasksPane</link>). The task object represents an item in the task group (<link xlink:href="2111640b-a46e-4b27-b033-29e88632b86a">CMFCTasksPaneTaskGroup</link>). Each task can have a command that the framework executes when a user clicks on the task and an icon that appears to the left of the task name.</para>
        </definition>
        <definedTerm> <link xlink:href="2111640b-a46e-4b27-b033-29e88632b86a">CMFCTasksPaneTaskGroup</link>
        </definedTerm>
        <definition>
          <para>Helper class used by the <link xlink:href="b456328e-2525-4642-b78b-9edd1a1a7d3f">CMFCTasksPane</link> control. Objects of type <unmanagedCodeEntityReference>CMFCTasksPaneTaskGroup</unmanagedCodeEntityReference> represent a <newTerm>task group</newTerm>. The task group is a list of items that the framework displays in a separate box that has a collapse button. The box can have an optional caption (group name). If a group is collapsed, the list of tasks is not visible.</para>
        </definition>
        <definedTerm> <link xlink:href="e7679c01-fb94-44c0-98c6-3af955292fb5">CMFCToolBar</link>
        </definedTerm>
        <definition>
          <para>Resembles <link xlink:href="e868da26-5e07-4607-9651-e2f863ad9059">CToolBar</link>, but provides additional support for user interface features. These include flat toolbars, toolbars with hot images, large icons, pager buttons, locked toolbars, rebar controls, text under images, background images, and tabbed toolbars. The <unmanagedCodeEntityReference>CMFCToolBar</unmanagedCodeEntityReference> class also contains built-in support for user customization of toolbars and menus, drag-and-drop between toolbars and menus, combo box buttons, edit box buttons, color pickers, and roll-up buttons.</para>
        </definition>
        <definedTerm> <link xlink:href="d4e50518-9ffc-406f-9996-f79e5cd38155">CMFCToolBarImages</link>
        </definedTerm>
        <definition>
          <para>Manages toolbar images loaded from application resources or from files.</para>
        </definition>
        <definedTerm> <link xlink:href="6dc84482-eaaa-491f-aa5d-dd7a57886b46">CMFCToolBarInfo</link>
        </definedTerm>
        <definition>
          <para>Contains the resource IDs of toolbar images in various states. <unmanagedCodeEntityReference>CMFCToolBarInfo</unmanagedCodeEntityReference> is a helper class that is used as a parameter of the <link xlink:href="0C3A57BF-B137-49B4-B1A2-B41A65994DFB">CMFCToolBar::LoadToobarEx</link> method.</para>
        </definition>
        <definedTerm> <link xlink:href="cfa50176-7e4b-4527-9904-86a1b48fc1bc">CMFCToolBarMenuButton</link>
        </definedTerm>
        <definition>
          <para>A toolbar button that contains a pop-up menu.</para>
        </definition>
        <definedTerm> <link xlink:href="78e2cddd-4f13-4097-afc3-1ad646a113f1">CMFCToolBarsCustomizeDialog</link>
        </definedTerm>
        <definition>
          <para>A modeless tab dialog box (<link xlink:href="8461ccff-d14f-46e0-a746-42ad642ef94e">CPropertySheet</link>) that enables the user to customize the toolbars, menus, keyboard shortcuts, user-defined tools, and visual style in an application. Typically, the user accesses this dialog box by selecting <ui>Customize</ui> from the <ui>Tools</ui> menu.</para>
        </definition>
        <definedTerm> <link xlink:href="9fbfcfb1-a8ab-417f-ae29-9a9ca85ee58f">CMFCToolTipCtrl</link>
        </definedTerm>
        <definition>
          <para>An extended tooltip implementation based on the <link xlink:href="8973f70c-b73a-46c7-908d-758f364b9a97">CToolTipCtrl Class</link>. A tooltip based on the <unmanagedCodeEntityReference>CMFCToolTipCtrl</unmanagedCodeEntityReference> class can display an icon, a label, and a description. You can customize its visual appearance by using a gradient fill, custom text and border colors, bold text, rounded corners, or a balloon style.</para>
        </definition>
        <definedTerm> <link xlink:href="f9d3d7f8-1f08-4342-a7b2-683860e5d2a5">CMFCToolTipInfo</link>
        </definedTerm>
        <definition>
          <para>Stores information about the visual appearance of tooltips.</para>
        </definition>
        <definedTerm> <link xlink:href="beed80f7-36a2-4d64-9f09-e807cfefc3fe">CMFCVisualManager</link>
        </definedTerm>
        <definition>
          <para>Provides support for changing the appearance of your application at a global level. The <unmanagedCodeEntityReference>CMFCVisualManager</unmanagedCodeEntityReference> class works together with a class that provides instructions to draw the GUI controls of your application using a consistent style. These other classes are referred to as visual managers and they inherit from <unmanagedCodeEntityReference>CMFCBaseVisualManager</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="115482cd-e349-450a-8dc4-c6023d092aab">CMFCVisualManagerOffice2003</link>
        </definedTerm>
        <definition>
          <para>Gives an application a Microsoft Office 2003 appearance.</para>
        </definition>
        <definedTerm> <link xlink:href="fb687c74-6d08-4c72-8acf-27f75dda6d6b">CMFCVisualManagerOffice2007</link>
        </definedTerm>
        <definition>
          <para>Gives an application a Microsoft Office 2007 appearance.</para>
        </definition>
        <definedTerm> <link xlink:href="ea39b9ae-327e-4a51-bce7-dc84c78f005b">CMFCVisualManagerVS2005</link>
        </definedTerm>
        <definition>
          <para>Gives an application a Microsoft Visual Studio 2005 appearance.</para>
        </definition>
        <definedTerm> <link xlink:href="568b6e9e-8e67-4477-9a3d-2981cbd09861">CMFCVisualManagerWindows</link>
        </definedTerm>
        <definition>
          <para>Mimics the appearance of Microsoft Windows XP or Microsoft Vista when the user selects a Windows XP or Vista theme.</para>
        </definition>
        <definedTerm> <link xlink:href="e8d87df1-0c09-4b58-8ade-4e911f796e42">CMFCVisualManagerWindows7</link>
        </definedTerm>
        <definition>
          <para>Gives an application the appearance of a <token>win7</token> application.</para>
        </definition>
        <definedTerm> <link xlink:href="35b4b0db-33c4-4b22-94d8-5e3396341340">CMFCWindowsManagerDialog</link>
        </definedTerm>
        <definition>
          <para>Enables a user to manage MDI child windows in a MDI application.</para>
        </definition>
        <definedTerm> <link xlink:href="B8F534ED-0532-4D8E-9657-5595CF677749">CMiniFrameWnd</link>
        </definedTerm>
        <definition>
          <para>Represents a half-height frame window typically seen around floating toolbars.</para>
        </definition>
        <definedTerm> <link xlink:href="87BE5966-F4F7-4235-BCE2-1FA39E9417DE">CMonikerFile</link>
        </definedTerm>
        <definition>
          <para>Represents a stream of data (<externalLink><linkText>IStream</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/aa380034</linkUri></externalLink>) named by an <externalLink><linkText>IMoniker</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/ms679705</linkUri></externalLink>.</para>
        </definition>
        <definedTerm> <link xlink:href="A42F6BD6-AB5C-4335-82F8-839982FC64A2">CMonthCalCtrl</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the functionality of a month calendar control.</para>
        </definition>
        <definedTerm> <link xlink:href="a4d05017-4e44-4a40-8b57-4ece0de20481">CMouseManager</link>
        </definedTerm>
        <definition>
          <para>Lets a user associate different commands with a particular <link xlink:href="9cff3c56-7564-416b-b9a4-71a9254ed755">CView</link> object when the user double-clicks inside that view.</para>
        </definition>
        <definedTerm> <link xlink:href="5B8AA328-E461-41D0-B388-00594535E119">CMultiDocTemplate</link>
        </definedTerm>
        <definition>
          <para>Defines a document template that implements the multiple document interface (MDI).</para>
        </definition>
        <definedTerm> <link xlink:href="C5B7C78B-1F81-4387-B7DD-2C813C5B6B61">CMultiLock</link>
        </definedTerm>
        <definition>
          <para>Represents the access-control mechanism used in controlling access to resources in a multithreaded program.</para>
        </definition>
        <definedTerm> <link xlink:href="971ACCC1-824D-4DF4-B4C1-B1A20E0F7E4F">CMultiPageDHtmlDialog</link>
        </definedTerm>
        <definition>
          <para>A multipage dialog displays multiple HTML pages sequentially and handles the events from each page.</para>
        </definition>
        <definedTerm> <link xlink:href="989a548e-0d70-46b7-a513-8cf740e1be3e">CMultiPaneFrameWnd</link>
        </definedTerm>
        <definition>
          <para>Extends <link xlink:href="EA3423A3-2763-482E-B763-817036DED10D">CPaneFrameWnd</link>. It can support multiple panes. Instead of a single embedded handle to a control bar, <unmanagedCodeEntityReference>CMultiPaneFrameWnd</unmanagedCodeEntityReference> contains a <link xlink:href="3D974C15-A62F-4648-BB5B-CC31AB7950AF">CPaneContainerManager</link> object that enables the user to dock one <unmanagedCodeEntityReference>CMultiPaneFrameWnd</unmanagedCodeEntityReference> to another and dynamically create multiple floating, tabbed windows.</para>
        </definition>
        <definedTerm> <link xlink:href="6330C050-4F01-4195-A099-2029B92F8CF1">CMutex</link>
        </definedTerm>
        <definition>
          <para>Represents a mutex, which is a synchronization object that allows one thread mutually exclusive access to a resource.</para>
        </definition>
        <definedTerm> <link xlink:href="cb4c6aca-3f49-4b52-b76c-65f57096155b">CNetAddressCtrl</link>
        </definedTerm>
        <definition>
          <para>The <unmanagedCodeEntityReference>CNetAddressCtrl</unmanagedCodeEntityReference> class represents the network address control, which you can use to input and validate the format of IPv4, IPv6, and named DNS addresses.</para>
        </definition>
        <definedTerm> <link xlink:href="E517391B-EB94-4C39-AE32-87B45BF7D624">CNotSupportedException</link>
        </definedTerm>
        <definition>
          <para>Represents an exception that is the result of a request for an unsupported feature.</para>
        </definition>
        <definedTerm> <link xlink:href="27894EFD-2370-4776-9ED9-24A98492AF17">CObArray</link>
        </definedTerm>
        <definition>
          <para>Supports arrays of <unmanagedCodeEntityReference>CObject</unmanagedCodeEntityReference> pointers.</para>
        </definition>
        <definedTerm> <link xlink:href="95E9ACD3-D9EB-4AC0-B52B-CA4A501A7A3A">CObject</link>
        </definedTerm>
        <definition>
          <para>The principal base class for the Microsoft Foundation Class Library.</para>
        </definition>
        <definedTerm> <link xlink:href="80699C93-33D8-4F8B-B8CF-7B58AEAB64CA">CObList</link>
        </definedTerm>
        <definition>
          <para>Supports ordered lists of non-unique <unmanagedCodeEntityReference>CObject</unmanagedCodeEntityReference> pointers accessible sequentially or by pointer value.</para>
        </definition>
        <definedTerm> <link xlink:href="7D47AEED-D1AB-48E3-B4CF-D429718E370A">COccManager</link>
        </definedTerm>
        <definition>
          <para>Manages various custom control sites; implemented by <unmanagedCodeEntityReference>COleControlContainer</unmanagedCodeEntityReference> and <unmanagedCodeEntityReference>COleControlSite</unmanagedCodeEntityReference> objects.</para>
        </definition>
        <definedTerm> <link xlink:href="C881A532-9672-4C41-B51B-5CE4A7246A6B">COleBusyDialog</link>
        </definedTerm>
        <definition>
          <para>Used for the OLE Server Not Responding or Server Busy dialog boxes.</para>
        </definition>
        <definedTerm> <link xlink:href="8D6E131B-DDBB-4DFF-A432-F239EFDA8E3D">COleChangeIconDialog</link>
        </definedTerm>
        <definition>
          <para>Used for the OLE Change Icon dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="D0E08BE7-21EF-45E1-97AF-FE27D99E3BAC">COleChangeSourceDialog</link>
        </definedTerm>
        <definition>
          <para>Used for the OLE Change Source dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="7F571B7C-2758-4839-847A-0CF1EF643128">COleClientItem</link>
        </definedTerm>
        <definition>
          <para>Defines the container interface to OLE items.</para>
        </definition>
        <definedTerm> <link xlink:href="A2D5CE08-6657-45D3-8673-2A9F32D50EEC">COleCmdUI</link>
        </definedTerm>
        <definition>
          <para>Implements a method for MFC to update the state of user-interface objects related to the <unmanagedCodeEntityReference>IOleCommandTarget</unmanagedCodeEntityReference>-driven features of your application.</para>
        </definition>
        <definedTerm> <link xlink:href="53E95299-38E8-447B-9C5F-A381D27F5123">COleControl</link>
        </definedTerm>
        <definition>
          <para>A powerful base class for developing OLE controls.</para>
        </definition>
        <definedTerm> <link xlink:href="F7CE9246-0FB7-4F07-A83A-6C2390D0FDF8">COleControlContainer</link>
        </definedTerm>
        <definition>
          <para>Acts as a control container for ActiveX controls.</para>
        </definition>
        <definedTerm> <link xlink:href="0721724D-D4AF-4EDA-AD34-5A2B27810DD4">COleControlModule</link>
        </definedTerm>
        <definition>
          <para>The base class from which you derive an OLE control module object.</para>
        </definition>
        <definedTerm> <link xlink:href="43970644-5EAB-434A-8BA6-56D144FF1E3F">COleControlSite</link>
        </definedTerm>
        <definition>
          <para>Provides support for custom client-side control interfaces.</para>
        </definition>
        <definedTerm> <link xlink:href="A7C57714-31E8-4B78-834D-8DDD1B856A1C">COleConvertDialog</link>
        </definedTerm>
        <definition>
          <para>For more information, see the <externalLink><linkText>OLEUICONVERT</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/ms686657</linkUri></externalLink> structure in the <token>winSDK</token>.</para>
        </definition>
        <definedTerm> <link xlink:href="3A36E345-303F-46FB-A57C-858274378A8D">COleCurrency</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the <unmanagedCodeEntityReference>CURRENCY</unmanagedCodeEntityReference> data type of OLE automation.</para>
        </definition>
        <definedTerm> <link xlink:href="D1CC84BE-2E1C-4BB3-A8A0-565EB08AAA34">COleDataObject</link>
        </definedTerm>
        <definition>
          <para>Used in data transfers for retrieving data in various formats from the Clipboard, through drag and drop, or from an embedded OLE item.</para>
        </definition>
        <definedTerm> <link xlink:href="02C8EE7D-8E10-4463-8613-BB2A0305CA69">COleDataSource</link>
        </definedTerm>
        <definition>
          <para>Acts as a cache into which an application places the data that it will offer during data transfer operations, such as Clipboard or drag-and-drop operations.</para>
        </definition>
        <definedTerm> <link xlink:href="98612427-C4C9-4760-B7E1-85B17448ADD9">COleDBRecordView</link>
        </definedTerm>
        <definition>
          <para>A view that displays database records in controls.</para>
        </definition>
        <definedTerm> <link xlink:href="B1ED0ACA-3914-4B00-AF34-4A4FB491AEC7">COleDialog</link>
        </definedTerm>
        <definition>
          <para>Provides functionality common to dialog boxes for OLE.</para>
        </definition>
        <definedTerm> <link xlink:href="3ED98DAF-CDC7-4374-8A0C-CF695A8D3657">COleDispatchDriver</link>
        </definedTerm>
        <definition>
          <para>Implements the client side of OLE automation.</para>
        </definition>
        <definedTerm> <link xlink:href="0E95C8BE-E21A-490C-99EC-181C6A9A26D0">COleDispatchException</link>
        </definedTerm>
        <definition>
          <para>Handles exceptions specific to the OLE <unmanagedCodeEntityReference>IDispatch</unmanagedCodeEntityReference> interface, which is a key part of OLE automation.</para>
        </definition>
        <definedTerm> <link xlink:href="D150D306-8FD3-4831-B06D-AFBE71D8FC9B">COleDocObjectItem</link>
        </definedTerm>
        <definition>
          <para>Implements Active document containment.</para>
        </definition>
        <definedTerm> <link xlink:href="DC2ECB99-03E1-44C7-BB69-48056DD1B672">COleDocument</link>
        </definedTerm>
        <definition>
          <para>The base class for OLE documents that support visual editing.</para>
        </definition>
        <definedTerm> <link xlink:href="D3EECC5F-A70B-4A01-B705-7D2C098EBE17">COleDropSource</link>
        </definedTerm>
        <definition>
          <para>Enables data to be dragged to a drop target.</para>
        </definition>
        <definedTerm> <link xlink:href="A58C9A48-6A93-4357-B078-4594DF258311">COleDropTarget</link>
        </definedTerm>
        <definition>
          <para>Provides the communication mechanism between a window and the OLE libraries.</para>
        </definition>
        <definedTerm> <link xlink:href="2571E9FE-26CC-42F0-9AD9-8AD5B4311EC1">COleException</link>
        </definedTerm>
        <definition>
          <para>Represents an exception condition related to an OLE operation.</para>
        </definition>
        <definedTerm> <link xlink:href="A9EC610B-ABDE-431E-BD01-C40159A66DBB">COleInsertDialog</link>
        </definedTerm>
        <definition>
          <para>Used for the OLE Insert Object dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="24ABB2CB-826C-4DDA-A287-D8A8900A5763">COleIPFrameWnd</link>
        </definedTerm>
        <definition>
          <para>The base for your application's in-place editing window.</para>
        </definition>
        <definedTerm> <link xlink:href="ebff1560-a1eb-4854-af00-95d4a192bd55">COleIPFrameWndEx</link>
        </definedTerm>
        <definition>
          <para>Implements an OLE container that supports MFC. You must derive the in-place frame window class for your application from the <unmanagedCodeEntityReference>COleIPFrameWndEx</unmanagedCodeEntityReference> class, instead of deriving it from the <legacyLink xlink:href="24abb2cb-826c-4dda-a287-d8a8900a5763">COleIPFrameWnd</legacyLink> class.</para>
        </definition>
        <definedTerm> <link xlink:href="9F547F35-2F95-427F-B9C0-85C31940198B">COleLinkingDoc</link>
        </definedTerm>
        <definition>
          <para>The base class for OLE container documents that support linking to the embedded items they contain.</para>
        </definition>
        <definedTerm> <link xlink:href="FB2EB638-2809-46DB-AC74-392A732AFFC7">COleLinksDialog</link>
        </definedTerm>
        <definition>
          <para>Used for the OLE Edit Links dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="B1FD1639-FAC4-4FD0-BF17-15172DEBA13C">COleMessageFilter</link>
        </definedTerm>
        <definition>
          <para>Manages the concurrency required by the interaction of OLE applications.</para>
        </definition>
        <definedTerm> <link xlink:href="AB179C1E-4AF2-44AA-A576-37C48149B427">COleObjectFactory</link>
        </definedTerm>
        <definition>
          <para>Implements the OLE class factory, which creates OLE objects such as servers, automation objects, and documents.</para>
        </definition>
        <definedTerm> <link xlink:href="0E82EF9A-9BBE-457E-8240-42C86A0534F7">COlePasteSpecialDialog</link>
        </definedTerm>
        <definition>
          <para>Used for the OLE Paste Special dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="A54DBC89-1447-4329-BD01-00E98EC9E935">COlePropertiesDialog</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the Windows common OLE Object Properties dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="E9972872-8E6B-4550-905E-D36A274D64DC">COlePropertyPage</link>
        </definedTerm>
        <definition>
          <para>Used to display the properties of a custom control in a graphical interface, similar to a dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="56A708D9-28C5-4EB0-9404-77B688D91C63">COleResizeBar</link>
        </definedTerm>
        <definition>
          <para>A type of control bar that supports resizing of in-place OLE items.</para>
        </definition>
        <definedTerm> <link xlink:href="F45A5224-5F48-40EC-9DDD-287EF9740150">COleSafeArray</link>
        </definedTerm>
        <definition>
          <para>A class for working with arrays of arbitrary type and dimension.</para>
        </definition>
        <definedTerm> <link xlink:href="A9CDD96A-E0AC-43BB-9203-2C29237E965C">COleServerDoc</link>
        </definedTerm>
        <definition>
          <para>The base class for OLE server documents.</para>
        </definition>
        <definedTerm> <link xlink:href="80256DF6-3888-4256-944B-787D4B2E6B0D">COleServerItem</link>
        </definedTerm>
        <definition>
          <para>Provides the server interface to OLE items.</para>
        </definition>
        <definedTerm> <link xlink:href="E4F93698-E17C-4A18-A7C0-4B4DF8EB4D93">COleStreamFile</link>
        </definedTerm>
        <definition>
          <para>Represents a stream of data (<unmanagedCodeEntityReference>IStream</unmanagedCodeEntityReference>) in a compound file as part of OLE Structured Storage.</para>
        </definition>
        <definedTerm> <link xlink:href="47A2887D-8162-4993-A842-A784177C7F5C">COleTemplateServer</link>
        </definedTerm>
        <definition>
          <para>Used for OLE visual editing servers, automation servers, and link containers (applications that support links to embeddings).</para>
        </definition>
        <definedTerm> <link xlink:href="699CA980-52B1-4CF8-9AB1-AC6767AD5B0E">COleUpdateDialog</link>
        </definedTerm>
        <definition>
          <para>Used for a special case of the OLE Edit Links dialog box, which should be used when you need to update only existing linked or embedded objects in a document.</para>
        </definition>
        <definedTerm> <link xlink:href="E1B5CD4A-B066-4B9B-B48B-6215ED52D998">COleVariant</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the <link xlink:href="e305240e-9e11-4006-98cc-26f4932d2118">VARIANT</link> data type.</para>
        </definition>
        <definedTerm> <link xlink:href="65ac58dd-4f5e-4b7e-b15c-e0d435a7e884">CPagerCtrl</link>
        </definedTerm>
        <definition>
          <para>The <unmanagedCodeEntityReference>CPagerCtrl</unmanagedCodeEntityReference> class wraps the Windows pager control, which can scroll into view a contained window that does not fit the containing window.</para>
        </definition>
        <definedTerm> <link xlink:href="049C0AC8-F254-4854-9414-7A8271D1447A">CPageSetupDialog</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the services provided by the Windows common OLE Page Setup dialog box with additional support for setting and modifying print margins.</para>
        </definition>
        <definedTerm> <link xlink:href="7E245BAA-BF9B-403E-A637-7218ADF28FAB">CPaintDC</link>
        </definedTerm>
        <definition>
          <para>A device-context class derived from <link xlink:href="715B3334-CB2B-4C9C-8067-02EB7C66C8B2">CDC</link>.</para>
        </definition>
        <definedTerm> <link xlink:href="8CD95498-53ED-4852-85E1-70E522541114">CPalette</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a Windows color palette.</para>
        </definition>
        <definedTerm> <link xlink:href="5c651a64-3c79-4d94-9676-45f6402a6bc5">CPane</link>
        </definedTerm>
        <definition>
          <para>Enhancement of the <link xlink:href="4d668c55-9b42-4838-97ac-cf2b3000b82c">CControlBar Class</link>. If you are upgrading an existing MFC <?Comment VWH: Upgrading to what? [JTV] Per the discussion with you andMarzena, I'm leaving this as is for now since we don't yet have a way to address this since the final name/release number have not been finalized yet. PLEASE DO NOT DELETE THIS COMMENT!!! 2009-06-23T15:02:00Z  Id='3?>project<?CommentEnd Id='3'
    ?>, you need to replace all occurrences of <unmanagedCodeEntityReference>CControlBar</unmanagedCodeEntityReference> with <unmanagedCodeEntityReference>CPane</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="beb79e08-f611-4d66-ba04-053baa79bf86">CPaneContainer</link>
        </definedTerm>
        <definition>
          <para>Basic component of the docking model implemented by MFC. An object of this class stores pointers to two docking panes or to two instances of <unmanagedCodeEntityReference>CPaneContainer.</unmanagedCodeEntityReference> It also stores a pointer to the divider that separates the panes (or the containers). By nesting containers inside containers, the framework can build a binary tree that represents complex docking layouts. The root of the binary tree is stored in a <link xlink:href="3D974C15-A62F-4648-BB5B-CC31AB7950AF">CPaneContainerManager</link> object.</para>
        </definition>
        <definedTerm> <link xlink:href="3d974c15-a62f-4648-bb5b-cc31ab7950af">CPaneContainerManager</link>
        </definedTerm>
        <definition>
          <para>Manages the storage and display of the current docking layout.</para>
        </definition>
        <definedTerm> <link xlink:href="48a6bb91-4b92-40f5-8907-b3270b146cf6">CPaneDialog</link>
        </definedTerm>
        <definition>
          <para>Supports a modeless, dockable dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="8e828a5d-232f-4127-b8e3-7fa45a7a476e">CPaneDivider</link>
        </definedTerm>
        <definition>
          <para>Divides two panes, divides two groups of panes, or separates a group of panes from the client area of the main frame window.</para>
        </definition>
        <definedTerm> <link xlink:href="ea3423a3-2763-482e-b763-817036ded10d">CPaneFrameWnd</link>
        </definedTerm>
        <definition>
          <para>Implements a mini-frame window that contains one pane. The pane fills the client area of the window.</para>
        </definition>
        <definedTerm> <link xlink:href="1e59b86f-358b-4da0-a4fd-8eaf5e85e00f">CParabolicTransitionFromAcceleration Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a parabolic-acceleration transition.</para>
        </definition>
        <definedTerm> <link xlink:href="93175A3A-D46C-4768-BE8D-863254F97A5F">CPen</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a Windows graphics device interface (GDI) pen.</para>
        </definition>
        <definedTerm> <link xlink:href="A4F59775-704A-41DD-B5BD-2E531C95127A">CPictureHolder</link>
        </definedTerm>
        <definition>
          <para>Implements a Picture property, which lets the user display a picture in your control.</para>
        </definition>
        <definedTerm> <link xlink:href="A6D4DB93-35CC-444D-9221-C3E160F6EDAA">CPoint</link>
        </definedTerm>
        <definition>
          <para>Similar to the Windows <languageKeyword>POINT</languageKeyword> structure.</para>
        </definition>
        <definedTerm> <link xlink:href="5BDB2424-ADF8-433D-A97C-DF11A83BC4E4">CPrintDialog</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the services provided by the Windows common dialog box for printing.</para>
        </definition>
        <definedTerm> <link xlink:href="1D506703-EE1C-44CC-B4CE-4E778FEC26B8">CPrintDialogEx</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the services provided by the Windows 2000 Print property sheet.</para>
        </definition>
        <definedTerm> <link xlink:href="222630F4-1598-4026-8198-51649B1192AB">CProgressCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common progress bar control.</para>
        </definition>
        <definedTerm> <link xlink:href="D9000A21-AA81-4530-85D9-F43432AFB4DC">CPropertyPage</link>
        </definedTerm>
        <definition>
          <para>Represents individual pages of a property sheet, otherwise known as a tab dialog box.</para>
        </definition>
        <definedTerm> <link xlink:href="8461CCFF-D14F-46E0-A746-42AD642EF94E">CPropertySheet</link>
        </definedTerm>
        <definition>
          <para>Represents property sheets, also known as tab dialog boxes.</para>
        </definition>
        <definedTerm> <link xlink:href="ED872180-E770-4942-892A-92139D501FAB">CPropExchange</link>
        </definedTerm>
        <definition>
          <para>Supports the implementation of persistence for your OLE controls.</para>
        </definition>
        <definedTerm> <link xlink:href="C23B87A3-BF84-49D6-A66B-61E999D0938A">CPtrArray</link>
        </definedTerm>
        <definition>
          <para>Supports arrays of void pointers.</para>
        </definition>
        <definedTerm> <link xlink:href="4139A09C-4338-4F42-9EEA-51336120B43C">CPtrList</link>
        </definedTerm>
        <definition>
          <para>Supports lists of void pointers.</para>
        </definition>
        <definedTerm> <link xlink:href="C1AD2720-1D33-4106-8E4E-80AA84F93559">CReBar</link>
        </definedTerm>
        <definition>
          <para>A control bar that provides layout, persistence, and state information for rebar controls.</para>
        </definition>
        <definedTerm> <link xlink:href="154570D7-E48C-425D-8C7E-C64542BCB4CC">CReBarCtrl</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the functionality of a rebar control, which is a container for a child window.</para>
        </definition>
        <definedTerm> <link xlink:href="2dd14f95-d5a2-4461-a7a5-2c6c36a3a165">CRecentDockSiteInfo</link>
        </definedTerm>
        <definition>
          <para>Helper class that stores recent state information for the <link xlink:href="5c651a64-3c79-4d94-9676-45f6402a6bc5">CPane Class</link>.</para>
        </definition>
        <definedTerm> <link xlink:href="A77F0524-7584-4582-849A-7E97B76D186E">CRecentFileList</link>
        </definedTerm>
        <definition>
          <para>Supports control of the most recently used (MRU) file list.</para>
        </definition>
        <definedTerm> <link xlink:href="DD89A21D-EF39-4AAB-891B-1E373D67C855">CRecordset</link>
        </definedTerm>
        <definition>
          <para>Represents a set of records selected from a data source.</para>
        </definition>
        <definedTerm> <link xlink:href="9B4B0897-BD50-4D48-A0B4-F3323F5CCC55">CRecordView</link>
        </definedTerm>
        <definition>
          <para>A view that displays database records in controls.</para>
        </definition>
        <definedTerm> <link xlink:href="DEE4E752-15D6-4DB4-B68F-1AD65B2ED6CA">CRect</link>
        </definedTerm>
        <definition>
          <para>Similar to a Windows <link xlink:href="1B3160DE-64E9-40D1-89EB-AF3E0FD6ACF0">RECT</link> structure.</para>
        </definition>
        <definedTerm> <link xlink:href="99CAA7F2-3C0D-4A42-BBEE-E5D1D342D4EE">CRectTracker</link>
        </definedTerm>
        <definition>
          <para>Enables an item to be displayed, moved, and resized in different fashions.</para>
        </definition>
        <definedTerm> <link xlink:href="30d1607d-68d3-4d14-ac36-fdbd0ef903a1">CRenderTarget Class</link>
        </definedTerm>
        <definition>
          <para>A wrapper for <unmanagedCodeEntityReference>ID2D1RenderTarget</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="AF6AE043-D124-4BFD-B35E-7BB0DB67D289">CResourceException</link>
        </definedTerm>
        <definition>
          <para>Generated when Windows cannot find or allocate a requested resource.</para>
        </definition>
        <definedTerm> <link xlink:href="e89516be-2d07-4885-95a8-fc278f46e3ad">CReversalTransition Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a reversal transition.</para>
        </definition>
        <definedTerm> <link xlink:href="D904DA84-76AA-481E-8780-B09485F49E64">CRgn</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a Windows graphics device interface (GDI) region.</para>
        </definition>
        <definedTerm> <link xlink:href="6C0B4EFE-0FB8-4621-B5E1-FDCB8EC48C3B">CRichEditCntrItem</link>
        </definedTerm>
        <definition>
          <para>With <link xlink:href="BD576B10-4CC0-4050-8F76-E1A0548411E4">CRichEditView</link> and <link xlink:href="C936EC18-D516-49D4-B7FB-C9AA0229EDDC">CRichEditDoc</link>, provides the functionality of the rich edit control within the context of MFC's document view architecture.</para>
        </definition>
        <definedTerm> <link xlink:href="2BE52788-822C-4C27-AAFD-2471231E74EB">CRichEditCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the rich edit control.</para>
        </definition>
        <definedTerm> <link xlink:href="C936EC18-D516-49D4-B7FB-C9AA0229EDDC">CRichEditDoc</link>
        </definedTerm>
        <definition>
          <para>With <link xlink:href="BD576B10-4CC0-4050-8F76-E1A0548411E4">CRichEditView</link> and <link xlink:href="6C0B4EFE-0FB8-4621-B5E1-FDCB8EC48C3B">CRichEditCntrItem</link>, provides the functionality of the rich edit control within the context of MFC's document view architecture.</para>
        </definition>
        <definedTerm> <link xlink:href="BD576B10-4CC0-4050-8F76-E1A0548411E4">CRichEditView</link>
        </definedTerm>
        <definition>
          <para>With <link xlink:href="C936EC18-D516-49D4-B7FB-C9AA0229EDDC">CRichEditDoc</link> and <link xlink:href="6C0B4EFE-0FB8-4621-B5E1-FDCB8EC48C3B">CRichEditCntrItem</link>, provides the functionality of the rich edit control within the context of MFC's document view architecture.</para>
        </definition>
        <definedTerm> <link xlink:href="F3735CA5-73EA-46DC-918B-4D824C9FE47F">CScrollBar</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows scroll-bar control.</para>
        </definition>
        <definedTerm> <link xlink:href="4BA16DAC-1ACB-4BE0-BB55-5FB695B6948D">CScrollView</link>
        </definedTerm>
        <definition>
          <para>A <link xlink:href="9CFF3C56-7564-416B-B9A4-71A9254ED755">CView</link> with scrolling capabilities.</para>
        </definition>
        <definedTerm> <link xlink:href="385FC7E4-8F86-4BE2-85E1-D23B38C12F7F">CSemaphore</link>
        </definedTerm>
        <definition>
          <para>Represents a "semaphore", which is a synchronization object that allows a limited number of threads in one or more processes to access a<?Comment MO: Something missing 2009-06-25T13:56:00Z  Id='4?> <?CommentEnd Id='4'
    ?>Maintains a count of the number of threads currently accessing a specified resource.</para>
        </definition>
        <definedTerm> <link xlink:href="0ea181de-a13e-4b29-b560-7c43838223ff">CSettingsStore</link>
        </definedTerm>
        <definition>
          <para>Wraps Windows API functions, providing an object-oriented interface that you use to access the registry.</para>
        </definition>
        <definedTerm> <link xlink:href="bcd37f40-cfd4-4d17-a5ce-3bfabe995dcc">CSettingsStoreSP</link>
        </definedTerm>
        <definition>
          <para>Helper class that you can use to create instances of the <link xlink:href="0ea181de-a13e-4b29-b560-7c43838223ff">CSettingsStore Class</link>.</para>
        </definition>
        <definedTerm> <link xlink:href="5D000422-9EDE-4318-A8C9-F7412B674F39">CSharedFile</link>
        </definedTerm>
        <definition>
          <para>The <link xlink:href="20E86515-E465-4F73-B2EA-E49789D63165">CMemFile</link>-derived class that supports shared memory files.</para>
        </definition>
        <definedTerm> <link xlink:href="f15c4c1a-6fae-487d-9913-9b7369b33da0">CShellManager</link>
        </definedTerm>
        <definition>
          <para>Implements several methods that enable you to work with pointers to identifier lists (PIDLs).</para>
        </definition>
        <definedTerm> <link xlink:href="be0eb8ef-e5b9-47d6-b0fb-efaff2d1e666">CSimpleException</link>
        </definedTerm>
        <definition>
          <para>This class is a base class for resource-critical MFC exceptions.</para>
        </definition>
        <definedTerm> <link xlink:href="4F3A8212-81EE-48A0-AD22-E0ED7C36A391">CSingleDocTemplate</link>
        </definedTerm>
        <definition>
          <para>Defines a document template that implements the single document interface (SDI).</para>
        </definition>
        <definedTerm> <link xlink:href="7DAE7288-8066-4A3E-85E0-78D28BFC6BC8">CSingleLock</link>
        </definedTerm>
        <definition>
          <para>Represents the access-control mechanism used in controlling access to a resource in a multithreaded program.</para>
        </definition>
        <definedTerm> <link xlink:href="8b66a729-5f10-431a-b055-e3600d0065da">CSinusoidalTransitionFromRange Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a sinusoidal-range transition that has a given range of oscillation.</para>
        </definition>
        <definedTerm> <link xlink:href="cc885f17-b84b-45ee-8f1f-36a8bbb7adad">CSinusoidalTransitionFromVelocity Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a sinusoidal-velocity transition that has an amplitude that is determined by the initial velocity of the animation variable.</para>
        </definition>
        <definedTerm> <link xlink:href="FB2CF85A-0BC1-46F8-892B-309C108B52AE">CSize</link>
        </definedTerm>
        <definition>
          <para>Similar to the Windows <externalLink><linkText>SIZE</linkText><linkUri>http://msdn.microsoft.com/library/windows/desktop/dd145106</linkUri></externalLink> structure, which implements a relative coordinate or position.</para>
        </definition>
        <definedTerm> <link xlink:href="DD12B084-4EDA-4550-A810-8F3CFB06B871">CSliderCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common slider control.</para>
        </definition>
        <definedTerm> <link xlink:href="cab04f38-4bc1-4378-9337-c56fc87fbd68">CSmartDockingInfo</link>
        </definedTerm>
        <definition>
          <para>Defines the appearance of smart docking markers.</para>
        </definition>
        <definedTerm> <link xlink:href="e1a4b476-6f96-43dd-90db-870a64406b85">CSmoothStopTransition Class</link>
        </definedTerm>
        <definition>
          <para>Encapsulates a smooth-stop transition.</para>
        </definition>
        <definedTerm> <link xlink:href="7F23C081-D24D-42E3-B511-8053CA53D729">CSocket</link>
        </definedTerm>
        <definition>
          <para>Derives from <unmanagedCodeEntityReference>CAsyncSocket</unmanagedCodeEntityReference>, and represents a higher level of abstraction of the Windows Sockets API.</para>
        </definition>
        <definedTerm> <link xlink:href="7924C098-5F72-40D6-989D-42800A47958F">CSocketFile</link>
        </definedTerm>
        <definition>
          <para>A <unmanagedCodeEntityReference>CFile</unmanagedCodeEntityReference> object used for sending and receiving data across a network via Windows Sockets.</para>
        </definition>
        <definedTerm> <link xlink:href="509BFD76-1C5A-4AF6-973F-E133C0B87734">CSpinButtonCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common spin button control.</para>
        </definition>
        <definedTerm> <link xlink:href="6844d0a9-6408-4e44-9b5f-57628ed8bad6">CSplitButton</link>
        </definedTerm>
        <definition>
          <para>Represents a split button control. The split button control performs a default behavior when a user clicks the main part of the button, and displays a drop-down menu when a user clicks the drop-down arrow of the button.</para>
        </definition>
        <definedTerm> <link xlink:href="FD0DE258-6DBE-4552-9E47-A39DE0471D51">CSplitterWnd</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a splitter window, which is a window that contains multiple panes.</para>
        </definition>
        <definedTerm> <link xlink:href="33e5eef3-05e1-4a07-a968-bf9207ce8598">CSplitterWndEx</link>
        </definedTerm>
        <definition>
          <para>Represents a customized splitter window.</para>
        </definition>
        <definedTerm> <link xlink:href="E7C94CD9-5EBD-428A-AA30-B3E51F8EFB95">CStatic</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of a Windows static control.</para>
        </definition>
        <definedTerm> <link xlink:href="A3BDE3DB-E71C-4881-A3CA-1D5481C345BA">CStatusBar</link>
        </definedTerm>
        <definition>
          <para>A control bar with a row of text output panes, or "indicators."</para>
        </definition>
        <definedTerm> <link xlink:href="8504AD38-7B91-4746-AEDE-AC98886EB47B">CStatusBarCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common status bar control.</para>
        </definition>
        <definedTerm> <link xlink:href="88C2274C-4F0E-4327-882A-557BA4B3AE15">CStdioFile</link>
        </definedTerm>
        <definition>
          <para>Represents a C run-time stream file as opened by the run-time function <link xlink:href="E868993F-738C-4920-B5E4-D8F2F41F933D">fopen</link>.</para>
        </definition>
        <definedTerm> <link xlink:href="6C637E06-BBA8-4C08-B0FC-CF8CB067CE34">CStringArray</link>
        </definedTerm>
        <definition>
          <para>Supports arrays of <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> objects.</para>
        </definition>
        <definedTerm> <link xlink:href="310A7EDB-263C-4BD2-AC43-0BFBFDDC5A33">CStringList</link>
        </definedTerm>
        <definition>
          <para>Supports lists of <unmanagedCodeEntityReference>CString</unmanagedCodeEntityReference> objects.</para>
        </definition>
        <definedTerm> <link xlink:href="C62EA6EB-A17B-4E01-AED4-321FC435A5F4">CSyncObject</link>
        </definedTerm>
        <definition>
          <para>A pure virtual class that provides functionality common to the synchronization objects in Win32.</para>
        </definition>
        <definedTerm> <link xlink:href="f4dc5215-b789-4f2d-8c62-477aceda3578">CTabbedPane</link>
        </definedTerm>
        <definition>
          <para>Implements the functionality of a pane with detachable tabs.</para>
        </definition>
        <definedTerm> <link xlink:href="42E4AFF6-46AE-4B2C-BEAA-D1DCE8D82138">CTabCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common tab control.</para>
        </definition>
        <definedTerm> <link xlink:href="8e6ecd9d-d28d-432b-8ec8-0446f0204d52">CTabView</link>
        </definedTerm>
        <definition>
          <para>Simplifies the use of the tab control class (<link xlink:href="8E6ECD9D-D28D-432B-8EC8-0446F0204D52">CMFCTabCtrl</link>) in applications that use MFC's document/view architecture.</para>
        </definition>
        <definedTerm> <link xlink:href="1991ec98-ae56-4483-958b-233809c8c559">CTaskDialog</link>
        </definedTerm>
        <definition>
          <para>A pop-up dialog box that functions like a message box but can display additional information to the user. The <unmanagedCodeEntityReference>CTaskDialog</unmanagedCodeEntityReference> also includes functionality for gathering information from the user.</para>
        </definition>
        <definedTerm> <link xlink:href="E868DA26-5E07-4607-9651-E2F863AD9059">CToolBar</link>
        </definedTerm>
        <definition>
          <para>Control bars that have a row of bitmapped buttons and optional separators.</para>
        </definition>
        <definedTerm> <link xlink:href="8F2F8AD2-05D7-4975-8715-3F2EED795248">CToolBarCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows toolbar common control.</para>
        </definition>
        <definedTerm> <link xlink:href="8973F70C-B73A-46C7-908D-758F364B9A97">CToolTipCtrl</link>
        </definedTerm>
        <definition>
          <para>Encapsulates the functionality of a "tool tip control," a small pop-up window that displays a single line of text describing the purpose of a tool in an application.</para>
        </definition>
        <definedTerm> <link xlink:href="c71779d7-8b6e-47ef-8500-d4552731fe86">CTooltipManager</link>
        </definedTerm>
        <definition>
          <para>Maintains runtime information about tooltips. The <unmanagedCodeEntityReference>CTooltipManager</unmanagedCodeEntityReference> class is instantiated one time per application.</para>
        </definition>
        <definedTerm> <link xlink:href="96E20031-6161-4143-8C12-8D1816C66D90">CTreeCtrl</link>
        </definedTerm>
        <definition>
          <para>Provides the functionality of the Windows common tree view control.</para>
        </definition>
        <definedTerm> <link xlink:href="5DF583A6-D69F-42CA-9D8D-57E04558AFFF">CTreeView</link>
        </definedTerm>
        <definition>
          <para>Simplifies use of the tree control and of <link xlink:href="96E20031-6161-4143-8C12-8D1816C66D90">CTreeCtrl</link>, the class that encapsulates tree-control functionality, with MFC's document-view architecture.</para>
        </definition>
        <definedTerm> <link xlink:href="E3ECDF1A-A889-4156-92DD-DDBD36CCD919">CTypedPtrArray</link>
        </definedTerm>
        <definition>
          <para>Provides a type-safe "wrapper" for objects of class <unmanagedCodeEntityReference>CPtrArray</unmanagedCodeEntityReference> or <unmanagedCodeEntityReference>CObArray</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="C273096E-1756-4340-864B-4A08B674A65E">CTypedPtrList</link>
        </definedTerm>
        <definition>
          <para>Provides a type-safe "wrapper" for objects of class <unmanagedCodeEntityReference>CPtrList</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="9F377385-C6E9-4471-8B40-8FE220C50164">CTypedPtrMap</link>
        </definedTerm>
        <definition>
          <para>Provides a type-safe "wrapper" for objects of the pointer-map classes <unmanagedCodeEntityReference>CMapPtrToPtr</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>CMapPtrToWord</unmanagedCodeEntityReference>, <unmanagedCodeEntityReference>CMapWordToPtr</unmanagedCodeEntityReference>, and <unmanagedCodeEntityReference>CMapStringToPtr</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="D71F3D8F-EF9F-4E48-9B69-7782C0E2DDF7">CUIntArray</link>
        </definedTerm>
        <definition>
          <para>Supports arrays of unsigned integers.</para>
        </definition>
        <definedTerm> <link xlink:href="2156BA6D-2CCE-415A-9000-6F02C26FCD7D">CUserException</link>
        </definedTerm>
        <definition>
          <para>Thrown to stop an end-user operation.</para>
        </definition>
        <definedTerm> <link xlink:href="7c287d3e-d012-488d-b4e1-aa0f83f294bb">CUserTool</link>
        </definedTerm>
        <definition>
          <para>Menu item that runs an external application. The <ui>Tools</ui> tab of the <ui>Customize</ui> dialog box (<link xlink:href="78e2cddd-4f13-4097-afc3-1ad646a113f1">CMFCToolBarsCustomizeDialog</link>) enables the user to add user tools, and to specify the name, command, arguments, and initial directory for each user tool.</para>
        </definition>
        <definedTerm> <link xlink:href="bdfa37ae-efca-4616-abb5-9d0dcd2d335b">CUserToolsManager</link>
        </definedTerm>
        <definition>
          <para>Maintains the collection of <link xlink:href="7C287D3E-D012-488D-B4E1-AA0F83F294BB">CMFCUserTool</link> objects in an application. A user tool is a menu item that runs an external application. The <unmanagedCodeEntityReference>CUserToolsManager</unmanagedCodeEntityReference> object enables the user or developer to add new user tools to the application. It supports the execution of the commands associated with user tools, and it also saves information about user tools in the Windows registry.</para>
        </definition>
        <definedTerm> <link xlink:href="9CFF3C56-7564-416B-B9A4-71A9254ED755">CView</link>
        </definedTerm>
        <definition>
          <para>Provides the basic functionality for user-defined view classes.</para>
        </definition>
        <definedTerm> <link xlink:href="c79be7b4-46ed-4af8-a41e-68962782d8ef">CVSListBox</link>
        </definedTerm>
        <definition>
          <para>Supports an editable list control.</para>
        </definition>
        <definedTerm> <link xlink:href="5DFAE2FF-D7B6-4383-B0AD-91E0868C67B3">CWaitCursor</link>
        </definedTerm>
        <definition>
          <para>Provides a one-line way to show a wait cursor, which is usually displayed as an hourglass, while you're doing a lengthy operation.</para>
        </definition>
        <definedTerm> <link xlink:href="E426A3CD-0D15-40D6-BD55-BEAA5FEB2343">CWinApp</link>
        </definedTerm>
        <definition>
          <para>The base class from which you derive a Windows application object.</para>
        </definition>
        <definedTerm> <link xlink:href="a3d3e053-3e22-463f-9444-c73abb1bb9d7">CWinAppEx</link>
        </definedTerm>
        <definition>
          <para>Handles the application state, saves the state to the registry, loads the state from the registry, initializes application managers, and provides links to those same application managers.</para>
        </definition>
        <definedTerm> <link xlink:href="876A3641-4CDE-471C-B0D1-FE58B32AF79C">CWindowDC</link>
        </definedTerm>
        <definition>
          <para>Derived from <unmanagedCodeEntityReference>CDC</unmanagedCodeEntityReference>.</para>
        </definition>
        <definedTerm> <link xlink:href="6406dd7b-fb89-4a18-ac3a-c010d6b6289a">CWinFormsControl</link>
        </definedTerm>
        <definition>
          <para>Provides the basic functionality for hosting of a Windows Forms control.</para>
        </definition>
        <definedTerm> <link xlink:href="e3cec000-a578-448e-b06a-8af256312f61">CWinFormsDialog</link>
        </definedTerm>
        <definition>
          <para>A wrapper for an MFC dialog class that hosts a Windows Forms user control.</para>
        </definition>
        <definedTerm> <link xlink:href="d597e397-6529-469b-88f5-7f65a6b9e895">CWinFormsView</link>
        </definedTerm>
        <definition>
          <para>Provides generic functionality for hosting of a Windows Forms control as an MFC view.</para>
        </definition>
        <definedTerm> <link xlink:href="10CDC294-4057-4E76-AC7C-A8967A89AF0B">CWinThread</link>
        </definedTerm>
        <definition>
          <para>Represents a thread of execution within an application.</para>
        </definition>
        <definedTerm> <link xlink:href="49A832EE-BC34-4126-88B3-BC1D9974F6C4">CWnd</link>
        </definedTerm>
        <definition>
          <para>Provides the base functionality of all window classes in the Microsoft Foundation Class Library.</para>
        </definition>
        <definedTerm> <link xlink:href="2BA2C194-2C6C-40FF-9DB4-E9DBE57E1F57">CWordArray</link>
        </definedTerm>
        <definition>
          <para>Supports arrays of 16-bit words.</para>
        </definition>
      </definitionTable>
    </content>
  </section>
  <section>
    <title>Related Sections</title>
    <content>
      <definitionTable>
        <definedTerm> <link xlink:href="7101CB18-A681-495C-8F2B-069AD20C72F7">MFC Reference</link>
        </definedTerm>
        <definition>
          <para>Contains links to topics about the classes, global functions, global variables, and macros that make up the MFC Library.</para>
        </definition>
      </definitionTable>
    </content>
  </section>
  <relatedTopics />
</developerConceptualDocument>

















