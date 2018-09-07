---
title: "Walkthrough: Adding Animation to an MFC Project | Microsoft Docs"
ms.custom: ""
ms.date: "06/28/2018"
ms.technology: ["cpp-mfc"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["animation [MFC]", "MFC, animation"]
ms.assetid: 004f832c-9fd5-4f88-9ca9-ae65dececdc2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Walkthrough: Adding Animation to an MFC Project

This walkthrough teaches how to add a basic animated object to a Visual C++, Microsoft Foundation Class Library (MFC) project.

The walkthrough shows how to accomplish these tasks:

- Create an MFC application.

- Add a menu and then add commands to start and stop an animation.

- Create handlers for the start and stop commands.

- Add an animated object to the project.

- Center the animated object in the window.

- Verify the results.

[!INCLUDE[note_settings_general](../mfc/includes/note_settings_general_md.md)]

## Prerequisites

To complete this walkthrough, you must have Visual Studio.

### To create an MFC application

1. On the **File** menu, point to **New** and then click **Project**.

2. In the **New Project** dialog box, in the left pane under **Installed Templates**, expand **Visual C++** and then select **MFC**. In the middle pane, select **MFC Application**. In the **Name** box, type *MFCAnimationWalkthrough*. Click **OK**.

3. In the **MFC Application Wizard** dialog box, verify that **Application Type** is **Multiple Documents**, **Project Style** is **Visual Studio**, and the **Document/View Architecture support** option is selected. Click **Finish**.

### To add a menu and then add commands to start and stop an animation

1. On the **View** menu, point to **Other Windows** and then click **Resource View**.

2. In **Resource View**, navigate to the **Menu** folder and open it. Double-click the `IDR_MFCAnimationWalTYPE` resource to open it for modification.

3. On the menu bar, in the **Type Here** box, type *A&nimation* to create an Animation menu.

4. Under **Animation**, in the **Type Here** box, type *Start &Forward* to create a Start Forward command.

5. Under **Start Forward**, in the **Type Here** box, type *Start &Backward*.

6. Under **Start Backward**, in the **Type Here** box, type *S&top* to create a Stop command.

7. Save MFCAnimationWalkthrough.rc and close it.

8. In **Solution Explorer**, double-click MainFrm.cpp to open it for modification. In the `CMainFrame::OnCreate` method, locate the section that has several calls to `lstBasicCommands.AddTail`. Just after that section, add the following code.  

    ```cpp
    lstBasicCommands.AddTail(ID_ANIMATION_STARTFORWARD);
    lstBasicCommands.AddTail(ID_ANIMATION_STARTBACKWARD);
    lstBasicCommands.AddTail(ID_ANIMATION_STOP);
    ```

9. Save the file and close it.

### To create handlers for the start and stop commands

1. On the **Project** menu, click **Class Wizard**.

2. In the **MFC Class Wizard**, under **Class name**, select `CMFCAnimationWalkthroughView`.

3. On the **Commands** tab, in the **Object IDs** box, select `ID_ANIMATION_STARTFORWARD`, and then in the **Messages** box, select `COMMAND`. Click **Add Handler**.

4. In the **Add Member Function** dialog box, click **OK**.

5. In the **Object IDs** box, select `ID_ANIMATION_STARTBACKWARD`, and then in the **Messages** box, select `COMMAND`. Click **Add Handler**.

6. In the **Add Member Function** dialog box, click **OK**.

7. In the **Object IDs** box, select `ID_ANIMATION_STOP`, and then in the **Messages** box, select `COMMAND`. Click **Add Handler** and then click **OK**.

8. In the **Add Member Function** dialog box, click **OK**.

9. In the **MFC Class Wizard**, click **OK**.

10. Save MFCAnimationWalkthroughView.cpp, which is open in the editor, but do not close it.

### To add an animated object to the project

1. In Solution Explorer, double-click MFCAnimationWalkthroughView.h to open it for modification. Just before the definition of the `CMFCAnimationWalkthroughView` class, add the following code to create a custom animation controller that will handle scheduling conflicts with the animation object.

    ```cpp
    class CCustomAnimationController : public CAnimationController
    {
    public:
        CCustomAnimationController()
        {
        }

        virtual BOOL OnHasPriorityTrim(CAnimationGroup* pGroupScheduled,
            CAnimationGroup* pGroupNew,
            UI_ANIMATION_PRIORITY_EFFECT priorityEffect)
        {
            return TRUE;
        }
    };
    ```

2. At the end of the `CMFCAnimationWalkthroughView` class, add the following code.

    ```cpp
    CCustomAnimationController m_animationController;
    CAnimationColor m_animationColor;
    CAnimationRect m_animationRect;
    ```

3. After the `DECLARE_MESSAGE_MAP()` line, add the following code.

    ```cpp
    void Animate(BOOL bDirection);
    ```

4. Save the file and close it.

5. In MFCAnimationWalkthroughView.cpp, at the top of the file after the `#include` statements but before any class methods, add the following code.

    ```cpp
    static int nAnimationGroup = 0;
    static int nInfoAreaHeight = 40;
    ```

6. At the end of the constructor for `CMFCAnimationWalkthroughView`, add the following code.

    ```cpp
    m_animationController.EnableAnimationTimerEventHandler();
    m_animationController.EnablePriorityComparisonHandler(UI_ANIMATION_PHT_TRIM);
    m_animationColor = RGB(255, 255, 255);
    m_animationRect = CRect(0, 0, 0, 0);
    m_animationColor.SetID(-1, nAnimationGroup);
    m_animationRect.SetID(-1, nAnimationGroup);
    m_animationController.AddAnimationObject(&m_animationColor);
    m_animationController.AddAnimationObject(&m_animationRect);
    ```

7. Locate the `CAnimationWalthroughView::PreCreateWindow` method and then replace it with the following code.

    ```cpp
    BOOL CMFCAnimationWalkthroughView::PreCreateWindow(CREATESTRUCT& cs)
    {
        // TODO: Modify the Window class or styles here by modifying
        //       the CREATESTRUCT cs
        m_animationController.SetRelatedWnd(this);

        return CView::PreCreateWindow(cs);
    }
    ```

8. Locate the `CAnimationWalkthroughView::OnDraw` method and then replace it with the following code.

    ```cpp
    void CMFCAnimationWalkthroughView::OnDraw(CDC* pDC)
    {
        CMFCAnimationWalkthroughDoc* pDoc = GetDocument();
        ASSERT_VALID(pDoc);
        if (!pDoc)
            return;

        // TODO: add draw code for native data here
        CMemDC dcMem(*pDC, this);
        CDC& dc = dcMem.GetDC();
        CRect rect;
        GetClientRect(rect);

        dc.FillSolidRect(rect, GetSysColor(COLOR_WINDOW));

        CString strRGB;
        strRGB.Format(_T("Fill Color is: %d; %d; %d"),
            GetRValue(m_animationColor),
            GetGValue(m_animationColor),
            GetBValue(m_animationColor));

        dc.DrawText(strRGB, rect, DT_CENTER);
        rect.top += nInfoAreaHeight;

        CBrush br;
        br.CreateSolidBrush(m_animationColor);
        CBrush* pBrushOld = dc.SelectObject(&br);

        dc.Rectangle((CRect)m_animationRect);

        dc.SelectObject(pBrushOld);
    }
    ```

9. At the end of the file, add the following code.

    ```cpp
    void CMFCAnimationWalkthroughView::Animate(BOOL bDirection)
    {
        static UI_ANIMATION_SECONDS duration = 3;
        static DOUBLE dblSpeed = 35.;
        static BYTE nStartColor = 50;
        static BYTE nEndColor = 255;

        BYTE nRedColorFinal = bDirection  nStartColor : nEndColor;
        BYTE nGreenColorFinal = bDirection  nStartColor : nEndColor;
        BYTE nBlueColorFinal = bDirection  nStartColor : nEndColor;

        CLinearTransition* pRedTransition =
            new CLinearTransition(duration, (DOUBLE)nRedColorFinal);

        CSmoothStopTransition* pGreenTransition =
            new CSmoothStopTransition(duration, (DOUBLE)nGreenColorFinal);

        CLinearTransitionFromSpeed* pBlueTransition =
            new CLinearTransitionFromSpeed(dblSpeed, (DOUBLE)nBlueColorFinal);

        m_animationColor.AddTransition(pRedTransition,
            pGreenTransition,
            pBlueTransition);

        CRect rectClient;
        GetClientRect(rectClient);

        rectClient.top += nInfoAreaHeight;

        int nLeftFinal = bDirection ? rectClient.left : rectClient.CenterPoint().x;
        int nTopFinal = bDirection ? rectClient.top : rectClient.CenterPoint().y;
        int nRightFinal = bDirection ? rectClient.right : rectClient.CenterPoint().x;
        int nBottomFinal = bDirection ? rectClient.bottom : rectClient.CenterPoint().y;

        CLinearTransition* pLeftTransition =
            new CLinearTransition(duration, nLeftFinal);

        CLinearTransition* pTopTransition =
            new CLinearTransition(duration, nTopFinal);

        CLinearTransition* pRightTransition =
            new CLinearTransition(duration, nRightFinal);

        CLinearTransition* pBottomTransition =
            new CLinearTransition(duration, nBottomFinal);

        m_animationRect.AddTransition(pLeftTransition,
            pTopTransition,
            pRightTransition,
            pBottomTransition);

        CBaseKeyFrame* pKeyframeStart =
            CAnimationController::GetKeyframeStoryboardStart();
        CKeyFrame* pKeyFrameEnd =
            m_animationController.CreateKeyframe(nAnimationGroup,
                pBlueTransition);

        pLeftTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);
        pTopTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);
        pRightTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);
        pBottomTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);

        m_animationController.AnimateGroup(nAnimationGroup);
    }
    ```

10. On the **Project** menu, click **Class Wizard**.

11. In the **MFC Class Wizard**, under **Class name**, select `CMFCAnimationWalkthroughView`.

12. On the **Messages** tab, in the **Messages** box, select `WM_ERASEBKGND`, click **Add Handler**, and then click **OK**.

13. In MFCAnimationWalkthroughView.cpp, replace the implementation of `OnEraseBkgnd` with the following code to reduce flickering in the animated object when it is redrawn.

    ```cpp
    BOOL CMFCAnimationWalkthroughView::OnEraseBkgnd(CDC* /*pDC*/)
    {
        return TRUE;
    }
    ```

14. Replace the implementations of `CMFCAnimationWalkthroughView::OnAnimationStartforward`, `CMFCAnimationWalkthroughView::OnAnimationStartbackward`, and `CMFCAnimationWalkthroughView::OnAnimationStop` with the following code.

    ```cpp
    void CMFCAnimationWalkthroughView::OnAnimationStartforward()
    {
        Animate(TRUE);
    }

    void CMFCAnimationWalkthroughView::OnAnimationStartbackward()
    {
        Animate(FALSE);
    }

    void CMFCAnimationWalkthroughView::OnAnimationStop()
    {
        IUIAnimationManager* pManager = m_animationController.GetUIAnimationManager();
        if (pManager != NULL)
        {
            pManager->AbandonAllStoryboards();

        }
    }
    ```

15. Save the file and close it.

### To center the animated object in the window

1. In **Solution Explorer**, double-click MFCAnimationWalkthroughView.h to open it for modification. At the end of the `CMFCAnimationWalkthroughView` class, just after the definition of `m_animationRect`, add the following code.

    ```cpp
    BOOL m_bCurrentDirection;
    ```

2. Save the file and close it.

3. On the **Project** menu, click **Class Wizard**.

4. In the **MFC Class Wizard**, under **Class name**, select `CMFCAnimationWalkthroughView`.

5. On the **Messages** tab, in the **Messages** box, select `WM_SIZE`, click **Add Handler**, and then click **OK**.

6. In MFCAnimationWalkthroughView.cpp, replace the code for `CMFCAnimationWalkthroughView::OnSize` with the following code.

    ```cpp
    void CMFCAnimationWalkthroughView::OnSize(UINT nType, int cx, int cy)
    {
        CView::OnSize(nType, cx, cy);
        CRect rect;
        GetClientRect(rect);

        rect.top += nInfoAreaHeight;

        CRect rectAnim = m_animationRect;
        m_animationRect = CRect(CPoint(rect.CenterPoint().x - rectAnim.Width() / 2,
        rect.CenterPoint().y - rectAnim.Height() / 2),
        rectAnim.Size());

        if (m_animationController.IsAnimationInProgress())
        {
            Animate(m_bCurrentDirection);
        }
    }
    ```

7. At the beginning of the constructor for `CMFCAnimationWalkthroughView`, add the following code.

    ```cpp
    m_bCurrentDirection = TRUE;
    ```

8. At the beginning of the `CMFCAnimationWalkthroughView::Animate` method, add the following code.

    ```cpp
    m_bCurrentDirection = bDirection;
    ```

9. Save the file and close it.

### To verify the results

1. Build and run the application. On the **Animation** menu, click **Start Forward**. A rectangle should appear and then fill the center area. When you click **Start Backward**, the animation should reverse, and when you click **Stop**, it should stop. The fill color of the rectangle should change as the animation progresses, and the current color should be displayed at the top of the animation window.

## See also

[Walkthroughs](../mfc/walkthroughs-mfc.md)  
