---
title: "Walkthrough: Adding a D2D Object to an MFC Project | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC, D2D"
  - "D2D [MFC]"
ms.assetid: dda36c33-c231-4da6-a62f-72d69a12b6dd
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Walkthrough: Adding a D2D Object to an MFC Project
This walkthrough teaches how to add a basic Direct2D (D2D) object to a Visual C++, Microsoft Foundation Class Library (MFC) project, and then build the project into an application that prints "Hello, world" on a gradient background.  
  
 The walkthrough shows how to accomplish these tasks:  
  
-   Create an MFC application.  
  
-   Create a solid-color brush and a linear-gradient brush.  
  
-   Modify the gradient brush so that it will change appropriately when the window is resized.  
  
-   Implement a D2D drawing handler.  
  
-   Verify the results.  
  
 [!INCLUDE[note_settings_general](../mfc/includes/note_settings_general_md.md)]  
  
## Prerequisites  
 To complete this walkthrough, you must have Visual Studio.  
  
### To create an MFC application  
  
1.  On the **File** menu, point to **New** and then click **Project**.  
  
2.  In the **New Project** dialog box, in the left pane under **Installed Templates**, expand **Visual C++** and then select **MFC**. In the middle pane, select **MFC Application**. In the **Name** box, type `MFCD2DWalkthrough`. Click **OK**.  
  
3.  In the **MFC Application Wizard**, click **Finish** without changing any settings.  
  
### To create a solid-color brush and a linear-gradient brush  
  
1.  In **Solution Explorer**, in the **MFCD2DWalkthrough** project, in the **Header Files** folder, open MFCD2DWalkthroughView.h. Add the following code to the `CMFCD2DWalkthroughView` class to create three data variables.  
  
 ```  
    CD2DTextFormat* m_pTextFormat;  
    CD2DSolidColorBrush* m_pBlackBrush;  
    CD2DLinearGradientBrush* m_pLinearGradientBrush;  
 ```  
  
     Save the file and close it.  
  
2.  In the **Source Files** folder, open MFCD2DWalkthroughView.cpp. In the constructor for the `CMFCD2DWalkthroughView` class, add the following code.  
  
 ``` *// Enable D2D support for this window:  
    EnableD2DSupport();

 *// Initialize D2D resources:  
    m_pBlackBrush = new CD2DSolidColorBrush(GetRenderTarget(),
    D2D1::ColorF(D2D1::ColorF::Black));

 
    m_pTextFormat = new CD2DTextFormat(GetRenderTarget(),
    _T("Verdana"),
    50);

    m_pTextFormat->Get()->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);

 m_pTextFormat->Get()->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);

 
    D2D1_GRADIENT_STOP gradientStops[2];  
 
    gradientStops[0].color = D2D1::ColorF(D2D1::ColorF::White);

    gradientStops[0].position = 0.f;  
    gradientStops[1].color = D2D1::ColorF(D2D1::ColorF::Indigo);

    gradientStops[1].position = 1.f;  
 
    m_pLinearGradientBrush = new CD2DLinearGradientBrush(GetRenderTarget(),   
    gradientStops,
    ARRAYSIZE(gradientStops),  
    D2D1::LinearGradientBrushProperties(D2D1::Point2F(0,
    0),
    D2D1::Point2F(0,
    0)));

 ```  
  
     Save the file and close it.  
  
### To modify the gradient brush so that it will change appropriately when the window is resized  
  
1.  On the **Project** menu, click **Class Wizard**.  
  
2.  In the **MFC Class Wizard**, under **Class name**, select `CMFCD2DWalkthroughView`.  
  
3.  On the **Messages** tab, in the **Messages** box, select `WM_SIZE` and then click **Add Handler**. This action adds the `OnSize` message handler to the `CMFCD2DWalkthroughView` class.  
  
4.  In the **Existing handlers** box, select `OnSize`. Click **Edit Code** to display the `CMFCD2DWalkthroughView::OnSize` method. At the end of the method, add the following code.  
  
 ```  
    m_pLinearGradientBrush->SetEndPoint(CPoint(cx, cy));

 ```  
  
     Save the file and close it.  
  
### To implement a D2D drawing handler  
  
1.  On the **Project** menu, click **Class Wizard**.  
  
2.  In the **MFC Class Wizard**, under **Class name**, select `CMFCD2DWalkthroughView`.  
  
3.  On the **Messages** tab, click **Add Custom Message**.  
  
4.  In the **Add Custom Message** dialog box, in the **Custom Windows Message** box, type `AFX_WM_DRAW2D`. In the **Message handler name** box, type `OnDraw2D`. Select the **Registered Message** option and then click **OK**. This action adds a message handler for the `AFX_WM_DRAW2D` message to the `CMFCD2DWalkthroughView` class.  
  
5.  In the **Existing handlers** box, select `OnDraw2D`. Click **Edit Code** to display the `CMFCD2DWalkthroughView::OnDraw2D` method. Use the following code for the `CMFCD2DWalkthroughView::OnDrawD2D` method.  
  
 ```  
    afx_msg LRESULT CMFCD2DWalkthroughView::OnDraw2D(WPARAM wParam,
    LPARAM lParam)  
 {  
    CHwndRenderTarget* pRenderTarget = (CHwndRenderTarget*)lParam;  
    ASSERT_VALID(pRenderTarget);

 
    CRect rect;  
    GetClientRect(rect);

 
    pRenderTarget->FillRectangle(rect,
    m_pLinearGradientBrush);

    pRenderTarget->DrawText(_T("Hello,
    World!"),
    rect,
    m_pBlackBrush,
    m_pTextFormat);

 
    return TRUE;  
 }  
 ```  
  
     Save the file and close it.  
  
### To verify the results  
  
1.  Build and run the application. It should have a gradient rectangle that changes when you resize the window. “Hello World!” should be displayed in the center of the rectangle.  
  
## See Also  
 [Walkthroughs](../mfc/walkthroughs-mfc.md)

