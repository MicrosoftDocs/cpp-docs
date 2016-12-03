---
title: "Walkthrough: Updating the MFC Scribble Application (Part 2) | Microsoft Docs"
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
  - "walkthroughs [C++]"
ms.assetid: 602df5c2-17d4-4cd9-8cf6-dff652c4cae5
caps.latest.revision: 36
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
# Walkthrough: Updating the MFC Scribble Application (Part 2)
[Part 1](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md) of this walkthrough showed how to add an Office Fluent Ribbon to the classic Scribble application. This part shows how to add ribbon panels and controls that users can use instead of menus and commands.  
  
## Prerequisites  
 [Visual C++ Samples](../visual-cpp-samples.md)  
  
##  <a name="top"></a> Sections  
 This part of the walkthrough has the following sections:  
  
- [Adding New Panels to the Ribbon](#addnewpanel)  
  
- [Adding a Help Panel to the Ribbon](#addhelppanel)  
  
- [Adding a Pen Panel to the Ribbon](#addpenpanel)  
  
- [Adding a Color Button to the Ribbon](#addcolorbutton)  
  
- [Adding a Color Member to the Document Class](#addcolormember)  
  
- [Initializing Pens and Saving Preferences](#initpensave)  
  
##  <a name="addnewpanel"></a> Adding New Panels to the Ribbon  
 These steps show how to add a **View** panel that contains two check boxes that control the visibility of the toolbar and the status bar, and also a **Window** panel that contains a vertically oriented split button that controls the creation and arrangement of multiple-document interface (MDI) windows.  
  
#### To add a View panel and Window panel to the ribbon bar  
  
1.  Create a panel named `View`, which has two check boxes that toggle the status bar and toolbar.  
  
    1.  From the **Toolbox**, drag a **Panel** to the **Home** category. Then drag two **Check Boxes** to the panel.  
  
    2.  Click the panel to modify its properties. Change **Caption** to `View`.  
  
    3.  Click the first check box to modify its properties. Change **ID** to `ID_VIEW_TOOLBAR` and **Caption** to `Toolbar`.  
  
    4.  Click the second check box to modify its properties. Change **ID** to `ID_VIEW_STATUS_BAR` and **Caption** to `Status Bar`.  
  
2.  Create a panel named `Window` that has a split button. When a user clicks the split button, a shortcut menu displays three commands that are already defined in the Scribble application.  
  
    1.  From the **Toolbox**, drag a **Panel** to the **Home** category. Then drag a **Button** to the panel.  
  
    2.  Click the panel to modify its properties. Change **Caption** to `Window`.  
  
    3.  Click the button. Change **Caption** to `Windows`, **Keys** to `w`, **Large Image Index** to `1`, and **Split Mode** to `False`. Then click the ellipsis (**...**) next to **Menu Items** to open the **Items Editor** dialog box.  
  
    4.  Click **Add** three times to add three buttons.  
  
    5.  Click the first button and then change **Caption** to `New Window`, and **ID** to `ID_WINDOW_NEW`.  
  
    6.  Click the second button and then change **Caption** to `Cascade`, and **ID** to `ID_WINDOW_CASCADE`.  
  
    7.  Click the third button and then change **Caption** to `Tile`, and **ID** to `ID_WINDOW_TILE_HORZ`.  
  
3.  Save the changes, and then build and run the application. The **View** and **Window** panels should be displayed. Click the buttons to confirm that they function correctly.  
  
 [[Sections](#top)]  
  
##  <a name="addhelppanel"></a> Adding a Help Panel to the Ribbon  
 Now, you can assign two menu items that are defined in the Scribble application to ribbon buttons that are named **Help Topics** and **About Scribble**. The buttons are added to a new panel named **Help**.  
  
#### To add a Help panel  
  
1.  From the **Toolbox**, drag a **Panel** to the **Home** category. Then drag two **Buttons** to the panel.  
  
2.  Click the panel to modify its properties. Change **Caption** to `Help`.  
  
3.  Click the first button. Change **Caption** to `Help Topics`, and **ID** to `ID_HELP_FINDER`.  
  
4.  Click the second button. Change **Caption** to `About Scribble...`, and **ID** to `ID_APP_ABOUT`.  
  
5.  Save the changes, and then build and run the application. A **Help** panel that contains two ribbon buttons should be displayed.  
  
    > [!IMPORTANT]
    >  When you click the **Help Topics** button, the Scribble application opens a compressed HTML (.chm) help file named *your_project_name*.chm. Consequently, if your project is not named Scribble, you must rename the help file to your project name.  
  
 [[Sections](#top)]  
  
##  <a name="addpenpanel"></a> Adding a Pen Panel to the Ribbon  
 Now, add a panel to display buttons that control the thickness and the color of the pen. This panel contains a check box that toggles between thick and thin pens. Its functionality resembles that of the **Thick Line** menu item in the Scribble application.  
  
 The original Scribble application lets the user select pen widths from a dialog box that appears when the user clicks **Pen Widths** on the menu. Because the ribbon bar has ample room for new controls, you can replace the dialog box by using two combo boxes on the ribbon. One combo box adjusts the width of the thin pen and the other combo box adjusts the width of the thick pen.  
  
#### To add a Pen panel and combo boxes to the ribbon  
  
1.  From the **Toolbox**, drag a **Panel** to the **Home** category. Then drag a **Check Box** and two **Combo Boxes** to the panel.  
  
2.  Click the panel to modify its properties. Change **Caption** to `Pen`.  
  
3.  Click the check box. Change **Caption** to `Use Thick`, and **ID** to `ID_PEN_THICK_OR_THIN`.  
  
4.  Click the first combo box. Change **Caption** to `Thin Pen`, **ID** to `ID_PEN_THIN_WIDTH`, **Text** to `2`, **Type** to `Drop List`, and **Data** to `1;2;3;4;5;6;7;8;9;`.  
  
5.  Click the second combo box. Change **Caption** to `Thick Pen`, **ID** to `ID_PEN_THICK_WIDTH`, **Text** to `5`, **Type** to `Drop List`, and **Data** to `5;6;7;8;9;10;11;12;13;14;15;16;17;18;19;20;`.  
  
6.  The new combo boxes do not correspond to any existing menu items. Therefore, you must create a menu item for every pen option.  
  
    1.  In the **Resource View** window, open the IDR_SCRIBBTYPE menu resource.  
  
    2.  Click **Pen** to open the p**en** menu. Then click **Type Here** and type `Thi&n Pen`.  
  
    3.  Right-click the text that you just typed to open the **Properties** window, and then change the ID property to `ID_PEN_THIN_WIDTH`.  
  
    4.  You must also create an event handler for every pen menu item. Right-click the **Thi&n Pen** menu item that you just created and then click **Add Event Handler**. The **Event Handler Wizard** is displayed.  
  
    5.  In the **Class list** box in the wizard, select **CScribbleDoc** and then click **Add and Edit**. This creates an event handler named `CScribbleDoc::OnPenThinWidth`.  
  
    6.  Add the following code to `CScribbleDoc::OnPenThinWidth`.  
  
 ``` *// Get a pointer to the ribbon bar  
    CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx*) AfxGetMainWnd())->GetRibbonBar();
ASSERT_VALID(pRibbon);
*// Get a pointer to the Thin Width combo box  
    CMFCRibbonComboBox* pThinComboBox = DYNAMIC_DOWNCAST(
    CMFCRibbonComboBox, pRibbon->FindByID(ID_PEN_THIN_WIDTH));
*//Get the selected value  
    int nCurSel = pThinComboBox->GetCurSel();
if (nCurSel>= 0)  
 {  
    m_nThinWidth = atoi(pThinComboBox->GetItem(nCurSel));

 } *// Create a new pen using the selected width  
    ReplacePen();

 ```  
  
7.  Next, create a menu item and event handlers for the thick pen.  
  
    1.  In the **Resource View** window, open the IDR_SCRIBBTYPE menu resource.  
  
    2.  Click **Pen** to open the pen menu. Then click **Type Here** and type `Thic&k Pen`.  
  
    3.  Right-click the text that you just typed to display the **Properties** window. Change the ID property to `ID_PEN_THICK_WIDTH`.  
  
    4.  Right-click the **Thick Pen** menu item that you just created and then click **Add Event Handler**. The **Event Handler Wizard** is displayed.  
  
    5.  In the **Class list** box of the wizard, select **CScribbleDoc** and then click **Add and Edit**. This creates an event handler named `CScribbleDoc::OnPenThickWidth`.  
  
    6.  Add the following code to `CScribbleDoc::OnPenThickWidth`.  
  
 ``` *// Get a pointer to the ribbon bar  
    CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx *) AfxGetMainWnd())->GetRibbonBar();
ASSERT_VALID(pRibbon);

 CMFCRibbonComboBox* pThickComboBox = DYNAMIC_DOWNCAST(
    CMFCRibbonComboBox, pRibbon->FindByID(ID_PEN_THICK_WIDTH));
*// Get the selected value  
    int nCurSel = pThickComboBox->GetCurSel();
if (nCurSel>= 0)  
 {  
    m_nThickWidth = atoi(pThickComboBox->GetItem(nCurSel));

 } *// Create a new pen using the selected width  
    ReplacePen();

 ```  
  
8.  Save the changes, and then build and run the application. New buttons and combo boxes should be displayed. Try using different pen widths to scribble.  
  
 [[Sections](#top)]  
  
##  <a name="addcolorbutton"></a> Adding a Color Button to the Pen Panel  
 Next, add a [CMFCRibbonColorButton](../mfc/reference/cmfcribboncolorbutton-class.md) object that lets the user scribble in color.  
  
#### To add a color button to the Pen panel  
  
1.  Before you add the color button, create a menu item for it. In the **Resource View** window, open the IDR_SCRIBBTYPE menu resource. Click the **Pen** menu item to open the pen menu. Then click **Type Here** and type `&Color`. Right-click the text that you just typed to display the **Properties** window. Change the ID to `ID_PEN_COLOR`.  
  
2.  Now add the color button. From the **Toolbox**, drag a **Color Button** to the **Pen** panel.  
  
3.  Click the color button. Change **Caption** to `Color`, **ID** to `ID_PEN_COLOR`, **SimpleLook** to `True`, **Large Image Index** to `1`, and **Split Mode** to `False`.  
  
4.  Save the changes, and then build and run the application. The new color button should be displayed on the **Pen** panel. However, it cannot be used because it does not yet have an event handler. The next steps show how to add an event handler for the color button.  
  
 [[Sections](#top)]  
  
##  <a name="addcolormember"></a> Adding a Color Member to the Document Class  
 Because the original Scribble application does not have color pens, you must write an implementation for them. To store the pen color of the document, add a new member to the document class, `CscribbleDoc.`  
  
#### To add a color member to the document class  
  
1.  In scribdoc.h, in the `CScribbleDoc` class, find the `// Attributes` section. Add the following lines of code after the definition of the `m_nThickWidth` data member.  
  
 ``` *// Current pen color  
    COLORREF m_penColor;  
 ```  
  
2.  Every document contains a list of stokes that the user has already drawn. Every stroke is defined by a `CStroke` object. The `CStroke` class does not include information about pen color. Therefore, you must modify the class. In scribdoc.h, in the `CStroke` class, add the following lines of code after the definition of the `m_nPenWidth` data member.  
  
 ``` *// Pen color for the stroke  
    COLORREF m_penColor;  
 ```  
  
3.  In scribdoc.h, add a new `CStroke` constructor whose parameters specify a width and color. Add the following line of code after the `CStroke(UINT nPenWidth);` statement.  
  
 ```  
    CStroke(UINT nPenWidth, COLORREF penColor);

 ```  
  
4.  In scribdoc.cpp, add the implementation of the new `CStroke` constructor. Add the following code after the implementation of the `CStroke::CStroke(UINT nPenWidth)` constructor.  
  
 ``` *// Constructor that uses the document's current width and color  
    CStroke::CStroke(UINT nPenWidth, COLORREF penColor)  
 {  
    m_nPenWidth = nPenWidth;  
    m_penColor = penColor;  
    m_rectBounding.SetRectEmpty();

 }  
 ```  
  
5.  Change the second line of the `CStroke::DrawStroke` method as follows.  
  
 ```  
    if (!penStroke.CreatePen(PS_SOLID,
    m_nPenWidth,
    m_penColor))  
 ```  
  
6.  Set the default pen color for the document class. In scribdoc.cpp, add the following lines to `CScribbleDoc::InitDocument`, after the `m_nThickWidth = 5;` statement.  
  
 ``` *// default pen color is black  
    m_penColor = RGB(0,
    0,
    0);

 ```  
  
7.  In scribdoc.cpp, change the first line of the `CScribbleDoc::NewStroke` method to the following.  
  
 ```  
    CStroke* pStrokeItem = new CStroke(m_nPenWidth, m_penColor);

 ```  
  
8.  Change the last line of the `CScribbleDoc::ReplacePen` method to the following.  
  
 ```  
    m_penCur.CreatePen(PS_SOLID,
    m_nPenWidth,
    m_penColor);

 ```  
  
9. You added the `m_penColor` member in a previous step. Now, create an event handler for the color button that sets the member.  
  
    1.  In the **Resource View** window, open the IDR_SCRIBBTYPE menu resource.  
  
    2.  Right-click the **Color** menu item and click **Add Event Handler…**. The **Event Handler Wizard** appears.  
  
    3.  In the **Class list** box in the wizard, select **CScribbleDoc** and then click the **Add and Edit** button. This creates the `CScribbleDoc::OnPenColor` event handler stub.  
  
10. Replace the stub for the `CScribbleDoc::OnPenColor` event handler with the following code.  
  
 ```  
    void CScribbleDoc::OnPenColor()  
 { *// Change pen color to reflect color button's current selection  
    CMFCRibbonBar* pRibbon = ((CMDIFrameWndEx*) AfxGetMainWnd())->GetRibbonBar();
ASSERT_VALID(pRibbon);

 CMFCRibbonColorButton* pColorBtn = DYNAMIC_DOWNCAST(
    CMFCRibbonColorButton, pRibbon->FindByID(ID_PEN_COLOR));

    m_penColor = pColorBtn->GetColor();
*// Create new pen using the selected color  
    ReplacePen();

 }  
 ```  
  
11. Save the changes and then build and run the application. You should be able to press the color button and change the pen's color.  
  
 [[Sections](#top)]  
  
##  <a name="initpensave"></a> Initializing Pens and Saving Preferences  
 Next, initialize the color and width of the pens. Finally, save and load a color drawing from a file.  
  
#### To initialize controls on the ribbon bar  
  
1.  Initialize the pens on the ribbon bar.  
  
     Add the following code to scribdoc.cpp, in the `CScribbleDoc::InitDocument` method, after the `m_sizeDoc = CSize(200,200)` statement.  
  
 ``` *// Reset the ribbon UI to its initial values  
    CMFCRibbonBar* pRibbon = 
 ((CMDIFrameWndEx*) AfxGetMainWnd())->GetRibbonBar();
ASSERT_VALID(pRibbon);

 CMFCRibbonColorButton* pColorBtn = DYNAMIC_DOWNCAST(
    CMFCRibbonColorButton, 
    pRibbon->FindByID(ID_PEN_COLOR));
*// Set ColorButton to black  
    pColorBtn->SetColor(RGB(0,
    0,
    0));

 CMFCRibbonComboBox* pThinComboBox = DYNAMIC_DOWNCAST(
    CMFCRibbonComboBox, 
    pRibbon->FindByID(ID_PEN_THIN_WIDTH));
*// Set Thin pen combobox to 2  
    pThinComboBox->SelectItem(1);

 CMFCRibbonComboBox* pThickComboBox = DYNAMIC_DOWNCAST(
    CMFCRibbonComboBox, 
    pRibbon->FindByID(ID_PEN_THICK_WIDTH));
*// Set Thick pen combobox to 5  
    pThickComboBox->SelectItem(0);

 ```  
  
2.  Save a color drawing to a file. Add the following statement to scribdoc.cpp, in the `CStroke::Serialize` method, after the `ar << (WORD)m_nPenWidth;` statement.  
  
 ```  
    ar <<(COLORREF)m_penColor;  
 ```  
  
3.  Finally, load a color drawing from a file. Add the following line of code, in the `CStroke::Serialize` method, after the `m_nPenWidth = w;` statement.  
  
 ```  
    ar>> m_penColor;  
 ```  
  
4.  Now scribble in color and save your drawing to a file.  
  
 [[Sections](#top)]  
  
## Conclusion  
 You have updated the MFC Scribble application. Use this walkthrough as a guide when you modify your existing applications.  
  
## See Also  
 [Walkthroughs](../mfc/walkthroughs-mfc.md)   
 [Walkthrough: Updating the MFC Scribble Application (Part 1)](../mfc/walkthrough-updating-the-mfc-scribble-application-part-1.md)

