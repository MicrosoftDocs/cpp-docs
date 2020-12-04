---
description: "Learn more about: CWnd Class"
title: "CWnd Class"
ms.date: "11/19/2018"
f1_keywords: ["CWnd", "AFXWIN/CWnd", "AFXWIN/CWnd::CWnd", "AFXWIN/CWnd::accDoDefaultAction", "AFXWIN/CWnd::accHitTest", "AFXWIN/CWnd::accLocation", "AFXWIN/CWnd::accNavigate", "AFXWIN/CWnd::accSelect", "AFXWIN/CWnd::AnimateWindow", "AFXWIN/CWnd::ArrangeIconicWindows", "AFXWIN/CWnd::Attach", "AFXWIN/CWnd::BeginModalState", "AFXWIN/CWnd::BeginPaint", "AFXWIN/CWnd::BindDefaultProperty", "AFXWIN/CWnd::BindProperty", "AFXWIN/CWnd::BringWindowToTop", "AFXWIN/CWnd::CalcWindowRect", "AFXWIN/CWnd::CancelToolTips", "AFXWIN/CWnd::CenterWindow", "AFXWIN/CWnd::ChangeClipboardChain", "AFXWIN/CWnd::CheckDlgButton", "AFXWIN/CWnd::CheckRadioButton", "AFXWIN/CWnd::ChildWindowFromPoint", "AFXWIN/CWnd::ClientToScreen", "AFXWIN/CWnd::CloseWindow", "AFXWIN/CWnd::ContinueModal", "AFXWIN/CWnd::Create", "AFXWIN/CWnd::CreateAccessibleProxy", "AFXWIN/CWnd::CreateCaret", "AFXWIN/CWnd::CreateControl", "AFXWIN/CWnd::CreateEx", "AFXWIN/CWnd::CreateGrayCaret", "AFXWIN/CWnd::CreateSolidCaret", "AFXWIN/CWnd::DeleteTempMap", "AFXWIN/CWnd::DestroyWindow", "AFXWIN/CWnd::Detach", "AFXWIN/CWnd::DlgDirList", "AFXWIN/CWnd::DlgDirListComboBox", "AFXWIN/CWnd::DlgDirSelect", "AFXWIN/CWnd::DlgDirSelectComboBox", "AFXWIN/CWnd::DragAcceptFiles", "AFXWIN/CWnd::DragDetect", "AFXWIN/CWnd::DrawAnimatedRects", "AFXWIN/CWnd::DrawCaption", "AFXWIN/CWnd::DrawMenuBar", "AFXWIN/CWnd::EnableActiveAccessibility", "AFXWIN/CWnd::EnableDynamicLayout", "AFXWIN/CWnd::EnableD2DSupport", "AFXWIN/CWnd::EnableScrollBar", "AFXWIN/CWnd::EnableScrollBarCtrl", "AFXWIN/CWnd::EnableToolTips", "AFXWIN/CWnd::EnableTrackingToolTips", "AFXWIN/CWnd::EnableWindow", "AFXWIN/CWnd::EndModalLoop", "AFXWIN/CWnd::EndModalState", "AFXWIN/CWnd::EndPaint", "AFXWIN/CWnd::ExecuteDlgInit", "AFXWIN/CWnd::FilterToolTipMessage", "AFXWIN/CWnd::FindWindow", "AFXWIN/CWnd::FindWindowEx", "AFXWIN/CWnd::FlashWindow", "AFXWIN/CWnd::FlashWindowEx", "AFXWIN/CWnd::FromHandle", "AFXWIN/CWnd::FromHandlePermanent", "AFXWIN/CWnd::get_accChild", "AFXWIN/CWnd::get_accChildCount", "AFXWIN/CWnd::get_accDefaultAction", "AFXWIN/CWnd::get_accDescription", "AFXWIN/CWnd::get_accFocus", "AFXWIN/CWnd::get_accHelp", "AFXWIN/CWnd::get_accHelpTopic", "AFXWIN/CWnd::get_accKeyboardShortcut", "AFXWIN/CWnd::get_accName", "AFXWIN/CWnd::get_accParent", "AFXWIN/CWnd::get_accRole", "AFXWIN/CWnd::get_accSelection", "AFXWIN/CWnd::get_accState", "AFXWIN/CWnd::get_accValue", "AFXWIN/CWnd::GetActiveWindow", "AFXWIN/CWnd::GetAncestor", "AFXWIN/CWnd::GetCapture", "AFXWIN/CWnd::GetCaretPos", "AFXWIN/CWnd::GetCheckedRadioButton", "AFXWIN/CWnd::GetClientRect", "AFXWIN/CWnd::GetClipboardOwner", "AFXWIN/CWnd::GetClipboardViewer", "AFXWIN/CWnd::GetControlUnknown", "AFXWIN/CWnd::GetDC", "AFXWIN/CWnd::GetDCEx", "AFXWIN/CWnd::GetDCRenderTarget", "AFXWIN/CWnd::GetDescendantWindow", "AFXWIN/CWnd::GetDesktopWindow", "AFXWIN/CWnd::GetDlgCtrlID", "AFXWIN/CWnd::GetDlgItem", "AFXWIN/CWnd::GetDlgItemInt", "AFXWIN/CWnd::GetDlgItemText", "AFXWIN/CWnd::GetDSCCursor", "AFXWIN/CWnd::GetDynamicLayout", "AFXWIN/CWnd::GetExStyle", "AFXWIN/CWnd::GetFocus", "AFXWIN/CWnd::GetFont", "AFXWIN/CWnd::GetForegroundWindow", "AFXWIN/CWnd::GetIcon", "AFXWIN/CWnd::GetLastActivePopup", "AFXWIN/CWnd::GetLayeredWindowAttributes", "AFXWIN/CWnd::GetMenu", "AFXWIN/CWnd::GetNextDlgGroupItem", "AFXWIN/CWnd::GetNextDlgTabItem", "AFXWIN/CWnd::GetNextWindow", "AFXWIN/CWnd::GetOleControlSite", "AFXWIN/CWnd::GetOpenClipboardWindow", "AFXWIN/CWnd::GetOwner", "AFXWIN/CWnd::GetParent", "AFXWIN/CWnd::GetParentFrame", "AFXWIN/CWnd::GetParentOwner", "AFXWIN/CWnd::GetProperty", "AFXWIN/CWnd::GetRenderTarget", "AFXWIN/CWnd::GetSafeHwnd", "AFXWIN/CWnd::GetSafeOwner", "AFXWIN/CWnd::GetScrollBarCtrl", "AFXWIN/CWnd::GetScrollBarInfo", "AFXWIN/CWnd::GetScrollInfo", "AFXWIN/CWnd::GetScrollLimit", "AFXWIN/CWnd::GetScrollPos", "AFXWIN/CWnd::GetScrollRange", "AFXWIN/CWnd::GetStyle", "AFXWIN/CWnd::GetSystemMenu", "AFXWIN/CWnd::GetTitleBarInfo", "AFXWIN/CWnd::GetTopLevelFrame", "AFXWIN/CWnd::GetTopLevelOwner", "AFXWIN/CWnd::GetTopLevelParent", "AFXWIN/CWnd::GetTopWindow", "AFXWIN/CWnd::GetUpdateRect", "AFXWIN/CWnd::GetUpdateRgn", "AFXWIN/CWnd::GetWindow", "AFXWIN/CWnd::GetWindowContextHelpId", "AFXWIN/CWnd::GetWindowDC", "AFXWIN/CWnd::GetWindowedChildCount", "AFXWIN/CWnd::GetWindowInfo", "AFXWIN/CWnd::GetWindowlessChildCount", "AFXWIN/CWnd::GetWindowPlacement", "AFXWIN/CWnd::GetWindowRect", "AFXWIN/CWnd::GetWindowRgn", "AFXWIN/CWnd::GetWindowText", "AFXWIN/CWnd::GetWindowTextLength", "AFXWIN/CWnd::HideCaret", "AFXWIN/CWnd::HiliteMenuItem", "AFXWIN/CWnd::HtmlHelp", "AFXWIN/CWnd::Invalidate", "AFXWIN/CWnd::InvalidateRect", "AFXWIN/CWnd::InvalidateRgn", "AFXWIN/CWnd::InvokeHelper", "AFXWIN/CWnd::IsChild", "AFXWIN/CWnd::IsD2DSupportEnabled", "AFXWIN/CWnd::IsDialogMessage", "AFXWIN/CWnd::IsDlgButtonChecked", "AFXWIN/CWnd::IsDynamicLayoutEnabled", "AFXWIN/CWnd::IsIconic", "AFXWIN/CWnd::IsTouchWindow", "AFXWIN/CWnd::IsWindowEnabled", "AFXWIN/CWnd::IsWindowVisible", "AFXWIN/CWnd::IsZoomed", "AFXWIN/CWnd::KillTimer", "AFXWIN/CWnd::LockWindowUpdate", "AFXWIN/CWnd::MapWindowPoints", "AFXWIN/CWnd::MessageBox", "AFXWIN/CWnd::ModifyStyle", "AFXWIN/CWnd::ModifyStyleEx", "AFXWIN/CWnd::MoveWindow", "AFXWIN/CWnd::NotifyWinEvent", "AFXWIN/CWnd::OnAmbientProperty", "AFXWIN/CWnd::OnDrawIconicThumbnailOrLivePreview", "AFXWIN/CWnd::OnHelp", "AFXWIN/CWnd::OnHelpFinder", "AFXWIN/CWnd::OnHelpIndex", "AFXWIN/CWnd::OnHelpUsing", "AFXWIN/CWnd::OnToolHitTest", "AFXWIN/CWnd::OpenClipboard", "AFXWIN/CWnd::PaintWindowlessControls", "AFXWIN/CWnd::PostMessage", "AFXWIN/CWnd::PreCreateWindow", "AFXWIN/CWnd::PreSubclassWindow", "AFXWIN/CWnd::PreTranslateMessage", "AFXWIN/CWnd::Print", "AFXWIN/CWnd::PrintClient", "AFXWIN/CWnd::PrintWindow", "AFXWIN/CWnd::RedrawWindow", "AFXWIN/CWnd::RegisterTouchWindow", "AFXWIN/CWnd::ReleaseDC", "AFXWIN/CWnd::RepositionBars", "AFXWIN/CWnd::RunModalLoop", "AFXWIN/CWnd::ScreenToClient", "AFXWIN/CWnd::ScrollWindow", "AFXWIN/CWnd::ScrollWindowEx", "AFXWIN/CWnd::SendChildNotifyLastMsg", "AFXWIN/CWnd::SendDlgItemMessage", "AFXWIN/CWnd::SendMessage", "AFXWIN/CWnd::SendMessageToDescendants", "AFXWIN/CWnd::SendNotifyMessage", "AFXWIN/CWnd::SetActiveWindow", "AFXWIN/CWnd::SetCapture", "AFXWIN/CWnd::SetCaretPos", "AFXWIN/CWnd::SetClipboardViewer", "AFXWIN/CWnd::SetDlgCtrlID", "AFXWIN/CWnd::SetDlgItemInt", "AFXWIN/CWnd::SetDlgItemText", "AFXWIN/CWnd::SetFocus", "AFXWIN/CWnd::SetFont", "AFXWIN/CWnd::SetForegroundWindow", "AFXWIN/CWnd::SetIcon", "AFXWIN/CWnd::SetLayeredWindowAttributes", "AFXWIN/CWnd::SetMenu", "AFXWIN/CWnd::SetOwner", "AFXWIN/CWnd::SetParent", "AFXWIN/CWnd::SetProperty", "AFXWIN/CWnd::SetRedraw", "AFXWIN/CWnd::SetScrollInfo", "AFXWIN/CWnd::SetScrollPos", "AFXWIN/CWnd::SetScrollRange", "AFXWIN/CWnd::SetTimer", "AFXWIN/CWnd::SetWindowContextHelpId", "AFXWIN/CWnd::SetWindowPlacement", "AFXWIN/CWnd::SetWindowPos", "AFXWIN/CWnd::SetWindowRgn", "AFXWIN/CWnd::SetWindowText", "AFXWIN/CWnd::ShowCaret", "AFXWIN/CWnd::ShowOwnedPopups", "AFXWIN/CWnd::ShowScrollBar", "AFXWIN/CWnd::ShowWindow", "AFXWIN/CWnd::SubclassDlgItem", "AFXWIN/CWnd::SubclassWindow", "AFXWIN/CWnd::UnlockWindowUpdate", "AFXWIN/CWnd::UnsubclassWindow", "AFXWIN/CWnd::UpdateData", "AFXWIN/CWnd::UpdateDialogControls", "AFXWIN/CWnd::UpdateLayeredWindow", "AFXWIN/CWnd::UpdateWindow", "AFXWIN/CWnd::ValidateRect", "AFXWIN/CWnd::ValidateRgn", "AFXWIN/CWnd::WindowFromPoint", "AFXWIN/CWnd::WinHelp", "AFXWIN/CWnd::Default", "AFXWIN/CWnd::DefWindowProc", "AFXWIN/CWnd::DoDataExchange", "AFXWIN/CWnd::GetCurrentMessage", "AFXWIN/CWnd::InitDynamicLayout", "AFXWIN/CWnd::LoadDynamicLayoutResource", "AFXWIN/CWnd::OnActivate", "AFXWIN/CWnd::OnActivateApp", "AFXWIN/CWnd::OnAppCommand", "AFXWIN/CWnd::OnAskCbFormatName", "AFXWIN/CWnd::OnCancelMode", "AFXWIN/CWnd::OnCaptureChanged", "AFXWIN/CWnd::OnChangeCbChain", "AFXWIN/CWnd::OnChangeUIState", "AFXWIN/CWnd::OnChar", "AFXWIN/CWnd::OnCharToItem", "AFXWIN/CWnd::OnChildActivate", "AFXWIN/CWnd::OnChildNotify", "AFXWIN/CWnd::OnClipboardUpdate", "AFXWIN/CWnd::OnClose", "AFXWIN/CWnd::OnColorizationColorChanged", "AFXWIN/CWnd::OnCommand", "AFXWIN/CWnd::OnCompacting", "AFXWIN/CWnd::OnCompareItem", "AFXWIN/CWnd::OnCompositionChanged", "AFXWIN/CWnd::OnContextMenu", "AFXWIN/CWnd::OnCopyData", "AFXWIN/CWnd::OnCreate", "AFXWIN/CWnd::OnCtlColor", "AFXWIN/CWnd::OnDeadChar", "AFXWIN/CWnd::OnDeleteItem", "AFXWIN/CWnd::OnDestroy", "AFXWIN/CWnd::OnDestroyClipboard", "AFXWIN/CWnd::OnDeviceChange", "AFXWIN/CWnd::OnDevModeChange", "AFXWIN/CWnd::OnDrawClipboard", "AFXWIN/CWnd::OnDrawItem", "AFXWIN/CWnd::OnDropFiles", "AFXWIN/CWnd::OnEnable", "AFXWIN/CWnd::OnEndSession", "AFXWIN/CWnd::OnEnterIdle", "AFXWIN/CWnd::OnEnterMenuLoop", "AFXWIN/CWnd::OnEnterSizeMove", "AFXWIN/CWnd::OnEraseBkgnd", "AFXWIN/CWnd::OnExitMenuLoop", "AFXWIN/CWnd::OnExitSizeMove", "AFXWIN/CWnd::OnFontChange", "AFXWIN/CWnd::OnGetDlgCode", "AFXWIN/CWnd::OnGetMinMaxInfo", "AFXWIN/CWnd::OnHelpInfo", "AFXWIN/CWnd::OnHotKey", "AFXWIN/CWnd::OnHScroll", "AFXWIN/CWnd::OnHScrollClipboard", "AFXWIN/CWnd::OnIconEraseBkgnd", "AFXWIN/CWnd::OnInitMenu", "AFXWIN/CWnd::OnInitMenuPopup", "AFXWIN/CWnd::OnInputDeviceChange", "AFXWIN/CWnd::OnInputLangChange", "AFXWIN/CWnd::OnInputLangChangeRequest", "AFXWIN/CWnd::OnKeyDown", "AFXWIN/CWnd::OnKeyUp", "AFXWIN/CWnd::OnKillFocus", "AFXWIN/CWnd::OnLButtonDblClk", "AFXWIN/CWnd::OnLButtonDown", "AFXWIN/CWnd::OnLButtonUp", "AFXWIN/CWnd::OnMButtonDblClk", "AFXWIN/CWnd::OnMButtonDown", "AFXWIN/CWnd::OnMButtonUp", "AFXWIN/CWnd::OnMDIActivate", "AFXWIN/CWnd::OnMeasureItem", "AFXWIN/CWnd::OnMenuChar", "AFXWIN/CWnd::OnMenuDrag", "AFXWIN/CWnd::OnMenuGetObject", "AFXWIN/CWnd::OnMenuRButtonUp", "AFXWIN/CWnd::OnMenuSelect", "AFXWIN/CWnd::OnMouseActivate", "AFXWIN/CWnd::OnMouseHover", "AFXWIN/CWnd::OnMouseHWheel", "AFXWIN/CWnd::OnMouseLeave", "AFXWIN/CWnd::OnMouseMove", "AFXWIN/CWnd::OnMouseWheel", "AFXWIN/CWnd::OnMove", "AFXWIN/CWnd::OnMoving", "AFXWIN/CWnd::OnNcActivate", "AFXWIN/CWnd::OnNcCalcSize", "AFXWIN/CWnd::OnNcCreate", "AFXWIN/CWnd::OnNcDestroy", "AFXWIN/CWnd::OnNcHitTest", "AFXWIN/CWnd::OnNcLButtonDblClk", "AFXWIN/CWnd::OnNcLButtonDown", "AFXWIN/CWnd::OnNcLButtonUp", "AFXWIN/CWnd::OnNcMButtonDblClk", "AFXWIN/CWnd::OnNcMButtonDown", "AFXWIN/CWnd::OnNcMButtonUp", "AFXWIN/CWnd::OnNcMouseHover", "AFXWIN/CWnd::OnNcMouseLeave", "AFXWIN/CWnd::OnNcMouseMove", "AFXWIN/CWnd::OnNcPaint", "AFXWIN/CWnd::OnNcRButtonDblClk", "AFXWIN/CWnd::OnNcRButtonDown", "AFXWIN/CWnd::OnNcRButtonUp", "AFXWIN/CWnd::OnNcRenderingChanged", "AFXWIN/CWnd::OnNcXButtonDblClk", "AFXWIN/CWnd::OnNcXButtonDown", "AFXWIN/CWnd::OnNcXButtonUp", "AFXWIN/CWnd::OnNextMenu", "AFXWIN/CWnd::OnNotify", "AFXWIN/CWnd::OnNotifyFormat", "AFXWIN/CWnd::OnPaint", "AFXWIN/CWnd::OnPaintClipboard", "AFXWIN/CWnd::OnPaletteChanged", "AFXWIN/CWnd::OnPaletteIsChanging", "AFXWIN/CWnd::OnParentNotify", "AFXWIN/CWnd::OnPowerBroadcast", "AFXWIN/CWnd::OnQueryDragIcon", "AFXWIN/CWnd::OnQueryEndSession", "AFXWIN/CWnd::OnQueryNewPalette", "AFXWIN/CWnd::OnQueryOpen", "AFXWIN/CWnd::OnQueryUIState", "AFXWIN/CWnd::OnRawInput", "AFXWIN/CWnd::OnRButtonDblClk", "AFXWIN/CWnd::OnRButtonDown", "AFXWIN/CWnd::OnRButtonUp", "AFXWIN/CWnd::OnRenderAllFormats", "AFXWIN/CWnd::OnRenderFormat", "AFXWIN/CWnd::OnSessionChange", "AFXWIN/CWnd::OnSetCursor", "AFXWIN/CWnd::OnSetFocus", "AFXWIN/CWnd::OnSettingChange", "AFXWIN/CWnd::OnShowWindow", "AFXWIN/CWnd::OnSize", "AFXWIN/CWnd::OnSizeClipboard", "AFXWIN/CWnd::OnSizing", "AFXWIN/CWnd::OnSpoolerStatus", "AFXWIN/CWnd::OnStyleChanged", "AFXWIN/CWnd::OnStyleChanging", "AFXWIN/CWnd::OnSysChar", "AFXWIN/CWnd::OnSysColorChange", "AFXWIN/CWnd::OnSysCommand", "AFXWIN/CWnd::OnSysDeadChar", "AFXWIN/CWnd::OnSysKeyDown", "AFXWIN/CWnd::OnSysKeyUp", "AFXWIN/CWnd::OnTCard", "AFXWIN/CWnd::OnTimeChange", "AFXWIN/CWnd::OnTimer", "AFXWIN/CWnd::OnTouchInput", "AFXWIN/CWnd::OnTouchInputs", "AFXWIN/CWnd::OnUniChar", "AFXWIN/CWnd::OnUnInitMenuPopup", "AFXWIN/CWnd::OnUpdateUIState", "AFXWIN/CWnd::OnUserChanged", "AFXWIN/CWnd::OnVKeyToItem", "AFXWIN/CWnd::OnVScroll", "AFXWIN/CWnd::OnVScrollClipboard", "AFXWIN/CWnd::OnWindowPosChanged", "AFXWIN/CWnd::OnWindowPosChanging", "AFXWIN/CWnd::OnWinIniChange", "AFXWIN/CWnd::OnWndMsg", "AFXWIN/CWnd::OnXButtonDblClk", "AFXWIN/CWnd::OnXButtonDown", "AFXWIN/CWnd::OnXButtonUp", "AFXWIN/CWnd::PostNcDestroy", "AFXWIN/CWnd::ReflectChildNotify", "AFXWIN/CWnd::ReflectLastMsg", "AFXWIN/CWnd::ResizeDynamicLayout", "AFXWIN/CWnd::WindowProc", "AFXWIN/CWnd::m_hWnd"]
helpviewer_keywords: ["CWnd [MFC], CWnd", "CWnd [MFC], accDoDefaultAction", "CWnd [MFC], accHitTest", "CWnd [MFC], accLocation", "CWnd [MFC], accNavigate", "CWnd [MFC], accSelect", "CWnd [MFC], AnimateWindow", "CWnd [MFC], ArrangeIconicWindows", "CWnd [MFC], Attach", "CWnd [MFC], BeginModalState", "CWnd [MFC], BeginPaint", "CWnd [MFC], BindDefaultProperty", "CWnd [MFC], BindProperty", "CWnd [MFC], BringWindowToTop", "CWnd [MFC], CalcWindowRect", "CWnd [MFC], CancelToolTips", "CWnd [MFC], CenterWindow", "CWnd [MFC], ChangeClipboardChain", "CWnd [MFC], CheckDlgButton", "CWnd [MFC], CheckRadioButton", "CWnd [MFC], ChildWindowFromPoint", "CWnd [MFC], ClientToScreen", "CWnd [MFC], CloseWindow", "CWnd [MFC], ContinueModal", "CWnd [MFC], Create", "CWnd [MFC], CreateAccessibleProxy", "CWnd [MFC], CreateCaret", "CWnd [MFC], CreateControl", "CWnd [MFC], CreateEx", "CWnd [MFC], CreateGrayCaret", "CWnd [MFC], CreateSolidCaret", "CWnd [MFC], DeleteTempMap", "CWnd [MFC], DestroyWindow", "CWnd [MFC], Detach", "CWnd [MFC], DlgDirList", "CWnd [MFC], DlgDirListComboBox", "CWnd [MFC], DlgDirSelect", "CWnd [MFC], DlgDirSelectComboBox", "CWnd [MFC], DragAcceptFiles", "CWnd [MFC], DragDetect", "CWnd [MFC], DrawAnimatedRects", "CWnd [MFC], DrawCaption", "CWnd [MFC], DrawMenuBar", "CWnd [MFC], EnableActiveAccessibility", "CWnd [MFC], EnableDynamicLayout", "CWnd [MFC], EnableD2DSupport", "CWnd [MFC], EnableScrollBar", "CWnd [MFC], EnableScrollBarCtrl", "CWnd [MFC], EnableToolTips", "CWnd [MFC], EnableTrackingToolTips", "CWnd [MFC], EnableWindow", "CWnd [MFC], EndModalLoop", "CWnd [MFC], EndModalState", "CWnd [MFC], EndPaint", "CWnd [MFC], ExecuteDlgInit", "CWnd [MFC], FilterToolTipMessage", "CWnd [MFC], FindWindow", "CWnd [MFC], FindWindowEx", "CWnd [MFC], FlashWindow", "CWnd [MFC], FlashWindowEx", "CWnd [MFC], FromHandle", "CWnd [MFC], FromHandlePermanent", "CWnd [MFC], get_accChild", "CWnd [MFC], get_accChildCount", "CWnd [MFC], get_accDefaultAction", "CWnd [MFC], get_accDescription", "CWnd [MFC], get_accFocus", "CWnd [MFC], get_accHelp", "CWnd [MFC], get_accHelpTopic", "CWnd [MFC], get_accKeyboardShortcut", "CWnd [MFC], get_accName", "CWnd [MFC], get_accParent", "CWnd [MFC], get_accRole", "CWnd [MFC], get_accSelection", "CWnd [MFC], get_accState", "CWnd [MFC], get_accValue", "CWnd [MFC], GetActiveWindow", "CWnd [MFC], GetAncestor", "CWnd [MFC], GetCapture", "CWnd [MFC], GetCaretPos", "CWnd [MFC], GetCheckedRadioButton", "CWnd [MFC], GetClientRect", "CWnd [MFC], GetClipboardOwner", "CWnd [MFC], GetClipboardViewer", "CWnd [MFC], GetControlUnknown", "CWnd [MFC], GetDC", "CWnd [MFC], GetDCEx", "CWnd [MFC], GetDCRenderTarget", "CWnd [MFC], GetDescendantWindow", "CWnd [MFC], GetDesktopWindow", "CWnd [MFC], GetDlgCtrlID", "CWnd [MFC], GetDlgItem", "CWnd [MFC], GetDlgItemInt", "CWnd [MFC], GetDlgItemText", "CWnd [MFC], GetDSCCursor", "CWnd [MFC], GetDynamicLayout", "CWnd [MFC], GetExStyle", "CWnd [MFC], GetFocus", "CWnd [MFC], GetFont", "CWnd [MFC], GetForegroundWindow", "CWnd [MFC], GetIcon", "CWnd [MFC], GetLastActivePopup", "CWnd [MFC], GetLayeredWindowAttributes", "CWnd [MFC], GetMenu", "CWnd [MFC], GetNextDlgGroupItem", "CWnd [MFC], GetNextDlgTabItem", "CWnd [MFC], GetNextWindow", "CWnd [MFC], GetOleControlSite", "CWnd [MFC], GetOpenClipboardWindow", "CWnd [MFC], GetOwner", "CWnd [MFC], GetParent", "CWnd [MFC], GetParentFrame", "CWnd [MFC], GetParentOwner", "CWnd [MFC], GetProperty", "CWnd [MFC], GetRenderTarget", "CWnd [MFC], GetSafeHwnd", "CWnd [MFC], GetSafeOwner", "CWnd [MFC], GetScrollBarCtrl", "CWnd [MFC], GetScrollBarInfo", "CWnd [MFC], GetScrollInfo", "CWnd [MFC], GetScrollLimit", "CWnd [MFC], GetScrollPos", "CWnd [MFC], GetScrollRange", "CWnd [MFC], GetStyle", "CWnd [MFC], GetSystemMenu", "CWnd [MFC], GetTitleBarInfo", "CWnd [MFC], GetTopLevelFrame", "CWnd [MFC], GetTopLevelOwner", "CWnd [MFC], GetTopLevelParent", "CWnd [MFC], GetTopWindow", "CWnd [MFC], GetUpdateRect", "CWnd [MFC], GetUpdateRgn", "CWnd [MFC], GetWindow", "CWnd [MFC], GetWindowContextHelpId", "CWnd [MFC], GetWindowDC", "CWnd [MFC], GetWindowedChildCount", "CWnd [MFC], GetWindowInfo", "CWnd [MFC], GetWindowlessChildCount", "CWnd [MFC], GetWindowPlacement", "CWnd [MFC], GetWindowRect", "CWnd [MFC], GetWindowRgn", "CWnd [MFC], GetWindowText", "CWnd [MFC], GetWindowTextLength", "CWnd [MFC], HideCaret", "CWnd [MFC], HiliteMenuItem", "CWnd [MFC], HtmlHelp", "CWnd [MFC], Invalidate", "CWnd [MFC], InvalidateRect", "CWnd [MFC], InvalidateRgn", "CWnd [MFC], InvokeHelper", "CWnd [MFC], IsChild", "CWnd [MFC], IsD2DSupportEnabled", "CWnd [MFC], IsDialogMessage", "CWnd [MFC], IsDlgButtonChecked", "CWnd [MFC], IsDynamicLayoutEnabled", "CWnd [MFC], IsIconic", "CWnd [MFC], IsTouchWindow", "CWnd [MFC], IsWindowEnabled", "CWnd [MFC], IsWindowVisible", "CWnd [MFC], IsZoomed", "CWnd [MFC], KillTimer", "CWnd [MFC], LockWindowUpdate", "CWnd [MFC], MapWindowPoints", "CWnd [MFC], MessageBox", "CWnd [MFC], ModifyStyle", "CWnd [MFC], ModifyStyleEx", "CWnd [MFC], MoveWindow", "CWnd [MFC], NotifyWinEvent", "CWnd [MFC], OnAmbientProperty", "CWnd [MFC], OnDrawIconicThumbnailOrLivePreview", "CWnd [MFC], OnHelp", "CWnd [MFC], OnHelpFinder", "CWnd [MFC], OnHelpIndex", "CWnd [MFC], OnHelpUsing", "CWnd [MFC], OnToolHitTest", "CWnd [MFC], OpenClipboard", "CWnd [MFC], PaintWindowlessControls", "CWnd [MFC], PostMessage", "CWnd [MFC], PreCreateWindow", "CWnd [MFC], PreSubclassWindow", "CWnd [MFC], PreTranslateMessage", "CWnd [MFC], Print", "CWnd [MFC], PrintClient", "CWnd [MFC], PrintWindow", "CWnd [MFC], RedrawWindow", "CWnd [MFC], RegisterTouchWindow", "CWnd [MFC], ReleaseDC", "CWnd [MFC], RepositionBars", "CWnd [MFC], RunModalLoop", "CWnd [MFC], ScreenToClient", "CWnd [MFC], ScrollWindow", "CWnd [MFC], ScrollWindowEx", "CWnd [MFC], SendChildNotifyLastMsg", "CWnd [MFC], SendDlgItemMessage", "CWnd [MFC], SendMessage", "CWnd [MFC], SendMessageToDescendants", "CWnd [MFC], SendNotifyMessage", "CWnd [MFC], SetActiveWindow", "CWnd [MFC], SetCapture", "CWnd [MFC], SetCaretPos", "CWnd [MFC], SetClipboardViewer", "CWnd [MFC], SetDlgCtrlID", "CWnd [MFC], SetDlgItemInt", "CWnd [MFC], SetDlgItemText", "CWnd [MFC], SetFocus", "CWnd [MFC], SetFont", "CWnd [MFC], SetForegroundWindow", "CWnd [MFC], SetIcon", "CWnd [MFC], SetLayeredWindowAttributes", "CWnd [MFC], SetMenu", "CWnd [MFC], SetOwner", "CWnd [MFC], SetParent", "CWnd [MFC], SetProperty", "CWnd [MFC], SetRedraw", "CWnd [MFC], SetScrollInfo", "CWnd [MFC], SetScrollPos", "CWnd [MFC], SetScrollRange", "CWnd [MFC], SetTimer", "CWnd [MFC], SetWindowContextHelpId", "CWnd [MFC], SetWindowPlacement", "CWnd [MFC], SetWindowPos", "CWnd [MFC], SetWindowRgn", "CWnd [MFC], SetWindowText", "CWnd [MFC], ShowCaret", "CWnd [MFC], ShowOwnedPopups", "CWnd [MFC], ShowScrollBar", "CWnd [MFC], ShowWindow", "CWnd [MFC], SubclassDlgItem", "CWnd [MFC], SubclassWindow", "CWnd [MFC], UnlockWindowUpdate", "CWnd [MFC], UnsubclassWindow", "CWnd [MFC], UpdateData", "CWnd [MFC], UpdateDialogControls", "CWnd [MFC], UpdateLayeredWindow", "CWnd [MFC], UpdateWindow", "CWnd [MFC], ValidateRect", "CWnd [MFC], ValidateRgn", "CWnd [MFC], WindowFromPoint", "CWnd [MFC], WinHelp", "CWnd [MFC], Default", "CWnd [MFC], DefWindowProc", "CWnd [MFC], DoDataExchange", "CWnd [MFC], GetCurrentMessage", "CWnd [MFC], InitDynamicLayout", "CWnd [MFC], LoadDynamicLayoutResource", "CWnd [MFC], OnActivate", "CWnd [MFC], OnActivateApp", "CWnd [MFC], OnAppCommand", "CWnd [MFC], OnAskCbFormatName", "CWnd [MFC], OnCancelMode", "CWnd [MFC], OnCaptureChanged", "CWnd [MFC], OnChangeCbChain", "CWnd [MFC], OnChangeUIState", "CWnd [MFC], OnChar", "CWnd [MFC], OnCharToItem", "CWnd [MFC], OnChildActivate", "CWnd [MFC], OnChildNotify", "CWnd [MFC], OnClipboardUpdate", "CWnd [MFC], OnClose", "CWnd [MFC], OnColorizationColorChanged", "CWnd [MFC], OnCommand", "CWnd [MFC], OnCompacting", "CWnd [MFC], OnCompareItem", "CWnd [MFC], OnCompositionChanged", "CWnd [MFC], OnContextMenu", "CWnd [MFC], OnCopyData", "CWnd [MFC], OnCreate", "CWnd [MFC], OnCtlColor", "CWnd [MFC], OnDeadChar", "CWnd [MFC], OnDeleteItem", "CWnd [MFC], OnDestroy", "CWnd [MFC], OnDestroyClipboard", "CWnd [MFC], OnDeviceChange", "CWnd [MFC], OnDevModeChange", "CWnd [MFC], OnDrawClipboard", "CWnd [MFC], OnDrawItem", "CWnd [MFC], OnDropFiles", "CWnd [MFC], OnEnable", "CWnd [MFC], OnEndSession", "CWnd [MFC], OnEnterIdle", "CWnd [MFC], OnEnterMenuLoop", "CWnd [MFC], OnEnterSizeMove", "CWnd [MFC], OnEraseBkgnd", "CWnd [MFC], OnExitMenuLoop", "CWnd [MFC], OnExitSizeMove", "CWnd [MFC], OnFontChange", "CWnd [MFC], OnGetDlgCode", "CWnd [MFC], OnGetMinMaxInfo", "CWnd [MFC], OnHelpInfo", "CWnd [MFC], OnHotKey", "CWnd [MFC], OnHScroll", "CWnd [MFC], OnHScrollClipboard", "CWnd [MFC], OnIconEraseBkgnd", "CWnd [MFC], OnInitMenu", "CWnd [MFC], OnInitMenuPopup", "CWnd [MFC], OnInputDeviceChange", "CWnd [MFC], OnInputLangChange", "CWnd [MFC], OnInputLangChangeRequest", "CWnd [MFC], OnKeyDown", "CWnd [MFC], OnKeyUp", "CWnd [MFC], OnKillFocus", "CWnd [MFC], OnLButtonDblClk", "CWnd [MFC], OnLButtonDown", "CWnd [MFC], OnLButtonUp", "CWnd [MFC], OnMButtonDblClk", "CWnd [MFC], OnMButtonDown", "CWnd [MFC], OnMButtonUp", "CWnd [MFC], OnMDIActivate", "CWnd [MFC], OnMeasureItem", "CWnd [MFC], OnMenuChar", "CWnd [MFC], OnMenuDrag", "CWnd [MFC], OnMenuGetObject", "CWnd [MFC], OnMenuRButtonUp", "CWnd [MFC], OnMenuSelect", "CWnd [MFC], OnMouseActivate", "CWnd [MFC], OnMouseHover", "CWnd [MFC], OnMouseHWheel", "CWnd [MFC], OnMouseLeave", "CWnd [MFC], OnMouseMove", "CWnd [MFC], OnMouseWheel", "CWnd [MFC], OnMove", "CWnd [MFC], OnMoving", "CWnd [MFC], OnNcActivate", "CWnd [MFC], OnNcCalcSize", "CWnd [MFC], OnNcCreate", "CWnd [MFC], OnNcDestroy", "CWnd [MFC], OnNcHitTest", "CWnd [MFC], OnNcLButtonDblClk", "CWnd [MFC], OnNcLButtonDown", "CWnd [MFC], OnNcLButtonUp", "CWnd [MFC], OnNcMButtonDblClk", "CWnd [MFC], OnNcMButtonDown", "CWnd [MFC], OnNcMButtonUp", "CWnd [MFC], OnNcMouseHover", "CWnd [MFC], OnNcMouseLeave", "CWnd [MFC], OnNcMouseMove", "CWnd [MFC], OnNcPaint", "CWnd [MFC], OnNcRButtonDblClk", "CWnd [MFC], OnNcRButtonDown", "CWnd [MFC], OnNcRButtonUp", "CWnd [MFC], OnNcRenderingChanged", "CWnd [MFC], OnNcXButtonDblClk", "CWnd [MFC], OnNcXButtonDown", "CWnd [MFC], OnNcXButtonUp", "CWnd [MFC], OnNextMenu", "CWnd [MFC], OnNotify", "CWnd [MFC], OnNotifyFormat", "CWnd [MFC], OnPaint", "CWnd [MFC], OnPaintClipboard", "CWnd [MFC], OnPaletteChanged", "CWnd [MFC], OnPaletteIsChanging", "CWnd [MFC], OnParentNotify", "CWnd [MFC], OnPowerBroadcast", "CWnd [MFC], OnQueryDragIcon", "CWnd [MFC], OnQueryEndSession", "CWnd [MFC], OnQueryNewPalette", "CWnd [MFC], OnQueryOpen", "CWnd [MFC], OnQueryUIState", "CWnd [MFC], OnRawInput", "CWnd [MFC], OnRButtonDblClk", "CWnd [MFC], OnRButtonDown", "CWnd [MFC], OnRButtonUp", "CWnd [MFC], OnRenderAllFormats", "CWnd [MFC], OnRenderFormat", "CWnd [MFC], OnSessionChange", "CWnd [MFC], OnSetCursor", "CWnd [MFC], OnSetFocus", "CWnd [MFC], OnSettingChange", "CWnd [MFC], OnShowWindow", "CWnd [MFC], OnSize", "CWnd [MFC], OnSizeClipboard", "CWnd [MFC], OnSizing", "CWnd [MFC], OnSpoolerStatus", "CWnd [MFC], OnStyleChanged", "CWnd [MFC], OnStyleChanging", "CWnd [MFC], OnSysChar", "CWnd [MFC], OnSysColorChange", "CWnd [MFC], OnSysCommand", "CWnd [MFC], OnSysDeadChar", "CWnd [MFC], OnSysKeyDown", "CWnd [MFC], OnSysKeyUp", "CWnd [MFC], OnTCard", "CWnd [MFC], OnTimeChange", "CWnd [MFC], OnTimer", "CWnd [MFC], OnTouchInput", "CWnd [MFC], OnTouchInputs", "CWnd [MFC], OnUniChar", "CWnd [MFC], OnUnInitMenuPopup", "CWnd [MFC], OnUpdateUIState", "CWnd [MFC], OnUserChanged", "CWnd [MFC], OnVKeyToItem", "CWnd [MFC], OnVScroll", "CWnd [MFC], OnVScrollClipboard", "CWnd [MFC], OnWindowPosChanged", "CWnd [MFC], OnWindowPosChanging", "CWnd [MFC], OnWinIniChange", "CWnd [MFC], OnWndMsg", "CWnd [MFC], OnXButtonDblClk", "CWnd [MFC], OnXButtonDown", "CWnd [MFC], OnXButtonUp", "CWnd [MFC], PostNcDestroy", "CWnd [MFC], ReflectChildNotify", "CWnd [MFC], ReflectLastMsg", "CWnd [MFC], ResizeDynamicLayout", "CWnd [MFC], WindowProc", "CWnd [MFC], m_hWnd"]
ms.assetid: 49a832ee-bc34-4126-88b3-bc1d9974f6c4
---
# CWnd Class

Provides the base functionality of all window classes in the Microsoft Foundation Class Library.

## Syntax

```
class CWnd : public CCmdTarget
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CWnd::CWnd](#cwnd)|Constructs a `CWnd` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWnd::accDoDefaultAction](#accdodefaultaction)|Called by the framework to perform the object's default action.|
|[CWnd::accHitTest](#acchittest)|Called by the framework to retrieve the child element or child object at a given point on the screen.|
|[CWnd::accLocation](#acclocation)|Called by the framework to retrieve the specified object's current screen location.|
|[CWnd::accNavigate](#accnavigate)|Called by the framework to traverse to another user interface element within a container and if possible, retrieve the object.|
|[CWnd::accSelect](#accselect)|Called by the framework to modify the selection or move the keyboard focus of the specified object.|
|[CWnd::AnimateWindow](#animatewindow)|Animates the associated window object.|
|[CWnd::ArrangeIconicWindows](#arrangeiconicwindows)|Arranges all the minimized (iconic) child windows.|
|[CWnd::Attach](#attach)|Attaches a Windows handle to a `CWnd` object.|
|[CWnd::BeginModalState](#beginmodalstate)|Call this member function to make a frame window modal.|
|[CWnd::BeginPaint](#beginpaint)|Prepares `CWnd` for painting.|
|[CWnd::BindDefaultProperty](#binddefaultproperty)|Binds the calling object's default simple bound property, as marked in the type library, to a cursor associated with a data-source control.|
|[CWnd::BindProperty](#bindproperty)|Binds a cursor-bound property on a data-bound control to a data-source control and registers that relationship with the MFC binding manager.|
|[CWnd::BringWindowToTop](#bringwindowtotop)|Brings `CWnd` to the top of a stack of overlapping windows.|
|[CWnd::CalcWindowRect](#calcwindowrect)|Called to calculate the window rectangle from the client rectangle.|
|[CWnd::CancelToolTips](#canceltooltips)|Disables the tooltip control.|
|[CWnd::CenterWindow](#centerwindow)|Centers a window relative to its parent.|
|[CWnd::ChangeClipboardChain](#changeclipboardchain)|Removes `CWnd` from the chain of Clipboard viewers.|
|[CWnd::CheckDlgButton](#checkdlgbutton)|Places a check mark next to or removes a check mark from a button control.|
|[CWnd::CheckRadioButton](#checkradiobutton)|Checks the specified radio button and removes the check mark from all other radio buttons in the specified group of buttons.|
|[CWnd::ChildWindowFromPoint](#childwindowfrompoint)|Determines which, if any, of the child windows contains the specified point.|
|[CWnd::ClientToScreen](#clienttoscreen)|Converts the client coordinates of a given point or rectangle on the display to screen coordinates.|
|[CWnd::CloseWindow](#closewindow)|Minimizes the window.|
|[CWnd::ContinueModal](#continuemodal)|Continues a window's modal status.|
|[CWnd::Create](#create)|Creates and initializes the child window associated with the `CWnd` object.|
|[CWnd::CreateAccessibleProxy](#createaccessibleproxy)|Creates an Active Accessibility proxy for the specified object.|
|[CWnd::CreateCaret](#createcaret)|Creates a new shape for the system caret and gets ownership of the caret.|
|[CWnd::CreateControl](#createcontrol)|Create an ActiveX control that will be represented in an MFC program by a `CWnd` object.|
|[CWnd::CreateEx](#createex)|Creates a Windows overlapped, pop-up, or child window and attaches it to a `CWnd` object.|
|[CWnd::CreateGrayCaret](#creategraycaret)|Creates a gray block for the system caret and gets ownership of the caret.|
|[CWnd::CreateSolidCaret](#createsolidcaret)|Creates a solid block for the system caret and gets ownership of the caret.|
|[CWnd::DeleteTempMap](#deletetempmap)|Called automatically by the `CWinApp` idle-time handler and deletes any temporary `CWnd` objects created by `FromHandle`.|
|[CWnd::DestroyWindow](#destroywindow)|Destroys the attached Windows window.|
|[CWnd::Detach](#detach)|Detaches a Windows handle from a `CWnd` object and returns the handle.|
|[CWnd::DlgDirList](#dlgdirlist)|Fills a list box with a file or directory listing.|
|[CWnd::DlgDirListComboBox](#dlgdirlistcombobox)|Fills the list box of a combo box with a file or directory listing.|
|[CWnd::DlgDirSelect](#dlgdirselect)|Retrieves the current selection from a list box.|
|[CWnd::DlgDirSelectComboBox](#dlgdirselectcombobox)|Retrieves the current selection from the list box of a combo box.|
|[CWnd::DragAcceptFiles](#dragacceptfiles)|Indicates the window will accept dragged files.|
|[CWnd::DragDetect](#dragdetect)|Captures the mouse and tracks its movement until the user releases the left button, presses the ESC key, or moves the mouse outside the drag rectangle around the specified point.|
|[CWnd::DrawAnimatedRects](#drawanimatedrects)|Draws a wire-frame rectangle and animates it to indicate the opening of an icon or the minimizing or maximizing of a window.|
|[CWnd::DrawCaption](#drawcaption)|Draws a caption.|
|[CWnd::DrawMenuBar](#drawmenubar)|Redraws the menu bar.|
|[CWnd::EnableActiveAccessibility](#enableactiveaccessibility)|Enables user-defined `Active Accessibility` functions.|
|[CWnd::EnableDynamicLayout](#enabledynamiclayout)|Enables the position and size of child windows to adjust dynamically when the user resizes the window.|
|[CWnd::EnableD2DSupport](#enabled2dsupport)|Enables or disables window `D2D` support. Call this method before the main window is initialized.|
|[CWnd::EnableScrollBar](#enablescrollbar)|Enables or disables one or both arrows of a scroll bar.|
|[CWnd::EnableScrollBarCtrl](#enablescrollbarctrl)|Enables or disables a sibling scroll-bar control.|
|[CWnd::EnableToolTips](#enabletooltips)|Enables the tooltip control.|
|[CWnd::EnableTrackingToolTips](#enabletrackingtooltips)|Enables the tooltip control in tracking mode.|
|[CWnd::EnableWindow](#enablewindow)|Enables or disables mouse and keyboard input.|
|[CWnd::EndModalLoop](#endmodalloop)|Ends a window's modal status.|
|[CWnd::EndModalState](#endmodalstate)|Call this member function to change a frame window from modal to modeless.|
|[CWnd::EndPaint](#endpaint)|Marks the end of painting.|
|[CWnd::ExecuteDlgInit](#executedlginit)|Initiates a dialog resource.|
|[CWnd::FilterToolTipMessage](#filtertooltipmessage)|Retrieves the title or text associated with a control in a dialog box.|
|[CWnd::FindWindow](#findwindow)|Returns the handle of the window, which is identified by its window name and window class.|
|[CWnd::FindWindowEx](#findwindowex)|Returns the handle of the window, which is identified by its window name and window class.|
|[CWnd::FlashWindow](#flashwindow)|Flashes the window once.|
|[CWnd::FlashWindowEx](#flashwindowex)|Flashes the window with additional functionality.|
|[CWnd::FromHandle](#fromhandle)|Returns a pointer to a `CWnd` object when given a handle to a window. If a `CWnd` object is not attached to the handle, a temporary `CWnd` object is created and attached.|
|[CWnd::FromHandlePermanent](#fromhandlepermanent)|Returns a pointer to a `CWnd` object when given a handle to a window.|
|[CWnd::get_accChild](#get_accchild)|Called by the framework to retrieve the address of an `IDispatch` interface for the specified child.|
|[CWnd::get_accChildCount](#get_accchildcount)|Called by the framework to retrieve the number of children belonging to this object.|
|[CWnd::get_accDefaultAction](#get_accdefaultaction)|Called by the framework to retrieve a string that describes the object's default action.|
|[CWnd::get_accDescription](#get_accdescription)|Called by framework to retrieve a string that describes the visual appearance of the specified object.|
|[CWnd::get_accFocus](#get_accfocus)|Called by the framework to retrieve the object that has the keyboard focus.|
|[CWnd::get_accHelp](#get_acchelp)|Called by the framework to retrieve an object's **Help** property string.|
|[CWnd::get_accHelpTopic](#get_acchelptopic)|Called by the framework to retrieve the full path of the `WinHelp` file associated with the specified object and the identifier of the appropriate topic within that file.|
|[CWnd::get_accKeyboardShortcut](#get_acckeyboardshortcut)|Called by the framework to retrieve the specified object's shortcut key or access key.|
|[CWnd::get_accName](#get_accname)|Called by the framework to retrieve the name of the specified object.|
|[CWnd::get_accParent](#get_accparent)|Called by the framework to retrieve the `IDispatch` interface of the object's parent.|
|[CWnd::get_accRole](#get_accrole)|Called by the framework to retrieve information that describes the role of the specified object.|
|[CWnd::get_accSelection](#get_accselection)|Called by the framework to retrieve the selected children of this object.|
|[CWnd::get_accState](#get_accstate)|Called by the framework to retrieve the current state of the specified object.|
|[CWnd::get_accValue](#get_accvalue)|Called by the framework to retrieve the value of the specified object.|
|[CWnd::GetActiveWindow](#getactivewindow)|Retrieves the active window.|
|[CWnd::GetAncestor](#getancestor)|Retrieves the ancestor window object of the specified window.|
|[CWnd::GetCapture](#getcapture)|Retrieves the `CWnd` that has the mouse capture.|
|[CWnd::GetCaretPos](#getcaretpos)|Retrieves the client coordinates of the caret's current position.|
|[CWnd::GetCheckedRadioButton](#getcheckedradiobutton)|Returns the ID of the currently checked radio button in a group of buttons.|
|[CWnd::GetClientRect](#getclientrect)|Gets the dimensions of the `CWnd` client area.|
|[CWnd::GetClipboardOwner](#getclipboardowner)|Retrieves a pointer to the current owner of the Clipboard.|
|[CWnd::GetClipboardViewer](#getclipboardviewer)|Retrieves a pointer to the first window in the chain of Clipboard viewers.|
|[CWnd::GetControlUnknown](#getcontrolunknown)|Retrieves a pointer to an unknown ActiveX control.|
|[CWnd::GetDC](#getdc)|Retrieves a display context for the client area.|
|[CWnd::GetDCEx](#getdcex)|Retrieves a display context for the client area, and enables clipping while drawing.|
|[CWnd::GetDCRenderTarget](#getdcrendertarget)|Retrieves the device context (DC) render target for the `CWnd` window.|
|[CWnd::GetDescendantWindow](#getdescendantwindow)|Searches all descendant windows and returns the window with the specified ID.|
|[CWnd::GetDesktopWindow](#getdesktopwindow)|Retrieves the Windows desktop window.|
|[CWnd::GetDlgCtrlID](#getdlgctrlid)|If the `CWnd` is a child window, calling this function returns its ID value.|
|[CWnd::GetDlgItem](#getdlgitem)|Retrieves the control with the specified ID from the specified dialog box.|
|[CWnd::GetDlgItemInt](#getdlgitemint)|Translates the text of a control in the given dialog box to an integer value.|
|[CWnd::GetDlgItemText](#getdlgitemtext)|Retrieves the caption or text associated with a control.|
|[CWnd::GetDSCCursor](#getdsccursor)|Retrieves a pointer to the underlying cursor that is defined by the DataSource, UserName, Password, and SQL properties of a data-source control.|
|[CWnd::GetDynamicLayout](#getdynamiclayout)|Retrieves a pointer to the dynamic layout manager object.|
|[CWnd::GetExStyle](#getexstyle)|Returns the window's extended style.|
|[CWnd::GetFocus](#getfocus)|Retrieves the `CWnd` that currently has the input focus.|
|[CWnd::GetFont](#getfont)|Retrieves the current font.|
|[CWnd::GetForegroundWindow](#getforegroundwindow)|Returns a pointer to the foreground window (the top-level window with which the user is currently working).|
|[CWnd::GetIcon](#geticon)|Retrieves the handle to an icon.|
|[CWnd::GetLastActivePopup](#getlastactivepopup)|Determines which pop-up window owned by `CWnd` was most recently active.|
|[CWnd::GetLayeredWindowAttributes](#getlayeredwindowattributes)|Retrieves the opacity and transparency color key of a layered window.|
|[CWnd::GetMenu](#getmenu)|Retrieves a pointer to the specified menu.|
|[CWnd::GetNextDlgGroupItem](#getnextdlggroupitem)|Searches for the next (or previous) control within a group of controls.|
|[CWnd::GetNextDlgTabItem](#getnextdlgtabitem)|Retrieves the first control with the [WS_TABSTOP](styles-used-by-mfc.md#window-styles) style that follows (or precedes) the specified control.|
|[CWnd::GetNextWindow](#getnextwindow)|Returns the next (or previous) window in the window manager's list.|
|[CWnd::GetOleControlSite](#getolecontrolsite)|Retrieves the custom site for the specified ActiveX control.|
|[CWnd::GetOpenClipboardWindow](#getopenclipboardwindow)|Retrieves a pointer to the window that currently has the Clipboard open.|
|[CWnd::GetOwner](#getowner)|Retrieves a pointer to the owner of a `CWnd`.|
|[CWnd::GetParent](#getparent)|Retrieves the parent window of `CWnd` (if any).|
|[CWnd::GetParentFrame](#getparentframe)|Retrieves the `CWnd` object's parent frame window.|
|[CWnd::GetParentOwner](#getparentowner)|Returns a pointer to a child window's parent window.|
|[CWnd::GetProperty](#getproperty)|Retrieves an ActiveX control property.|
|[CWnd::GetRenderTarget](#getrendertarget)|Gets a render target that is associated with this window.|
|[CWnd::GetSafeHwnd](#getsafehwnd)|Returns `m_hWnd`, or NULL if the **`this`** pointer is NULL.|
|[CWnd::GetSafeOwner](#getsafeowner)|Retrieves the safe owner for the given window.|
|[CWnd::GetScrollBarCtrl](#getscrollbarctrl)|Returns a sibling scroll-bar control.|
|[CWnd::GetScrollBarInfo](#getscrollbarinfo)|Retrieves information about the specified scroll bar.|
|[CWnd::GetScrollInfo](#getscrollinfo)|Retrieves the information that the `SCROLLINFO` structure maintains about a scroll bar.|
|[CWnd::GetScrollLimit](#getscrolllimit)|Retrieves the limit of the scroll bar.|
|[CWnd::GetScrollPos](#getscrollpos)|Retrieves the current position of a scroll box.|
|[CWnd::GetScrollRange](#getscrollrange)|Copies the current minimum and maximum scroll-bar positions for the given scroll bar.|
|[CWnd::GetStyle](#getstyle)|Returns the current window style.|
|[CWnd::GetSystemMenu](#getsystemmenu)|Allows the application to access the Control menu for copying and modification.|
|[CWnd::GetTitleBarInfo](#gettitlebarinfo)|Retrieves information about the specified title bar.|
|[CWnd::GetTopLevelFrame](#gettoplevelframe)|Retrieves the window's top-level frame window.|
|[CWnd::GetTopLevelOwner](#gettoplevelowner)|Retrieves the top-level window.|
|[CWnd::GetTopLevelParent](#gettoplevelparent)|Retrieves the window's top-level parent.|
|[CWnd::GetTopWindow](#gettopwindow)|Returns the first child window that belongs to the `CWnd`.|
|[CWnd::GetUpdateRect](#getupdaterect)|Retrieves the coordinates of the smallest rectangle that completely encloses the `CWnd` update region.|
|[CWnd::GetUpdateRgn](#getupdatergn)|Retrieves the `CWnd` update region.|
|[CWnd::GetWindow](#getwindow)|Returns the window with the specified relationship to this window.|
|[CWnd::GetWindowContextHelpId](#getwindowcontexthelpid)|Retrieves the help context identifier.|
|[CWnd::GetWindowDC](#getwindowdc)|Retrieves the display context for the whole window, including the caption bar, menus, and scroll bars.|
|[CWnd::GetWindowedChildCount](#getwindowedchildcount)|Returns the number of associated child windows.|
|[CWnd::GetWindowInfo](#getwindowinfo)|Returns information about the window.|
|[CWnd::GetWindowlessChildCount](#getwindowlesschildcount)|Returns the number of associated windowless child windows.|
|[CWnd::GetWindowPlacement](#getwindowplacement)|Retrieves the show state and the normal (restored), minimized, and maximized positions of a window.|
|[CWnd::GetWindowRect](#getwindowrect)|Gets the screen coordinates of `CWnd`.|
|[CWnd::GetWindowRgn](#getwindowrgn)|Retrieves a copy of the window region of a window.|
|[CWnd::GetWindowText](#getwindowtext)|Returns the window text or caption title (if it has one).|
|[CWnd::GetWindowTextLength](#getwindowtextlength)|Returns the length of the window's text or caption title.|
|[CWnd::HideCaret](#hidecaret)|Hides the caret by removing it from the display screen.|
|[CWnd::HiliteMenuItem](#hilitemenuitem)|Highlights or removes the highlighting from a top-level (menu-bar) menu item.|
|[CWnd::HtmlHelp](#htmlhelp)|Called to initiate the HTMLHelp application.|
|[CWnd::Invalidate](#invalidate)|Invalidates the entire client area.|
|[CWnd::InvalidateRect](#invalidaterect)|Invalidates the client area within the given rectangle by adding that rectangle to the current update region.|
|[CWnd::InvalidateRgn](#invalidatergn)|Invalidates the client area within the given region by adding that region to the current update region.|
|[CWnd::InvokeHelper](#invokehelper)|Invokes an ActiveX control method or property.|
|[CWnd::IsChild](#ischild)|Indicates whether `CWnd` is a child window or other direct descendant of the specified window.|
|[CWnd::IsD2DSupportEnabled](#isd2dsupportenabled)|Determines whether D2D support is enabled.|
|[CWnd::IsDialogMessage](#isdialogmessage)|Determines whether the given message is intended for the modeless dialog box and, if so, processes it.|
|[CWnd::IsDlgButtonChecked](#isdlgbuttonchecked)|Determines whether a button control is checked.|
|[CWnd::IsDynamicLayoutEnabled](#isdynamiclayoutenabled)|Determines whether dynamic layout is enabled on this window. If dynamic layout is enabled, the position and size of child windows can change when the user resizes the parent window.|
|[CWnd::IsIconic](#isiconic)|Determines whether `CWnd` is minimized (iconic).|
|[CWnd::IsTouchWindow](#istouchwindow)|Specifies whether `CWnd` has touch support.|
|[CWnd::IsWindowEnabled](#iswindowenabled)|Determines whether the window is enabled for mouse and keyboard input.|
|[CWnd::IsWindowVisible](#iswindowvisible)|Determines whether the window is visible.|
|[CWnd::IsZoomed](#iszoomed)|Determines whether `CWnd` is maximized.|
|[CWnd::KillTimer](#killtimer)|Kills a system timer.|
|[CWnd::LockWindowUpdate](#lockwindowupdate)|Disables or reenables drawing in the given window.|
|[CWnd::MapWindowPoints](#mapwindowpoints)|Converts (maps) a set of points from the coordinate space of the `CWnd` to the coordinate space of another window.|
|[CWnd::MessageBox](#messagebox)|Creates and displays a window that contains an application-supplied message and caption.|
|[CWnd::ModifyStyle](#modifystyle)|Modifies the current window style.|
|[CWnd::ModifyStyleEx](#modifystyleex)|Modifies the window's extended style.|
|[CWnd::MoveWindow](#movewindow)|Changes the position and dimensions of `CWnd`.|
|[CWnd::NotifyWinEvent](#notifywinevent)|Signals the system that a predefined event occurred.|
|[CWnd::OnAmbientProperty](#onambientproperty)|Implement ambient property values.|
|[CWnd::OnDrawIconicThumbnailOrLivePreview](#ondrawiconicthumbnailorlivepreview)|Called by the framework when it needs to obtain a bitmap to be displayed on Windows 7 tab thumbnail, or on the client for application peek.|
|[CWnd::OnHelp](#onhelp)|Handles F1 Help within the application (using the current context).|
|[CWnd::OnHelpFinder](#onhelpfinder)|Handles the ID_HELP_FINDER and ID_DEFAULT_HELP commands.|
|[CWnd::OnHelpIndex](#onhelpindex)|Handles the ID_HELP_INDEX command and provides a default Help topic.|
|[CWnd::OnHelpUsing](#onhelpusing)|Handles the ID_HELP_USING command.|
|[CWnd::OnToolHitTest](#ontoolhittest)|Determines whether a point is in the bounding rectangle of the specified tool and retrieves information about the tool.|
|[CWnd::OpenClipboard](#openclipboard)|Opens the Clipboard. Other applications will not be able to modify the Clipboard until the Windows [CloseClipboard](/windows/win32/api/winuser/nf-winuser-closeclipboard) function is called.|
|[CWnd::PaintWindowlessControls](#paintwindowlesscontrols)|Draws windowless controls on the control container.|
|[CWnd::PostMessage](#postmessage)|Places a message in the application queue, then returns without waiting for the window to process the message.|
|[CWnd::PreCreateWindow](#precreatewindow)|Called before the creation of the Windows window attached to this `CWnd` object.|
|[CWnd::PreSubclassWindow](#presubclasswindow)|Allows other necessary subclassing to occur before [SubclassWindow](#subclasswindow) is called.|
|[CWnd::PreTranslateMessage](#pretranslatemessage)|Used by `CWinApp` to filter window messages before they are dispatched to the `TranslateMessage` and `DispatchMessage` Windows functions.|
|[CWnd::Print](#print)|Draws the current window in the specified device context.|
|[CWnd::PrintClient](#printclient)|Draws any window in the specified device context (usually a printer device context).|
|[CWnd::PrintWindow](#printwindow)|Copies a visual window into the specified device context, typically a printer DC.|
|[CWnd::RedrawWindow](#redrawwindow)|Updates the specified rectangle or region in the client area.|
|[CWnd::RegisterTouchWindow](#registertouchwindow)|Register/Unregister window Windows touch support.|
|[CWnd::ReleaseDC](#releasedc)|Releases client and window device contexts, freeing them for use by other applications.|
|[CWnd::RepositionBars](#repositionbars)|Repositions control bars in the client area.|
|[CWnd::RunModalLoop](#runmodalloop)|Retrieves, translates, or dispatches messages for a window that is in modal status.|
|[CWnd::ScreenToClient](#screentoclient)|Converts the screen coordinates of a given point or rectangle on the display to client coordinates.|
|[CWnd::ScrollWindow](#scrollwindow)|Scrolls the contents of the client area.|
|[CWnd::ScrollWindowEx](#scrollwindowex)|Scrolls the contents of the client area. Similar to `ScrollWindow`, with additional features.|
|[CWnd::SendChildNotifyLastMsg](#sendchildnotifylastmsg)|Provides a notification message to a child window, from the parent window, so the child window can handle a task.|
|[CWnd::SendDlgItemMessage](#senddlgitemmessage)|Sends a message to the specified control.|
|[CWnd::SendMessage](#sendmessage)|Sends a message to the `CWnd` object and does not return until it has processed the message.|
|[CWnd::SendMessageToDescendants](#sendmessagetodescendants)|Sends a message to all descendant windows of the window.|
|[CWnd::SendNotifyMessage](#sendnotifymessage)|Sends the specified message to the window and returns as soon as possible, depending on whether the calling thread created the window.|
|[CWnd::SetActiveWindow](#setactivewindow)|Activates the window.|
|[CWnd::SetCapture](#setcapture)|Causes all subsequent mouse input to be sent to the `CWnd`.|
|[CWnd::SetCaretPos](#setcaretpos)|Moves the caret to a specified position.|
|[CWnd::SetClipboardViewer](#setclipboardviewer)|Adds `CWnd` to the chain of windows that are notified whenever the contents of the Clipboard are changed.|
|[CWnd::SetDlgCtrlID](#setdlgctrlid)|Sets the window or control ID for the window (which can be any child window, not only a control in a dialog box).|
|[CWnd::SetDlgItemInt](#setdlgitemint)|Sets the text of a control to the string that represents an integer value.|
|[CWnd::SetDlgItemText](#setdlgitemtext)|Sets the caption or text of a control in the specified dialog box.|
|[CWnd::SetFocus](#setfocus)|Claims the input focus.|
|[CWnd::SetFont](#setfont)|Sets the current font.|
|[CWnd::SetForegroundWindow](#setforegroundwindow)|Puts the thread that created the window into the foreground and activates the window.|
|[CWnd::SetIcon](#seticon)|Sets the handle to a specific icon.|
|[CWnd::SetLayeredWindowAttributes](#setlayeredwindowattributes)|Sets the opacity and transparency color key of a layered window.|
|[CWnd::SetMenu](#setmenu)|Sets the menu to the specified menu.|
|[CWnd::SetOwner](#setowner)|Changes the owner of a `CWnd`.|
|[CWnd::SetParent](#setparent)|Changes the parent window.|
|[CWnd::SetProperty](#setproperty)|Sets an ActiveX control property.|
|[CWnd::SetRedraw](#setredraw)|Allows changes in `CWnd` to be redrawn or prevents changes from being redrawn.|
|[CWnd::SetScrollInfo](#setscrollinfo)|Sets information about the scroll bar.|
|[CWnd::SetScrollPos](#setscrollpos)|Sets the current position of a scroll box and, if specified, redraws the scroll bar to reflect the new position.|
|[CWnd::SetScrollRange](#setscrollrange)|Sets minimum and maximum position values for the given scroll bar.|
|[CWnd::SetTimer](#settimer)|Installs a system timer that sends a [WM_TIMER](#ontimer) message when triggered.|
|[CWnd::SetWindowContextHelpId](#setwindowcontexthelpid)|Sets the help context identifier.|
|[CWnd::SetWindowPlacement](#setwindowplacement)|Sets the show state and the normal (restored), minimized, and maximized positions for a window.|
|[CWnd::SetWindowPos](#setwindowpos)|Changes the size, position, and ordering of child, pop-up, and top-level windows.|
|[CWnd::SetWindowRgn](#setwindowrgn)|Sets the region of a window.|
|[CWnd::SetWindowText](#setwindowtext)|Sets the window text or caption title (if it has one) to the specified text.|
|[CWnd::ShowCaret](#showcaret)|Shows the caret on the display at the caret's current position. Once shown, the caret begins flashing automatically.|
|[CWnd::ShowOwnedPopups](#showownedpopups)|Shows or hides all pop-up windows owned by the window.|
|[CWnd::ShowScrollBar](#showscrollbar)|Displays or hides a scroll bar.|
|[CWnd::ShowWindow](#showwindow)|Shows or hides the window.|
|[CWnd::SubclassDlgItem](#subclassdlgitem)|Attaches a Windows control to a `CWnd` object and makes it route messages through the `CWnd`'s message map.|
|[CWnd::SubclassWindow](#subclasswindow)|Attaches a window to a `CWnd` object and makes it route messages through the `CWnd`'s message map.|
|[CWnd::UnlockWindowUpdate](#unlockwindowupdate)|Unlocks a window that was locked with `CWnd::LockWindowUpdate`.|
|[CWnd::UnsubclassWindow](#unsubclasswindow)|Detaches a window from a `CWnd` object|
|[CWnd::UpdateData](#updatedata)|Initializes or retrieves data from a dialog box.|
|[CWnd::UpdateDialogControls](#updatedialogcontrols)|Call to update the state of dialog buttons and other controls.|
|[CWnd::UpdateLayeredWindow](#updatelayeredwindow)|Updates the position, size, shape, content, and translucency of a layered window.|
|[CWnd::UpdateWindow](#updatewindow)|Updates the client area.|
|[CWnd::ValidateRect](#validaterect)|Validates the client area within the given rectangle by removing the rectangle from the current update region.|
|[CWnd::ValidateRgn](#validatergn)|Validates the client area within the given region by removing the region from the current update region.|
|[CWnd::WindowFromPoint](#windowfrompoint)|Identifies the window that contains the given point.|
|[CWnd::WinHelp](#winhelp)|Called to initiate the WinHelp application.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[CWnd::Default](#default)|Calls the default window procedure, which provides default processing for any window messages that an application does not process.|
|[CWnd::DefWindowProc](#defwindowproc)|Calls the default window procedure, which provides default processing for any window messages that an application does not process.|
|[CWnd::DoDataExchange](#dodataexchange)|For dialog data exchange and validation. Called by `UpdateData`.|
|[CWnd::GetCurrentMessage](#getcurrentmessage)|Returns a pointer to the message this window is currently processing. Should only be called when in an `On`*Message* message-handler member function.|
|[CWnd::InitDynamicLayout](#initdynamiclayout)|Called by the framework to initialize the dynamic layout for the window.|
|[CWnd::LoadDynamicLayoutResource](#loaddynamiclayoutresource)|Loads dynamic layout information from the resource file.|
|[CWnd::OnActivate](#onactivate)|Called when `CWnd` is being activated or deactivated.|
|[CWnd::OnActivateApp](#onactivateapp)|Called when the application is about to be activated or deactivated.|
|[CWnd::OnAppCommand](#onappcommand)|Called when the user generates an application command event.|
|[CWnd::OnAskCbFormatName](#onaskcbformatname)|Called by a Clipboard viewer application when a Clipboard owner will display the Clipboard contents.|
|[CWnd::OnCancelMode](#oncancelmode)|Called to allow `CWnd` to cancel any internal modes, such as mouse capture.|
|[CWnd::OnCaptureChanged](#oncapturechanged)|Sends a message to the window that is losing the mouse capture.|
|[CWnd::OnChangeCbChain](#onchangecbchain)|Notifies that a specified window is being removed from the chain.|
|[CWnd::OnChangeUIState](#onchangeuistate)|Called when the user interface (UI) state should be changed.|
|[CWnd::OnChar](#onchar)|Called when a keystroke translates to a non-system character.|
|[CWnd::OnCharToItem](#onchartoitem)|Called by a child list box with the [LBS_WANTKEYBOARDINPUT](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style in response to a [WM_CHAR](#onchar) message.|
|[CWnd::OnChildActivate](#onchildactivate)|Called for multiple document interface (MDI) child windows whenever the size or position of `CWnd` changes or `CWnd` is activated.|
|[CWnd::OnChildNotify](#onchildnotify)|Called by a parent window to give a notifying control a chance to respond to a control notification.|
|[CWnd::OnClipboardUpdate](#onclipboardupdate)|Called when the contents of the clipboard have changed.|
|[CWnd::OnClose](#onclose)|Called as a signal that `CWnd` should be closed.|
|[CWnd::OnColorizationColorChanged](#oncolorizationcolorchanged)|Called when the rendering policy for the non-client area has changed.|
|[CWnd::OnCommand](#oncommand)|Called when the user selects a command.|
|[CWnd::OnCompacting](#oncompacting)|Called when Windows detects that system memory is low.|
|[CWnd::OnCompareItem](#oncompareitem)|Called to determine the relative position of a new item in a child sorted owner-draw combo box or list box.|
|[CWnd::OnCompositionChanged](#oncompositionchanged)|Called for all top-level windows when the Desktop Window Manager (DWM) composition is enabled or disabled.|
|[CWnd::OnContextMenu](#oncontextmenu)|Called when the user clicks the right mouse button in the window.|
|[CWnd::OnCopyData](#oncopydata)|Copies data from one application to another.|
|[CWnd::OnCreate](#oncreate)|Called as a part of window creation.|
|[CWnd::OnCtlColor](#onctlcolor)|Called if `CWnd` is the parent of a control when the control is about to be drawn.|
|[CWnd::OnDeadChar](#ondeadchar)|Called when a keystroke translates to a nonsystem dead character (such as accent characters).|
|[CWnd::OnDeleteItem](#ondeleteitem)|Called when an owner-draw child list box or combo box is destroyed or when items are removed from the control.|
|[CWnd::OnDestroy](#ondestroy)|Called when `CWnd` is being destroyed.|
|[CWnd::OnDestroyClipboard](#ondestroyclipboard)|Called when the Clipboard is emptied through a call to the Windows [EmptyClipboard](/windows/win32/api/winuser/nf-winuser-emptyclipboard) function.|
|[CWnd::OnDeviceChange](#ondevicechange)|Notifies an application or device driver of a change to the hardware configuration of a device or the computer.|
|[CWnd::OnDevModeChange](#ondevmodechange)|Called for all top-level windows when the user changes device-mode settings.|
|[CWnd::OnDrawClipboard](#ondrawclipboard)|Called when the contents of the Clipboard change.|
|[CWnd::OnDrawItem](#ondrawitem)|Called when a visual aspect of an owner-draw child button control, combo-box control, list-box control, or menu needs to be drawn.|
|[CWnd::OnDropFiles](#ondropfiles)|Called when the user releases the left mouse button over a window that has registered itself as the recipient of dropped files.|
|[CWnd::OnEnable](#onenable)|Called when `CWnd` is enabled or disabled.|
|[CWnd::OnEndSession](#onendsession)|Called when the session is ending.|
|[CWnd::OnEnterIdle](#onenteridle)|Called to inform an application's main window procedure that a modal dialog box or a menu is entering an idle state.|
|[CWnd::OnEnterMenuLoop](#onentermenuloop)|Called when a menu modal loop has been entered.|
|[CWnd::OnEnterSizeMove](#onentersizemove)|Called after the affected window enters a moving or sizing modal loop.|
|[CWnd::OnEraseBkgnd](#onerasebkgnd)|Called when the window background needs erasing.|
|[CWnd::OnExitMenuLoop](#onexitmenuloop)|Called when a menu modal loop has been exited.|
|[CWnd::OnExitSizeMove](#onexitsizemove)|Called after the affected window exits a moving or sizing modal loop.|
|[CWnd::OnFontChange](#onfontchange)|Called when the pool of font resources changes.|
|[CWnd::OnGetDlgCode](#ongetdlgcode)|Called for a control so the control can process arrow-key and TAB-key input itself.|
|[CWnd::OnGetMinMaxInfo](#ongetminmaxinfo)|Called whenever Windows needs to know the maximized position or dimensions, or the minimum or maximum tracking size.|
|[CWnd::OnHelpInfo](#onhelpinfo)|Called by the framework when the user presses the F1 key.|
|[CWnd::OnHotKey](#onhotkey)|Called when the user presses a system-wide hot key.|
|[CWnd::OnHScroll](#onhscroll)|Called when the user clicks the horizontal scroll bar of `CWnd`.|
|[CWnd::OnHScrollClipboard](#onhscrollclipboard)|Called when a Clipboard owner should scroll the Clipboard image, invalidate the appropriate section, and update the scroll-bar values.|
|[CWnd::OnIconEraseBkgnd](#oniconerasebkgnd)|Called when `CWnd` is minimized (iconic) and the background of the icon must be filled before painting the icon.|
|[CWnd::OnInitMenu](#oninitmenu)|Called when a menu is about to become active.|
|[CWnd::OnInitMenuPopup](#oninitmenupopup)|Called when a pop-up menu is about to become active.|
|[CWnd::OnInputDeviceChange](#oninputdevicechange)|Called when an I/O device is added or removed from the system.|
|[CWnd::OnInputLangChange](#oninputlangchange)|Called after an application's input language has been changed.|
|[CWnd::OnInputLangChangeRequest](#oninputlangchangerequest)|Called when the user chooses a new input language.|
|[CWnd::OnKeyDown](#onkeydown)|Called when a nonsystem key is pressed.|
|[CWnd::OnKeyUp](#onkeyup)|Called when a nonsystem key is released.|
|[CWnd::OnKillFocus](#onkillfocus)|Called immediately before `CWnd` loses the input focus.|
|[CWnd::OnLButtonDblClk](#onlbuttondblclk)|Called when the user double-clicks the left mouse button.|
|[CWnd::OnLButtonDown](#onlbuttondown)|Called when the user presses the left mouse button.|
|[CWnd::OnLButtonUp](#onlbuttonup)|Called when the user releases the left mouse button.|
|[CWnd::OnMButtonDblClk](#onmbuttondblclk)|Called when the user double-clicks the middle mouse button.|
|[CWnd::OnMButtonDown](#onmbuttondown)|Called when the user presses the middle mouse button.|
|[CWnd::OnMButtonUp](#onmbuttonup)|Called when the user releases the middle mouse button.|
|[CWnd::OnMDIActivate](#onmdiactivate)|Called when an MDI child window is activated or deactivated.|
|[CWnd::OnMeasureItem](#onmeasureitem)|Called for an owner-draw child combo box, list box, or menu item when the control is created. `CWnd` informs Windows of the dimensions of the control.|
|[CWnd::OnMenuChar](#onmenuchar)|Called when the user presses a menu mnemonic character that doesn't match any of the predefined mnemonics in the current menu.|
|[CWnd::OnMenuDrag](#onmenudrag)|Called when the user begins to drag a menu item.|
|[CWnd::OnMenuGetObject](#onmenugetobject)|Called when the mouse cursor enters a menu item or moves from the center of the item to the top or bottom of the item.|
|[CWnd::OnMenuRButtonUp](#onmenurbuttonup)|Called when the user releases the right mouse button while the cursor is on a menu item.|
|[CWnd::OnMenuSelect](#onmenuselect)|Called when the user selects a menu item.|
|[CWnd::OnMouseActivate](#onmouseactivate)|Called when the cursor is in an inactive window and the user presses a mouse button.|
|[CWnd::OnMouseHover](#onmousehover)|Called when the cursor hovers over the client area of the window for the period of time specified in a prior call to [TrackMouseEvent](/windows/win32/api/winuser/nf-winuser-trackmouseevent).|
|[CWnd::OnMouseHWheel](#onmousehwheel)|Called when the current window is composed by the Desktop Window Manager (DWM), and that window is maximized.|
|[CWnd::OnMouseLeave](#onmouseleave)|Called when the cursor leaves the client area of the window specified in a prior call to [TrackMouseEvent](/windows/win32/api/winuser/nf-winuser-trackmouseevent).|
|[CWnd::OnMouseMove](#onmousemove)|Called when the mouse cursor moves.|
|[CWnd::OnMouseWheel](#onmousewheel)|Called when a user rotates the mouse wheel. Uses Windows NT 4.0 message handling.|
|[CWnd::OnMove](#onmove)|Called after the position of the `CWnd` has been changed.|
|[CWnd::OnMoving](#onmoving)|Indicates that a user is moving a `CWnd` object.|
|[CWnd::OnNcActivate](#onncactivate)|Called when the non-client area needs to be changed to indicate an active or inactive state.|
|[CWnd::OnNcCalcSize](#onnccalcsize)|Called when the size and position of the client area need to be calculated.|
|[CWnd::OnNcCreate](#onnccreate)|Called prior to [OnCreate](#oncreate) when the non-client area is being created.|
|[CWnd::OnNcDestroy](#onncdestroy)|Called when the non-client area is being destroyed.|
|[CWnd::OnNcHitTest](#onnchittest)|Called by Windows every time the mouse is moved if `CWnd` contains the cursor or has captured mouse input with `SetCapture`.|
|[CWnd::OnNcLButtonDblClk](#onnclbuttondblclk)|Called when the user double-clicks the left mouse button while the cursor is within a non-client area of `CWnd`.|
|[CWnd::OnNcLButtonDown](#onnclbuttondown)|Called when the user presses the left mouse button while the cursor is within a non-client area of `CWnd`.|
|[CWnd::OnNcLButtonUp](#onnclbuttonup)|Called when the user releases the left mouse button while the cursor is within a non-client area of `CWnd`.|
|[CWnd::OnNcMButtonDblClk](#onncmbuttondblclk)|Called when the user double-clicks the middle mouse button while the cursor is within a non-client area of `CWnd`.|
|[CWnd::OnNcMButtonDown](#onncmbuttondown)|Called when the user presses the middle mouse button while the cursor is within a non-client area of `CWnd`.|
|[CWnd::OnNcMButtonUp](#onncmbuttonup)|Called when the user releases the middle mouse button while the cursor is within a non-client area of `CWnd`.|
|[CWnd::OnNcMouseHover](#onncmousehover)|Called when the cursor hovers over the non-client area of the window for the period of time specified in a prior call to [TrackMouseEvent](/windows/win32/api/winuser/nf-winuser-trackmouseevent).|
|[CWnd::OnNcMouseLeave](#onncmouseleave)|The framework calls this member function when the cursor leaves the non-client area of the window specified in a prior call to [TrackMouseEvent](/windows/win32/api/winuser/nf-winuser-trackmouseevent).|
|[CWnd::OnNcMouseMove](#onncmousemove)|Called when the cursor is moved within a non-client area of `CWnd`.|
|[CWnd::OnNcPaint](#onncpaint)|Called when the non-client area needs painting.|
|[CWnd::OnNcRButtonDblClk](#onncrbuttondblclk)|Called when the user double-clicks the right mouse button while the cursor is within a non-client area of `CWnd`.|
|[CWnd::OnNcRButtonDown](#onncrbuttondown)|Called when the user presses the right mouse button while the cursor is within a non-client area of `CWnd`.|
|[CWnd::OnNcRButtonUp](#onncrbuttonup)|Called when the user releases the right mouse button while the cursor is within a non-client area of `CWnd`.|
|[CWnd::OnNcRenderingChanged](#onncrenderingchanged)|Called when the rendering policy for the non-client area has changed.|
|[CWnd::OnNcXButtonDblClk](#onncxbuttondblclk)|Called when the user double-clicks XBUTTON1 or XBUTTON2 while the cursor is in the non-client area of a window.|
|[CWnd::OnNcXButtonDown](#onncxbuttondown)|Called when the user presses XBUTTON1 or XBUTTON2 of the mouse while the cursor is in the non-client area of a window.|
|[CWnd::OnNcXButtonUp](#onncxbuttonup)|Called when the user releases XBUTTON1 or XBUTTON2 of the mouse while the cursor is in the non-client area of a window.|
|[CWnd::OnNextMenu](#onnextmenu)|Called when the right or left arrow key is used to switch between the menu bar and the system menu.|
|[CWnd::OnNotify](#onnotify)|Called by the framework to inform a parent window an event has occurred in one of its controls or that the control needs information.|
|[CWnd::OnNotifyFormat](#onnotifyformat)|Called to determine if the current window accepts ANSI or Unicode structures in the WM_NOTIFY notification message.|
|[CWnd::OnPaint](#onpaint)|Called to repaint a portion of the window.|
|[CWnd::OnPaintClipboard](#onpaintclipboard)|Called when the client area of the Clipboard viewer needs repainting.|
|[CWnd::OnPaletteChanged](#onpalettechanged)|Called to allow windows that use a color palette to realize their logical palettes and update their client areas.|
|[CWnd::OnPaletteIsChanging](#onpaletteischanging)|Informs other applications when an application is going to realize its logical palette.|
|[CWnd::OnParentNotify](#onparentnotify)|Called when a child window is created or destroyed, or when the user clicks a mouse button while the cursor is over the child window.|
|[CWnd::OnPowerBroadcast](#onpowerbroadcast)|Called when a power-management event occurs.|
|[CWnd::OnQueryDragIcon](#onquerydragicon)|Called when a minimized (iconic) `CWnd` is about to be dragged by the user.|
|[CWnd::OnQueryEndSession](#onqueryendsession)|Called when the user chooses to end the Windows session.|
|[CWnd::OnQueryNewPalette](#onquerynewpalette)|Informs `CWnd` that it is about to receive the input focus.|
|[CWnd::OnQueryOpen](#onqueryopen)|Called when `CWnd` is an icon and the user requests that the icon be opened.|
|[CWnd::OnQueryUIState](#onqueryuistate)|Called to retrieve the user interface (UI) state for a window.|
|[CWnd::OnRawInput](#onrawinput)|Called when the current window gets raw input.|
|[CWnd::OnRButtonDblClk](#onrbuttondblclk)|Called when the user double-clicks the right mouse button.|
|[CWnd::OnRButtonDown](#onrbuttondown)|Called when the user presses the right mouse button.|
|[CWnd::OnRButtonUp](#onrbuttonup)|Called when the user releases the right mouse button.|
|[CWnd::OnRenderAllFormats](#onrenderallformats)|Called when the owner application is being destroyed and needs to render all its formats.|
|[CWnd::OnRenderFormat](#onrenderformat)|Called for the Clipboard owner when a particular format with delayed rendering needs to be rendered.|
|[CWnd::OnSessionChange](#onsessionchange)|Called to notify an application of a change in session state.|
|[CWnd::OnSetCursor](#onsetcursor)|Called if mouse input is not captured and the mouse causes cursor movement within a window.|
|[CWnd::OnSetFocus](#onsetfocus)|Called after `CWnd` gains the input focus.|
|[CWnd::OnSettingChange](#onsettingchange)|Called when the Win32 `SystemParametersInfo` function changes a system-wide setting.|
|[CWnd::OnShowWindow](#onshowwindow)|Called when `CWnd` is to be hidden or shown.|
|[CWnd::OnSize](#onsize)|Called after the size of `CWnd` has changed.|
|[CWnd::OnSizeClipboard](#onsizeclipboard)|Called when the size of the client area of the Clipboard-viewer window has changed.|
|[CWnd::OnSizing](#onsizing)|Indicates that the user is resizing the rectangle.|
|[CWnd::OnSpoolerStatus](#onspoolerstatus)|Called from Print Manager whenever a job is added to or removed from the Print Manager queue.|
|[CWnd::OnStyleChanged](#onstylechanged)|Indicates that the [SetWindowLong](/windows/win32/api/winuser/nf-winuser-setwindowlongw) Windows function has changed one or more of the window's styles.|
|[CWnd::OnStyleChanging](#onstylechanging)|Indicates that the [SetWindowLong](/windows/win32/api/winuser/nf-winuser-setwindowlongw) Windows function is about to change one or more of the window's styles.|
|[CWnd::OnSysChar](#onsyschar)|Called when a keystroke translates to a system character.|
|[CWnd::OnSysColorChange](#onsyscolorchange)|Called for all top-level windows when a change is made in the system color setting.|
|[CWnd::OnSysCommand](#onsyscommand)|Called when the user selects a command from the Control menu, or when the user selects the Maximize or Minimize button.|
|[CWnd::OnSysDeadChar](#onsysdeadchar)|Called when a keystroke translates to a system dead character (such as accent characters).|
|[CWnd::OnSysKeyDown](#onsyskeydown)|Called when the user holds down the ALT key and then presses another key.|
|[CWnd::OnSysKeyUp](#onsyskeyup)|Called when the user releases a key that was pressed while the ALT key was held down.|
|[CWnd::OnTCard](#ontcard)|Called when the user clicks an authorable button.|
|[CWnd::OnTimeChange](#ontimechange)|Called for all top-level windows after the system time changes.|
|[CWnd::OnTimer](#ontimer)|Called after each interval specified in [SetTimer](#settimer).|
|[CWnd::OnTouchInput](#ontouchinput)|Process single input from Windows touch.|
|[CWnd::OnTouchInputs](#ontouchinputs)|Process inputs from Windows touch.|
|[CWnd::OnUniChar](#onunichar)|Called when a key is pressed. That is, the current window has the keyboard focus and a [WM_KEYDOWN](/windows/win32/inputdev/wm-keydown) message is translated by the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) function.|
|[CWnd::OnUnInitMenuPopup](#onuninitmenupopup)|Called when a drop-down menu or submenu has been destroyed.|
|[CWnd::OnUpdateUIState](#onupdateuistate)|Called to change the user interface (UI) state for the specified window and all its child windows.|
|[CWnd::OnUserChanged](#onuserchanged)|Called after the user has logged on or off.|
|[CWnd::OnVKeyToItem](#onvkeytoitem)|Called by a list box owned by `CWnd` in response to a [WM_KEYDOWN](#onkeydown) message.|
|[CWnd::OnVScroll](#onvscroll)|Called when the user clicks the window's vertical scroll bar.|
|[CWnd::OnVScrollClipboard](#onvscrollclipboard)|Called when the owner should scroll the Clipboard image, invalidate the appropriate section, and update the scroll-bar values.|
|[CWnd::OnWindowPosChanged](#onwindowposchanged)|Called when the size, position, or Z-order has changed as a result of a call to [SetWindowPos](#setwindowpos) or another window-management function.|
|[CWnd::OnWindowPosChanging](#onwindowposchanging)|Called when the size, position, or Z-order is about to change as a result of a call to [SetWindowPos](#setwindowpos) or another window-management function.|
|[CWnd::OnWinIniChange](#onwininichange)|Called for all top-level windows after the Windows initialization file, WIN.INI, is changed.|
|[CWnd::OnWndMsg](#onwndmsg)|Indicates if a windows message was handled.|
|[CWnd::OnXButtonDblClk](#onxbuttondblclk)|Called when the user double-clicks XBUTTON1 or XBUTTON2 while the cursor is in the client area of a window.|
|[CWnd::OnXButtonDown](#onxbuttondown)|Called when the user presses XBUTTON1 or XBUTTON2 while the cursor is in the client area of a window.|
|[CWnd::OnXButtonUp](#onxbuttonup)|Called when the user releases XBUTTON1 or XBUTTON2 while the cursor is in the client area of a window.|
|[CWnd::PostNcDestroy](#postncdestroy)|This virtual function is called by the default [OnNcDestroy](#onncdestroy) function after the window has been destroyed.|
|[CWnd::ReflectChildNotify](#reflectchildnotify)|Helper function which reflects a message to its source.|
|[CWnd::ReflectLastMsg](#reflectlastmsg)|Reflects the last message to the child window.|
|[CWnd::ResizeDynamicLayout](#resizedynamiclayout)|Called by the framework when the window size changes to adjust the layout of child windows, if dynamic layout is enabled for the window.|
|[CWnd::WindowProc](#windowproc)|Provides a window procedure for a `CWnd`. The default dispatches messages through the message map.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CWnd::operator HWND](#operator_hwnd)|Call to get a handle to a window.|
|[CWnd::operator !=](#operator_neq)|Determines if a window is not the same as the window whose handle is [m_hWnd](#m_hwnd).|
|[CWnd::operator ==](#operator_eq_eq)|Determines if a window is the same as the window whose handle is [m_hWnd](#m_hwnd).|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CWnd::m_hWnd](#m_hwnd)|Indicates the HWND attached to this `CWnd`.|

## Remarks

A `CWnd` object is distinct from a Windows window, but the two are tightly linked. A `CWnd` object is created or destroyed by the `CWnd` constructor and destructor. The Windows window, on the other hand, is a data structure internal to Windows that is created by a `Create` member function and destroyed by the `CWnd` virtual destructor. The [DestroyWindow](#destroywindow) function destroys the Windows window without destroying the object.

The `CWnd` class and the message-map mechanism hide the `WndProc` function. Incoming Windows notification messages are automatically routed through the message map to the proper **On**<em>Message</em> `CWnd` member functions. You override an **On**<em>Message</em> member function to handle a member's particular message in your derived classes.

The `CWnd` class also lets you create a Windows child window for your application. Derive a class from `CWnd`, then add member variables to the derived class to store data specific to your application. Implement message-handler member functions and a message map in the derived class to specify what happens when messages are directed to the window.

You create a child window in two steps. First, call the constructor `CWnd` to construct the `CWnd` object, then call the [Create](#create) member function to create the child window and attach it to the `CWnd` object.

When the user terminates your child window, destroy the `CWnd` object, or call the `DestroyWindow` member function to remove the window and destroy its data structures.

Within the Microsoft Foundation Class Library, further classes are derived from `CWnd` to provide specific window types. Many of these classes, including [CFrameWnd](../../mfc/reference/cframewnd-class.md), [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md), [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md), [CView](../../mfc/reference/cview-class.md), and [CDialog](../../mfc/reference/cdialog-class.md), are designed for further derivation. The control classes derived from `CWnd`, such as [CButton](../../mfc/reference/cbutton-class.md), can be used directly or can be used for further derivation of classes.

For more information on using `CWnd`, see [Frame Windows](../../mfc/frame-windows.md) and [Window Objects](../../mfc/window-objects.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CWnd`

## Requirements

**Header:** afxwin.h

## <a name="accdodefaultaction"></a> CWnd::accDoDefaultAction

Called by the framework to perform the object's default action.

```
virtual HRESULT accDoDefaultAction(VARIANT varChild);
```

### Parameters

*varChild*<br/>
Specifies whether the default action to be invoked is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to perform the object's default action) or a child ID (to perform the default action of one of the object's child elements).

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in [IAccessible::accDoDefaultAction](/windows/win32/api/oleacc/nf-oleacc-iaccessible-accdodefaultaction) in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class to perform your object's default action. For more information, see [IAccessible::accDoDefaultAction](/windows/win32/api/oleacc/nf-oleacc-iaccessible-accdodefaultaction) in the Windows SDK.

## <a name="acchittest"></a> CWnd::accHitTest

Called by the framework to retrieve the child element or child object at a given point on the screen.

```
virtual HRESULT accHitTest(
    long xLeft,
    long yTop,
    VARIANT* pvarChild);
```

### Parameters

*xLeft*<br/>
X-coordinate of the point to be hit tested (in screen units).

*yTop*<br/>
Y-coordinate of the point to be hit tested (in screen units).

*pvarChild*<br/>
Receives information identifying the object at the point specified by *xLeft* and *yTop*. See *pvarID* in [IAccessible::accHitTest](/windows/win32/api/oleacc/nf-oleacc-iaccessible-acchittest) in the Windows SDK.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in `IAccessible::accHitTest` in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles).

For more information, see [IAccessible::accHitTest](/windows/win32/api/oleacc/nf-oleacc-iaccessible-acchittest) in the Windows SDK.

## <a name="acclocation"></a> CWnd::accLocation

Called by the framework to retrieve the specified object's current screen location.

```
virtual HRESULT accLocation(
    long* pxLeft,
    long* pyTop,
    long* pcxWidth,
    long* pcyHeight,
    VARIANT varChild);
```

### Parameters

*pxLeft*<br/>
Receives x-coordinate of the object's upper-left corner (in screen units).

*pyTop*<br/>
Receives y-coordinate of the object's upper-left corner (in screen units).

*pcxWidth*<br/>
Receives width of the object (in screen units).

*pcyHeight*<br/>
Receives height of the object (in screen units).

*varChild*<br/>
Specifies whether the location to be retrieved is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to obtain information about the object) or a child ID (to obtain information about the object's child element).

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in `IAccessible::accLocation` in the Windows SDK.

### Remarks

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles).

For more information, see `IAccessible::accLocation` in the Windows SDK.

## <a name="accnavigate"></a> CWnd::accNavigate

Called by the framework to traverse to another user interface element within a container and if possible, retrieve the object.

```
virtual HRESULT accNavigate(
    long navDir,
    VARIANT varStart,
    VARIANT* pvarEndUpAt);
```

### Parameters

*navDir*<br/>
Specifies the direction to navigate. See *navDir* in [IAccessible::accNavigate](/windows/win32/api/oleacc/nf-oleacc-iaccessible-accnavigate) in the Windows SDK.

*varStart*<br/>
Specifies the starting object. See *varStart* in `IAccessible::accNavigate` in the Windows SDK.

*pvarEndUpAt*<br/>
Receives information about the destination user interface object. See *pvarEnd* in `IAccessible::accNavigate` in the Windows SDK.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in `IAccessible::accNavigate` in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles).

For more information, see [IAccessible::accNavigate](/windows/win32/api/oleacc/nf-oleacc-iaccessible-accnavigate) in the Windows SDK.

## <a name="accselect"></a> CWnd::accSelect

Called by the framework to modify the selection or move the keyboard focus of the specified object.

```
virtual HRESULT accSelect(
    long flagsSelect,
    VARIANT varChild);
```

### Parameters

*flagsSelect*<br/>
Specifies how to change the current selection or focus. See *flagsSelect* in [IAccessible::accSelect](/windows/win32/api/oleacc/nf-oleacc-iaccessible-accselect) in the Windows SDK.

*varChild*<br/>
Specifies the object to be selected. This parameter can be either CHILDID_SELF (to select the object itself) or a child ID (to select one of the object's children).

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in `IAccessible::accSelect` in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles).

For more information, see [IAccessible::accSelect](/windows/win32/api/oleacc/nf-oleacc-iaccessible-accselect) in the Windows SDK.

## <a name="animatewindow"></a> CWnd::AnimateWindow

Produces special effects when showing or hiding windows.

```
BOOL AnimateWindow(
    DWORD dwTime,
    DWORD dwFlags);
```

### Parameters

*dwTime*<br/>
Specifies how long it takes to play the animation, in milliseconds. Typically, an animation takes 200 milliseconds to play.

*dwFlags*<br/>
Specifies the type of animation. For a full list of possible values, see [AnimateWindow](/windows/win32/api/winuser/nf-winuser-animatewindow).

### Return Value

Nonzero if the function succeeds; otherwise 0.

### Remarks

This member function emulates the functionality of the function [AnimateWindow](/windows/win32/api/winuser/nf-winuser-animatewindow), as described in the Windows SDK.

## <a name="arrangeiconicwindows"></a> CWnd::ArrangeIconicWindows

Arranges all the minimized (iconic) child windows.

```
UINT ArrangeIconicWindows();
```

### Return Value

The height of one row of icons if the function is successful; otherwise 0.

### Remarks

This member function also arranges icons on the desktop window, which covers the entire screen. The [GetDesktopWindow](#getdesktopwindow) member function retrieves a pointer to the desktop window object.

To arrange iconic MDI child windows in an MDI client window, call [CMDIFrameWnd::MDIIconArrange](../../mfc/reference/cmdiframewnd-class.md#mdiiconarrange).

### Example

[!code-cpp[NVC_MFCWindowing#66](../../mfc/reference/codesnippet/cpp/cwnd-class_1.cpp)]

## <a name="attach"></a> CWnd::Attach

Attaches a Windows window to a `CWnd` object.

```
BOOL Attach(HWND hWndNew);
```

### Parameters

*hWndNew*<br/>
Specifies a handle to a Windows window.

### Return Value

Nonzero if successful; otherwise 0.

### Example

This example shows how to use Attach and Detach to map to the MDI client window.

[!code-cpp[NVC_MFCWindowing#67](../../mfc/reference/codesnippet/cpp/cwnd-class_2.h)]

[!code-cpp[NVC_MFCWindowing#68](../../mfc/reference/codesnippet/cpp/cwnd-class_3.cpp)]

[!code-cpp[NVC_MFCWindowing#69](../../mfc/reference/codesnippet/cpp/cwnd-class_4.cpp)]

## <a name="beginmodalstate"></a> CWnd::BeginModalState

Call this member function to make a frame window modal.

```
virtual void BeginModalState();
```

## <a name="beginpaint"></a> CWnd::BeginPaint

Prepares `CWnd` for painting and fills a `PAINTSTRUCT` data structure with information about the painting.

```
CDC* BeginPaint(LPPAINTSTRUCT lpPaint);
```

### Parameters

*lpPaint*<br/>
Points to the [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) structure that is to receive painting information.

### Return Value

Identifies the device context for `CWnd`. The pointer may be temporary and should not be stored beyond the scope of [EndPaint](#endpaint).

### Remarks

The paint structure contains a RECT data structure that has the smallest rectangle that completely encloses the update region and a flag that specifies whether the background has been erased.

The update region is set by the [Invalidate](#invalidate), [InvalidateRect](#invalidaterect), or [InvalidateRgn](#invalidatergn) member functions and by the system after it sizes, moves, creates, scrolls, or performs any other operation that affects the client area. If the update region is marked for erasing, `BeginPaint` sends an [WM_ONERASEBKGND](#onerasebkgnd) message.

Do not call the `BeginPaint` member function except in response to a [WM_PAINT](#onpaint) message. Each call to the `BeginPaint` member function must have a matching call to the [EndPaint](#endpaint) member function. If the caret is in the area to be painted, the `BeginPaint` member function automatically hides the caret to prevent it from being erased.

### Example

[!code-cpp[NVC_MFCWindowing#70](../../mfc/reference/codesnippet/cpp/cwnd-class_5.cpp)]

## <a name="binddefaultproperty"></a> CWnd::BindDefaultProperty

Binds the calling object's default simple bound property (such as an edit control), as marked in the type library, to the underlying cursor that is defined by the DataSource, UserName, Password, and SQL properties of the data-source control.

```cpp
void BindDefaultProperty(
    DISPID dwDispID,
    VARTYPE vtProp,
    LPCTSTR szFieldName,
    CWnd* pDSCWnd);
```

### Parameters

*dwDispID*<br/>
Specifies the DISPID of a property on a data-bound control that is to be bound to a data-source control.

*vtProp*<br/>
Specifies the type of the property to be bound — for example, VT_BSTR, VT_VARIANT, and so on.

*szFieldName*<br/>
Specifies the name of the column, in the cursor provided by the data-source control, to which the property will be bound.

*pDSCWnd*<br/>
Points to the window that hosts the data-source control to which the property will be bound. Call `GetDlgItem` with the resource ID of the DCS's host window to retrieve this pointer.

### Remarks

The `CWnd` object on which you call this function must be a data-bound control.

### Example

`BindDefaultProperty` might be used in the following context:

[!code-cpp[NVC_MFC_AxDataBinding#2](../../mfc/reference/codesnippet/cpp/cwnd-class_7.cpp)]

## <a name="bindproperty"></a> CWnd::BindProperty

Binds a cursor-bound property on a data-bound control (such as a grid control) to a data-source control and registers that relationship with the MFC binding manager.

```cpp
void BindProperty(
    DISPID dwDispId,
    CWnd* pWndDSC);
```

### Parameters

*dwDispId*<br/>
Specifies the DISPID of a property on a data-bound control that is to be bound to a data-source control.

*pWndDSC*<br/>
Points to the window that hosts the data-source control to which the property will be bound. Call `GetDlgItem` with the resource ID of the DCS's host window to retrieve this pointer.

### Remarks

The `CWnd` object on which you call this function must be a data-bound control.

### Example

`BindProperty` might be used in the following context:

[!code-cpp[NVC_MFC_AxDataBinding#4](../../mfc/reference/codesnippet/cpp/cwnd-class_9.cpp)]

## <a name="bringwindowtotop"></a> CWnd::BringWindowToTop

Brings `CWnd` to the top of a stack of overlapping windows.

```cpp
void BringWindowToTop();
```

### Remarks

In addition, `BringWindowToTop` activates pop-up, top-level, and MDI child windows. The `BringWindowToTop` member function should be used to uncover any window that is partially or completely obscured by any overlapping windows.

This function just calls the Win32 [BringWindowToTop](/windows/win32/api/winuser/nf-winuser-bringwindowtotop) function. Call the [SetWindowPos](#setwindowpos) function to change a window's position in the Z-order. The `BringWindowToTop` function does not change the window style to make it a top-level window. For more information, see [What's the difference between HWND_TOP and HWND_TOPMOST](https://devblogs.microsoft.com/oldnewthing/?p=33263)

### Example

[!code-cpp[NVC_MFCWindowing#71](../../mfc/reference/codesnippet/cpp/cwnd-class_10.cpp)]

## <a name="calcwindowrect"></a> CWnd::CalcWindowRect

Calculates the window rectangle that can contain the specified client rectangle.

```
virtual void CalcWindowRect(
    LPRECT lpClientRect,
    UINT nAdjustType = adjustBorder);
```

### Parameters

*lpClientRect*<br/>
[in, out] Pointer to a rectangle structure. On input, this structure contains the client rectangle. After the method is finished, this structure contains the window rectangle that can contain the specified client rectangle.

*nAdjustType*<br/>
[in] Use `CWnd::adjustBorder` to calculate window coordinates without the WS_EX_CLIENTEDGE style; otherwise, use `CWnd::adjustOutside`.

### Remarks

The size of the calculated window rectangle does not include space for a menu bar.

For more usage restrictions, see [AdjustWindowRectEx](/windows/win32/api/winuser/nf-winuser-adjustwindowrectex).

### Example

[!code-cpp[NVC_MFCWindowing#72](../../mfc/reference/codesnippet/cpp/cwnd-class_11.cpp)]

## <a name="canceltooltips"></a> CWnd::CancelToolTips

Call this member function to remove a tool tip from the screen if a tool tip is currently displayed.

```
static void PASCAL CancelToolTips(BOOL bKeys = FALSE);
```

### Parameters

*bKeys*<br/>
TRUE to cancel tool tips when a key is pressed and set the status bar text to the default; otherwise FALSE.

### Remarks

> [!NOTE]
> Using this member function has no effect on tool tips managed by your code. It only affects the tool tip control managed by [CWnd::EnableToolTips](#enabletooltips).

### Example

[!code-cpp[NVC_MFCWindowing#73](../../mfc/reference/codesnippet/cpp/cwnd-class_12.cpp)]

## <a name="centerwindow"></a> CWnd::CenterWindow

Centers a window relative to its parent.

```cpp
void CenterWindow(CWnd* pAlternateOwner = NULL);
```

### Parameters

*pAlternateOwner*<br/>
Pointer to an alternate window relative to which it will be centered (other than the parent window).

### Remarks

Usually called from [CDialog::OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog) to center dialog boxes relative to the main window of the application. By default, the function centers child windows relative to their parent window, and pop-up windows relative to their owner. If the pop-up window is not owned, it is centered relative to the screen. To center a window relative to a specific window which is not the owner or parent, the *pAlternateOwner* parameter may be set to a valid window. To force centering relative to the screen, pass the value returned by [CWnd::GetDesktopWindow](#getdesktopwindow) as *pAlternateOwner*.

### Example

[!code-cpp[NVC_MFCWindowing#74](../../mfc/reference/codesnippet/cpp/cwnd-class_13.cpp)]

## <a name="changeclipboardchain"></a> CWnd::ChangeClipboardChain

Removes `CWnd` from the chain of Clipboard viewers and makes the window specified by *hWndNext* the descendant of the `CWnd` ancestor in the chain.

```
BOOL ChangeClipboardChain(HWND hWndNext);
```

### Parameters

*hWndNext*<br/>
Identifies the window that follows `CWnd` in the Clipboard-viewer chain.

### Return Value

Nonzero if successful; otherwise 0.

## <a name="checkdlgbutton"></a> CWnd::CheckDlgButton

Selects (places a check mark next to) or clears (removes a check mark from) a button, or it changes the state of a three-state button.

```cpp
void CheckDlgButton(
    int nIDButton,
    UINT nCheck);
```

### Parameters

*nIDButton*<br/>
Specifies the button to be modified.

*nCheck*<br/>
Specifies the action to take. If *nCheck* is nonzero, the `CheckDlgButton` member function places a check mark next to the button; if 0, the check mark is removed. For three-state buttons, if *nCheck* is 2, the button state is indeterminate.

### Remarks

The `CheckDlgButton` function sends a [BM_SETCHECK](/windows/win32/Controls/bm-setcheck) message to the specified button.

### Example

[!code-cpp[NVC_MFCWindowing#75](../../mfc/reference/codesnippet/cpp/cwnd-class_14.cpp)]

## <a name="checkradiobutton"></a> CWnd::CheckRadioButton

Selects (adds a check mark to) a given radio button in a group and clears (removes a check mark from) all other radio buttons in the group.

```cpp
void CheckRadioButton(
    int nIDFirstButton,
    int nIDLastButton,
    int nIDCheckButton);
```

### Parameters

*nIDFirstButton*<br/>
Specifies the integer identifier of the first radio button in the group.

*nIDLastButton*<br/>
Specifies the integer identifier of the last radio button in the group.

*nIDCheckButton*<br/>
Specifies the integer identifier of the radio button to be checked.

### Remarks

The `CheckRadioButton` function sends a [BM_SETCHECK](/windows/win32/Controls/bm-setcheck) message to the specified radio button.

### Example

[!code-cpp[NVC_MFCWindowing#76](../../mfc/reference/codesnippet/cpp/cwnd-class_15.cpp)]

## <a name="childwindowfrompoint"></a> CWnd::ChildWindowFromPoint

Determines which, if any, of the child windows belonging to `CWnd` contains the specified point.

```
CWnd* ChildWindowFromPoint(POINT point) const;

CWnd* ChildWindowFromPoint(
    POINT point,
    UINT nFlags) const;
```

### Parameters

*point*<br/>
Specifies the client coordinates of the point to be tested.

*nflags*<br/>
Specifies which child windows to skip. This parameter can be a combination of the following values:

|Value|Meaning|
|-----------|-------------|
|CWP_ALL|Do not skip any child windows|
|CWP_SKIPINVISIBLE|Skip invisible child windows|
|CWP_SKIPDISABLED|Skip disabled child windows|
|CWP_SKIPTRANSPARENT|Skip transparent child windows|

### Return Value

Identifies the child window that contains the point. It is NULL if the given point lies outside of the client area. If the point is within the client area but is not contained within any child window, `CWnd` is returned.

This member function will return a hidden or disabled child window that contains the specified point.

More than one window may contain the given point. However, this function returns only the `CWnd`* of the first window encountered that contains the point.

The `CWnd`* that is returned may be temporary and should not be stored for later use.

### Example

[!code-cpp[NVC_MFCWindowing#77](../../mfc/reference/codesnippet/cpp/cwnd-class_16.cpp)]

## <a name="clienttoscreen"></a> CWnd::ClientToScreen

Converts the client coordinates of a given point or rectangle on the display to screen coordinates.

```cpp
void ClientToScreen(LPPOINT lpPoint) const;  void ClientToScreen(LPRECT lpRect) const;
```

### Parameters

*lpPoint*<br/>
Points to a [POINT structure](/windows/win32/api/windef/ns-windef-point) or `CPoint` object that contains the client coordinates to be converted.

*lpRect*<br/>
Points to a [RECT structure](/windows/win32/api/windef/ns-windef-rect) or `CRect` object that contains the client coordinates to be converted.

### Remarks

The `ClientToScreen` member function uses the client coordinates in the `POINT` or `RECT` structure or the `CPoint` or `CRect` object pointed to by *lpPoint* or *lpRect* to compute new screen coordinates; it then replaces the coordinates in the structure with the new coordinates. The new screen coordinates are relative to the upper-left corner of the system display.

The `ClientToScreen` member function assumes that the given point or rectangle is in client coordinates.

### Example

[!code-cpp[NVC_MFCWindowing#78](../../mfc/reference/codesnippet/cpp/cwnd-class_17.cpp)]

## <a name="closewindow"></a> CWnd::CloseWindow

Minimizes the window.

```cpp
void CloseWindow();
```

### Remarks

This member function emulates the functionality of the function [CloseWindow](/windows/win32/api/winuser/nf-winuser-closewindow), as described in the Windows SDK.

## <a name="continuemodal"></a> CWnd::ContinueModal

This member function is called by [RunModalLoop](#runmodalloop) to determine when the modal state should be exited.

```
virtual BOOL ContinueModal();
```

### Return Value

Nonzero if modal loop is to be continued; 0 when [EndModalLoop](#endmodalloop) is called.

### Remarks

By default, it returns non-zero until `EndModalLoop` is called.

## <a name="create"></a> CWnd::Create

Creates the specified child window and attaches it to the [CWnd](../../mfc/reference/cwnd-class.md) object.

```
virtual BOOL Create(
    LPCTSTR lpszClassName,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    Const RECT& rect,
    CWnd* pParentWnd,
    UINT nID,
    CCreateContext* pContext = NULL);
```

### Parameters

*lpszClassName*<br/>
[in] Pointer to a null-terminated string that contains the name of a registered system window class; or the name of a predefined system window class.

*lpszWindowName*<br/>
[in] Pointer to a null-terminated string that contains the window display name; otherwise NULL for no window display name.

*dwStyle*<br/>
[in] Bitwise combination (OR) of [window styles](styles-used-by-mfc.md#window-styles). The WS_POPUP option is not a valid style.

*rect*<br/>
[in] The size and location of the window relative to the top-left corner of the parent window.

*pParentWnd*<br/>
[in] Pointer to the parent window.

*nID*<br/>
[in] ID of the window.

*pContext*<br/>
[in] Pointer to a [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) structure that is used to customize the document-view architecture for the application.

### Return Value

TRUE if the method was successful; otherwise FALSE.

### Remarks

> [!WARNING]
> `CWnd::PreCreateWindow` now assigns the hMenu member of its `CREATESTRUCT` parameter to the **`this`** pointer if the menu is NULL and the style contains WS_CHILD. For proper functionality, ensure that your dialog control has an ID that is not NULL.
>
> This change fixes a crash in managed/native interop scenarios. A TRACE statement in `CWnd::Create` alerts the developer of the problem.

Use the [AfxRegisterWndClass](../../mfc/reference/application-information-and-management.md#afxregisterwndclass) function to register window classes. User defined window classes are available in the module where they are registered.

The [CWnd::OnCreate](#oncreate) method is called before the `Create` method returns, and before the window becomes visible.

### Example

[!code-cpp[NVC_MFCWindowing#79](../../mfc/reference/codesnippet/cpp/cwnd-class_18.cpp)]

## <a name="createaccessibleproxy"></a> CWnd::CreateAccessibleProxy

Creates an Active Accessibility proxy for the specified object.

```
virtual HRESULT CreateAccessibleProxy(
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* pResult);
```

### Parameters

*wParam*<br/>
Identifies the object accessed by the Active Accessibility proxy. Can be one of the following values

|Value|Meaning|
|-----------|-------------|
|OBJID_CLIENT|Refers to the window's client area.|

*lParam*<br/>
Provides additional message-dependent information.

*pResult*<br/>
A pointer to an LRESULT that stores the result code.

### Remarks

Creates an Active Accessibility proxy for the specified object.

## <a name="createcaret"></a> CWnd::CreateCaret

Creates a new shape for the system caret and claims ownership of the caret.

```cpp
void CreateCaret(CBitmap* pBitmap);
```

### Parameters

*pBitmap*<br/>
Identifies the bitmap that defines the caret shape.

### Remarks

The bitmap must have previously been created by the [CBitmap::CreateBitmap](../../mfc/reference/cbitmap-class.md#createbitmap) member function, the [CreateDIBitmap](/windows/win32/api/wingdi/nf-wingdi-createdibitmap) Windows function, or the [CBitmap::LoadBitmap](../../mfc/reference/cbitmap-class.md#loadbitmap) member function.

`CreateCaret` automatically destroys the previous caret shape, if any, regardless of which window owns the caret. Once created, the caret is initially hidden. To show the caret, the [ShowCaret](#showcaret) member function must be called.

The system caret is a shared resource. `CWnd` should create a caret only when it has the input focus or is active. It should destroy the caret before it loses the input focus or becomes inactive.

### Example

[!code-cpp[NVC_MFCWindowing#80](../../mfc/reference/codesnippet/cpp/cwnd-class_19.cpp)]

## <a name="createcontrol"></a> CWnd::CreateControl

Use this member function to create an ActiveX control that will be represented in the MFC program by a `CWnd` object.

```
BOOL CreateControl(
    LPCTSTR pszClass,
    LPCTSTR pszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID,
    CFile* pPersist = NULL,
    BOOL bStorage = FALSE,
    BSTR bstrLicKey = NULL);

BOOL CreateControl(
    REFCLSID clsid,
    LPCTSTR pszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID,
    CFile* pPersist = NULL,
    BOOL bStorage = FALSE,
    BSTR bstrLicKey = NULL);

BOOL CreateControl(
    REFCLSID clsid,
    LPCTSTR pszWindowName,
    DWORD dwStyle,
    const POINT* ppt,
    const SIZE* psize,
    CWnd* pParentWnd,
    UINT nID,
    CFile* pPersist = NULL,
    BOOL bStorage = FALSE,
    BSTR bstrLicKey = NULL);
```

### Parameters

*pszClass*<br/>
This string may contain the OLE "short name" (ProgID) for the class, e.g., "CIRC3.Circ3Ctrl.1". The name needs to match the same name registered by the control. Alternatively, the string may contain the string form of a CLSID, contained in braces, e.g., "{9DBAFCCF-592F-101B-85CE-00608CEC297B}". In either case, `CreateControl` converts the string to the corresponding class ID.

*pszWindowName*<br/>
A pointer to the text to be displayed in the control. Sets the value of the control's Caption or Text property (if any). If NULL, the control's Caption or Text property is not changed.

*dwStyle*<br/>
Windows styles. The available styles are listed under Remarks.

*rect*<br/>
Specifies the control's size and position. It can be either a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or a [RECT structure](/windows/win32/api/windef/ns-windef-rect).

*ppt*<br/>
Points to a [POINT structure](/windows/win32/api/windef/ns-windef-point) or `CPoint` object that contains the upper left corner of the control.

*pSize*<br/>
Points to a [SIZE](/windows/win32/api/windef/ns-windef-size) structure or `CSize` object that contains the control's size

*pParentWnd*<br/>
Specifies the control's parent window. It must not be NULL.

*nID*<br/>
Specifies the control's ID.

*pPersist*<br/>
A pointer to a [CFile](../../mfc/reference/cfile-class.md) containing the persistent state for the control. The default value is NULL, indicating that the control initializes itself without restoring its state from any persistent storage. If not NULL, it should be a pointer to a `CFile`-derived object which contains the control's persistent data, in the form of either a stream or a storage. This data could have been saved in a previous activation of the client. The `CFile` can contain other data, but must have its read-write pointer set to the first byte of persistent data at the time of the call to `CreateControl`.

*bStorage*<br/>
Indicates whether the data in *pPersist* should be interpreted as IStorage or IStream data. If the data in *pPersist* is a storage, *bStorage* should be TRUE. If the data in *pPersist* is a stream, *bStorage* should be FALSE. The default value is FALSE.

*bstrLicKey*<br/>
Optional license key data. This data is needed only for creating controls that require a run-time license key. If the control supports licensing, you must provide a license key for the creation of the control to succeed. The default value is NULL.

*clsid*<br/>
The unique class ID of the control.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

`CreateControl` is a direct analog of the [CWnd::Create](#create) function, which creates the window for a `CWnd`. `CreateControl` creates an ActiveX control instead of an ordinary window.

Only a subset of the Windows *dwStyle* flags are supported for `CreateControl`:

- WS_VISIBLE Creates a window that is initially visible. Required if you want the control to be visible immediately, like ordinary windows.

- WS_DISABLED Creates a window that is initially disabled. A disabled window cannot receive input from the user. Can be set if the control has an Enabled property.

- WS_BORDER Creates a window with a thin-line border. Can be set if control has a BorderStyle property.

- WS_GROUP Specifies the first control of a group of controls. The user can change the keyboard focus from one control in the group to the next by using the direction keys. All controls defined with the WS_GROUP style after the first control belong to the same group. The next control with the WS_GROUP style ends the group and starts the next group.

- WS_TABSTOP Specifies a control that can receive the keyboard focus when the user presses the TAB key. Pressing the TAB key changes the keyboard focus to the next control of the WS_TABSTOP style.

### Example

[!code-cpp[NVC_MFCWindowing#81](../../mfc/reference/codesnippet/cpp/cwnd-class_20.h)]

## <a name="createex"></a> CWnd::CreateEx

Creates the specified window and attaches it to the `CWnd` object.

```
virtual BOOL CreateEx(
    DWORD dwExStyle,
    LPCTSTR lpszClassName,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    int x,
    int y,
    int nWidth,
    int nHeight,
    HWND hWndParent,
    HMENU nIDorHMenu,
    LPVOID lpParam = NULL);

virtual BOOL CreateEx(
    DWORD dwExStyle,
    LPCTSTR lpszClassName,
    LPCTSTR lpszWindowName,
    DWORD dwStyle,
    const RECT& rect,
    CWnd* pParentWnd,
    UINT nID,
    LPVOID lpParam = NULL);
```

### Parameters

*dwExStyle*<br/>
Bitwise combination (OR) of [extended window styles](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles); otherwise NULL for the default extended window style.

*lpszClassName*<br/>
Pointer to a null-terminated string that contains the name of a registered system window class; or the name of a predefined system window class.

*lpszWindowName*<br/>
Pointer to a null-terminated string that contains the window display name; otherwise NULL for no window display name.

*dwStyle*<br/>
Bitwise combination (OR) of [window styles](styles-used-by-mfc.md#window-styles); otherwise NULL for the default window style.

*x*<br/>
The initial horizontal distance of the window from the left side of the screen or the parent window.

*y*<br/>
The initial vertical distance of the window from the top of the screen or the parent window.

*nWidth*<br/>
The width, in pixels, of the window.

*nHeight*<br/>
The height, in pixels, of the window.

*hwndParent*<br/>
For a child window, the handle to the parent window; otherwise, the handle of the owner window if the window has an owner.

*nIDorHMenu*<br/>
For a child window, the window ID; otherwise, the ID of a menu for the window.

*lpParam*<br/>
Pointer to user data that is passed to the [CWnd::OnCreate](#oncreate) method in the *lpCreateParams* field.

*rect*<br/>
The size and location of the window relative to the screen or the parent window.

*pParentWnd*<br/>
For a child window, pointer to the parent window; otherwise, pointer to the owner window if the window has an owner.

*nID*<br/>
For a child window, the window ID; otherwise, the ID of a menu for the window.

### Return Value

TRUE if the method was successful; otherwise FALSE.

### Remarks

> [!WARNING]
> `CWnd::PreCreateWindow` now assigns the hMenu member of its `CREATESTRUCT` parameter to the **`this`** pointer if the menu is NULL and the style contains WS_CHILD. For proper functionality, ensure that your dialog control has an ID that is not NULL.
>
> This change fixes a crash in managed/native interop scenarios. A `TRACE` statement in `CWnd::Create` alerts the developer of the problem.

The default extended window style is WS_EX_LEFT. The default window style is WS_OVERLAPPED.

Use the [AfxRegisterWndClass](../../mfc/reference/application-information-and-management.md#afxregisterwndclass) function to register window classes. User defined window classes are available in the module where they are registered.

Dimensions for child windows are relative to the top-left corner of the client area of the parent window. Dimensions for top-level windows are relative to the top-left corner of the screen.

The [CWnd::OnCreate](#oncreate) method is called before the `CreateEx` method returns, and before the window becomes visible.

### Example

[!code-cpp[NVC_MFCWindowing#82](../../mfc/reference/codesnippet/cpp/cwnd-class_21.cpp)]

## <a name="creategraycaret"></a> CWnd::CreateGrayCaret

Creates a gray rectangle for the system caret and claims ownership of the caret.

```cpp
void CreateGrayCaret(
    int nWidth,
    int nHeight);
```

### Parameters

*nWidth*<br/>
Specifies the width of the caret (in logical units). If this parameter is 0, the width is set to the system-defined window-border width.

*nHeight*<br/>
Specifies the height of the caret (in logical units). If this parameter is 0, the height is set to the system-defined window-border height.

### Remarks

The caret shape can be a line or a block.

The parameters *nWidth* and *nHeight* specify the caret's width and height (in logical units); the exact width and height (in pixels) depend on the mapping mode.

The system's window-border width or height can be retrieved by the [GetSystemMetrics](/windows/win32/api/winuser/nf-winuser-getsystemmetrics) Windows function with the SM_CXBORDER and SM_CYBORDER indexes. Using the window-border width or height ensures that the caret will be visible on a high-resolution display.

The `CreateGrayCaret` member function automatically destroys the previous caret shape, if any, regardless of which window owns the caret. Once created, the caret is initially hidden. To show the caret, the [ShowCaret](#showcaret) member function must be called.

The system caret is a shared resource. `CWnd` should create a caret only when it has the input focus or is active. It should destroy the caret before it loses the input focus or becomes inactive.

### Example

[!code-cpp[NVC_MFCWindowing#83](../../mfc/reference/codesnippet/cpp/cwnd-class_22.cpp)]

## <a name="createsolidcaret"></a> CWnd::CreateSolidCaret

Creates a solid rectangle for the system caret and claims ownership of the caret.

```cpp
void CreateSolidCaret(
    int nWidth,
    int nHeight);
```

### Parameters

*nWidth*<br/>
Specifies the width of the caret (in logical units). If this parameter is 0, the width is set to the system-defined window-border width.

*nHeight*<br/>
Specifies the height of the caret (in logical units). If this parameter is 0, the height is set to the system-defined window-border height.

### Remarks

The caret shape can be a line or block.

The parameters *nWidth* and *nHeight* specify the caret's width and height (in logical units); the exact width and height (in pixels) depend on the mapping mode.

The system's window-border width or height can be retrieved by the [GetSystemMetrics](/windows/win32/api/winuser/nf-winuser-getsystemmetrics) Windows function with the SM_CXBORDER and SM_CYBORDER indexes. Using the window-border width or height ensures that the caret will be visible on a high-resolution display.

The `CreateSolidCaret` member function automatically destroys the previous caret shape, if any, regardless of which window owns the caret. Once created, the caret is initially hidden. To show the caret, the [ShowCaret](#showcaret) member function must be called.

The system caret is a shared resource. `CWnd` should create a caret only when it has the input focus or is active. It should destroy the caret before it loses the input focus or becomes inactive.

### Example

[!code-cpp[NVC_MFCWindowing#84](../../mfc/reference/codesnippet/cpp/cwnd-class_23.cpp)]

## <a name="cwnd"></a> CWnd::CWnd

Constructs a `CWnd` object.

```
CWnd();
```

### Remarks

The Windows window is not created and attached until the [CreateEx](#createex) or [Create](#create) member function is called.

## <a name="default"></a> CWnd::Default

Calls the default window procedure.

```
LRESULT Default();
```

### Return Value

Depends on the message sent.

### Remarks

The default window procedure provides default processing for any window message that an application does not process. This member function ensures that every message is processed.

### Example

[!code-cpp[NVC_MFCWindowing#85](../../mfc/reference/codesnippet/cpp/cwnd-class_24.cpp)]

## <a name="defwindowproc"></a> CWnd::DefWindowProc

Calls the default window procedure, which provides default processing for any window message that an application does not process.

```
virtual LRESULT DefWindowProc(
    UINT message,
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*message*<br/>
Specifies the Windows message to be processed.

*wParam*<br/>
Specifies additional message-dependent information.

*lParam*<br/>
Specifies additional message-dependent information.

### Return Value

Depends on the message sent.

### Remarks

This member function ensures that every message is processed. It should be called with the same parameters as those received by the window procedure.

## <a name="deletetempmap"></a> CWnd::DeleteTempMap

Called automatically by the idle time handler of the `CWinApp` object.

```
static void PASCAL DeleteTempMap();
```

### Remarks

Deletes any temporary `CWnd` objects created by the `FromHandle` member function.

### Example

[!code-cpp[NVC_MFCWindowing#86](../../mfc/reference/codesnippet/cpp/cwnd-class_25.cpp)]

## <a name="destroywindow"></a> CWnd::DestroyWindow

Destroys the Windows window attached to the `CWnd` object.

```
virtual BOOL DestroyWindow();
```

### Return Value

Nonzero if the window is destroyed; otherwise 0.

### Remarks

The `DestroyWindow` member function sends appropriate messages to the window to deactivate it and remove the input focus. It also destroys the window's menu, flushes the application queue, destroys outstanding timers, removes Clipboard ownership, and breaks the Clipboard-viewer chain if `CWnd` is at the top of the viewer chain. It sends [WM_DESTROY](#ondestroy) and [WM_NCDESTROY](#onncdestroy) messages to the window. It does not destroy the `CWnd` object.

`DestroyWindow` is a place holder for performing cleanup. Because `DestroyWindow` is a virtual function, it is shown in any `CWnd`-derived class in Class View. But even if you override this function in your `CWnd`-derived class, `DestroyWindow` is not necessarily called. If `DestroyWindow` is not called in the MFC code, then you have to explicitly call it in your own code if you want it to be called.

Assume, for example, you have overridden `DestroyWindow` in a `CView`-derived class. Since MFC source code does not call `DestroyWindow` in any of its `CFrameWnd`-derived classes, your overridden `DestroyWindow` will not be called unless you call it explicitly.

If the window is the parent of any windows, these child windows are automatically destroyed when the parent window is destroyed. The `DestroyWindow` member function destroys child windows first and then the window itself.

The `DestroyWindow` member function also destroys modeless dialog boxes created by [CDialog::Create](../../mfc/reference/cdialog-class.md#create).

If the `CWnd` being destroyed is a child window and does not have the [WS_EX_NOPARENTNOTIFY](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) style set, then the [WM_PARENTNOTIFY](/windows/win32/inputmsg/wm-parentnotify) message is sent to the parent.

### Example

[!code-cpp[NVC_MFCWindowing#87](../../mfc/reference/codesnippet/cpp/cwnd-class_26.cpp)]

## <a name="detach"></a> CWnd::Detach

Detaches a Windows handle from a `CWnd` object and returns the handle.

```
HWND Detach();
```

### Return Value

A HWND to the Windows object.

### Example

  See the example for [CWnd::Attach](#attach).

## <a name="dlgdirlist"></a> CWnd::DlgDirList

Fills a list box with a file or directory listing.

```
int DlgDirList(
    LPTSTR lpPathSpec,
    int nIDListBox,
    int nIDStaticPath,
    UINT nFileType);
```

### Parameters

*lpPathSpec*<br/>
Points to a null-terminated string that contains the path or filename. `DlgDirList` modifies this string, which should be long enough to contain the modifications. For more information, see the following "Remarks" section.

*nIDListBox*<br/>
Specifies the identifier of a list box. If *nIDListBox* is 0, `DlgDirList` assumes that no list box exists and does not attempt to fill one.

*nIDStaticPath*<br/>
Specifies the identifier of the static-text control used to display the current drive and directory. If *nIDStaticPath* is 0, `DlgDirList` assumes that no such text control is present.

*nFileType*<br/>
Specifies the attributes of the files to be displayed. It can be any combination of the following values:

- DDL_READWRITE Read-write data files with no additional attributes.

- DDL_READONLY Read-only files.

- DDL_HIDDEN Hidden files.

- DDL_SYSTEM System files.

- DDL_DIRECTORY Directories.

- DDL_ARCHIVE Archives.

- DDL_POSTMSGS LB_DIR flag. If the LB_DIR flag is set, Windows places the messages generated by `DlgDirList` in the application's queue; otherwise, they are sent directly to the dialog-box procedure.

- DDL_DRIVES Drives. If the DDL_DRIVES flag is set, the DDL_EXCLUSIVE flag is set automatically. Therefore, to create a directory listing that includes drives and files, you must call `DlgDirList` twice: once with the DDL_DRIVES flag set and once with the flags for the rest of the list.

- DDL_EXCLUSIVE Exclusive bit. If the exclusive bit is set, only files of the specified type are listed; otherwise normal files and files of the specified type are listed.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

`DlgDirList` sends [LB_RESETCONTENT](/windows/win32/Controls/lb-resetcontent) and [LB_DIR](/windows/win32/Controls/lb-dir) messages to the list box. It fills the list box specified by *nIDListBox* with the names of all files that match the path given by *lpPathSpec*.

The *lpPathSpec* parameter has the following form:

`[drive:] [ [\u]directory[\idirectory]...\u] [filename]`

In this example, *drive* is a drive letter, *directory* is a valid directory name, and *filename* is a valid filename that must contain at least one wildcard. The wildcards are a question mark (**?**), which means match any character, and an asterisk (<strong>\*</strong>), meaning match any number of characters.

If you specify a 0-length string for *lpPathSpec*, or if you specify only a directory name but do not include any file specification, the string will be changed to "\*.\*".

If *lpPathSpec* includes a drive and/or directory name, the current drive and directory are changed to the designated drive and directory before the list box is filled. The text control identified by *nIDStaticPath* is also updated with the new drive and/or directory name.

After the list box is filled, *lpPathSpec* is updated by removing the drive and/or directory portion of the path.

### Example

[!code-cpp[NVC_MFCWindowing#88](../../mfc/reference/codesnippet/cpp/cwnd-class_27.cpp)]

## <a name="dlgdirlistcombobox"></a> CWnd::DlgDirListComboBox

Fills the list box of a combo box with a file or directory listing.

```
int DlgDirListComboBox(
    LPTSTR lpPathSpec,
    int nIDComboBox,
    int nIDStaticPath,
    UINT nFileType);
```

### Parameters

*lpPathSpec*<br/>
Points to a null-terminated string that contains the path or filename. `DlgDirListComboBox` modifies this string, so this data should not be in the form of a string literal. See the following "Remarks" section.

*nIDComboBox*<br/>
Specifies the identifier of a combo box in a dialog box. If *nIDComboBox* is 0, `DlgDirListComboBox` assumes that no combo box exists and does not attempt to fill one.

*nIDStaticPath*<br/>
Specifies the identifier of the static-text control used to display the current drive and directory. If *nIDStaticPath* is 0, `DlgDirListComboBox` assumes that no such text control is present.

*nFileType*<br/>
Specifies DOS file attributes of the files to be displayed. It can be any combination of the following values:

- DDL_READWRITE Read-write data files with no additional attributes.

- DDL_READONLY Read-only files.

- DDL_HIDDEN Hidden files.

- DDL_SYSTEM System files.

- DDL_DIRECTORY Directories.

- DDL_ARCHIVE Archives.

- DDL_POSTMSGS CB_DIR flag. If the CB_DIR flag is set, Windows places the messages generated by `DlgDirListComboBox` in the application's queue; otherwise, they are sent directly to the dialog-box procedure.

- DDL_DRIVES Drives. If the DDL_DRIVES flag is set, the DDL_EXCLUSIVE flag is set automatically. Therefore, to create a directory listing that includes drives and files, you must call `DlgDirListComboBox` twice: once with the DDL_DRIVES flag set and once with the flags for the rest of the list.

- DDL_EXCLUSIVE Exclusive bit. If the exclusive bit is set, only files of the specified type are listed; otherwise normal files and files of the specified type are listed.

### Return Value

Specifies the outcome of the function. It is nonzero if a listing was made, even an empty listing. A 0 return value implies that the input string did not contain a valid search path.

### Remarks

`DlgDirListComboBox` sends [CB_RESETCONTENT](/windows/win32/Controls/cb-resetcontent) and [CB_DIR](/windows/win32/Controls/cb-dir) messages to the combo box. It fills the list box of the combo box specified by *nIDComboBox* with the names of all files that match the path given by *lpPathSpec*.

The *lpPathSpec* parameter has the following form:

`[drive:] [ [\u]directory[\idirectory]...\u] [filename]`

In this example, *drive* is a drive letter, *directory* is a valid directory name, and *filename* is a valid filename that must contain at least one wildcard. The wildcards are a question mark (**?**), which means match any character, and an asterisk (<strong>\*</strong>), which means match any number of characters.

If you specify a zero-length string for *lpPathSpec*, the current directory will be used and *lpPathSpec* will not be modified. If you specify only a directory name but do not include any file specification, the string will be changed to "\*".

If *lpPathSpec* includes a drive and/or directory name, the current drive and directory are changed to the designated drive and directory before the list box is filled. The text control identified by *nIDStaticPath* is also updated with the new drive and/or directory name.

After the combo-box list box is filled, *lpPathSpec* is updated by removing the drive and/or directory portion of the path.

### Example

[!code-cpp[NVC_MFCWindowing#89](../../mfc/reference/codesnippet/cpp/cwnd-class_28.cpp)]

## <a name="dlgdirselect"></a> CWnd::DlgDirSelect

Retrieves the current selection from a list box.

```
BOOL DlgDirSelect(
    LPTSTR lpString,
    int nIDListBox);
```

### Parameters

*lpString*<br/>
Points to a buffer that is to receive the current selection in the list box.

*nIDListBox*<br/>
Specifies the integer ID of a list box in the dialog box.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

It assumes that the list box has been filled by the [DlgDirList](#dlgdirlist) member function and that the selection is a drive letter, a file, or a directory name.

The `DlgDirSelect` member function copies the selection to the buffer given by *lpString*. If there is no selection, *lpString* does not change.

`DlgDirSelect` sends [LB_GETCURSEL](/windows/win32/Controls/lb-getcursel) and [LB_GETTEXT](/windows/win32/Controls/lb-gettext) messages to the list box.

It does not allow more than one filename to be returned from a list box. The list box must not be a multiple-selection list box.

## <a name="dlgdirselectcombobox"></a> CWnd::DlgDirSelectComboBox

Retrieves the current selection from the list box of a combo box.

```
BOOL DlgDirSelectComboBox(
    LPTSTR lpString,
    int nIDComboBox);
```

### Parameters

*lpString*<br/>
Points to a buffer that is to receive the selected path.

*nIDComboBox*<br/>
Specifies the integer ID of the combo box in the dialog box.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

It assumes that the list box has been filled by the [DlgDirListComboBox](#dlgdirlistcombobox) member function and that the selection is a drive letter, a file, or a directory name.

The `DlgDirSelectComboBox` member function copies the selection to the specified buffer. If there is no selection, the contents of the buffer are not changed.

`DlgDirSelectComboBox` sends [CB_GETCURSEL](/windows/win32/Controls/cb-getcursel) and [CB_GETLBTEXT](/windows/win32/Controls/cb-getlbtext) messages to the combo box.

It does not allow more than one filename to be returned from a combo box.

## <a name="dodataexchange"></a> CWnd::DoDataExchange

Called by the framework to exchange and validate dialog data.

```
virtual void DoDataExchange(CDataExchange* pDX);
```

### Parameters

*pDX*<br/>
A pointer to a `CDataExchange` object.

### Remarks

Never call this function directly. It is called by the [UpdateData](#updatedata) member function. Call `UpdateData` to initialize a dialog box's controls or retrieve data from a dialog box.

When you derive an application-specific dialog class from [CDialog](../../mfc/reference/cdialog-class.md), you need to override this member function if you wish to utilize the framework's automatic data exchange and validation. The Add Variable wizard will write an overridden version of this member function for you containing the desired "data map" of dialog data exchange (DDX) and validation (DDV) global function calls.

To automatically generate an overridden version of this member function, first create a dialog resource with the dialog editor, then derive an application-specific dialog class. Then use the Add Variable wizard to associate variables, data, and validation ranges with various controls in the new dialog box. The wizard then writes the overridden `DoDataExchange`, which contains a data map. The following is an example DDX/DDV code block generated by the Add Variable wizard:

[!code-cpp[NVC_MFCWindowing#90](../../mfc/reference/codesnippet/cpp/cwnd-class_29.cpp)]

The `DoDataExchange` overridden member function must precede the macro statements in your source file.

For more information on dialog data exchange and validation, see [Displaying and Manipulating Data in a Form](../../data/odbc/displaying-and-manipulating-data-in-a-form.md) and [Dialog Data Exchange and Validation](../../mfc/dialog-data-exchange-and-validation.md). For a description of the DDX_ and DDV_ macros generated by the Add Variable wizard, see [Technical Note 26](../../mfc/tn026-ddx-and-ddv-routines.md).

## <a name="dragacceptfiles"></a> CWnd::DragAcceptFiles

Call this member function from within a window, using a `CWnd` pointer, in your application's [CWinApp::InitInstance](../../mfc/reference/cwinapp-class.md#initinstance) function to indicate that the window accepts dropped files from the Windows File Manager or File Explorer.

```cpp
void DragAcceptFiles(BOOL bAccept = TRUE);
```

### Parameters

*BAccept*<br/>
Flag that indicates whether dragged files are accepted.

### Remarks

Only the window that calls `DragAcceptFiles` with the *bAccept* parameter set to TRUE has identified itself as able to process the Windows message WM_DROPFILES. For example, in an MDI application, if the `CMDIFrameWnd` window pointer is used in the `DragAcceptFiles` function call, only the `CMDIFrameWnd` window gets the WM_DROPFILES message. This message is not sent to all open `CMDIChildWnd` windows. For a `CMDIChildWnd` window to receive this message, you must call `DragAcceptFiles` with the `CMDIChildWnd` window pointer.

To discontinue receiving dragged files, call the member function with *bAccept* set to FALSE.

## <a name="dragdetect"></a> CWnd::DragDetect

Captures the mouse and tracks its movement until the user releases the left button, presses the ESC key, or moves the mouse outside the drag rectangle around the specified point.

```
BOOL DragDetect(POINT pt) const;
```

### Parameters

*pt*<br/>
Initial position of the mouse, in screen coordinates. The function determines the coordinates of the drag rectangle by using this point.

### Return Value

If the user moved the mouse outside of the drag rectangle while holding down the left button , the return value is nonzero.

If the user did not move the mouse outside of the drag rectangle while holding down the left button , the return value is zero.

### Remarks

This member function emulates the functionality of the function [DragDetect](/windows/win32/api/winuser/nf-winuser-dragdetect), as described in the Windows SDK.

## <a name="drawanimatedrects"></a> CWnd::DrawAnimatedRects

Draws a wire-frame rectangle and animates it to indicate the opening of an icon or the minimizing or maximizing of a window.

```
BOOL DrawAnimatedRects(
    int idAni,
    CONST RECT* lprcFrom,
    CONST RECT* lprcTo);
```

### Parameters

*idAni*<br/>
Specifies the type of animation. If you specify IDANI_CAPTION, the window caption will animate from the position specified by *lprcFrom* to the position specified by *lprcTo*. The effect is similar to minimizing or maximizing a window.

*lprcFrom*<br/>
Pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure specifying the location and size of the icon or minimized window.

*lprcTo*<br/>
Pointer to a [RECT](/windows/win32/api/windef/ns-windef-rect) structure specifying the location and size of the restored window

### Return Value

Nonzero if the function succeeds; otherwise 0.

### Remarks

This member function emulates the functionality of the function [DrawAnimatedRects](/windows/win32/api/winuser/nf-winuser-drawanimatedrects), as described in the Windows SDK.

## <a name="drawcaption"></a> CWnd::DrawCaption

Draws a window caption.

```
BOOL DrawCaption(
    CDC* pDC,
    LPCRECT lprc,
    UINT uFlags);
```

### Parameters

*pDC*<br/>
A pointer to a device context. The function draws the window caption into this device context.

*lprc*<br/>
A pointer to a RECT structure that specifies the bounding rectangle for the window caption.

*uFlags*<br/>
Specifies drawing options. For a complete list of values, see [DrawCaption](/windows/win32/api/winuser/nf-winuser-drawcaption).

### Return Value

Nonzero if the function succeeds; otherwise 0.

### Remarks

This member function emulates the functionality of the function [DrawCaption](/windows/win32/api/winuser/nf-winuser-drawcaption), as described in the Windows SDK.

## <a name="drawmenubar"></a> CWnd::DrawMenuBar

Redraws the menu bar.

```cpp
void DrawMenuBar();
```

### Remarks

If a menu bar is changed after Windows has created the window, call this function to draw the changed menu bar.

### Example

  See the example for [CWnd::GetMenu](#getmenu).

## <a name="enableactiveaccessibility"></a> CWnd::EnableActiveAccessibility

Enables user-defined Active Accessibility functions.

```cpp
void EnableActiveAccessibility();
```

### Remarks

MFC's default Active Accessibility support is sufficient for standard windows and controls, including ActiveX controls; however, if your `CWnd`-derived class contains nonwindowed user interface elements, MFC has no way of knowing about them. In that case, you must override the appropriate [Active Accessibility member functions](/windows/win32/winauto/sdk-components) in your class, and you must call `EnableActiveAccessibility` in the class's constructor.

## <a name="enabledynamiclayout"></a> CWnd::EnableDynamicLayout

Enables or disables the dynamic layout manager. When dynamic layout is enabled, the position and size of child windows can adjust dynamically when the user resizes the window.

```cpp
void EnableDynamicLayout(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
TRUE to enable dynamic layout; FALSE to disable dynamic layout.

### Remarks

If you want to enable dynamic layout, you have to do more than just call this method. You also have to provide dynamic layout information which species how the controls in the window respond to size changes. You can specify this information in the resource editor, or programmatically, for each control. See [Dynamic Layout](../../mfc/dynamic-layout.md).

## <a name="enabled2dsupport"></a> CWnd::EnableD2DSupport

Enables or disables window D2D support. Call this method before the main window is initialized.

```cpp
void EnableD2DSupport(
    BOOL bEnable = TRUE,
    BOOL bUseDCRenderTarget = FALSE);
```

### Parameters

*bEnable*<br/>
Specifies whether to turn on, or off D2D support.

*bUseDCRenderTarget*<br/>
Species whether to use the Device Context (DC) render target, CDCRenderTarget. If FALSE, CHwndRenderTarget is used.

## <a name="enablescrollbar"></a> CWnd::EnableScrollBar

Enables or disables one or both arrows of a scroll bar.

```
BOOL EnableScrollBar(
    int nSBFlags,
    UINT nArrowFlags = ESB_ENABLE_BOTH);
```

### Parameters

*nSBFlags*<br/>
Specifies the scroll-bar type. Can have one of the following values:

- SB_BOTH Enables or disables the arrows of the horizontal and vertical scroll bars associated with the window.

- SB_HORZ Enables or disables the arrows of the horizontal scroll bar associated with the window.

- SB_VERT Enables or disables the arrows of the vertical scroll bar associated with the window.

*nArrowFlags*<br/>
Specifies whether the scroll-bar arrows are enabled or disabled and which arrows are enabled or disabled. Can have one of the following values:

- ESB_ENABLE_BOTH Enables both arrows of a scroll bar (default).

- ESB_DISABLE_LTUP Disables the left arrow of a horizontal scroll bar or the up arrow of a vertical scroll bar.

- ESB_DISABLE_RTDN Disables the right arrow of a horizontal scroll bar or the down arrow of a vertical scroll bar.

- ESB_DISABLE_BOTH Disables both arrows of a scroll bar.

### Return Value

Nonzero if the arrows are enabled or disabled as specified. Otherwise it is 0, which indicates that the arrows are already in the requested state or that an error occurred.

## <a name="enablescrollbarctrl"></a> CWnd::EnableScrollBarCtrl

Enables or disables the scroll bar for this window.

```cpp
void EnableScrollBarCtrl(
    int nBar,
    BOOL bEnable = TRUE);
```

### Parameters

*nBar*<br/>
The scroll-bar identifier.

*bEnable*<br/>
Specifies whether the scroll bar is to be enabled or disabled.

### Remarks

If the window has a sibling scroll-bar control, that scroll bar is used; otherwise the window's own scroll bar is used.

## <a name="enabletooltips"></a> CWnd::EnableToolTips

Enables tool tips for the given window.

```
BOOL EnableToolTips(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
Specifies whether the tool tip control is enabled or disabled. TRUE enables the control; FALSE disables the control.

### Return Value

TRUE if tool tips are enabled; otherwise FALSE.

### Remarks

Override [OnToolHitTest](#ontoolhittest) to provide the [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) struct or structs for the window.

> [!NOTE]
> Some windows, such as [CToolBar](../../mfc/reference/ctoolbar-class.md), provide a built-in implementation of [OnToolHitTest](#ontoolhittest).

See [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) in the Windows SDK for more information on this structure.

Simply calling `EnableToolTips` is not enough to display tool tips for your child controls unless the parent window is derived from `CFrameWnd`. This is because `CFrameWnd` provides a default handler for the TTN_NEEDTEXT notification. If your parent window is not derived from `CFrameWnd`, that is, if it is a dialog box or a form view, tool tips for your child controls will not display correctly unless you provide a handler for the TTN_NEEDTEXT tool tip notification. See [Tool Tips](../../mfc/tool-tips-in-windows-not-derived-from-cframewnd.md).

The default tool tips provided for your windows by `EnableToolTips` do not have text associated with them. To retrieve text for the tool tip to display, the TTN_NEEDTEXT notification is sent to the tool tip control's parent window just before the tool tip window is displayed. If there is no handler for this message to assign some value to the *pszText* member of the `TOOLTIPTEXT` structure, there will be no text displayed for the tool tip.

### Example

[!code-cpp[NVC_MFCWindowing#91](../../mfc/reference/codesnippet/cpp/cwnd-class_30.cpp)]

[!code-cpp[NVC_MFCWindowing#92](../../mfc/reference/codesnippet/cpp/cwnd-class_31.cpp)]

## <a name="enabletrackingtooltips"></a> CWnd::EnableTrackingToolTips

Enables or disables tracking tooltips.

```
BOOL EnableTrackingToolTips(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
Specifies whether tracking tool tips are enabled or disabled. If this parameter is TRUE, the tracking tool tips will be enabled. If this parameter is FALSE, the tracking tool tips will be disabled.

### Return Value

Indicates the state before the `EnableWindow` member function was called. The return value is nonzero if the window was previously disabled. The return value is 0 if the window was previously enabled or an error occurred.

### Remarks

Tracking tool tips are tool tip windows that you can dynamically position on the screen. By rapidly updating the position, the tool tip window appears to move smoothly, or "track." This functionality can be useful if you need tool tip text to follow the position of the pointer as it moves.

## <a name="enablewindow"></a> CWnd::EnableWindow

Enables or disables mouse and keyboard input.

```
BOOL EnableWindow(BOOL bEnable = TRUE);
```

### Parameters

*bEnable*<br/>
Specifies whether the given window is to be enabled or disabled. If this parameter is TRUE, the window will be enabled. If this parameter is FALSE, the window will be disabled.

### Return Value

Indicates the state before the `EnableWindow` member function was called. The return value is nonzero if the window was previously disabled. The return value is 0 if the window was previously enabled or an error occurred.

### Remarks

When input is disabled, input such as mouse clicks and keystrokes is ignored. When input is enabled, the window processes all input.

If the enabled state is changing, the [WM_ENABLE](#onenable) message is sent before this function returns.

If disabled, all child windows are implicitly disabled, although they are not sent WM_ENABLE messages.

A window must be enabled before it can be activated. For example, if an application is displaying a modeless dialog box and has disabled its main window, the main window must be enabled before the dialog box is destroyed. Otherwise, another window will get the input focus and be activated. If a child window is disabled, it is ignored when Windows tries to determine which window should get mouse messages.

By default, a window is enabled when it is created. An application can specify the WS_DISABLED style in the [Create](#create) or [CreateEx](#createex) member function to create a window that is initially disabled. After a window has been created, an application can also use the `EnableWindow` member function to enable or disable the window.

An application can use this function to enable or disable a control in a dialog box. A disabled control cannot receive the input focus, nor can a user access it.

### Example

[!code-cpp[NVC_MFCWindowing#93](../../mfc/reference/codesnippet/cpp/cwnd-class_32.cpp)]

## <a name="endmodalloop"></a> CWnd::EndModalLoop

Terminates a call to `RunModalLoop`.

```
virtual void EndModalLoop(int nResult);
```

### Parameters

*nResult*<br/>
Contains the value to be returned to the caller of [RunModalLoop](#runmodalloop).

### Remarks

The *nResult* parameter is propagated to the return value from `RunModalLoop`.

## <a name="endmodalstate"></a> CWnd::EndModalState

Call this member function to change a frame window from modal to modeless.

```
virtual void EndModalState();
```

## <a name="endpaint"></a> CWnd::EndPaint

Marks the end of painting in the given window.

```cpp
void EndPaint(LPPAINTSTRUCT lpPaint);
```

### Parameters

*lpPaint*<br/>
Points to a [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) structure that contains the painting information retrieved by the [BeginPaint](#beginpaint) member function.

### Remarks

The `EndPaint` member function is required for each call to the `BeginPaint` member function, but only after painting is complete.

If the caret was hidden by the `BeginPaint` member function, `EndPaint` restores the caret to the screen.

### Example

  See the example for [CWnd::BeginPaint](#beginpaint).

## <a name="executedlginit"></a> CWnd::ExecuteDlgInit

Initiates a dialog resource.

```
BOOL ExecuteDlgInit(LPCTSTR lpszResourceName);
BOOL ExecuteDlgInit(LPVOID lpResource);
```

### Parameters

*lpszResourceName*<br/>
A pointer to a null-terminated string specifying the name of the resource.

*lpResource*<br/>
A pointer to a resource.

### Return Value

TRUE if a dialog resource is executed; otherwise FALSE.

### Remarks

`ExecuteDlgInit` will use resources bound to the executing module, or resources from other sources. To accomplish this, `ExecuteDlgInit` finds a resource handle by calling `AfxFindResourceHandle`. If your MFC application does not use the shared DLL (MFCx0[U][D].DLL), `AfxFindResourceHandle` calls [AfxGetResourceHandle](application-information-and-management.md#afxgetresourcehandle), which returns the current resource handle for the executable. If your MFC application that uses MFCx0[U][D].DLL, `AfxFindResourceHandle` traverses the `CDynLinkLibrary` object list of shared and MFC extension DLLs looking for the correct resource handle.

## <a name="filtertooltipmessage"></a> CWnd::FilterToolTipMessage

Called by the framework to display tool tip messages.

```cpp
void FilterToolTipMessage(MSG* pMsg);
```

### Parameters

*pMsg*<br/>
A pointer to the tool tip message.

### Remarks

In most MFC applications this method is called by the framework from [PreTranslateMessage](#pretranslatemessage) and [EnableToolTips](#enabletooltips), and you do not need to call it yourself.

However, in certain applications, for example some ActiveX controls, these methods might not be invoked by the framework, and you will need to call FilterToolTipMessage yourself. For more information, see [Methods of Creating Tool Tips](../../mfc/methods-of-creating-tool-tips.md).

## <a name="findwindow"></a> CWnd::FindWindow

Returns the top-level `CWnd` whose window class is given by *lpszClassName* and whose window name, or title, is given by *lpszWindowName*.

```
static CWnd* PASCAL FindWindow(
    LPCTSTR lpszClassName,
    LPCTSTR lpszWindowName);
```

### Parameters

*lpszClassName*<br/>
Points to a null-terminated string that specifies the window's class name (a `WNDCLASS` structure). If *lpClassName* is NULL, all class names match.

*lpszWindowName*<br/>
Points to a null-terminated string that specifies the window name (the window's title). If *lpWindowName* is NULL, all window names match.

### Return Value

Identifies the window that has the specified class name and window name. It is NULL if no such window is found.

The `CWnd`* may be temporary and should not be stored for later use.

### Remarks

This function does not search child windows.

### Example

[!code-cpp[NVC_MFCWindowing#94](../../mfc/reference/codesnippet/cpp/cwnd-class_33.cpp)]

## <a name="findwindowex"></a> CWnd::FindWindowEx

Retrieves the window object whose class name and window name match the specified strings.

```
static CWnd* FindWindowEx(
    HWND hwndParent,
    HWND hwndChildAfter,
    LPCTSTR lpszClass,
    LPCTSTR lpszWindow);
```

### Parameters

*hwndParent*<br/>
Handle to the parent window whose child windows are to be searched.

*hwndChildAfter*<br/>
Handle to a child window. The search begins with the next child window in the Z order. The child window must be a direct child window of *hwndParent*, not just a descendant window.

*lpszClass*<br/>
Pointer to a null-terminated string that specifies the class name or a class atom created by a previous call to the [RegisterClass](/windows/win32/api/winuser/nf-winuser-registerclassw) or [RegisterClassEx](/windows/win32/api/winuser/nf-winuser-registerclassexw).

*lpszWindow*<br/>
Pointer to a null-terminated string that specifies the window name (the window's title). If this parameter is NULL, all window names match.

### Return Value

If the function succeeds, the return value is a pointer to the window object having the specified class and window names. If the function fails, the return value is NULL.

### Remarks

This member function emulates the functionality of the function [FindWindowEx](/windows/win32/api/winuser/nf-winuser-findwindowexw), as described in the Windows SDK.

## <a name="flashwindow"></a> CWnd::FlashWindow

Flashes the given window once.

```
BOOL FlashWindow(BOOL bInvert);
```

### Parameters

*bInvert*<br/>
Specifies whether the `CWnd` is to be flashed or returned to its original state. The `CWnd` is flashed from one state to the other if *bInvert* is TRUE. If *bInvert* is FALSE, the window is returned to its original state (either active or inactive).

### Return Value

Nonzero if the window was active before the call to the `FlashWindow` member function; otherwise 0.

### Remarks

For successive flashing, create a system timer and repeatedly call `FlashWindow`. Flashing the `CWnd` means changing the appearance of its title bar as if the `CWnd` were changing from inactive to active status, or vice versa. (An inactive title bar changes to an active title bar; an active title bar changes to an inactive title bar.)

Typically, a window is flashed to inform the user that it requires attention but that it does not currently have the input focus.

The *bInvert* parameter should be FALSE only when the window is getting the input focus and will no longer be flashing; it should be TRUE on successive calls while waiting to get the input focus.

This function always returns nonzero for minimized windows. If the window is minimized, `FlashWindow` will simply flash the window's icon; *bInvert* is ignored for minimized windows.

### Example

[!code-cpp[NVC_MFCWindowing#95](../../mfc/reference/codesnippet/cpp/cwnd-class_34.cpp)]

## <a name="flashwindowex"></a> CWnd::FlashWindowEx

Flashes the given window.

```
BOOL FlashWindowEx(
    DWORD dwFlags,
    UINT uCount,
    DWORD dwTimeout);
```

### Parameters

*dwFlags*<br/>
Specifies the flash status. For a complete list of values, see the [FLASHWINFO](/windows/win32/api/winuser/ns-winuser-flashwinfo) structure.

*uCount*<br/>
Specifies the number of times to flash the window.

*dwTimeout*<br/>
Specifies the rate, in milliseconds, at which the window will be flashed. If *dwTimeout* is zero, the function uses the default cursor blink rate.

### Return Value

The return value specifies the window's state before the call to the `FlashWindowEx` function. If the window caption was drawn as active before the call, the return value is nonzero. Otherwise, the return value is zero.

### Remarks

This method emulates the functionality of the function [FlashWindowEx](/windows/win32/api/winuser/nf-winuser-flashwindowex), as described in the Windows SDK.

## <a name="fromhandle"></a> CWnd::FromHandle

Returns a pointer to a `CWnd` object when given a handle to a window. If a `CWnd` object is not attached to the handle, a temporary `CWnd` object is created and attached.

```
static CWnd* PASCAL FromHandle(HWND hWnd);
```

### Parameters

*hWnd*<br/>
An HWND of a Windows window.

### Return Value

Returns a pointer to a `CWnd` object when given a handle to a window. If a `CWnd` object is not attached to the handle, a temporary `CWnd` object is created and attached.

The pointer may be temporary and should not be stored for later use.

## <a name="fromhandlepermanent"></a> CWnd::FromHandlePermanent

Returns a pointer to a `CWnd` object when given a handle to a window.

```
static CWnd* PASCAL FromHandlePermanent(HWND hWnd);
```

### Parameters

*hWnd*<br/>
An HWND of a Windows window.

### Return Value

A pointer to a `CWnd` object.

### Remarks

If a `CWnd` object is not attached to the handle, NULL is returned.

This function, unlike [FromHandle](#fromhandle), does not create temporary objects.

## <a name="get_accchild"></a> CWnd::get_accChild

Called by the framework to retrieve the address of an `IDispatch` interface for the specified child.

```
virtual HRESULT get_accChild(
    VARIANT varChild,
    IDispatch** ppdispChild);
```

### Parameters

*varChild*<br/>
Identifies the child whose `IDispatch` interface is to be retrieved.

*ppdispChild*<br/>
Receives the address of the child object's `IDispatch` interface.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in [IAccessible::get_accChild](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accchild) in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles).

For more information, see [IAccessible::get_accChild](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accchild) in the Windows SDK.

## <a name="get_accchildcount"></a> CWnd::get_accChildCount

Called by the framework to retrieve the number of children belonging to this object.

```
virtual HRESULT get_accChildCount(long* pcountChildren);
```

### Parameters

*pcountChildren*<br/>
Receives the number of children.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in [IAccessible::get_accChildCount](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accchildcount) in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles). Call the base class version and then add the nonwindowed child elements.

For more information, see [IAccessible::get_accChildCount](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accchildcount) in the Windows SDK.

## <a name="get_accdefaultaction"></a> CWnd::get_accDefaultAction

Called by the framework to retrieve a string that describes the object's default action.

```
virtual HRESULT get_accDefaultAction(
    VARIANT varChild,
    BSTR* pszDefaultAction);
```

### Parameters

*varChild*<br/>
Specifies whether the default action to be retrieved is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to obtain information about the object) or a child ID (to obtain information about the object's child element).

*pszDefaultAction*<br/>
Address of a BSTR that receives a localized string describing the default action for the specified object, or NULL if this object has no default action.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in [IAccessible::get_accDefaultAction](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accdefaultaction) in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class to describe your object's default action.

For more information, see [IAccessible::get_accDefaultAction](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accdefaultaction) in the Windows SDK.

## <a name="get_accdescription"></a> CWnd::get_accDescription

Called by framework to retrieve a string that describes the visual appearance of the specified object.

```
virtual HRESULT get_accDescription(
    VARIANT varChild,
    BSTR* pszDescription);
```

### Parameters

*varChild*<br/>
Specifies whether the description to be retrieved is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to obtain information about the object) or a child ID (to obtain information about the object's child element).

*pszDescription*<br/>
Address of a BSTR that receives a localized string describing the specified object, or NULL if no description is available for this object.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in [IAccessible::get_accDescription](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accdescription) in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class to describe your object. Call the base class version and add your description.

For more information, see [IAccessible::get_accDescription](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accdescription) in the Windows SDK.

## <a name="get_accfocus"></a> CWnd::get_accFocus

Called by the framework to retrieve the object that has the keyboard focus.

```
virtual HRESULT get_accFocus(VARIANT* pvarChild);
```

### Parameters

*pvarChild*<br/>
Receives information about the object that has the focus. See *pvarID* in [IAccessible::get_accFocus](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accfocus) in the Windows SDK.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in `IAccessible::get_accFocus` in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles).

For more information, see [IAccessible::get_accFocus](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accfocus) in the Windows SDK.

## <a name="get_acchelp"></a> CWnd::get_accHelp

Called by the framework to retrieve an object's **Help** property string.

```
virtual HRESULT get_accHelp(
    VARIANT varChild,
    BSTR* pszHelp);
```

### Parameters

*varChild*<br/>
Specifies whether the help information to be retrieved is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to obtain information about the object) or a child ID (to obtain information about the object's child element).

*pszHelp*<br/>
Address of a BSTR that receives the localized string containing the help information for the specified object, or NULL if no help information is available.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in [IAccessible::get_accHelp](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_acchelp) in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class to provide help text for your object.

For more information, see [IAccessible::get_accHelp](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_acchelp) in the Windows SDK.

## <a name="get_acchelptopic"></a> CWnd::get_accHelpTopic

Called by the framework to retrieve the full path of the **WinHelp** file associated with the specified object and the identifier of the appropriate topic within that file.

```
virtual HRESULT get_accHelpTopic(
    BSTR* pszHelpFile,
    VARIANT varChild,
    long* pidTopic);
```

### Parameters

*pszHelpFile*<br/>
Address of a BSTR that receives the full path of the `WinHelp` file associated with the specified object, if any.

*varChild*<br/>
Specifies whether the Help topic to be retrieved is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to obtain a Help topic for the object) or a child ID (to obtain a Help topic for one of the object's child elements).

*pidTopic*<br/>
Identifies the Help file topic associated with the specified object. See *pidTopic* in [IAccessible::get_accHelpTopic](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_acchelptopic) in the Windows SDK.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in `IAccessible::get_accHelpTopic` in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class to provide help information about your object.

For more information, see [IAccessible::get_accHelpTopic](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_acchelptopic) in the Windows SDK.

## <a name="get_acckeyboardshortcut"></a> CWnd::get_accKeyboardShortcut

Called by the framework to retrieve the specified object's shortcut key or access key.

```
virtual HRESULT get_accKeyboardShortcut(
    VARIANT varChild,
    BSTR* pszKeyboardShortcut);
```

### Parameters

*varChild*<br/>
Specifies whether the keyboard shortcut to be retrieved is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to obtain information about the object) or a child ID (to obtain information about the object's child element).

*pszKeyboardShortcut*<br/>
Address of a BSTR that receives a localized string identifying the keyboard shortcut, or NULL if no keyboard shortcut is associated with the specified object.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in [IAccessible::get_accKeyboardShortcut](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_acckeyboardshortcut) in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class to identify the keyboard shortcut for your object.

For more information, see [IAccessible::get_accKeyboardShortcut](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_acckeyboardshortcut) in the Windows SDK.

## <a name="get_accname"></a> CWnd::get_accName

Called by the framework to retrieve the name of the specified object.

```
virtual HRESULT get_accName(
    VARIANT varChild,
    BSTR* pszName);
```

### Parameters

*varChild*<br/>
Specifies whether the name to be retrieved is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to obtain information about the object) or a child ID (to obtain information about the object's child element).

*pszName*<br/>
Address of a BSTR that receives a string containing the specified object's name.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in [IAccessible::get_accName](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accname) in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class to return the name of your object.

For more information, see [IAccessible::get_accName](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accname) in the Windows SDK.

## <a name="get_accparent"></a> CWnd::get_accParent

Called by the framework to retrieve the `IDispatch` interface of the object's parent.

```
virtual HRESULT get_accParent(IDispatch** ppdispParent);
```

### Parameters

*ppdispParent*<br/>
Receives the address of the parent object's `IDispatch` interface. The variable is set to NULL if no parent exists, or if the child cannot access its parent.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in [IAccessible::get_accParent](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accparent) in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

In most cases you don't have to override this function.

For more information, see [IAccessible::get_accParent](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accparent) in the Windows SDK.

## <a name="get_accrole"></a> CWnd::get_accRole

Called by the framework to retrieve information that describes the role of the specified object.

```
virtual HRESULT get_accRole(
    VARIANT varChild,
    VARIANT* pvarRole);
```

### Parameters

*varChild*<br/>
Specifies whether the role information to be retrieved is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to obtain information about the object) or a child ID (to obtain information about the object's child element).

*pvarRole*<br/>
Receives the role information. See *pvarRole* in [IAccessible::get_accRole](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accrole) in the Windows SDK.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in `IAccessible::get_accRole` in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles).

For more information, see [IAccessible::get_accRole](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accrole) in the Windows SDK.

## <a name="get_accselection"></a> CWnd::get_accSelection

Called by the framework to retrieve the selected children of this object.

```
virtual HRESULT get_accSelection(VARIANT* pvarChildren);
```

### Parameters

*pvarChildren*<br/>
Receives information about which children are selected. See *pvarChildren* in [IAccessible::get_accSelection](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accselection) in the Windows SDK.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in `IAccessible::get_accSelection` in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles).

For more information, see [IAccessible::get_accSelection](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accselection) in the Windows SDK.

## <a name="get_accstate"></a> CWnd::get_accState

Called by the framework to retrieve the current state of the specified object.

```
virtual HRESULT get_accState(
    VARIANT varChild,
    VARIANT* pvarState);
```

### Parameters

*varChild*<br/>
Specifies whether the state information to be retrieved is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to obtain information about the object) or a child ID (to obtain information about the object's child element).

*pvarState*<br/>
Receives information about the object's state. See *pvarState* in [IAccessible::get_accState](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accstate) in the Windows SDK.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in `IAccessible::get_accState` in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles).

For more information, see [IAccessible::get_accState](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accstate) in the Windows SDK.

## <a name="get_accvalue"></a> CWnd::get_accValue

Called by the framework to retrieve the value of the specified object.

```
virtual HRESULT get_accValue(
    VARIANT varChild,
    BSTR* pszValue);
```

### Parameters

*varChild*<br/>
Specifies whether the value information to be retrieved is that of the object or one of the object's child elements. This parameter can be either CHILDID_SELF (to obtain information about the object) or a child ID (to obtain information about the object's child element).

*pszValue*<br/>
Address of the BSTR that receives a localized string containing the object's current value.

### Return Value

Returns S_OK on success, a COM error code on failure. See **Return Values** in [IAccessible::get_accValue](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accvalue) in the Windows SDK.

### Remarks

This function is part of MFC's [Active Accessibility](/windows/win32/WinAuto/microsoft-active-accessibility) support.

Override this function in your `CWnd`-derived class if you have nonwindowed user interface elements (other than windowless ActiveX controls, which MFC handles).

For more information, see [IAccessible::get_accValue](/windows/win32/api/oleacc/nf-oleacc-iaccessible-get_accvalue) in the Windows SDK.

## <a name="getactivewindow"></a> CWnd::GetActiveWindow

Retrieves a pointer to the active window.

```
static CWnd* PASCAL GetActiveWindow();
```

### Return Value

The active window or NULL if no window was active at the time of the call. The pointer may be temporary and should not be stored for later use.

### Remarks

The active window is either the window that has the current input focus or the window explicitly made active by the [SetActiveWindow](#setactivewindow) member function.

## <a name="getancestor"></a> CWnd::GetAncestor

Retrieves the ancestor window object of the specified window.

```
CWnd* GetAncestor(UINT gaFlags) const;
```

### Parameters

*gaFlags*<br/>
Specifies the ancestor to be retrieved. For a complete list of possible values, see [GetAncestor](/windows/win32/api/winuser/nf-winuser-getancestor).

### Return Value

If the function succeeds, the return value is a pointer to the ancestor window object. If the function fails, the return value is NULL.

### Remarks

This member function emulates the functionality of the function [GetAncestor](/windows/win32/api/winuser/nf-winuser-getancestor), as described in the Windows SDK.

## <a name="getcapture"></a> CWnd::GetCapture

Retrieves the window that has the mouse capture.

```
static CWnd* PASCAL GetCapture();
```

### Return Value

Identifies the window that has the mouse capture. It is NULL if no window has the mouse capture.

The return value may be temporary and should not be stored for later use.

### Remarks

Only one window has the mouse capture at any given time. A window receives the mouse capture when the [SetCapture](#setcapture) member function is called. This window receives mouse input whether or not the cursor is within its borders.

## <a name="getcaretpos"></a> CWnd::GetCaretPos

Retrieves the client coordinates of the caret's current position and returns them as a `CPoint`.

```
static CPoint PASCAL GetCaretPos();
```

### Return Value

[CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object containing the coordinates of the caret's position.

### Remarks

The caret position is given in the client coordinates of the `CWnd` window.

## <a name="getcheckedradiobutton"></a> CWnd::GetCheckedRadioButton

Retrieves the ID of the currently checked radio button in the specified group.

```
int GetCheckedRadioButton(
    int nIDFirstButton,
    int nIDLastButton);
```

### Parameters

*nIDFirstButton*<br/>
Specifies the integer identifier of the first radio button in the group.

*nIDLastButton*<br/>
Specifies the integer identifier of the last radio button in the group.

### Return Value

ID of the checked radio button, or 0 if none is selected.

## <a name="getclientrect"></a> CWnd::GetClientRect

Copies the client coordinates of the `CWnd` client area into the structure pointed to by *lpRect*.

```cpp
void GetClientRect(LPRECT lpRect) const;
```

### Parameters

*lpRect*<br/>
Points to a [RECT structure](/windows/win32/api/windef/ns-windef-rect) or a `CRect` object to receive the client coordinates. The `left` and `top` members will be 0. The `right` and `bottom` members will contain the width and height of the window.

### Remarks

The client coordinates specify the upper-left and lower-right corners of the client area. Since client coordinates are relative to the upper-left corners of the `CWnd` client area, the coordinates of the upper-left corner are (0,0).

### Example

  See the example for [CWnd::IsIconic](#isiconic).

## <a name="getclipboardowner"></a> CWnd::GetClipboardOwner

Retrieves the current owner of the Clipboard.

```
static CWnd* PASCAL GetClipboardOwner();
```

### Return Value

Identifies the window that owns the Clipboard if the function is successful. Otherwise, it is NULL.

The returned pointer may be temporary and should not be stored for later use.

### Remarks

The Clipboard can still contain data even if it is not currently owned.

## <a name="getclipboardviewer"></a> CWnd::GetClipboardViewer

Retrieves the first window in the Clipboard-viewer chain.

```
static CWnd* PASCAL GetClipboardViewer();
```

### Return Value

Identifies the window currently responsible for displaying the Clipboard if successful; otherwise NULL (for example, if there is no viewer).

The returned pointer may be temporary and should not be stored for later use.

## <a name="getcontrolunknown"></a> CWnd::GetControlUnknown

Call this member function to retrieve a pointer to an unknown OLE control.

```
LPUNKNOWN GetControlUnknown();
```

### Return Value

A pointer to the [IUnknown](/windows/win32/api/unknwn/nn-unknwn-iunknown) interface of the OLE control represented by this `CWnd` object. If this object does not represent an OLE control, the return value is NULL.

### Remarks

You should not release this `IUnknown` pointer. Typically, you would use to obtain a specific interface of the control.

The interface pointer returned by `GetControlUnknown` is not reference-counted. Do not call [IUnknown::Release](/windows/win32/api/unknwn/nf-unknwn-iunknown-release) on the pointer unless you have previously called [IUnknown::AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref) on it.

### Example

[!code-cpp[NVC_MFCWindowing#96](../../mfc/reference/codesnippet/cpp/cwnd-class_35.cpp)]

## <a name="getcurrentmessage"></a> CWnd::GetCurrentMessage

Returns a pointer to the message this window is currently processing. Should only be called when in an **On**<em>Message</em> message-handler member function.

```
static const MSG* PASCAL GetCurrentMessage();
```

### Return Value

Returns a pointer to the [MSG](/windows/win32/api/winuser/ns-winuser-msg) structure that contains the message the window is currently processing. Should only be called when in an **On**<em>Message</em> handler.

### Example

  See the example for [CMDIFrameWnd::MDICascade](../../mfc/reference/cmdiframewnd-class.md#mdicascade).

## <a name="getdc"></a> CWnd::GetDC

Retrieves a pointer to a common, class, or private device context for the client area depending on the class style specified for the `CWnd`.

```
CDC* GetDC();
```

### Return Value

Identifies the device context for the `CWnd` client area if successful; otherwise, the return value is NULL. The pointer may be temporary and should not be stored for later use.

### Remarks

For common device contexts, `GetDC` assigns default attributes to the context each time it is retrieved. For class and private contexts, `GetDC` leaves the previously assigned attributes unchanged. The device context can be used in subsequent graphics device interface (GDI) functions to draw in the client area.

Unless the device context belongs to a window class, the [ReleaseDC](#releasedc) member function must be called to release the context after painting.

A device context belonging to the `CWnd` class is returned by the `GetDC` member function if CS_CLASSDC, CS_OWNDC, or CS_PARENTDC was specified as a style in the `WNDCLASS` structure when the class was registered.

## <a name="getdcex"></a> CWnd::GetDCEx

Retrieves the handle of a device context for the `CWnd` window.

```
CDC* GetDCEx(
    CRgn* prgnClip,
    DWORD flags);
```

### Parameters

*prgnClip*<br/>
Identifies a clipping region that may be combined with the visible region of the client window.

*flags*<br/>
Can have one of the following preset values:

- DCX_CACHE Returns a device context from the cache rather than the OWNDC or CLASSDC window. Overrides CS_OWNDC and CS_CLASSDC.

- DCX_CLIPCHILDREN Excludes the visible regions of all child windows below the `CWnd` window.

- DCX_CLIPSIBLINGS Excludes the visible regions of all sibling windows above the `CWnd` window.

- DCX_EXCLUDERGN Excludes the clipping region identified by *prgnClip* from the visible region of the returned device context.

- DCX_INTERSECTRGN Intersects the clipping region identified by *prgnClip* within the visible region of the returned device context.

- DCX_LOCKWINDOWUPDATE Allows drawing even if there is a `LockWindowUpdate` call in effect that would otherwise exclude this window. This value is used for drawing during tracking.

- DCX_PARENTCLIP Uses the visible region of the parent window and ignores the parent window's WS_CLIPCHILDREN and WS_PARENTDC style bits. This value sets the device context's origin to the upper-left corner of the `CWnd` window.

- DCX_WINDOW Returns a device context that corresponds to the window rectangle rather than the client rectangle.

### Return Value

The device context for the specified window if the function is successful; otherwise NULL.

### Remarks

The device context can be used in subsequent GDI functions to draw in the client area.

This function, which is an extension to the [GetDC](/windows/win32/api/winuser/nf-winuser-getdc) function, gives an application more control over how and whether a device context for a window is clipped.

Unless the device context belongs to a window class, the [ReleaseDC](/windows/win32/api/winuser/nf-winuser-releasedc) function must be called to release the context after drawing. Since only five common device contexts are available at any given time, failure to release a device context can prevent other applications from gaining access to a device context.

To obtain a cached device context, an application must specify [DCX_CACHE](/windows/win32/api/winuser/nf-winuser-getdcex). If DCX_CACHE is not specified and the window is neither CS_OWNDC nor [CS_CLASSDC](/windows/win32/api/winuser/ns-winuser-wndclassw), this function returns NULL.

A device context with special characteristics is returned by the [GetDCEx](/windows/win32/api/winuser/nf-winuser-getdcex) function if the CS_CLASSDC, [CS_OWNDC](/windows/win32/api/winuser/ns-winuser-wndclassw), or [CS_PARENTDC](/windows/win32/api/winuser/ns-winuser-wndclassw) style was specified in the [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) structure when the class was registered.

For more information about these characteristics, see the description of the `WNDCLASS` structure in the Windows SDK.

## <a name="getdcrendertarget"></a> CWnd::GetDCRenderTarget

Retrieves the device context (DC) render target for the `CWnd` window.

```
CDCRenderTarget* GetDCRenderTarget();
```

### Return Value

The device context render target for the specified window if the function is successful; otherwise NULL.

### Remarks

## <a name="getdescendantwindow"></a> CWnd::GetDescendantWindow

Call this member function to find the descendant window specified by the given ID.

```
CWnd* GetDescendantWindow(
    int nID,
    BOOL bOnlyPerm = FALSE) const;
```

### Parameters

*nID*<br/>
Specifies the identifier of the control or child window to be retrieved.

*bOnlyPerm*<br/>
Specifies whether the window to be returned can be temporary. If TRUE, only a permanent window can be returned; if FALSE, the function can return a temporary window. For more information on temporary windows see [Technical Note 3](../../mfc/tn003-mapping-of-windows-handles-to-objects.md).

### Return Value

A pointer to a `CWnd` object, or NULL if no child window is found.

### Remarks

This member function searches the entire tree of child windows, not only the windows that are immediate children.

## <a name="getdesktopwindow"></a> CWnd::GetDesktopWindow

Returns the Windows desktop window.

```
static CWnd* PASCAL GetDesktopWindow();
```

### Return Value

Identifies the Windows desktop window. This pointer may be temporary and should not be stored for later use.

### Remarks

The desktop window covers the entire screen and is the area on top of which all icons and other windows are painted.

## <a name="getdlgctrlid"></a> CWnd::GetDlgCtrlID

Returns the window or control ID value for any child window, not only that of a control in a dialog box.

```
int GetDlgCtrlID() const;
```

### Return Value

The numeric identifier of the `CWnd` child window if the function is successful; otherwise 0.

### Remarks

Since top-level windows do not have an ID value, the return value of this function is invalid if the `CWnd` is a top-level window.

### Example

  See the example for [CWnd::OnCtlColor](#onctlcolor).

## <a name="getdlgitem"></a> CWnd::GetDlgItem

Retrieves a pointer to the specified control or child window in a dialog box or other window.

```
CWnd* GetDlgItem(int nID) const;

void GetDlgItem(
    int nID,
    HWND* phWnd) const;
```

### Parameters

*nID*<br/>
Specifies the identifier of the control or child window to be retrieved.

*phWnd*<br/>
A pointer to a child window.

### Return Value

A pointer to the given control or child window. If no control with the integer ID given by the *nID* parameter exists, the value is NULL.

The returned pointer may be temporary and should not be stored for later use.

### Remarks

The pointer returned is usually cast to the type of control identified by *nID*.

### Example

[!code-cpp[NVC_MFCWindowing#97](../../mfc/reference/codesnippet/cpp/cwnd-class_36.cpp)]

## <a name="getdlgitemint"></a> CWnd::GetDlgItemInt

Retrieves the text of the control identified by *nID*.

```
UINT GetDlgItemInt(
    int nID,
    BOOL* lpTrans = NULL,
    BOOL bSigned = TRUE) const;
```

### Parameters

*nID*<br/>
Specifies the integer identifier of the dialog-box control to be translated.

*lpTrans*<br/>
Points to the Boolean variable that is to receive the translated flag.

*bSigned*<br/>
Specifies whether the value to be retrieved is signed.

### Return Value

Specifies the translated value of the dialog-box item text. Since 0 is a valid return value, *lpTrans* must be used to detect errors. If a signed return value is desired, cast it as an **`int`** type.

The function returns 0 if the translated number is greater than INT_MAX (for signed numbers) or UINT_MAX (for unsigned).

When errors occur, such as encountering nonnumeric characters and exceeding the above maximum, `GetDlgItemInt` copies 0 to the location pointed to by *lpTrans*. If there are no errors, *lpTrans* receives a nonzero value. If *lpTrans* is NULL, `GetDlgItemInt` does not warn about errors.

### Remarks

It translates the text of the specified control in the given dialog box into an integer value by stripping any extra spaces at the beginning of the text and converting decimal digits. It stops the translation when it reaches the end of the text or encounters any nonnumeric character.

If *bSigned* is TRUE, `GetDlgItemInt` checks for a minus sign (-) at the beginning of the text and translates the text into a signed number. Otherwise, it creates an unsigned value.

It sends a [WM_GETTEXT](/windows/win32/winmsg/wm-gettext) message to the control.

## <a name="getdlgitemtext"></a> CWnd::GetDlgItemText

Call this member function to retrieve the title or text associated with a control in a dialog box.

```
int GetDlgItemText(
    int nID,
    LPTSTR lpStr,
    int nMaxCount) const;

int GetDlgItemText(
    int nID,
    CString& rString) const;
```

### Parameters

*nID*<br/>
Specifies the integer identifier of the control whose title is to be retrieved.

*lpStr*<br/>
Points to the buffer to receive the control's title or text.

*nMaxCount*<br/>
Specifies the maximum length (in characters) of the string to be copied to *lpStr*. If the string is longer than *nMaxCount*, it is truncated.

*rString*<br/>
A reference to a [CString](../../atl-mfc-shared/reference/cstringt-class.md).

### Return Value

Specifies the actual number of characters copied to the buffer, not including the terminating null character. The value is 0 if no text is copied.

### Remarks

The `GetDlgItemText` member function copies the text to the location pointed to by *lpStr* and returns a count of the number of bytes it copies.

## <a name="getdsccursor"></a> CWnd::GetDSCCursor

Call this member function to retrieve a pointer to the underlying cursor that is defined by the DataSource, UserName, Password, and SQL properties of the data-source control.

```
IUnknown* GetDSCCursor();
```

### Return Value

A pointer to a cursor that is defined by a data-source control. MFC takes care of calling `AddRef` for the pointer.

### Remarks

Use the returned pointer to set the ICursor property of a complex data-bound control, such as the data-bound grid control. A data-source control will not become active until the first bound control requests its cursor. This can happen either explicitly by a call to `GetDSCCursor` or implicitly by the MFC binding manager. In either case, you can force a data-source control to become active by calling `GetDSCCursor` and then calling `Release` on the returned pointer to `IUnknown`. Activation will cause the data-source control to attempt to connect to the underlying data source. The returned pointer might be used in the following context:

### Example

[!code-cpp[NVC_MFC_AxDataBinding#5](../../mfc/reference/codesnippet/cpp/cwnd-class_37.cpp)]

## <a name="getdynamiclayout"></a> CWnd::GetDynamicLayout

Retrieves a pointer to the dynamic layout manager object.

```
CMFCDynamicLayout* GetDynamicLayout();
```

### Return Value

A pointer to the dynamic layout manager object, or NULL if dynamic layout is not enabled.

### Remarks

The window object owns and manages the lifetime of the returned pointer, so it should only be used to access the object; do not delete the pointer or store the pointer permanently.

## <a name="getexstyle"></a> CWnd::GetExStyle

Returns the window's extended style.

```
DWORD GetExStyle() const;
```

### Return Value

The window's extended style. For more information about the extended window styles used in MFC, see [Extended Window Styles](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles).

## <a name="getfocus"></a> CWnd::GetFocus

Retrieves a pointer to the `CWnd` that currently has the input focus.

```
static CWnd* PASCAL GetFocus();
```

### Return Value

A pointer to the window that has the current focus, or NULL if there is no focus window.

The pointer may be temporary and should not be stored for later use.

## <a name="getfont"></a> CWnd::GetFont

Sends the WM_GETFONT message to the window to retrieve the current font.

```
CFont* GetFont() const;
```

### Return Value

Pointer to a [CFont](../../mfc/reference/cfont-class.md) object that is attached to the current font for the window.

### Remarks

This method has no effect unless the window processes the WM_GETFONT message. Many MFC classes that derive from `CWnd` process this message because they are attached to a predefined window class that includes a message handler for the WM_GETFONT message. To use this method, classes that you derive from `CWnd` must define a method handler for the WM_GETFONT message.

## <a name="getforegroundwindow"></a> CWnd::GetForegroundWindow

Returns a pointer to the foreground window (the window with which the user is currently working).

```
static CWnd* PASCAL GetForegroundWindow();
```

### Return Value

A pointer to the foreground window. This may be a temporary `CWnd` object.

### Remarks

The foreground window applies only to top-level windows (frame windows or dialog boxes).

## <a name="geticon"></a> CWnd::GetIcon

Call this member function to get the handle to either a big (32x32) or the handle to a small (16x16) icon, as indicated by *bBigIcon*.

```
HICON GetIcon(BOOL bBigIcon) const;
```

### Parameters

*bBigIcon*<br/>
Specifies a 32 pixel by 32 pixel icon if TRUE; specifies a 16 pixel by 16 pixel icon if FALSE.

### Return Value

A handle to an icon. If unsuccessful, returns NULL.

## <a name="getlastactivepopup"></a> CWnd::GetLastActivePopup

Determines which pop-up window owned by `CWnd` was most recently active.

```
CWnd* GetLastActivePopup() const;
```

### Return Value

Identifies the most recently active pop-up window. The return value will be the window itself if any of the following conditions are met:

- The window itself was most recently active.

- The window does not own any pop-up windows.

- The window is not a top-level window or is owned by another window.

The pointer may be temporary and should not be stored for later use.

### Example

  See the example for [CWnd::FindWindow](#findwindow).

## <a name="getlayeredwindowattributes"></a> CWnd::GetLayeredWindowAttributes

Retrieves the opacity and transparency color key of a layered window.

```
BOOL GetLayeredWindowAttributes(
    COLORREF* pcrKey,
    BYTE* pbAlpha,
    DWORD* pdwFlags) const;
```

### Parameters

*pcrKey*<br/>
Pointer to a COLORREF value that receives the transparency color key to be used when composing the layered window. All pixels painted by the window in this color will be transparent. This can be NULL if the argument is not needed.

*pbAlpha*<br/>
Pointer to a BYTE that receives the Alpha value used to describe the opacity of the layered window. When the variable referred to by *pbAlpha* is 0, the window is completely transparent. When the variable referred to by *pbAlpha* is 255, the window is opaque. This can be NULL if the argument is not needed.

*pdwFlags*<br/>
Pointer to a DWORD that receives a layering flag. This can be NULL if the argument is not needed. For a complete list of possible values, see [GetLayeredWindowAttributes](/windows/win32/api/winuser/nf-winuser-getlayeredwindowattributes).

### Return Value

Nonzero if the function succeeds; otherwise 0.

### Remarks

This member function emulates the functionality of the function [GetLayeredWindowAttributes](/windows/win32/api/winuser/nf-winuser-getlayeredwindowattributes), as described in the Windows SDK.

## <a name="getmenu"></a> CWnd::GetMenu

Retrieves a pointer to the menu for this window.

```
CMenu* GetMenu() const;
```

### Return Value

Identifies the menu. The value is NULL if `CWnd` has no menu. The return value is undefined if `CWnd` is a child window.

The returned pointer may be temporary and should not be stored for later use.

### Remarks

This function should not be used for child windows because they do not have a menu.

### Example

[!code-cpp[NVC_MFCWindowing#98](../../mfc/reference/codesnippet/cpp/cwnd-class_38.cpp)]

## <a name="getmenubarinfo"></a> CWnd::GetMenuBarInfo

Retrieves information about the specified menu bar.

```
BOOL GetMenuBarInfo(
    LONG idObject,
    LONG idItem,
    PMENUBARINFO pmbi) const;
```

### Parameters

*idObject*<br/>
Specifies the menu object. For a list of possible values, see [GetMenuBarInfo](/windows/win32/api/winuser/nf-winuser-getmenubarinfo).

*idItem*<br/>
Specifies the item for which to retrieve information. If this parameter is zero, the function retrieves information about the menu itself. If this parameter is 1, the function retrieves information about the first item on the menu, and so on.

*pmbi*<br/>
Pointer to a [MENUBARINFO](/windows/win32/api/winuser/ns-winuser-menubarinfo) structure that receives the information.

### Return Value

Nonzero if the function succeeds; otherwise 0.

### Remarks

This member function emulates the functionality of the function [GetMenuBarInfo](/windows/win32/api/winuser/nf-winuser-getmenubarinfo), as described in the Windows SDK.

## <a name="getnextdlggroupitem"></a> CWnd::GetNextDlgGroupItem

Searches for the previous or next control within a group of controls in a dialog box.

```
CWnd* GetNextDlgGroupItem(
    CWnd* pWndCtl,
    BOOL bPrevious = FALSE) const;

COleControlSiteOrWnd* GetNextDlgGroupItem(
    COleControlSiteOrWnd* pCurSiteOrWnd = NULL) const;
```

### Parameters

*pWndCtl*<br/>
Identifies the control to be used as the starting point for the search.

*bPrevious*<br/>
Specifies how the function is to search the group of controls in the dialog box. If TRUE, the function searches for the previous control in the group; if FALSE, it searches for the next control in the group.

*pCurSiteOrWnd*<br/>
Identifies the `COleControlSiteOrWnd` control. For more information about `COleControlSiteOrWnd`, see **Remarks**.

### Return Value

Pointer to the previous or next control in the group if the member function is successful.

The returned pointer may be temporary and should not be stored for later use.

### Remarks

A group of controls begins with a control that was created with the [WS_GROUP](styles-used-by-mfc.md#window-styles) style and ends with the last control that was not created with the WS_GROUP style.

By default, the `GetNextDlgGroupItem` member function returns a pointer to the next control in the group. If *pWndCtl* identifies the first control in the group and *bPrevious* is TRUE, `GetNextDlgGroupItem` returns a pointer to the last control in the group.

> [!NOTE]
> Because MFC supports windowless ActiveX controls, standard ActiveX controls, and windows, referring to a control by only an HWND no longer suffices. The `COleControlSiteOrWnd` object includes information that identifies the object as a windowed ActiveX control, a windowless ActiveX control, or a window, as follows:

|Control or window type|Identifying information|
|----------------------------|-----------------------------|
|Windowed ActiveX control|Contains an HWND and associates a [COleControlSite](../../mfc/reference/colecontrolsite-class.md) object with it. The `m_hWnd` member of `COleControlSiteOrWnd` is set to the HWND of the control, and the `m_pSite` member points to the control's `COleControlSite`.|
|Windowless ActiveX control|Contains no HWND. The `m_pSite` member of `COleControlSiteOrWnd` points to the control's `COleControlSite`, and the `m_hWnd` member is NULL.|
|Standard window|Contains just an HWND. The `m_hWnd` member of `COleControlSiteOrWnd` is set to the HWND of the window, and the `m_pSite` member is NULL.|

## <a name="getnextdlgtabitem"></a> CWnd::GetNextDlgTabItem

Retrieves a pointer to the first control that was created with the [WS_TABSTOP](styles-used-by-mfc.md#window-styles) style and that precedes or follows the specified control.

```
CWnd* GetNextDlgTabItem(
    CWnd* pWndCtl,
    BOOL bPrevious = FALSE) const;

COleControlSiteOrWnd* GetNextDlgTabItem(
    COleControlSiteOrWnd* pCurSiteOrWnd,
    BOOL bPrevious) const;
```

### Parameters

*pWndCtl*<br/>
Identifies the control to be used as the starting point for the search.

*pCurSiteOrWnd*<br/>
Identifies the `COleControlSiteOrWnd` control. For more information about `COleControlSiteOrWnd`, see [CWnd::GetNextDlgGroupItem](#getnextdlggroupitem).

*bPrevious*<br/>
Specifies how the function is to search the dialog box. If TRUE, the function searches for the previous control in the dialog box; if FALSE, it searches for the next control.

### Return Value

Pointer to the previous or next control that has the WS_TABSTOP style, if the member function is successful.

The returned pointer may be temporary and should not be stored for later use.

For more information about `COleControlSiteOrWnd`, see [CWnd::GetNextDlgGroupItem](#getnextdlggroupitem).

## <a name="getnextwindow"></a> CWnd::GetNextWindow

Searches for the next (or previous) window in the window manager's list.

```
CWnd* GetNextWindow(UINT nFlag = GW_HWNDNEXT) const;
```

### Parameters

*nFlag*<br/>
Specifies whether the function returns a pointer to the next window or the previous window. It can be either GW_HWNDNEXT, which returns the window that follows the `CWnd` object on the window manager's list, or GW_HWNDPREV, which returns the previous window on the window manager's list.

### Return Value

Identifies the next (or the previous) window in the window manager's list if the member function is successful.

The returned pointer may be temporary and should not be stored for later use.

### Remarks

The window manager's list contains entries for all top-level windows, their associated child windows, and the child windows of any child windows.

If `CWnd` is a top-level window, the function searches for the next (or previous) top-level window; if `CWnd` is a child window, the function searches for the next (or previous) child window.

## <a name="getolecontrolsite"></a> CWnd::GetOleControlSite

Retrieves the custom site for the specified ActiveX control.

```
COleControlSite* GetOleControlSite(UINT idControl) const;
```

### Parameters

*idControl*<br/>
The ID of the ActiveX control.

## <a name="getopenclipboardwindow"></a> CWnd::GetOpenClipboardWindow

Retrieves the handle of the window that currently has the Clipboard open.

```
static CWnd* PASCAL GetOpenClipboardWindow();
```

### Return Value

The handle of the window that currently has the Clipboard open if the function is successful; otherwise NULL.

## <a name="getowner"></a> CWnd::GetOwner

Retrieves a pointer to the owner of the window.

```
CWnd* GetOwner() const;
```

### Return Value

A pointer to a `CWnd` object.

### Remarks

If the window has no owner, then a pointer to the parent window object is returned by default. Note that the relationship between the owner and the owned differs from the parent-child aspect in several important aspects. For example, a window with a parent is confined to its parent window's client area. Owned windows can be drawn at any location on the desktop.

The ownership concept of this function is different from the ownership concept of [GetWindow](/windows/win32/api/winuser/nf-winuser-getwindow).

## <a name="getparent"></a> CWnd::GetParent

Call this function to get a pointer to a child window's parent window (if any).

```
CWnd* GetParent() const;
```

### Return Value

See the Return Values section in [GetParent](/windows/win32/api/winuser/nf-winuser-getparent) in the Windows SDK.

### Remarks

The `GetParent` function returns a pointer to the immediate parent (if it exists). In contrast, the [GetParentOwner](#getparentowner) function returns a pointer to the most immediate parent or owner window that is not a child window (does not have the WS_CHILD style). If you have a child window within a child window `GetParent` and `GetParentOwner` return different results.

## <a name="getparentframe"></a> CWnd::GetParentFrame

Call this member function to retrieve the parent frame window.

```
CFrameWnd* GetParentFrame() const;
```

### Return Value

A pointer to a frame window if successful; otherwise NULL.

### Remarks

The member function searches up the parent chain until a [CFrameWnd](../../mfc/reference/cframewnd-class.md) (or derived class) object is found.

## <a name="getparentowner"></a> CWnd::GetParentOwner

Call this member function to get a pointer to a child window's parent window or owner window.

```
CWnd* GetParentOwner() const;
```

### Return Value

A pointer to a `CWnd` object. If a `CWnd` object is not attached to the handle, a temporary `CWnd` object is created and attached. The pointer may be temporary and should not be stored for later use.

### Remarks

`GetParentOwner` returns a pointer to the most immediate parent or owner window that is not a child window (does not have the WS_CHILD style). The current owner window can be set with [SetOwner](#setowner). By default, the parent of a window is its owner.

In contrast, the [GetParent](#getparent) function returns a pointer to the immediate parent, whether it is a child window or not. If you have a child window within a child window `GetParent` and `GetParentOwner` return different results.

## <a name="getproperty"></a> CWnd::GetProperty

Call this member function to get the ActiveX control property specified by *dwDispID*.

```cpp
void GetProperty(
    DISPID dwDispID,
    VARTYPE vtProp,
    void* pvProp)const;
```

### Parameters

*dwDispID*<br/>
Identifies the property to be retrieved.

*vtProp*<br/>
Specifies the type of the property to be retrieved. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*pvProp*<br/>
Address of the variable that will that will receive the property value. It must match the type specified by *vtProp*.

### Remarks

`GetProperty` returns the value through *pvProp*.

> [!NOTE]
> This function should be called only on a `CWnd` object that represents an ActiveX control.

For more information about using this member function with ActiveX Control Containers, see the article [ActiveX Control Containers: Programming ActiveX Controls in an ActiveX Control Container](../../mfc/programming-activex-controls-in-a-activex-control-container.md).

## <a name="getrendertarget"></a> CWnd::GetRenderTarget

Gets a render target that is associated with this window.

```
CHwndRenderTarget* GetRenderTarget();
```

### Return Value

Pointer to the render target or NULL.

## <a name="getsafehwnd"></a> CWnd::GetSafeHwnd

Returns `m_hWnd`, or NULL if the **`this`** pointer is NULL.

```
HWND GetSafeHwnd() const;
```

### Return Value

Returns the window handle for a window. Returns NULL if the `CWnd` is not attached to a window or if it is used with a NULL `CWnd` pointer.

### Example

  See the example for [CWnd::SubclassWindow](#subclasswindow).

## <a name="getsafeowner"></a> CWnd::GetSafeOwner

Call this member function to retrieve the owner window that should be used for dialog boxes or other modal windows.

```
static CWnd* GetSafeOwner(
    CWnd* pParent = NULL,
    HWND* pWndTop = NULL);
```

### Parameters

*pParent*<br/>
A pointer to a parent `CWnd` window. May be NULL.

*pWndTop*<br/>
A pointer to the window that is currently on top. May be NULL.

### Return Value

A pointer to the safe owner for the given window.

### Remarks

The safe owner is the first non-child parent window of *pParent*. If *pParent* is NULL, the thread's main window (retrieved via [AfxGetMainWnd](../../mfc/reference/application-information-and-management.md#afxgetmainwnd)) is used to find an owner.

> [!NOTE]
> The framework itself uses this function to determine the correct owner window for dialog boxes and property sheets where the owner is not specified.

## <a name="getscrollbarctrl"></a> CWnd::GetScrollBarCtrl

Call this member function to obtain a pointer to the specified sibling scroll bar or splitter window.

```
virtual CScrollBar* GetScrollBarCtrl(int nBar) const;
```

### Parameters

*nBar*<br/>
Specifies the type of scroll bar. The parameter can take one of the following values:

- SB_HORZ Retrieves the position of the horizontal scroll bar.

- SB_VERT Retrieves the position of the vertical scroll bar.

### Return Value

A sibling scroll-bar control, or NULL if none.

### Remarks

This member function does not operate on scroll bars created when the WS_HSCROLL or WS_VSCROLL bits are set during the creation of a window. The `CWnd` implementation of this function simply returns NULL. Derived classes, such as `CView`, implement the described functionality.

## <a name="getscrollbarinfo"></a> CWnd::GetScrollBarInfo

Retrieves information about the specified scroll bar.

```
BOOL GetScrollBarInfo(
    LONG idObject,
    PSCROLLBARINFO psbi) const;
```

### Parameters

*idObject*<br/>
Specifies the menu object. For a list of possible values, see [GetScrollBarInfo](/windows/win32/api/winuser/nf-winuser-getscrollbarinfo).

*psbi*<br/>
Pointer to a [SCROLLBARINFO](/windows/win32/api/winuser/ns-winuser-scrollbarinfo) structure that receives the information.

### Return Value

Nonzero if the function succeeds; otherwise 0.

### Remarks

This member function emulates the functionality of the function [GetScrollBarInfo](/windows/win32/api/winuser/nf-winuser-getscrollbarinfo), as described in the Windows SDK.

## <a name="getscrollinfo"></a> CWnd::GetScrollInfo

Call this member function to retrieve the information that the `SCROLLINFO` structure maintains about a scroll bar.

```
BOOL GetScrollInfo(
    int nBar,
    LPSCROLLINFO lpScrollInfo,
    UINT nMask = SIF_ALL);
```

### Parameters

*nBar*<br/>
Specifies whether the scroll bar is a control or part of a window's nonclient area. If it is part of the nonclient area, *nBar* also indicates whether the scroll bar is positioned horizontally, vertically, or both. It must be one of the following:

- SB_CTL Retrieves the parameters for a scroll bar control. The `m_hWnd` data member must be the handle of the scroll bar control.

- SB_HORZ Retrieves the parameters for the window's standard horizontal scroll bar.

- SB_VERT Retrieves the parameters for the window's standard vertical scroll bar.

*lpScrollInfo*<br/>
A pointer to a [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) structure. See the Windows SDK for more information about this structure.

*nMask*<br/>
Specifies the scroll bar parameters to retrieve. The default specifies a combination of SIF_PAGE, SIF_POS, SIF_TRACKPOS, and SIF_RANGE. See `SCROLLINFO` for more information on the *nMask* values.

### Return Value

If the message retrieved any values, the return is TRUE. Otherwise, it is FALSE.

### Remarks

`GetScrollInfo` enables applications to use 32-bit scroll positions.

The [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) structure contains information about a scroll bar, including the minimum and maximum scrolling positions, the page size, and the position of the scroll box (the thumb). See the `SCROLLINFO` structure topic in the Windows SDK for more information about changing the structure defaults.

The MFC Windows message handlers that indicate scroll-bar position, [CWnd::OnHScroll](#onhscroll) and [CWnd::OnVScroll](#onvscroll), provide only 16 bits of position data. `GetScrollInfo` and `SetScrollInfo` provide 32 bits of scroll-bar position data. Thus, an application can call `GetScrollInfo` while processing either `CWnd::OnHScroll` or `CWnd::OnVScroll` to obtain 32-bit scroll-bar position data.

## <a name="getscrolllimit"></a> CWnd::GetScrollLimit

Call this member function to retrieve the maximum scrolling position of the scroll bar.

```
int GetScrollLimit(int nBar);
```

### Parameters

*nBar*<br/>
Specifies the type of scroll bar. The parameter can take one of the following values:

- SB_HORZ Retrieves the scroll limit of the horizontal scroll bar.

- SB_VERT Retrieves the scroll limit of the vertical scroll bar.

### Return Value

Specifies the maximum position of a scroll bar if successful; otherwise 0.

## <a name="getscrollpos"></a> CWnd::GetScrollPos

Retrieves the current position of the scroll box of a scroll bar.

```
int GetScrollPos(int nBar) const;
```

### Parameters

*nBar*<br/>
Specifies the scroll bar to examine. The parameter can take one of the following values:

- SB_HORZ Retrieves the position of the horizontal scroll bar.

- SB_VERT Retrieves the position of the vertical scroll bar.

### Return Value

Specifies the current position of the scroll box in the scroll bar if successful; otherwise 0.

### Remarks

The current position is a relative value that depends on the current scrolling range. For example, if the scrolling range is 50 to 100 and the scroll box is in the middle of the bar, the current position is 75.

## <a name="getscrollrange"></a> CWnd::GetScrollRange

Copies the current minimum and maximum scroll-bar positions for the given scroll bar to the locations specified by *lpMinPos* and *lpMaxPos*.

```cpp
void GetScrollRange(
    int nBar,
    LPINT lpMinPos,
    LPINT lpMaxPos) const;
```

### Parameters

*nBar*<br/>
Specifies the scroll bar to examine. The parameter can take one of the following values:

- SB_HORZ Retrieves the position of the horizontal scroll bar.

- SB_VERT Retrieves the position of the vertical scroll bar.

*lpMinPos*<br/>
Points to the integer variable that is to receive the minimum position.

*lpMaxPos*<br/>
Points to the integer variable that is to receive the maximum position.

### Remarks

If `CWnd` does not have a scroll bar, then the `GetScrollRange` member function copies 0 to *lpMinPos* and *lpMaxPos*.

The default range for a standard scroll bar is 0 to 100. The default range for a scroll-bar control is empty (both values are 0).

## <a name="getstyle"></a> CWnd::GetStyle

Returns the current window style.

```
DWORD GetStyle() const;
```

### Return Value

The window's style. For more information about the window styles used in MFC, see [Window Styles](styles-used-by-mfc.md#window-styles).

## <a name="getsystemmenu"></a> CWnd::GetSystemMenu

Allows the application to access the Control menu for copying and modification.

```
CMenu* GetSystemMenu(BOOL bRevert) const;
```

### Parameters

*bRevert*<br/>
Specifies the action to be taken. If *bRevert* is FALSE, `GetSystemMenu` returns a handle to a copy of the Control menu currently in use. This copy is initially identical to the Control menu but can be modified. If *bRevert* is TRUE, `GetSystemMenu` resets the Control menu back to the default state. The previous, possibly modified, Control menu, if any, is destroyed. The return value is undefined in this case.

### Return Value

Identifies a copy of the Control menu if *bRevert* is FALSE. If *bRevert* is TRUE, the return value is undefined.

The returned pointer may be temporary and should not be stored for later use.

### Remarks

Any window that does not use `GetSystemMenu` to make its own copy of the Control menu receives the standard Control menu.

The pointer returned by the `GetSystemMenu` member function can be used with the [CMenu::AppendMenu](../../mfc/reference/cmenu-class.md#appendmenu), [CMenu::InsertMenu](../../mfc/reference/cmenu-class.md#insertmenu), or [CMenu::ModifyMenu](../../mfc/reference/cmenu-class.md#modifymenu) functions to change the Control menu.

The Control menu initially contains items identified with various ID values such as SC_CLOSE, SC_MOVE, and SC_SIZE. Items on the Control menu generate [WM_SYSCOMMAND](#onsyscommand) messages. All predefined Control-menu items have ID numbers greater than 0xF000. If an application adds items to the Control menu, it should use ID numbers less than F000.

Windows may automatically make items unavailable on the standard Control menu. `CWnd` can carry out its own selection or unavailability by responding to the [WM_INITMENU](#oninitmenu) messages, which are sent before any menu is displayed.

### Example

[!code-cpp[NVC_MFCWindowing#99](../../mfc/reference/codesnippet/cpp/cwnd-class_39.cpp)]

## <a name="gettitlebarinfo"></a> CWnd::GetTitleBarInfo

Retrieves information about the specified title bar.

```
BOOL GetTitleBarInfo(PTITLEBARINFO pti) const;
```

### Parameters

*pti*<br/>
Pointer to a [TITLEBARINFO](/windows/win32/api/winuser/ns-winuser-titlebarinfo) structure that receives the information.

### Remarks

This member function emulates the functionality of the function [GetTitleBarInfo](/windows/win32/api/winuser/nf-winuser-gettitlebarinfo), as described in the Windows SDK.

## <a name="gettoplevelframe"></a> CWnd::GetTopLevelFrame

Call this member function to retrieve the window's top level frame window, if any.

```
CFrameWnd* GetTopLevelFrame() const;
```

### Return Value

Identifies the top-level frame window of the window.

The returned pointer may be temporary and should not be stored for later use.

### Remarks

If `CWnd` has no attached window, or its top-level parent is not a [CFrameWnd](../../mfc/reference/cframewnd-class.md)-derived object, this function returns NULL.

## <a name="gettoplevelowner"></a> CWnd::GetTopLevelOwner

Call this member function to retrieve the top-level window.

```
CWnd* GetTopLevelOwner() const;
```

### Return Value

Identifies the top-level window. The returned pointer may be temporary and should not be stored for later use.

### Remarks

The top-level window is the window that is a child of the desktop. If `CWnd` has no attached window, this function returns NULL.

## <a name="gettoplevelparent"></a> CWnd::GetTopLevelParent

Call this member function to retrieve the window's top-level parent.

```
CWnd* GetTopLevelParent() const;
```

### Return Value

Identifies the top-level parent window of the window.

The returned pointer may be temporary and should not be stored for later use.

### Remarks

`GetTopLevelParent` is similar to [GetTopLevelFrame](#gettoplevelframe) and [GetTopLevelOwner](#gettoplevelowner); however, it ignores the value set as the current owner window.

## <a name="gettopwindow"></a> CWnd::GetTopWindow

Searches for the top-level child window that belongs to `CWnd`.

```
CWnd* GetTopWindow() const;
```

### Return Value

Identifies the top-level child window in a `CWnd` linked list of child windows. If no child windows exist, the value is NULL.

The returned pointer may be temporary and should not be stored for later use.

### Remarks

If `CWnd` has no children, this function returns NULL.

## <a name="getupdaterect"></a> CWnd::GetUpdateRect

Retrieves the coordinates of the smallest rectangle that completely encloses the update region.

```
BOOL GetUpdateRect(
    LPRECT lpRect,
    BOOL bErase = FALSE);
```

### Parameters

*lpRect*<br/>
Points to a `CRect` object or [RECT structure](/windows/win32/api/windef/ns-windef-rect) that is to receive the client coordinates of the update that encloses the update region.

Set this parameter to NULL to determine whether an update region exists within the `CWnd`. If *lpRect* is NULL, the `GetUpdateRect` member function returns nonzero if an update region exists and 0 if one does not. This provides a way to determine whether a WM_PAINT message resulted from an invalid area. Do not set this parameter to NULL in Windows version 3.0 and earlier.

*bErase*<br/>
Specifies whether the background in the update region is to be erased.

### Return Value

Specifies the status of the update region. The value is nonzero if the update region is not empty; otherwise 0.

If the *lpRect* parameter is set to NULL, the return value is nonzero if an update region exists; otherwise 0.

### Remarks

If `CWnd` was created with the CS_OWNDC style and the mapping mode is not MM_TEXT, the `GetUpdateRect` member function gives the rectangle in logical coordinates. Otherwise, `GetUpdateRect` gives the rectangle in client coordinates. If there is no update region, `GetUpdateRect` sets the rectangle to be empty (sets all coordinates to 0).

The *bErase* parameter specifies whether `GetUpdateRect` should erase the background of the update region. If *bErase* is TRUE and the update region is not empty, the background is erased. To erase the background, `GetUpdateRect` sends the [WM_ERASEBKGND](#onerasebkgnd) message.

The update rectangle retrieved by the [BeginPaint](#beginpaint) member function is identical to that retrieved by the `GetUpdateRect` member function.

The `BeginPaint` member function automatically validates the update region, so any call to `GetUpdateRect` made immediately after a call to `BeginPaint` retrieves an empty update region.

## <a name="getupdatergn"></a> CWnd::GetUpdateRgn

Retrieves the update region into a region identified by *pRgn*.

```
int GetUpdateRgn(
    CRgn* pRgn,
    BOOL bErase = FALSE);
```

### Parameters

*pRgn*<br/>
Identifies the update region.

*bErase*<br/>
Specifies whether the background will be erased and nonclient areas of child windows will be drawn. If the value is FALSE, no drawing is done.

### Return Value

Specifies a short-integer flag that indicates the type of resulting region. The value can take any one of the following:

- SIMPLEREGION The region has no overlapping borders.

- COMPLEXREGION The region has overlapping borders.

- NULLREGION The region is empty.

- ERROR No region was created.

### Remarks

The coordinates of this region are relative to the upper-left corner (client coordinates).

The [BeginPaint](#beginpaint) member function automatically validates the update region, so any call to `GetUpdateRgn` made immediately after a call to `BeginPaint` retrieves an empty update region.

## <a name="getwindow"></a> CWnd::GetWindow

Returns a pointer to the window requested, or NULL if none.

```
CWnd* GetWindow(UINT nCmd) const;
```

### Parameters

*nCmd*<br/>
Specifies the relationship between `CWnd` and the returned window. It can take one of the following values:

- GW_CHILD Identifies the `CWnd` first child window.

- GW_HWNDFIRST If `CWnd` is a child window, returns the first sibling window. Otherwise, it returns the first top-level window in the list.

- GW_HWNDLAST If `CWnd` is a child window, returns the last sibling window. Otherwise, it returns the last top-level window in the list.

- GW_HWNDNEXT Returns the next window on the window manager's list.

- GW_HWNDPREV Returns the previous window on the window manager's list.

- GW_OWNER Identifies the `CWnd` owner.

### Return Value

The returned pointer may be temporary and should not be stored for later use.

## <a name="getwindowcontexthelpid"></a> CWnd::GetWindowContextHelpId

Call this member function to retrieve the help context identifier, if any, associated with the window.

```
DWORD GetWindowContextHelpId() const;
```

### Return Value

The help context identifier. Returns 0 if the window has none.

## <a name="getwindowedchildcount"></a> CWnd::GetWindowedChildCount

Call this member function to retrieve the number of associated child windows.

```
long GetWindowedChildCount();
```

### Return Value

The number of child windows associated with the `CWnd` object.

## <a name="getwindowdc"></a> CWnd::GetWindowDC

Retrieves the display context for the entire window, including caption bar, menus, and scroll bars.

```
CDC* GetWindowDC();
```

### Return Value

Identifies the display context for the given window if the function is successful; otherwise NULL.

The returned pointer may be temporary and should not be stored for later use. [ReleaseDC](#releasedc) should be called once for each successful call to `GetWindowDC`.

### Remarks

A window display context permits painting anywhere in `CWnd`, since the origin of the context is the upper-left corner of `CWnd` instead of the client area.

Default attributes are assigned to the display context each time it retrieves the context. Previous attributes are lost.

`GetWindowDC` is intended to be used for special painting effects within the `CWnd` nonclient area. Painting in nonclient areas of any window is not recommended.

The [GetSystemMetrics](/windows/win32/api/winuser/nf-winuser-getsystemmetrics) Windows function can be used to retrieve the dimensions of various parts of the nonclient area, such as the caption bar, menu, and scroll bars.

After painting is complete, the [ReleaseDC](#releasedc) member function must be called to release the display context. Failure to release the display context will seriously affect painting requested by applications due to limitations on the number of device contexts that can be open at the same time.

## <a name="getwindowinfo"></a> CWnd::GetWindowInfo

Retrieves information about the window.

```
BOOL GetWindowInfo(PWINDOWINFO pwi) const;
```

### Parameters

*pwi*<br/>
A pointer to a [WINDOWINFO](/windows/win32/api/winuser/ns-winuser-windowinfo) structure.

### Remarks

This member function emulates the functionality of the function [GetWindowInfo](/windows/win32/api/winuser/nf-winuser-getwindowinfo), as described in the Windows SDK.

## <a name="getwindowlesschildcount"></a> CWnd::GetWindowlessChildCount

Retrieves the number of associated windowless child windows.

```
long GetWindowlessChildCount();
```

### Return Value

The number of windowless child windows associated with the `CWnd` object.

## <a name="getwindowplacement"></a> CWnd::GetWindowPlacement

Retrieves the show state and the normal (restored), minimized, and maximized positions of a window.

```
BOOL GetWindowPlacement(WINDOWPLACEMENT* lpwndpl) const;
```

### Parameters

*lpwndpl*<br/>
Points to the `WINDOWPLACEMENT` structure that receives the show state and position information.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

The `flags` member of the [WINDOWPLACEMENT](/windows/win32/api/winuser/ns-winuser-windowplacement) structure retrieved by this function is always 0. If `CWnd` is maximized, the `showCmd` member of `WINDOWPLACEMENT` is SW_SHOWMAXIMIZED. If the window is minimized, it is SW_SHOWMINIMIZED. It is SW_SHOWNORMAL otherwise.

## <a name="getwindowrect"></a> CWnd::GetWindowRect

Copies the dimensions of the bounding rectangle of the `CWnd` object to the structure pointed to by *lpRect*.

```cpp
void GetWindowRect(LPRECT lpRect) const;
```

### Parameters

*lpRect*<br/>
Points to a `CRect` object or a [RECT structure](/windows/win32/api/windef/ns-windef-rect) that will receive the screen coordinates of the upper-left and lower-right corners.

### Remarks

The dimensions are given in screen coordinates relative to the upper-left corner of the display screen. The dimensions of the caption, border, and scroll bars, if present, are included.

## <a name="getwindowrgn"></a> CWnd::GetWindowRgn

Call this member function to get the window region of a window.

```
int GetWindowRgn(HRGN hRgn)const;
```

### Parameters

*hRgn*<br/>
A handle to a window region.

### Return Value

The return value specifies the type of the region that the function obtains. It can be one of the following values:

- NULLREGION The region is empty.

- SIMPLEREGION The region is a single rectangle.

- COMPLEXREGION The region is more than one rectangle.

- ERROR An error occurred; the region is unaffected.

### Remarks

The window region determines the area within the window where the operating system permits drawing. The operating system does not display any portion of a window that lies outside of the window region.

The coordinates of a window's window region are relative to the upper-left corner of the window, not the client area of the window.

To set the window region of a window, call [CWnd::SetWindowRgn](#setwindowrgn).

## <a name="getwindowtext"></a> CWnd::GetWindowText

Copies the `CWnd` caption title (if it has one) into the buffer pointed to by *lpszStringBuf* or into the destination string *rString*.

```
int GetWindowText(
    LPTSTR lpszStringBuf,
    int nMaxCount) const;

void GetWindowText(
    CString& rString) const;
```

### Parameters

*lpszStringBuf*<br/>
Points to the buffer that is to receive the copied string of the window's title.

*nMaxCount*<br/>
Specifies the maximum number of characters to be copied to the buffer, including the terminating null character. If the string is longer than the number of characters specified in *nMaxCount*, it is truncated.

*rString*<br/>
A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object that is to receive the copied string of the window's title.

### Return Value

Specifies the length, in characters, of the copied string, not including the terminating null character. It is 0 if `CWnd` has no caption or if the caption is empty.

### Remarks

If the `CWnd` object is a control, the `GetWindowText` member function copies the text within the control instead of copying the caption.

This member function causes the [WM_GETTEXT](/windows/win32/winmsg/wm-gettext) message to be sent to the `CWnd` object.

### Example

  See the example for [CWnd::SetWindowText](#setwindowtext).

## <a name="getwindowtextlength"></a> CWnd::GetWindowTextLength

Returns the length of the `CWnd` object caption title.

```
int GetWindowTextLength() const;
```

### Return Value

Specifies the text length in characters, not including any null-termination character. The value is 0 if no such text exists.

### Remarks

If `CWnd` is a control, the `GetWindowTextLength` member function returns the length of the text within the control instead of the caption.

This member function causes the [WM_GETTEXTLENGTH](/windows/win32/winmsg/wm-gettextlength) message to be sent to the `CWnd` object.

### Example

  See the example for [CWnd::SetWindowText](#setwindowtext).

## <a name="hidecaret"></a> CWnd::HideCaret

Hides the caret by removing it from the display screen.

```cpp
void HideCaret();
```

### Remarks

Although the caret is no longer visible, it can be displayed again by using the [ShowCaret](#showcaret) member function. Hiding the caret does not destroy its current shape.

Hiding is cumulative. If `HideCaret` has been called five times in a row, the `ShowCaret` member function must be called five times before the caret will be shown.

## <a name="hilitemenuitem"></a> CWnd::HiliteMenuItem

Highlights or removes the highlight from a top-level (menu-bar) menu item.

```
BOOL HiliteMenuItem(
    CMenu* pMenu,
    UINT nIDHiliteItem,
    UINT nHilite);
```

### Parameters

*pMenu*<br/>
Identifies the top-level menu that contains the item to be highlighted.

*nIDHiliteItem*<br/>
Specifies the menu item to be highlighted, depending on the value of the *nHilite* parameter.

*nHilite*<br/>
Specifies whether the menu item is highlighted or the highlight is removed. It can be a combination of MF_HILITE or MF_UNHILITE with MF_BYCOMMAND or MF_BYPOSITION. The values can be combined using the bitwise OR operator. These values have the following meanings:

- MF_BYCOMMAND Interprets *nIDHiliteItem* as the menu-item ID (the default interpretation).

- MF_BYPOSITION Interprets *nIDHiliteItem* as the zero-based offset of the menu item.

- MF_HILITE Highlights the item. If this value is not given, the highlight is removed from the item.

- MF_UNHILITE Removes the highlight from the item.

### Return Value

Specifies whether the menu item was highlighted. Nonzero if the item was highlighted; otherwise 0.

### Remarks

The MF_HILITE and MF_UNHILITE flags can be used only with this member function; they cannot be used with the [CMenu::ModifyMenu](../../mfc/reference/cmenu-class.md#modifymenu) member function.

## <a name="htmlhelp"></a> CWnd::HtmlHelp

Call this member function to invoke the HTMLHelp application.

```
virtual void HtmlHelp(
    DWORD_PTR dwData,
    UINT nCmd = 0x000F);
```

### Parameters

*dwData*<br/>
Specifies additional data. The value used depends on the value of the *nCmd* parameter.

*nCmd*<br/>
Specifies the type of help requested. For a list of possible values and how they affect the *dwData* parameter, see the *uCommand* parameter described in the HTML Help API Reference in the Windows SDK.

### Remarks

See [CWinApp::HtmlHelp](../../mfc/reference/cwinapp-class.md#htmlhelp) for more information.

## <a name="initdynamiclayout"></a> CWnd::InitDynamicLayout

Called by the framework to initialize dynamic layout for a window.

```cpp
void InitDynamicLayout();
```

### Remarks

Do not call this method directly.

## <a name="invalidate"></a> CWnd::Invalidate

Invalidates the entire client area of `CWnd`.

```cpp
void Invalidate(BOOL bErase = TRUE);
```

### Parameters

*bErase*<br/>
Specifies whether the background within the update region is to be erased.

### Remarks

The client area is marked for painting when the next [WM_PAINT](#onpaint) message occurs. The region can also be validated before a WM_PAINT message occurs by the [ValidateRect](#validaterect) or [ValidateRgn](#validatergn) member function.

The *bErase* parameter specifies whether the background within the update area is to be erased when the update region is processed. If *bErase* is TRUE, the background is erased when the [BeginPaint](#beginpaint) member function is called; if *bErase* is FALSE, the background remains unchanged. If *bErase* is TRUE for any part of the update region, the background in the entire region, not just in the given part, is erased.

Windows sends a [WM_PAINT](#onpaint) message whenever the `CWnd` update region is not empty and there are no other messages in the application queue for that window.

### Example

  See the example for [CWnd::UpdateWindow](#updatewindow).

## <a name="invalidaterect"></a> CWnd::InvalidateRect

Invalidates the client area within the given rectangle by adding that rectangle to the `CWnd` update region.

```cpp
void InvalidateRect(
    LPCRECT lpRect,
    BOOL bErase = TRUE);
```

### Parameters

*lpRect*<br/>
Points to a `CRect` object or a [RECT structure](/windows/win32/api/windef/ns-windef-rect) that contains the rectangle (in client coordinates) to be added to the update region. If *lpRect* is NULL, the entire client area is added to the region.

*bErase*<br/>
Specifies whether the background within the update region is to be erased.

### Remarks

The invalidated rectangle, along with all other areas in the update region, is marked for painting when the next [WM_PAINT](#onpaint) message is sent. The invalidated areas accumulate in the update region until the region is processed when the next WM_PAINT call occurs, or until the region is validated by the [ValidateRect](#validaterect) or [ValidateRgn](#validatergn) member function.

The *bErase* parameter specifies whether the background within the update area is to be erased when the update region is processed. If *bErase* is TRUE, the background is erased when the [BeginPaint](#beginpaint) member function is called; if *bErase* is FALSE, the background remains unchanged. If *bErase* is TRUE for any part of the update region, the background in the entire region is erased, not just in the given part.

Windows sends a [WM_PAINT](#onpaint) message whenever the `CWnd` update region is not empty and there are no other messages in the application queue for that window.

## <a name="invalidatergn"></a> CWnd::InvalidateRgn

Invalidates the client area within the given region by adding it to the current update region of `CWnd`.

```cpp
void InvalidateRgn(
    CRgn* pRgn,
    BOOL bErase = TRUE);
```

### Parameters

*pRgn*<br/>
A pointer to a [CRgn](../../mfc/reference/crgn-class.md) object that identifies the region to be added to the update region. The region is assumed to have client coordinates. If this parameter is NULL, the entire client area is added to the update region.

*bErase*<br/>
Specifies whether the background within the update region is to be erased.

### Remarks

The invalidated region, along with all other areas in the update region, is marked for painting when the [WM_PAINT](#onpaint) message is next sent. The invalidated areas accumulate in the update region until the region is processed when a WM_PAINT message is next sent, or until the region is validated by the [ValidateRect](#validaterect) or [ValidateRgn](#validatergn) member function.

The *bErase* parameter specifies whether the background within the update area is to be erased when the update region is processed. If *bErase* is TRUE, the background is erased when the [BeginPaint](#beginpaint) member function is called; if *bErase* is FALSE, the background remains unchanged. If *bErase* is TRUE for any part of the update region, the background in the entire region, not just in the given part, is erased.

Windows sends a [WM_PAINT](#onpaint) message whenever the `CWnd` update region is not empty and there are no other messages in the application queue for that window.

The given region must have been previously created by one of the region functions.

## <a name="invokehelper"></a> CWnd::InvokeHelper

Call this member function to invoke the ActiveX Control method or property specified by *dwDispID*, in the context specified by *wFlags*.

```cpp
void AFX_CDECL InvokeHelper(
    DISPID dwDispID,
    WORD wFlags,
    VARTYPE vtRet,
    void* pvRet,
    const BYTE* pbParamInfo,
    ... );
```

### Parameters

*dwDispID*<br/>
Identifies the method or property to be invoked.

*wFlags*<br/>
Flags describing the context of the call to `IDispatch::Invoke`.

*vtRet*<br/>
Specifies the type of the return value. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*pvRet*<br/>
Address of the variable that will that will receive the property value or return value. It must match the type specified by *vtRet*.

*pbParamInfo*<br/>
Pointer to a null-terminated string of bytes specifying the types of the parameters following *pbParamInfo*. For possible values, see the Remarks section for `COleDispatchDriver::InvokeHelper`.

*...*<br/>
Variable List of parameters, of types specified in *pbParamInfo*.

### Remarks

The *pbParamInfo* parameter specifies the types of the parameters passed to the method or property. The variable list of arguments is represented by *...* in the syntax declaration.

This function converts the parameters to VARIANTARG values, then invokes the `IDispatch::Invoke` method on the ActiveX control. If the call to `IDispatch::Invoke` fails, this function will throw an exception. If the SCODE (status code) returned by `IDispatch::Invoke` is DISP_E_EXCEPTION, this function throws a [COleException](../../mfc/reference/coleexception-class.md) object, otherwise it throws a [COleDispatchException](../../mfc/reference/coledispatchexception-class.md).

> [!NOTE]
> This function should be called only on a `CWnd` object that represents an ActiveX control.

For more information about using this member function with ActiveX Control Containers, see the article [ActiveX Control Containers: Programming ActiveX Controls in an ActiveX Control Container](../../mfc/programming-activex-controls-in-a-activex-control-container.md).

## <a name="ischild"></a> CWnd::IsChild

Indicates whether the window specified by *pWnd* is a child window or other direct descendant of `CWnd`.

```
BOOL IsChild(const CWnd* pWnd) const;
```

### Parameters

*pWnd*<br/>
Identifies the window to be tested.

### Return Value

Specifies the outcome of the function. The value is nonzero if the window identified by *pWnd* is a child window of `CWnd`; otherwise 0.

### Remarks

A child window is the direct descendant of `CWnd` if the `CWnd` object is in the chain of parent windows that leads from the original pop-up window to the child window.

## <a name="isd2dsupportenabled"></a> CWnd::IsD2DSupportEnabled

Determines whether D2D support is enabled.

```
BOOL IsD2DSupportEnabled();
```

### Return Value

TRUE if the feature is enabled; otherwise FALSE.

## <a name="isdialogmessage"></a> CWnd::IsDialogMessage

Call this member function to determine whether the given message is intended for a modeless dialog box; if it is, this function processes the message.

```
BOOL IsDialogMessage(LPMSG lpMsg);
```

### Parameters

*lpMsg*<br/>
Points to an [MSG](/windows/win32/api/winuser/ns-winuser-msg) structure that contains the message to be checked.

### Return Value

Specifies whether the member function has processed the given message. It is nonzero if the message has been processed; otherwise 0. If the return is 0, call the [CWnd::PreTranslateMessage](#pretranslatemessage) member function of the base class to process the message. In an override of the `CWnd::PreTranslateMessage` member function the code looks like this :

[!code-cpp[NVC_MFCWindowing#100](../../mfc/reference/codesnippet/cpp/cwnd-class_40.cpp)]

### Remarks

When the `IsDialogMessage` function processes a message, it checks for keyboard messages and converts them to selection commands for the corresponding dialog box. For example, the TAB key selects the next control or group of controls, and the DOWN ARROW key selects the next control in a group.

You must not pass a message processed by `IsDialogMessage` to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) or [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions, because it has already been processed.

## <a name="isdlgbuttonchecked"></a> CWnd::IsDlgButtonChecked

Determines whether a button control has a check mark next to it.

```
UINT IsDlgButtonChecked(int nIDButton) const;
```

### Parameters

*nIDButton*<br/>
Specifies the integer identifier of the button control.

### Return Value

Nonzero if the given control is checked, and 0 if it is not checked. Only radio buttons and check boxes can be checked. For three-state buttons, the return value can be 2 if the button is indeterminate. This member function returns 0 for a pushbutton.

### Remarks

If the button is a three-state control, the member function determines whether it is dimmed, checked, or neither.

## <a name="isdynamiclayoutenabled"></a> CWnd::IsDynamicLayoutEnabled

Determines whether dynamic layout is enabled on this window. If dynamic layout is enabled, the position and size of child windows can change when the user resizes the parent window.

```
BOOL IsDynamicLayoutEnabled() const;
```

### Return Value

TRUE if dynamic layout is enabled; otherwise FALSE.

### Remarks

## <a name="isiconic"></a> CWnd::IsIconic

Specifies whether `CWnd` is minimized (iconic).

```
BOOL IsIconic() const;
```

### Return Value

Nonzero if `CWnd` is minimized; otherwise 0.

### Example

[!code-cpp[NVC_MFCWindowing#101](../../mfc/reference/codesnippet/cpp/cwnd-class_41.cpp)]

## <a name="istouchwindow"></a> CWnd::IsTouchWindow

Specifies whether `CWnd` has touch support.

```
BOOL IsTouchWindow() const;
```

### Return Value

TRUE if `CWnd` has touch support; otherwise FALSE.

### Remarks

## <a name="iswindowenabled"></a> CWnd::IsWindowEnabled

Specifies whether `CWnd` is enabled for mouse and keyboard input.

```
BOOL IsWindowEnabled() const;
```

### Return Value

Nonzero if `CWnd` is enabled; otherwise 0.

### Example

[!code-cpp[NVC_MFCWindowing#102](../../mfc/reference/codesnippet/cpp/cwnd-class_42.cpp)]

## <a name="iswindowvisible"></a> CWnd::IsWindowVisible

Determines the visibility state of the given window.

```
BOOL IsWindowVisible() const;
```

### Return Value

Nonzero if `CWnd` is visible (has the [WS_VISIBLE](styles-used-by-mfc.md#window-styles) style bit set, and parent window is visible). Because the return value reflects the state of the WS_VISIBLE style bit, the return value may be nonzero even though `CWnd` is totally obscured by other windows.

### Remarks

A window possesses a visibility state indicated by the WS_VISIBLE style bit. When this style bit is set with a call to the [ShowWindow](#showwindow) member function, the window is displayed and subsequent drawing to the window is displayed as long as the window has the style bit set.

Any drawing to a window that has the WS_VISIBLE style will not be displayed if the window is covered by other windows or is clipped by its parent window.

### Example

[!code-cpp[NVC_MFCWindowing#103](../../mfc/reference/codesnippet/cpp/cwnd-class_43.cpp)]

## <a name="iszoomed"></a> CWnd::IsZoomed

Determines whether `CWnd` has been maximized.

```
BOOL IsZoomed() const;
```

### Return Value

Nonzero if `CWnd` is maximized; otherwise 0.

## <a name="killtimer"></a> CWnd::KillTimer

Kills the timer event identified by *nIDEvent* from the earlier call to `SetTimer`.

```
BOOL KillTimer(UINT_PTR nIDEvent);
```

### Parameters

*nIDEvent*<br/>
The value of the timer event passed to [SetTimer](#settimer).

### Return Value

Specifies the outcome of the function. The value is nonzero if the event was killed. It is 0 if the `KillTimer` member function could not find the specified timer event.

### Remarks

Pending [WM_TIMER](#ontimer) messages associated with the timer are not removed from the message queue.

### Example

  See the example for [CWnd::SetTimer](#settimer).

## <a name="loaddynamiclayoutresource"></a> CWnd::LoadDynamicLayoutResource

Called by the framework to load dynamic layout information from the resource file.

```
BOOL LoadDynamicLayoutResource(LPCTSTR lpszResourceName);
```

### Parameters

*lpszResourceName*<br/>
The name of the resource that contains the desired dynamic layout information for this window.

### Return Value

Nonzero if the function is successful. It is 0 if a failure occurs.

### Remarks

Do not call this method directly.

## <a name="lockwindowupdate"></a> CWnd::LockWindowUpdate

Disables drawing in the given window.

```
BOOL LockWindowUpdate();
```

### Return Value

Nonzero if the function is successful. It is 0 if a failure occurs or if the `LockWindowUpdate` function has been used to lock another window.

### Remarks

A locked window cannot be moved. Only one window can be locked at a time. To unlock a window locked with `LockWindowUpdate`, call [UnlockWindowUpdate](#unlockwindowupdate).

If an application with a locked window (or any locked child windows) calls the [GetDC,](/windows/win32/api/winuser/nf-winuser-getdc) [GetDCEx,](/windows/win32/api/winuser/nf-winuser-getdcex) or [BeginPaint](/windows/win32/api/winuser/nf-winuser-beginpaint) Windows function, the called function returns a device context whose visible region is empty. This will occur until the application unlocks the window by calling the `UnlockWindowUpdate` member function.

While window updates are locked, the system keeps track of the bounding rectangle of any drawing operations to device contexts associated with a locked window. When drawing is reenabled, this bounding rectangle is invalidated in the locked window and its child windows to force an eventual [WM_PAINT](/windows/win32/gdi/wm-paint) message to update the screen. If no drawing has occurred while the window updates were locked, no area is invalidated.

The `LockWindowUpdate` member function does not make the given window invisible and does not clear the [WS_VISIBLE](styles-used-by-mfc.md#window-styles) style bit.

## <a name="m_hwnd"></a> CWnd::m_hWnd

The handle of the Windows window attached to this `CWnd`.

```
HWND m_hWnd;
```

### Remarks

The `m_hWnd` data member is a public variable of type HWND.

## <a name="mapwindowpoints"></a> CWnd::MapWindowPoints

Converts (maps) a set of points from the coordinate space of the `CWnd` to the coordinate space of another window.

```cpp
void MapWindowPoints(
    CWnd* pwndTo,
    LPRECT lpRect) const;

void MapWindowPoints(
    CWnd* pwndTo,
    LPPOINT lpPoint,
    UINT nCount) const;
```

### Parameters

*pwndTo*<br/>
Identifies the window to which points are converted. If this parameter is NULL, the points are converted to screen coordinates.

*lpRect*<br/>
Specifies the rectangle whose points are to be converted. The first version of this function is available only for Windows 3.1 and later.

*lpPoint*<br/>
A pointer to an array of [POINT structure](/windows/win32/api/windef/ns-windef-point) that contain the set of points to be converted.

*nCount*<br/>
Specifies the number of `POINT` structures in the array pointed to by *lpPoint*.

## <a name="messagebox"></a> CWnd::MessageBox

Creates and displays a window that contains an application-supplied message and caption, plus a combination of the predefined icons and pushbuttons described in the [Message-Box Styles](../../mfc/reference/styles-used-by-mfc.md#message-box-styles) list.

```
int MessageBox(
    LPCTSTR lpszText,
    LPCTSTR lpszCaption = NULL,
    UINT nType = MB_OK);
```

### Parameters

*lpszText*<br/>
Points to a `CString` object or null-terminated string containing the message to be displayed.

*lpszCaption*<br/>
Points to a `CString` object or null-terminated string to be used for the message-box caption. If *lpszCaption* is NULL, the default caption "Error" is used.

*nType*<br/>
Specifies the contents and behavior of the message box.

### Return Value

This method utilizes the [MessageBox](/windows/win32/api/winuser/nf-winuser-messagebox) function as defined in the Windows SDK. This method returns the result of calling this function.

### Remarks

Use the global function [AfxMessageBox](../../mfc/reference/cstring-formatting-and-message-box-display.md#afxmessagebox) instead of this member function to implement a message box in your application.

The following shows the various system icons that can be used in a message box:

|Icon|Macro|
|-|-|
|![Stop &#40;x&#41; icon](../../mfc/reference/media/vc364f1.gif "Stop &#40;x&#41; icon")|MB_ICONHAND, MB_ICONSTOP, and MB_ICONERROR|
|![Help &#40;?&#41; icon](../../mfc/reference/media/vc364f2.gif "Help &#40;?&#41; icon")|MB_ICONQUESTION|
|![Important &#40;&#33;&#41; icon](../../mfc/reference/media/vc364f3.gif "Important &#40;&#33;&#41; icon")|MB_ICONEXCLAMATION and MB_ICONWARNING|
|![Information &#40;i&#41; icon](../../mfc/reference/media/vc364f4.gif "Information &#40;i&#41; icon")|MB_ICONASTERISK and MB_ICONINFORMATION|

### Example

[!code-cpp[NVC_MFCWindowing#104](../../mfc/reference/codesnippet/cpp/cwnd-class_44.cpp)]

## <a name="modifystyle"></a> CWnd::ModifyStyle

Call this member function to modify a window's style.

```
BOOL ModifyStyle(
    DWORD dwRemove,
    DWORD dwAdd,
    UINT nFlags = 0);
```

### Parameters

*dwRemove*<br/>
Specifies window styles to be removed during style modification.

*dwAdd*<br/>
Specifies window styles to be added during style modification.

*nFlags*<br/>
Flags to be passed to [SetWindowPos](#setwindowpos), or zero if `SetWindowPos` should not be called. The default is zero. See the Remarks section for a list of preset flags.

### Return Value

Nonzero if style was successfully modified; otherwise, 0.

### Remarks

Styles to be added or removed can be combined by using the bitwise OR (&#124;) operator. See the topics [Window Styles](/windows/win32/winmsg/window-styles) and [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) in the Windows SDK for information about the available window styles.

If *nFlags* is nonzero, `ModifyStyle` calls the Windows API function [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) and redraws the window by combining *nFlags* with the following four preset flags:

- SWP_NOSIZE Retains the current size.

- SWP_NOMOVE Retains the current position.

- SWP_NOZORDER Retains the current Z order.

- SWP_NOACTIVATE Does not activate the window.

To modify a window's extended styles, see [ModifyStyleEx](#modifystyleex).

> [!NOTE]
> For some styles in certain controls (the ES_READONLY style in the edit control, for example), `ModifyStyle` may not properly change the style because the control may need to perform special internal processing. In these cases, a corresponding message to change the style will be available ( EM_SETREADONLY in the example mentioned).

### Example

[!code-cpp[NVC_MFCWindowing#105](../../mfc/reference/codesnippet/cpp/cwnd-class_45.cpp)]

## <a name="modifystyleex"></a> CWnd::ModifyStyleEx

Call this member function to modify a window's extended style.

```
BOOL ModifyStyleEx(
    DWORD dwRemove,
    DWORD dwAdd,
    UINT nFlags = 0);
```

### Parameters

*dwRemove*<br/>
Specifies extended styles to be removed during style modification.

*dwAdd*<br/>
Specifies extended styles to be added during style modification.

*nFlags*<br/>
Flags to be passed to [SetWindowPos](#setwindowpos), or zero if `SetWindowPos` should not be called. The default is zero. See the Remarks section for a list of preset flags.

### Return Value

Nonzero if style was successfully modified; otherwise, 0.

### Remarks

Styles to be added or removed can be combined by using the bitwise OR (&#124;) operator. See the topics [Extended Window Styles](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) in this book and [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw) in the Windows SDK for information about the available extended styles

If *nFlags* is nonzero, `ModifyStyleEx` calls the Windows API function [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) and redraws the window by combining *nFlags* with the following four preset flags:

- SWP_NOSIZE Retains the current size.

- SWP_NOMOVE Retains the current position.

- SWP_NOZORDER Retains the current Z order.

- SWP_NOACTIVATE Does not activate the window.

To modify windows using regular window styles, see [ModifyStyle](#modifystyle).

### Example

[!code-cpp[NVC_MFCWindowing#106](../../mfc/reference/codesnippet/cpp/cwnd-class_46.cpp)]

## <a name="movewindow"></a> CWnd::MoveWindow

Changes the position and dimensions.

```cpp
void MoveWindow(
    int x,
    int y,
    int nWidth,
    int nHeight,
    BOOL bRepaint = TRUE);

void MoveWindow(
    LPCRECT lpRect,
    BOOL bRepaint = TRUE);
```

### Parameters

*x*<br/>
Specifies the new position of the left side of the `CWnd`.

*y*<br/>
Specifies the new position of the top of the `CWnd`.

*nWidth*<br/>
Specifies the new width of the `CWnd`.

*nHeight*<br/>
Specifies the new height of the `CWnd`.

*bRepaint*<br/>
Specifies whether `CWnd` is to be repainted. If TRUE, `CWnd` receives a [WM_PAINT](/windows/win32/gdi/wm-paint) message in its [OnPaint](#onpaint) message handler as usual. If this parameter is FALSE, no repainting of any kind occurs. This applies to the client area, to the nonclient area (including the title and scroll bars), and to any part of the parent window uncovered as a result of `CWnd`'s move. When this parameter is FALSE, the application must explicitly invalidate or redraw any parts of `CWnd` and parent window that must be redrawn.

*lpRect*<br/>
The [CRect](../../atl-mfc-shared/reference/crect-class.md) object or [RECT structure](/windows/win32/api/windef/ns-windef-rect) that specifies the new size and position.

### Remarks

For a top-level `CWnd` object, the *x* and *y* parameters are relative to the upper-left corner of the screen. For a child `CWnd` object, they are relative to the upper-left corner of the parent window's client area.

The `MoveWindow` function sends the [WM_GETMINMAXINFO](#ongetminmaxinfo) message. Handling this message gives `CWnd` the opportunity to modify the default values for the largest and smallest possible windows. If the parameters to the `MoveWindow` member function exceed these values, the values can be replaced by the minimum or maximum values in the WM_GETMINMAXINFO handler.

### Example

  See the example for [CWnd::ClientToScreen](#clienttoscreen).

## <a name="notifywinevent"></a> CWnd::NotifyWinEvent

Signals the system that a predefined event occurred. If any client applications have registered a hook function for the event, the system calls the client's hook function.

```cpp
void NotifyWinEvent(
    DWORD event,
    LONG idObjectType,
    LONG idObject);
```

### Parameters

*event*<br/>
Specifies the event that occurred. This value must be one of the [event constants](/windows/win32/WinAuto/event-constants).

*idObjectType*<br/>
Identifies the kind of object that generated the event. This value is one of the predefined [object identifiers](/windows/win32/WinAuto/object-identifiers) or a custom object ID value.

*idObject*<br/>
Identifies whether the event was generated by an object or a child element of the object. If this value is CHILDID_SELF, the event was generated by the object itself. If not, this value is the child ID of the element that generated the event.

### Remarks

This member function emulates the functionality of the function [NotifyWinEvent](/windows/win32/api/winuser/nf-winuser-notifywinevent), as described in the Windows SDK.

## <a name="onactivate"></a> CWnd::OnActivate

The framework calls this member function when a `CWnd` object is being activated or deactivated.

```
afx_msg void OnActivate(
    UINT nState,
    CWnd* pWndOther,
    BOOL bMinimized);
```

### Parameters

*nState*<br/>
Specifies whether the `CWnd` is being activated or deactivated. It can be one of the following values:

- WA_INACTIVE The window is being deactivated.

- WA_ACTIVE The window is being activated through some method other than a mouse click (for example, by use of the keyboard interface to select the window).

- WA_CLICKACTIVE The window is being activated by a mouse click.

*pWndOther*<br/>
Pointer to the `CWnd` being activated or deactivated. The pointer can be NULL, and it may be temporary.

*bMinimized*<br/>
Specifies the minimized state of the `CWnd` being activated or deactivated. A value of TRUE indicates the window is minimized.

If TRUE, the `CWnd` is being activated; otherwise deactivated.

### Remarks

If the `CWnd` object is activated with a mouse click, it will also receive an [OnMouseActivate](#onmouseactivate) member function call.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onactivateapp"></a> CWnd::OnActivateApp

The framework calls this member function to all top-level windows of the task being activated and for all top-level windows of the task being deactivated.

```
afx_msg void OnActivateApp(
    BOOL bActive,
    DWORD dwThreadID);
```

### Parameters

*bActive*<br/>
Specifies whether the `CWnd` is being activated or deactivated. TRUE means the `CWnd` is being activated. FALSE means the `CWnd` is being deactivated.

*dwThreadID*<br/>
Specifies the value of the thread ID. If *bActive* is TRUE, *dwThreadID* identifies the thread that owns the `CWnd` being deactivated. If *bActive* is FALSE, *dwThreadID* identifies the thread that owns the `CWnd` being activated.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onambientproperty"></a> CWnd::OnAmbientProperty

The framework calls this member function to obtain ambient property values from a window that contains OLE controls.

```
virtual BOOL OnAmbientProperty(
    COleControlSite* pSite,
    DISPID dispid,
    VARIANT* pvar);
```

### Parameters

*pSite*<br/>
Pointer to the site of the control that requested the ambient property.

*dispid*<br/>
The dispatch ID of the requested ambient property.

*pvar*<br/>
Pointer to a caller-allocated `VARIANT` structure, through which the ambient property's value will be returned.

### Return Value

TRUE if the ambient property is supported; FALSE if not.

### Remarks

Override this function to alter the default ambient property values returned by an OLE control container to its controls. Any ambient property requests not handled by an overriding function should be forwarded to the base class implementation.

## <a name="onappcommand"></a> CWnd::OnAppCommand

The framework calls this member function when the user generates an application command event. Such an event occurs when the user clicks an application command button or types an application command key.

```
afx_msg void OnAppCommand(
    CWnd* pWnd,
    UINT nCmd,
    UINT nDevice,
    UINT nKey);
```

### Parameters

*pWnd*\
[in] Pointer to a `CWnd` object that represents the window where the user clicked the command button or pressed the command key. This window can be a child window of the window receiving the message.

*nCmd*\
[in] Indicates the application command. For a list of possible values, see the commands under the *cmd* section of the *lParam* parameter of [WM_APPCOMMAND](/windows/win32/inputdev/wm-appcommand).

*nDevice*\
[in] The input device that generated the input event. For a list of possible values, see the devices under the *uDevice* section of the *lParam* parameter of [WM_APPCOMMAND](/windows/win32/inputdev/wm-appcommand).

*nKey*\
[in] Indicates any virtual keys that are down, such as the CTRL key or the left mouse button. For a list of possible values, see the keys under the *dwKeys* section of the *lParam* parameter of [WM_APPCOMMAND](/windows/win32/inputdev/wm-appcommand). For more information, see the "Message Parameters" subheading in [About Mouse Input](/windows/win32/inputdev/about-mouse-input).

### Remarks

This method receives the [WM_APPCOMMAND](/windows/win32/inputdev/wm-appcommand) notification, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onaskcbformatname"></a> CWnd::OnAskCbFormatName

The framework calls this member function when the Clipboard contains a data handle for the CF_OWNERDISPLAY format (that is, when the Clipboard owner will display the Clipboard contents).

```
afx_msg void OnAskCbFormatName(
    UINT nMaxCount,
    LPTSTR lpszString);
```

### Parameters

*nMaxCount*<br/>
Specifies the maximum number of bytes to copy.

*lpszString*<br/>
Points to the buffer where the copy of the format name is to be stored.

### Remarks

The Clipboard owner should provide a name for its format.

Override this member function and copy the name of the CF_OWNERDISPLAY format into the specified buffer, not exceeding the maximum number of bytes specified.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oncancelmode"></a> CWnd::OnCancelMode

The framework calls this member function to inform `CWnd` to cancel any internal mode.

```
afx_msg void OnCancelMode();
```

### Remarks

If the `CWnd` object has the focus, its `OnCancelMode` member function is called when a dialog box or message box is displayed. This gives the `CWnd` the opportunity to cancel modes such as mouse capture.

The default implementation responds by calling the [ReleaseCapture](/windows/win32/api/winuser/nf-winuser-releasecapture) Windows function. Override this member function in your derived class to handle other modes.

## <a name="oncapturechanged"></a> CWnd::OnCaptureChanged

The framework calls this member function to notify the window that is losing the mouse capture.

```
afx_msg void OnCaptureChanged(CWnd* pWnd);
```

### Parameters

*pWnd*<br/>
A pointer to the window to gain mouse capture

### Remarks

A window receives this message even if it calls [ReleaseCapture](/windows/win32/api/winuser/nf-winuser-releasecapture) itself. An application should not attempt to set the mouse capture in response to this message. When it receives this message, a window should redraw itself, if necessary, to reflect the new mouse-capture state.

See the Windows SDK for information on the `ReleaseCapture` Windows function.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onchangecbchain"></a> CWnd::OnChangeCbChain

The framework calls this member function for each window in the Clipboard-viewer chain to notify it that a window is being removed from the chain.

```
afx_msg void OnChangeCbChain(
    HWND hWndRemove,
    HWND hWndAfter);
```

### Parameters

*hWndRemove*<br/>
Specifies the window handle that is being removed from the Clipboard-viewer chain.

*hWndAfter*<br/>
Specifies the window handle that follows the window being removed from the Clipboard-viewer chain.

### Remarks

Each `CWnd` object that receives an `OnChangeCbChain` call should use the [SendMessage](/windows/win32/api/winuser/nf-winuser-sendmessage) Windows function to send the [WM_CHANGECBCHAIN](/windows/win32/dataxchg/wm-changecbchain) message to the next window in the Clipboard-viewer chain (the handle returned by `SetClipboardViewer`). If *hWndRemove* is the next window in the chain, the window specified by *hWndAfter* becomes the next window, and Clipboard messages are passed on to it.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onchangeuistate"></a> CWnd::OnChangeUIState

Called when the user interface (UI) state should be changed.

```
afx_msg void OnChangeUIState(
    UINT nAction,
    UINT nUIElement);
```

### Parameters

*nAction*<br/>
Specifies the action to be taken. Can be one of the following values:

- UIS_CLEAR The UI state element (specified by *nUIElement*) should be hidden.

- UIS_INITIALIZE The UI state element (specified by *nUIElement*) should be changed based on the last input event. For more information, see the **Remarks** section of [WM_CHANGEUISTATE](/windows/win32/menurc/wm-changeuistate).

- UIS_SET The UI state element (specified by *nUIElement*) should be visible.

*nUIElement*<br/>
Specifies which UI state elements are affected or the style of the control. Can be one of the following values:

- UISF_HIDEACCEL Keyboard accelerators.

- UISF_HIDEFOCUS Focus indicators.

- UISF_ACTIVE Windows XP: A control should be drawn in the style used for active controls.

### Remarks

This member function emulates the functionality of the [WM_CHANGEUISTATE](/windows/win32/menurc/wm-changeuistate) message, as described in the Windows SDK.

## <a name="onchar"></a> CWnd::OnChar

The framework calls this member function when a keystroke translates to a nonsystem character.

```
afx_msg void OnChar(
    UINT nChar,
    UINT nRepCnt,
    UINT nFlags);
```

### Parameters

*nChar*<br/>
Contains the character code value of the key.

*nRepCnt*<br/>
Contains the repeat count, the number of times the keystroke is repeated when user holds down the key.

*nFlags*<br/>
Contains the scan code, key-transition code, previous key state, and context code, as shown in the following list:

|Value|Meaning|
|-----------|-------------|
|0-15|Specifies the repeat count. The value is the number of times the keystroke is repeated as a result of the user holding down the key.|
|16-23|Specifies the scan code. The value depends on the original equipment manufacturer (OEM)|
|24|Specifies whether the key is an extended key, such as the right-hand ALT and CTRL keys that appear on an enhanced 101- or 102-key keyboard. The value is 1 if it is an extended key; otherwise, it is 0.|
|25-28|Used internally by Windows.|
|29|Specifies the context code. The value is 1 if the ALT key is held down while the key is pressed; otherwise, the value is 0.|
|30|Specifies the previous key state. The value is 1 if the key is down before the message is sent, or it is 0 if the key is up.|
|31|Specifies the transition state. The value is 1 if the key is being released, or it is 0 if the key is being pressed.|

### Remarks

This function is called before the [OnKeyUp](#onkeyup) member function and after the [OnKeyDown](#onkeydown) member function are called. `OnChar` contains the value of the keyboard key being pressed or released.

Because there is not necessarily a one-to-one correspondence between keys pressed and `OnChar` calls generated, the information in *nFlags* is generally not useful to applications. The information in *nFlags* applies only to the most recent call to the `OnKeyUp` member function or the `OnKeyDown` member function that precedes the call to `OnChar`.

For IBM Enhanced 101- and 102-key keyboards, enhanced keys are the right ALT and the right CTRL keys on the main section of the keyboard; the INS, DEL, HOME, END, PAGE UP, PAGE DOWN, and arrow keys in the clusters to the left of the numeric keypad; and the slash (/) and ENTER keys in the numeric keypad. Some other keyboards may support the extended-key bit in *nFlags*.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onchartoitem"></a> CWnd::OnCharToItem

Called when a list box with the [LBS_WANTKEYBOARDINPUT](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style sends its owner a [WM_CHARTOITEM](/windows/win32/Controls/wm-chartoitem) message in response to a [WM_CHAR](#onchar) message.

```
afx_msg int OnCharToItem(
    UINT nChar,
    CListBox* pListBox,
    UINT nIndex);
```

### Parameters

*nChar*<br/>
Specifies the value of the key pressed by the user.

*pListBox*<br/>
Specifies a pointer to the list box. It may be temporary.

*nIndex*<br/>
Specifies the current caret position.

### Return Value

The framework calls this member function to specify the action that the application performed in response to the call. A return value of -2 indicates that the application handled all aspects of selecting the item and wants no further action by the list box. A return value of -1 indicates that the list box should perform the default action in response to the keystroke. A return value of 0 or greater specifies the zero-based index of an item in the list box and indicates that the list box should perform the default action for the keystroke on the given item.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onchildactivate"></a> CWnd::OnChildActivate

If the `CWnd` object is a multiple document interface (MDI) child window, `OnChildActivate` is called by the framework when the user clicks the window's title bar or when the window is activated, moved, or sized.

```
afx_msg void OnChildActivate();
```

## <a name="onchildnotify"></a> CWnd::OnChildNotify

This member function is called by this window's parent window when it receives a notification message that applies to this window.

```
virtual BOOL OnChildNotify(
    UINT message,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* pResult);
```

### Parameters

*message*<br/>
A Windows message number sent to a parent window.

*wParam*<br/>
The *wparam* associated with the message.

*lParam*<br/>
The *lparam* associated with the message.

*pLResult*<br/>
A pointer to a value to be returned from the parent's window procedure. This pointer will be NULL if no return value is expected.

### Return Value

Nonzero if this window is responsible for handling the message sent to its parent; otherwise 0.

### Remarks

Never call this member function directly.

The default implementation of this member function returns 0, which means that the parent should handle the message.

Override this member function to extend the manner in which a control responds to notification messages.

## <a name="onclipboardupdate"></a> CWnd::OnClipboardUpdate

The framework calls this member function when the contents of the clipboard have changed.

```
afx_msg void OnClipboardUpdate();
```

## <a name="onclose"></a> CWnd::OnClose

The framework calls this member function as a signal that the `CWnd` or an application is to terminate.

```
afx_msg void OnClose();
```

### Remarks

The default implementation calls `DestroyWindow`.

## <a name="oncolorizationcolorchanged"></a> CWnd::OnColorizationColorChanged

The framework calls this member when the rendering policy for the nonclient area has changed.

```
afx_msg void OnColorizationColorChanged(
    DWORD dwColorizationColor,
    BOOL bOpacity);
```

### Parameters

*dwColorizationColor*\
[in] Specifies the new colorization color. The color format is a hexadecimal number of the form 0xAARRGGBB, where each of the four components ranges from 0x00 through 0xFF. The AA component is the alpha value, RR is the color red, GG is green, and BB is blue.

*bOpacity*\
[in] TRUE if the new color is blended with opacity; FALSE if it is not.

### Remarks

This method receives the [WM_DWMNCRENDERINGCHANGED](/windows/win32/dwm/wm-dwmcolorizationcolorchanged) notification message, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oncommand"></a> CWnd::OnCommand

The framework calls this member function when the user selects an item from a menu, when a child control sends a notification message, or when an accelerator keystroke is translated.

```
virtual BOOL OnCommand(
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*wParam*<br/>
The low-order word of *wParam* identifies the command ID of the menu item, control, or accelerator. The high-order word of *wParam* specifies the notification message if the message is from a control. If the message is from an accelerator, the high-order word is 1. If the message is from a menu, the high-order word is 0.

*lParam*<br/>
Identifies the control that sends the message if the message is from a control. Otherwise, *lParam* is 0.

### Return Value

An application returns nonzero if it processes this message; otherwise 0.

### Remarks

`OnCommand` processes the message map for control notification and ON_COMMAND entries, and calls the appropriate member function.

Override this member function in your derived class to handle the [WM_COMMAND](/windows/win32/menurc/wm-command) message. An override will not process the message map unless the base class `OnCommand` is called.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oncompacting"></a> CWnd::OnCompacting

The framework calls this member function for all top-level windows when Windows detects that more than 12.5 percent of system time over a 30- to 60-second interval is being spent compacting memory.

```
afx_msg void OnCompacting(UINT nCpuTime);
```

### Parameters

*nCpuTime*<br/>
Specifies the ratio of CPU time currently spent by Windows compacting memory to CPU time spent performing other operations. For example, 8000h represents 50 percent of CPU time spent compacting memory.

### Remarks

This indicates that system memory is low.

When a `CWnd` object receives this call, it should free as much memory as possible, taking into account the current level of activity of the application and the total number of applications running in Windows. The application can call the Windows function to determine how many applications are running.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oncompareitem"></a> CWnd::OnCompareItem

The framework calls this member function to specify the relative position of a new item in a child sorted owner-draw combo or list box.

```
afx_msg int OnCompareItem(
    int nIDCtl,
    LPCOMPAREITEMSTRUCT lpCompareItemStruct);
```

### Parameters

*nIDCtl*<br/>
The identifier of the control that sent the WM_COMPAREITEM message.

*lpCompareItemStruct*<br/>
Contains a long pointer to a [COMPAREITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-compareitemstruct) data structure that contains the identifiers and application-supplied data for two items in the combo or list box.

### Return Value

Indicates the relative position of the two items. It may be any of the following values:

|Value|Meaning|
|-----------|-------------|
|-1|Item 1 sorts before item 2.|
|0|Item 1 and item 2 sort the same.|
|1|Item 1 sorts after item 2.|

### Remarks

If a combo or list box is created with the [CBS_SORT](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) or [LBS_SORT](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style, Windows sends the combo-box or list-box owner a WM_COMPAREITEM message whenever the application adds a new item.

Two items in the combo or list box are reformed in a `COMPAREITEMSTRUCT` structure pointed to by *lpCompareItemStruct*. `OnCompareItem` should return a value that indicates which of the items should appear before the other. Typically, Windows makes this call several times until it determines the exact position for the new item.

If the `hwndItem` member of the `COMPAREITEMSTRUCT` structure belongs to a [CListBox](../../mfc/reference/clistbox-class.md) or [CComboBox](../../mfc/reference/ccombobox-class.md) object, then the `CompareItem` virtual function of the appropriate class is called. Override `CComboBox::CompareItem` or `CListBox::CompareItem` in your derived `CListBox` or `CComboBox` class to do the item comparison.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oncompositionchanged"></a> CWnd::OnCompositionChanged

The framework calls this member function for all top-level windows when the Desktop Window Manager (DWM) composition is enabled or disabled.

```
afx_msg void OnCompositionChanged();
```

### Remarks

This method receives the [WM_DWMCOMPOSITIONCHANGED](/windows/win32/dwm/wm-dwmcompositionchanged) notification, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oncontextmenu"></a> CWnd::OnContextMenu

Called by the framework when the user has clicked the right mouse button (right clicked) in the window.

```
afx_msg void OnContextMenu(
    CWnd* pWnd,
    CPoint pos);
```

### Parameters

*pWnd*<br/>
Handle to the window in which the user right clicked the mouse. This can be a child window of the window receiving the message. For more information about processing this message, see the Remarks section.

*pos*<br/>
Position of the cursor, in screen coordinates, at the time of the mouse click.

### Remarks

You can process this message by displaying a context menu using the [TrackPopupMenu](../../mfc/reference/cmenu-class.md#trackpopupmenu).

If you do not display a context menu you should pass this message onto the [DefWindowProc](#defwindowproc) function. If your window is a child window, `DefWindowProc` sends the message to the parent. Otherwise, `DefWindowProc` displays a default context menu if the specified position is in the window's caption.

## <a name="oncopydata"></a> CWnd::OnCopyData

This member function is called by the framework to copy data from one application to another.

```
afx_msg BOOL OnCopyData(
    CWnd* pWnd,
    COPYDATASTRUCT* pCopyDataStruct);
```

### Parameters

*pWnd*<br/>
A pointer to a `CWnd` object that is sending the data.

*pCopyDataStruct*<br/>
A pointer to a [COPYDATASTRUCT](/windows/win32/api/winuser/ns-winuser-copydatastruct) structure that contains the data being sent.

### Return Value

Returns TRUE if the receiving application successfully accepts the data. Otherwise, returns FALSE.

### Remarks

The data being passed must not contain pointers or other references to objects not accessible to the application receiving the data.

While the data is being copied, it must not be changed by another thread of the sending process.

The receiving application should consider the data read-only. The structure pointed to by the parameter *pCopyDataStruct* is valid only during the transfer of data; however, the receiving application should not free the memory associated with the structure.

If the receiving application needs access to the data after this function returns, it must copy the data received to a local buffer.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oncreate"></a> CWnd::OnCreate

The framework calls this member function when an application requests that the Windows window be created by calling the [Create](#create) or [CreateEx](#createex) member function.

```
afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
```

### Parameters

*lpCreateStruct*<br/>
Points to a [CREATESTRUCT](/windows/win32/api/winuser/ns-winuser-createstructw) structure that contains information about the `CWnd` object being created.

### Return Value

`OnCreate` must return 0 to continue the creation of the `CWnd` object. If the application returns -1, the window will be destroyed.

### Remarks

The `CWnd` object receives this call after the window is created but before it becomes visible. `OnCreate` is called before the `Create` or `CreateEx` member function returns.

Override this member function to perform any needed initialization of a derived class.

The `CREATESTRUCT` structure contains copies of the parameters used to create the window.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onctlcolor"></a> CWnd::OnCtlColor

The framework calls this member function when a child control is about to be drawn.

```
afx_msg HBRUSH OnCtlColor(
    CDC* pDC,
    CWnd* pWnd,
    UINT nCtlColor);
```

### Parameters

*pDC*<br/>
Contains a pointer to the display context for the child window. May be temporary.

*pWnd*<br/>
Contains a pointer to the control asking for the color. May be temporary.

*nCtlColor*<br/>
Contains one of the following values, specifying the type of control:

- CTLCOLOR_BTN Button control

- CTLCOLOR_DLG Dialog box

- CTLCOLOR_EDIT Edit control

- CTLCOLOR_LISTBOX List-box control

- CTLCOLOR_MSGBOX Message box

- CTLCOLOR_SCROLLBAR Scroll-bar control

- CTLCOLOR_STATIC Static control

### Return Value

`OnCtlColor` must return a handle to the brush that is to be used for painting the control background.

### Remarks

Most controls send this message to their parent (usually a dialog box) to prepare the *pDC* for drawing the control using the correct colors.

To change the text color, call the `SetTextColor` member function with the desired red, green, and blue (RGB) values.

To change the background color of a single-line edit control, set the brush handle in both the CTLCOLOR_EDIT and CTLCOLOR_MSGBOX message codes, and call the [CDC::SetBkColor](../../mfc/reference/cdc-class.md#setbkcolor) function in response to the CTLCOLOR_EDIT code.

`OnCtlColor` will not be called for the list box of a drop-down combo box because the drop-down list box is actually a child of the combo box and not a child of the window. To change the color of the drop-down list box, create a `CComboBox` with an override of `OnCtlColor` that checks for CTLCOLOR_LISTBOX in the `nCtlColor` parameter. In this handler, the `SetBkColor` member function must be used to set the background color for the text.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function. To add the following method to your dialog class, use the Visual Studio properties pane to add a message handler for WM_CTLCOLOR. Alternatively, you can manually add an ON_WM_CTLCOLOR() entry to the message map.

### Example

[!code-cpp[NVC_MFCWindowing#107](../../mfc/reference/codesnippet/cpp/cwnd-class_47.cpp)]

## <a name="ondeadchar"></a> CWnd::OnDeadChar

The framework calls this member function when the [OnKeyUp](#onkeyup) member function and the [OnKeyDown](#onkeydown) member functions are called.

```
afx_msg void OnDeadChar(
    UINT nChar,
    UINT nRepCnt,
    UINT nFlags);
```

### Parameters

*nChar*<br/>
Specifies the dead-key character value.

*nRepCnt*<br/>
Specifies the repeat count.

*nFlags*<br/>
Specifies the scan code, key-transition code, previous key state, and context code, as shown in the following list:

|Value|Description|
|-----------|-----------------|
|0-7|Scan code (OEM-dependent value). Low byte of high-order word.|
|8|Extended key, such as a function key or a key on the numeric keypad (1 if it is an extended key; otherwise 0).|
|9-10|Not used.|
|11-12|Used internally by Windows.|
|13|Context code (1 if the ALT key is held down while the key is pressed; otherwise 0).|
|14|Previous key state (1 if the key is down before the call, 0 if the key is up).|
|15|Transition state (1 if the key is being released, 0 if the key is being pressed).|

### Remarks

This member function can be used to specify the character value of a dead key. A dead key is a key, such as the umlaut (double-dot) character, that is combined with other characters to form a composite character. For example, the umlaut-O character consists of the dead key, umlaut, and the O key.

An application typically uses `OnDeadChar` to give the user feedback about each key pressed. For example, an application can display the accent in the current character position without moving the caret.

Since there is not necessarily a one-to-one correspondence between keys pressed and `OnDeadChar` calls, the information in *nFlags* is generally not useful to applications. The information in *nFlags* applies only to the most recent call to the [OnKeyUp](#onkeyup) member function or the [OnKeyDown](#onkeydown) member function that precedes the `OnDeadChar` call.

For IBM Enhanced 101- and 102-key keyboards, enhanced keys are the right ALT and the right CTRL keys on the main section of the keyboard; the INS, DEL, HOME, END, PAGE UP, PAGE DOWN, and arrow keys in the clusters to the left of the numeric keypad; and the slash (/) and ENTER keys in the numeric keypad. Some other keyboards may support the extended-key bit in *nFlags*.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="ondeleteitem"></a> CWnd::OnDeleteItem

The framework calls this member function to inform the owner of an owner-draw list box or combo box that the list box or combo box is destroyed or that items have been removed by [CComboBox::DeleteString](../../mfc/reference/ccombobox-class.md#deletestring), [CListBox::DeleteString](../../mfc/reference/clistbox-class.md#deletestring), [CComboBox::ResetContent](../../mfc/reference/ccombobox-class.md#resetcontent), or [CListBox::ResetContent](../../mfc/reference/clistbox-class.md#resetcontent).

```
afx_msg void OnDeleteItem(
    int nIDCtl,
    LPDELETEITEMSTRUCT lpDeleteItemStruct);
```

### Parameters

*nIDCtl*<br/>
The identifier of the control that sent the WM_DELETEITEM message.

*lpDeleteItemStruct*<br/>
Specifies a long pointer to a [DELETEITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-deleteitemstruct) data structure that contains information about the deleted list box item.

### Remarks

If the `hwndItem` member of the `DELETEITEMSTRUCT` structure belongs to a combo box or list box, then the `DeleteItem` virtual function of the appropriate class is called. Override the `DeleteItem` member function of the appropriate control's class to delete item-specific data.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="ondestroy"></a> CWnd::OnDestroy

The framework calls this member function to inform the `CWnd` object that it is being destroyed.

```
afx_msg void OnDestroy();
```

### Remarks

`OnDestroy` is called after the `CWnd` object is removed from the screen.

`OnDestroy` is called first for the `CWnd` being destroyed, then for the child windows of `CWnd` as they are destroyed. It can be assumed that all child windows still exist while `OnDestroy` runs.

If the `CWnd` object being destroyed is part of the Clipboard-viewer chain (set by calling the [SetClipboardViewer](#setclipboardviewer) member function), the `CWnd` must remove itself from the Clipboard-viewer chain by calling the [ChangeClipboardChain](#changeclipboardchain) member function before returning from the `OnDestroy` function.

## <a name="ondestroyclipboard"></a> CWnd::OnDestroyClipboard

The framework calls this member function for the Clipboard owner when the Clipboard is emptied through a call to the [EmptyClipboard](/windows/win32/api/winuser/nf-winuser-emptyclipboard) Windows function.

```
afx_msg void OnDestroyClipboard();
```

## <a name="ondevicechange"></a> CWnd::OnDeviceChange

The framework calls this member function to notify an application or device driver of a change to the hardware configuration of a device or the computer.

```
afx_msg BOOL OnDeviceChange(
    UINT nEventType,
    DWORD_PTR dwData);
```

### Parameters

*nEventType*<br/>
An event type. See the Remarks section for a description of the available values

*dwData*<br/>
The address of a structure that contains event-specific data. Its meaning depends on the given event.

### Remarks

For devices that offer software-controllable features, such as ejection and locking, the operating system typically sends a DBT_DEVICEREMOVEPENDING message to let applications and device drivers end their use of the device gracefully.

If the operating system forcefully removes of a device, it may not send a DBT_DEVICEQUERYREMOVE message before doing so.

The *nEvent* parameter can be one of these values:

- [DBT_DEVICEARRIVAL](/windows/win32/DevIO/dbt-devicearrival) A device has been inserted and is now available.

- [DBT_DEVICEQUERYREMOVE](/windows/win32/DevIO/dbt-devicequeryremove) Permission to remove a device is requested. Any application can deny this request and cancel the removal.

- [DBT_DEVICEQUERYREMOVEFAILED](/windows/win32/DevIO/dbt-devicequeryremovefailed) Request to remove a device has been canceled.

- [DBT_DEVICEREMOVEPENDING](/windows/win32/DevIO/dbt-deviceremovepending) Device is about to be removed. Cannot be denied.

- [DBT_DEVICEREMOVECOMPLETE](/windows/win32/DevIO/dbt-deviceremovecomplete) Device has been removed.

- [DBT_DEVICETYPESPECIFIC](/windows/win32/DevIO/dbt-devicetypespecific) Device-specific event.

- [DBT_CONFIGCHANGED](/windows/win32/DevIO/dbt-configchanged) Current configuration has changed.

- DBT_DEVNODES_CHANGED Device node has changed.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="ondevmodechange"></a> CWnd::OnDevModeChange

The framework calls this member function for all top-level `CWnd` objects when the user changes device-mode settings.

```
afx_msg void OnDevModeChange(LPTSTR lpDeviceName);
```

### Parameters

*lpDeviceName*<br/>
Points to the device name specified in the Windows initialization file, WIN.INI.

### Remarks

Applications that handle the WM_DEVMODECHANGE message may reinitialize their device-mode settings. Applications that use the Windows `ExtDeviceMode` function to save and restore device settings typically do not process this function.

This function is not called when the user changes the default printer from Control Panel. In this case, the `OnWinIniChange` function is called.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="ondrawclipboard"></a> CWnd::OnDrawClipboard

The framework calls this member function for each window in the Clipboard-viewer chain when the contents of the Clipboard change.

```
afx_msg void OnDrawClipboard();
```

### Remarks

Only applications that have joined the Clipboard-viewer chain by calling the [SetClipboardViewer](#setclipboardviewer) member function need to respond to this call.

Each window that receives an `OnDrawClipboard` call should call the [SendMessage](/windows/win32/api/winuser/nf-winuser-sendmessage) Windows function to pass a [WM_DRAWCLIPBOARD](/windows/win32/dataxchg/wm-drawclipboard) message on to the next window in the Clipboard-viewer chain. The handle of the next window is returned by the [SetClipboardViewer](#setclipboardviewer) member function; it may be modified in response to an [OnChangeCbChain](#onchangecbchain) member function call.

## <a name="ondrawiconicthumbnailorlivepreview"></a> CWnd::OnDrawIconicThumbnailOrLivePreview

Called by the framework when it needs to obtain a bitmap to be displayed on Windows 7 tab thumbnail, or on the client for application peek.

```
virtual void OnDrawIconicThumbnailOrLivePreview(
    CDC& dc,
    CRect rect,
    CSize szRequiredThumbnailSize,
    BOOL bIsThumbnail,
    BOOL& bAlphaChannelSet);
```

### Parameters

*dc*<br/>
Specifies the device context.

*rect*<br/>
Specifies the bounding rectangle of the area to render.

*szRequiredThumbnailSize*<br/>
Specifies the size of the target thumbnail. Should be ignored if *bIsThumbnail* is FALSE.

*bIsThumbnail*<br/>
Specifies whether this method is called for iconic thumbnail or live preview (peek).

*bAlphaChannelSet*<br/>
[out] Set it to TRUE if your implementation initializes the alpha channel of a bitmap selected in *dc*.

### Remarks

Override this method in a derived class and draw on the specified device context in order to customize thumbnail and peek. If *bThumbnail* is TRUE, *szRequiredThumbnailSize* can be ignored. In this case you should be aware that you draw full sized bitmap (that is, a bitmap that covers the whole client area). The device context ( *dc*) comes with selected 32 bits bitmap. The default implementation sends WM_PRINT to this window with PRF_CLIENT, PRF_CHILDREN, and PRF_NONCLIENT flags.

## <a name="ondrawitem"></a> CWnd::OnDrawItem

The framework calls this member function for the owner of an owner-draw button control, combo-box control, list-box control, or menu when a visual aspect of the control or menu has changed.

```
afx_msg void OnDrawItem(
    int nIDCtl,
    LPDRAWITEMSTRUCT lpDrawItemStruct);
```

### Parameters

*nIDCtl*<br/>
Contains the identifier of the control that sent the WM_DRAWITEM message. If a menu sent the message, *nIDCtl* contains 0.

*lpDrawItemStruct*<br/>
Specifies a long pointer to a `DRAWITEMSTRUCT` data structure that contains information about the item to be drawn and the type of drawing required.

### Remarks

The `itemAction` member of the [DRAWITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-drawitemstruct) structure defines the drawing operation that is to be performed. The data in this member allows the owner of the control to determine what drawing action is required.

Before returning from processing this message, an application should ensure that the device context identified by the *hDC* member of the `DRAWITEMSTRUCT` structure is restored to the default state.

If the `hwndItem` member belongs to a [CButton](../../mfc/reference/cbutton-class.md), [CMenu](../../mfc/reference/cmenu-class.md), [CListBox](../../mfc/reference/clistbox-class.md), or [CComboBox](../../mfc/reference/ccombobox-class.md) object, then the `DrawItem` virtual function of the appropriate class is called. Override the `DrawItem` member function of the appropriate control's class to draw the item.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="ondropfiles"></a> CWnd::OnDropFiles

The framework calls this member function when the user releases the left mouse button over a window that has registered itself as the recipient of dropped files.

```
afx_msg void OnDropFiles(HDROP hDropInfo);
```

### Parameters

*hDropInfo*<br/>
A pointer to an internal data structure that describes the dropped files. This handle is used by the `DragFinish`, `DragQueryFile`, and `DragQueryPoint` Windows functions to retrieve information about the dropped files.

### Remarks

Typically, a derived class will be designed to support dropped files and it will register itself during window construction.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onenable"></a> CWnd::OnEnable

The framework calls this member function when an application changes the enabled state of the `CWnd` object.

```
afx_msg void OnEnable(BOOL bEnable);
```

### Parameters

*bEnable*<br/>
Specifies whether the `CWnd` object has been enabled or disabled. This parameter is TRUE if the `CWnd` has been enabled; it is FALSE if the `CWnd` has been disabled.

### Remarks

`OnEnable` is called before the [EnableWindow](#enablewindow) member function returns, but after the window enabled state ( [WS_DISABLED](styles-used-by-mfc.md#window-styles) style bit) has changed.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onendsession"></a> CWnd::OnEndSession

The framework calls this member function after the `CWnd` object has returned a nonzero value from a [OnQueryEndSession](#onqueryendsession) member function call.

```
afx_msg void OnEndSession(BOOL bEnding);
```

### Parameters

*bEnding*<br/>
Specifies whether or not the session is being ended. It is TRUE if the session is being ended; otherwise FALSE.

### Remarks

The `OnEndSession` call informs the `CWnd` object whether the session is actually ending.

If *bEnding* is TRUE, Windows can terminate any time after all applications have returned from processing this call. Consequently, have an application perform all tasks required for termination within `OnEndSession`.

You do not need to call the [DestroyWindow](#destroywindow) member function or [PostQuitMessage](/windows/win32/api/winuser/nf-winuser-postquitmessage) Windows function when the session is ending.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onenteridle"></a> CWnd::OnEnterIdle

The framework calls this member function to inform an application's main window procedure that a modal dialog box or a menu is entering an idle state.

```
afx_msg void OnEnterIdle(
    UINT nWhy,
    CWnd* pWho);
```

### Parameters

*nWhy*<br/>
Specifies whether the message is the result of a dialog box or a menu being displayed. This parameter can be one of the following values:

- MSGF_DIALOGBOX The system is idle because a dialog box is being displayed.

- MSGF_MENU The system is idle because a menu is being displayed.

*pWho*<br/>
Specifies a pointer to the dialog box (if *nWhy* is MSGF_DIALOGBOX), or the window that contains the displayed menu (if *nWhy* is MSGF_MENU). This pointer may be temporary and should not be stored for later use.

### Remarks

A modal dialog box or menu enters an idle state when no messages are waiting in its queue after it has processed one or more previous messages.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onentermenuloop"></a> CWnd::OnEnterMenuLoop

The framework calls this member function when a menu modal loop has been entered.

```
afx_msg void OnEnterMenuLoop(BOOL bIsTrackPopupMenu);
```

### Parameters

*bIsTrackPopupMenu*<br/>
Specifies whether the menu involved is a popup menu. Has a nonzero value if the function is successful; otherwise 0.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onentersizemove"></a> CWnd::OnEnterSizeMove

The framework calls this member function one time after the affected window enters a moving or sizing modal loop.

```
afx_msg void OnEnterSizeMove();
```

### Remarks

This method receives the [WM_ENTERSIZEMOVE](/windows/win32/winmsg/wm-entersizemove) notification, which is described in the Windows SDK.

A window enters a moving or sizing modal loop when the user clicks the window's title bar or sizing border, or when the window passes the [WM_SYSCOMMAND](/windows/win32/menurc/wm-syscommand) message to the [CWnd::DefWindowProc](#defwindowproc) function and the *wParam* parameter of that message specifies SC_MOVE or SC_SIZE.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onerasebkgnd"></a> CWnd::OnEraseBkgnd

The framework calls this member function when the `CWnd` object background needs erasing (for example, when resized).

```
afx_msg BOOL OnEraseBkgnd(CDC* pDC);
```

### Parameters

*pDC*<br/>
Specifies the device-context object.

### Return Value

Nonzero if it erases the background; otherwise 0.

### Remarks

It is called to prepare an invalidated region for painting.

The default implementation erases the background using the window class background brush specified by the `hbrBackground` member of the window class structure.

If the `hbrBackground` member is NULL, your overridden version of `OnEraseBkgnd` should erase the background color. Your version should also align the origin of the intended brush with the `CWnd` coordinates by first calling [UnrealizeObject](/windows/win32/api/wingdi/nf-wingdi-unrealizeobject) for the brush, and then selecting the brush.

An overridden `OnEraseBkgnd` should return nonzero in response to WM_ERASEBKGND if it processes the message and erases the background; this indicates that no further erasing is required. If it returns 0, the window will remain marked as needing to be erased. (Typically, this means that the `fErase` member of the `PAINTSTRUCT` structure will be TRUE.)

Windows assumes the background is computed with the MM_TEXT mapping mode. If the device context is using any other mapping mode, the area erased may not be within the visible part of the client area.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onexitmenuloop"></a> CWnd::OnExitMenuLoop

The framework calls this member function when a menu modal loop has been exited.

```
afx_msg void OnExitMenuLoop(BOOL bIsTrackPopupMenu);
```

### Parameters

*bIsTrackPopupMenu*<br/>
Specifies whether the menu involved is a pop-up menu. Has a nonzero value if the function is successful; otherwise 0.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onexitsizemove"></a> CWnd::OnExitSizeMove

The framework calls this member function one time after the affected window exits a moving or sizing modal loop.

```
afx_msg void OnExitSizeMove();
```

### Remarks

This method receives the [WM_EXITSIZEMOVE](/windows/win32/winmsg/wm-exitsizemove) notification, which is described in the Windows SDK.

A window enters a moving or sizing modal loop when the user clicks the window's title bar or sizing border, or when the window passes the [WM_SYSCOMMAND](/windows/win32/menurc/wm-syscommand) message to the [CWnd::DefWindowProc](#defwindowproc) function and the *wParam* parameter of that message specifies SC_MOVE or SC_SIZE.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onfontchange"></a> CWnd::OnFontChange

All top-level windows in the system receive an `OnFontChange` call from the framework after the application changes the pool of font resources.

```
afx_msg void OnFontChange();
```

### Remarks

An application that adds or removes fonts from the system (for example, through the [AddFontResource](/windows/win32/api/wingdi/nf-wingdi-addfontresourcew) or [RemoveFontResource](/windows/win32/api/wingdi/nf-wingdi-removefontresourcew) Windows function) should send the [WM_FONTCHANGE](/windows/win32/gdi/wm-fontchange) message to all top-level windows.

To send this message, use the [SendMessage](/windows/win32/api/winuser/nf-winuser-sendmessage) Windows function with the *hWnd* parameter set to HWND_BROADCAST.

## <a name="ongetdlgcode"></a> CWnd::OnGetDlgCode

Called for a control so the control can process arrow-key and TAB-key input itself.

```
afx_msg UINT OnGetDlgCode();
```

### Return Value

One or more of the following values, indicating which type of input the application processes:

- DLGC_BUTTON Button (generic).

- DLGC_DEFPUSHBUTTON Default pushbutton.

- DLGC_HASSETSEL EM_SETSEL messages.

- DLGC_UNDEFPUSHBUTTON No default pushbutton processing. (An application can use this flag with DLGC_BUTTON to indicate that it processes button input but relies on the system for default pushbutton processing.)

- DLGC_RADIOBUTTON Radio button.

- DLGC_STATIC Static control.

- DLGC_WANTALLKEYS All keyboard input.

- DLGC_WANTARROWS Arrow keys.

- DLGC_WANTCHARS WM_CHAR messages.

- DLGC_WANTMESSAGE All keyboard input. The application passes this message on to the control.

- DLGC_WANTTAB TAB key.

### Remarks

Normally, Windows handles all arrow-key and TAB-key input to a `CWnd` control. By overriding `OnGetDlgCode`, a `CWnd` control can choose a particular type of input to process itself.

The default `OnGetDlgCode` functions for the predefined control classes return a code appropriate for each class.

## <a name="ongetminmaxinfo"></a> CWnd::OnGetMinMaxInfo

The framework calls this member function whenever Windows needs to know the maximized position or dimensions, or the minimum or maximum tracking size.

```
afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
```

### Parameters

*lpMMI*<br/>
Points to a `MINMAXINFO` structure that contains information about a window's maximized size and position and its minimum and maximum tracking size. For more about this structure, see the [MINMAXINFO](/windows/win32/api/winuser/ns-winuser-minmaxinfo) structure.

### Remarks

The maximized size is the size of the window when its borders are fully extended. The maximum tracking size of the window is the largest window size that can be achieved by using the borders to size the window. The minimum tracking size of the window is the smallest window size that can be achieved by using the borders to size the window.

Windows fills in an array of points specifying default values for the various positions and dimensions. The application may change these values in `OnGetMinMaxInfo`.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onhelp"></a> CWnd::OnHelp

Handles F1 Help within the application (using the current context).

```
afx_msg void OnHelp();
```

### Remarks

See [CWinApp::OnHelp](../../mfc/reference/cwinapp-class.md#onhelp) for more information.

## <a name="onhelpfinder"></a> CWnd::OnHelpFinder

Handles the ID_HELP_FINDER and ID_DEFAULT_HELP commands.

```
afx_msg void OnHelpFinder();
```

### Remarks

See [CWinApp::OnHelpFinder](../../mfc/reference/cwinapp-class.md#onhelpfinder) for more information.

## <a name="onhelpindex"></a> CWnd::OnHelpIndex

Handles the ID_HELP_INDEX command and provides a default Help topic.

```
afx_msg void OnHelpIndex();
```

### Remarks

See [CWinApp::OnHelpIndex](../../mfc/reference/cwinapp-class.md#onhelpindex) for more information.

## <a name="onhelpinfo"></a> CWnd::OnHelpInfo

Called by the framework when the user presses the F1 key.

```
afx_msg BOOL OnHelpInfo(HELPINFO* lpHelpInfo);
```

### Parameters

*lpHelpInfo*<br/>
Pointer to a [HELPINFO](/windows/win32/api/winuser/ns-winuser-helpinfo) structure that contains information about the menu item, control, dialog box, or window for which help is requested.

### Return Value

Returns TRUE if a window has the keyboard focus or if a menu is active within a window. If no window has the keyboard focus, returns FALSE.

### Remarks

If a menu is active when F1 is pressed, WM_HELP is sent to the window associated with the menu; otherwise, WM_HELP is sent to the window that has the keyboard focus. If no window has the keyboard focus, WM_HELP is sent to the currently active window.

## <a name="onhelpusing"></a> CWnd::OnHelpUsing

Handles the ID_HELP_USING command.

```
afx_msg void OnHelpUsing();
```

### Remarks

See [CWinApp::OnHelpUsing](../../mfc/reference/cwinapp-class.md#onhelpusing) for more information.

## <a name="onhotkey"></a> CWnd::OnHotKey

The framework calls this member function when the user presses a system-wide hot key.

```
afx_msg void OnHotKey(
    UINT nHotKeyId,
    UINT nKey1,
    UINT nKey2);
```

### Parameters

*nHotKeyId*\
[in] Identifier for the hot key that generated the message. If the message was generated by a system-defined hot key, this parameter will be one of the following values:

- `IDHOT_SNAPDESKTOP` - The snap desktop hot key was pressed.
- `IDHOT_SNAPWINDOW` - The snap window hot key was pressed.

*nKey1*\
[in] A bitwise combination (OR) of flags that indicate the keys that were pressed in combination with the key specified by the *nKey2* parameter. The possible values are:

- `MOD_ALT` - Either ALT key was held down.
- `MOD_CONTROL` - Either CTRL key was held down.
- `MOD_SHIFT` - Either SHIFT key was held down.
- `MOD_WIN` - Either WINDOWS key was held down. These keys are labeled with the Microsoft Windows logo.

*nKey2*\
[in] The virtual key code of the hot key.

### Remarks

This method receives the [WM_HOTKEY](/windows/win32/inputdev/wm-hotkey) notification, which is described in the Windows SDK. This message is placed at the top of the message queue associated with the thread that registered the hot key. Use the [RegisterHotKey](/windows/win32/api/winuser/nf-winuser-registerhotkey) function to register a system-wide hot key.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onhscroll"></a> CWnd::OnHScroll

The framework calls this member function when the user clicks a window's horizontal scroll bar.

```
afx_msg void OnHScroll(
    UINT nSBCode,
    UINT nPos,
    CScrollBar* pScrollBar);
```

### Parameters

*nSBCode*<br/>
Specifies a scroll-bar code that indicates the user's scrolling request. This parameter can be one of the following:

- SB_LEFT Scroll to far left.

- SB_ENDSCROLL End scroll.

- SB_LINELEFT Scroll left.

- SB_LINERIGHT Scroll right.

- SB_PAGELEFT Scroll one page left.

- SB_PAGERIGHT Scroll one page right.

- SB_RIGHT Scroll to far right.

- SB_THUMBPOSITION Scroll to absolute position. The current position is specified by the *nPos* parameter.

- SB_THUMBTRACK Drag scroll box to specified position. The current position is specified by the *nPos* parameter.

*nPos*<br/>
Specifies the scroll-box position if the scroll-bar code is SB_THUMBPOSITION or SB_THUMBTRACK; otherwise, not used. Depending on the initial scroll range, *nPos* may be negative and should be cast to an **`int`** if necessary.

*pScrollBar*<br/>
If the scroll message came from a scroll-bar control, contains a pointer to the control. If the user clicked a window's scroll bar, this parameter is NULL. The pointer may be temporary and should not be stored for later use.

### Remarks

The SB_THUMBTRACK scroll-bar code typically is used by applications that give some feedback while the scroll box is being dragged.

If an application scrolls the contents controlled by the scroll bar, it must also reset the position of the scroll box with the [SetScrollPos](#setscrollpos) member function.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

### Example

[!code-cpp[NVC_MFCWindowing#108](../../mfc/reference/codesnippet/cpp/cwnd-class_48.cpp)]

## <a name="onhscrollclipboard"></a> CWnd::OnHScrollClipboard

The Clipboard owner's `OnHScrollClipboard` member function is called by the Clipboard viewer when the Clipboard data has the `CF_OWNERDISPLAY` format and there is an event in the Clipboard viewer's horizontal scroll bar.

```
afx_msg void OnHScrollClipboard(
    CWnd* pClipAppWnd,
    UINT nSBCode,
    UINT nPos);
```

### Parameters

*pClipAppWnd*<br/>
Specifies a pointer to a Clipboard-viewer window. The pointer may be temporary and should not be stored for later use.

*nSBCode*<br/>
Specifies one of the following scroll-bar codes in the low-order word:

- SB_BOTTOM Scroll to lower right.

- SB_ENDSCROLL End scroll.

- SB_LINEDOWN Scroll one line down.

- SB_LINEUP Scroll one line up.

- SB_PAGEDOWN Scroll one page down.

- SB_PAGEUP Scroll one page up.

- SB_THUMBPOSITION Scroll to the absolute position. The current position is provided in *nPos*.

- SB_TOP Scroll to upper left.

*nPos*<br/>
Contains the scroll-box position if the scroll-bar code is SB_THUMBPOSITION; otherwise not used.

### Remarks

The owner should scroll the Clipboard image, invalidate the appropriate section, and update the scroll-bar values.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oniconerasebkgnd"></a> CWnd::OnIconEraseBkgnd

The framework calls this member function for a minimized (iconic) `CWnd` object when the background of the icon must be filled before painting the icon.

```
afx_msg void OnIconEraseBkgnd(CDC* pDC);
```

### Parameters

*pDC*<br/>
Specifies the device-context object of the icon. May be temporary and should not be stored for later use.

### Remarks

`CWnd` receives this call only if a class icon is defined for the window default implementation; otherwise [OnEraseBkgnd](#onerasebkgnd) is called.

The [DefWindowProc](#defwindowproc) member function fills the icon background with the background brush of the parent window.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oninitmenu"></a> CWnd::OnInitMenu

The framework calls this member function when a menu is about to become active.

```
afx_msg void OnInitMenu(CMenu* pMenu);
```

### Parameters

*pMenu*<br/>
Specifies the menu to be initialized. May be temporary and should not be stored for later use.

### Remarks

`OnInitMenu` is called when the user clicks an item on the menu bar or presses a menu key. Override this member function to modify the menu before it is displayed.

`OnInitMenu` is only called once, when a menu is first accessed (for example, when a user clicks an item on the menu bar). This method does not provide information about menu items. As the user moves to items within the menu (for example, by moving the mouse across several menu items) the function is not called again. Once the user exits from the menu (for example, by clicking on the application client area) and later clicks an item on the menu bar, the function will be called again.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oninitmenupopup"></a> CWnd::OnInitMenuPopup

The framework calls this member function when a pop-up menu is about to become active.

```
afx_msg void OnInitMenuPopup(
    CMenu* pPopupMenu,
    UINT nIndex,
    BOOL bSysMenu);
```

### Parameters

*pPopupMenu*<br/>
Specifies the menu object of the pop-up menu. May be temporary and should not be stored for later use.

*nIndex*<br/>
Specifies the index of the pop-up menu in the main menu.

*bSysMenu*<br/>
TRUE if the pop-up menu is the Control menu; otherwise FALSE.

### Remarks

This allows an application to modify the pop-up menu before it is displayed without changing the entire menu.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oninputdevicechange"></a> CWnd::OnInputDeviceChange

The framework calls this member function when an I/O device is added or removed from the system.

```
afx_msg void OnInputDeviceChange(unsigned short uFlag);
```

### Parameters

*uFlag*\
[in] This flag can contain the following values:

- `GIDC_ARRIVAL` - A new device has been added to the system.
- `GIDC_REMOVAL` - A device has been removed from the system.

### Remarks

This method receives the [WM_INPUT_DEVICE_CHANGE](/windows/win32/inputdev/wm-input-device-change) notification, which is described in the Windows SDK. The is a generic input device message.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oninputlangchange"></a> CWnd::OnInputLangChange

The framework calls this member for the topmost affected window after an application's input language has been changed.

```
afx_msg void OnInputLangChange(
    UINT nCharSet,
    UINT nLocaleId);
```

### Parameters

*nCharSet*\
[in] The character set of the new locale. For more information, see the *lfCharSet* parameter of the [LOGFONT](/windows/win32/api/wingdi/ns-wingdi-logfontw) structure.

*nLocaleId*\
[in] The input locale identifier. For more information, see [Language Identifier Constants and Strings](/windows/win32/Intl/language-identifier-constants-and-strings).

### Remarks

This method receives the [WM_INPUTLANGCHANGE](/windows/win32/winmsg/wm-inputlangchange) notification message, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="oninputlangchangerequest"></a> CWnd::OnInputLangChangeRequest

The framework calls this member for window with the focus when the user chooses a new input language.

```
afx_msg void OnInputLangChangeRequest(
    UINT nFlags,
    UINT nLocaleId);
```

### Parameters

*nFlags*\
[in] A bitwise (OR) combination of flags that indicate the new locale was selected from the previous or next locale in the installed list of locales, or that the new input locale's keyboard layout can be used with the system character set. The possible values are INPUTLANGCHANGE_BACKWARD, INPUTLANGCHANGE_FORWARD, and INPUTLANGCHANGE_SYSCHARSET.

*nLocaleId*\
[in] The input locale identifier. For more information, see [Language Identifier Constants and Strings](/windows/win32/Intl/language-identifier-constants-and-strings).

### Remarks

This method receives the [WM_INPUTLANGCHANGEREQUEST](/windows/win32/winmsg/wm-inputlangchangerequest) notification message, which is described in the Windows SDK. This message is posted when the user chooses a new input language with either a hotkey that is specified in the keyboard control panel application, or from the indicator on the system taskbar.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onkeydown"></a> CWnd::OnKeyDown

The framework calls this member function when a nonsystem key is pressed.

```
afx_msg void OnKeyDown(
    UINT nChar,
    UINT nRepCnt,
    UINT nFlags);
```

### Parameters

*nChar*<br/>
Specifies the virtual key code of the given key. For a list of standard virtual key codes, see Winuser.h

*nRepCnt*<br/>
Repeat count (the number of times the keystroke is repeated as a result of the user holding down the key).

*nFlags*<br/>
Specifies the scan code, key-transition code, previous key state, and context code, as shown in the following list:

|Value|Description|
|-----------|-----------------|
|0-7|Scan code (OEM-dependent value).|
|8|Extended key, such as a function key or a key on the numeric keypad (1 if it is an extended key).|
|9-10|Not used.|
|11-12|Used internally by Windows.|
|13|Context code (1 if the ALT key is held down while the key is pressed; otherwise 0).|
|14|Previous key state (1 if the key is down before the call, 0 if the key is up).|
|15|Transition state (1 if the key is being released, 0 if the key is being pressed).|

For a WM_KEYDOWN message, the key-transition bit (bit 15) is 0 and the context-code bit (bit 13) is 0.

### Remarks

A nonsystem key is a keyboard key that is pressed when the ALT key is not pressed or a keyboard key that is pressed when `CWnd` has the input focus.

Because of auto-repeat, more than one `OnKeyDown` call may occur before an [OnKeyUp](#onkeyup) member function call is made. The bit that indicates the previous key state can be used to determine whether the `OnKeyDown` call is the first down transition or a repeated down transition.

For IBM Enhanced 101- and 102-key keyboards, enhanced keys are the right ALT and the right CTRL keys on the main section of the keyboard; the INS, DEL, HOME, END, PAGE UP, PAGE DOWN, and arrow keys in the clusters to the left of the numeric keypad; and the slash (/) and ENTER keys in the numeric keypad. Some other keyboards may support the extended-key bit in *nFlags*.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onkeyup"></a> CWnd::OnKeyUp

The framework calls this member function when a nonsystem key is released.

```
afx_msg void OnKeyUp(
    UINT nChar,
    UINT nRepCnt,
    UINT nFlags);
```

### Parameters

*nChar*<br/>
Specifies the virtual key code of the given key. For a list of standard virtual key codes, see Winuser.h

*nRepCnt*<br/>
Repeat count (the number of times the keystroke is repeated as a result of the user holding down the key).

*nFlags*<br/>
Specifies the scan code, key-transition code, previous key state, and context code, as shown in the following list:

|Value|Description|
|-----------|-----------------|
|0-7|Scan code (OEM-dependent value). Low byte of high-order word.|
|8|Extended key, such as a function key or a key on the numeric keypad (1 if it is an extended key; otherwise 0).|
|9-10|Not used.|
|11-12|Used internally by Windows.|
|13|Context code (1 if the ALT key is held down while the key is pressed; otherwise 0).|
|14|Previous key state (1 if the key is down before the call, 0 if the key is up).|
|15|Transition state (1 if the key is being released, 0 if the key is being pressed).|

For a WM_KEYUP message, the key-transition bit (bit 15) is 1 and the context-code bit (bit 13) is 0.

### Remarks

A nonsystem key is a keyboard key that is pressed when the ALT key is not pressed or a keyboard key that is pressed when the `CWnd` has the input focus.

For IBM Enhanced 101- and 102-key keyboards, enhanced keys are the right ALT and the right CTRL keys on the main section of the keyboard; the INS, DEL, HOME, END, PAGE UP, PAGE DOWN, and arrow keys in the clusters to the left of the numeric keypad; and the slash (/) and ENTER keys in the numeric keypad. Some other keyboards may support the extended-key bit in *nFlags*.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onkillfocus"></a> CWnd::OnKillFocus

The framework calls this member function immediately before losing the input focus.

```
afx_msg void OnKillFocus(CWnd* pNewWnd);
```

### Parameters

*pNewWnd*<br/>
Specifies a pointer to the window that receives the input focus (may be NULL or may be temporary).

### Remarks

If the `CWnd` object is displaying a caret, the caret should be destroyed at this point.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onlbuttondblclk"></a> CWnd::OnLButtonDblClk

The framework calls this member function when the user double-clicks the left mouse button.

```
afx_msg void OnLButtonDblClk(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if the CTRL key is down.

- MK_LBUTTON Set if the left mouse button is down.

- MK_MBUTTON Set if the middle mouse button is down.

- MK_RBUTTON Set if the right mouse button is down.

- MK_SHIFT Set if the SHIFT key is down.

*point*<br/>
Specifies the x- and y-coordinate of the cursor. These coordinates are always relative to the upper-left corner of the window.

### Remarks

Only windows that have the CS_DBLCLKS [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) style will receive `OnLButtonDblClk` calls. This is the default for Microsoft Foundation Class windows. Windows calls `OnLButtonDblClk` when the user presses, releases, and then presses the left mouse button again within the system's double-click time limit. Double-clicking the left mouse button actually generates four events: [WM_LBUTTONDOWN](#onlbuttondown), [WM_LBUTTONUP](#onlbuttonup) messages, the WM_LBUTTONDBLCLK call, and another WM_LBUTTONUP message when the button is released.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onlbuttondown"></a> CWnd::OnLButtonDown

The framework calls this member function when the user presses the left mouse button.

```
afx_msg void OnLButtonDown(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if the CTRL key is down.

- MK_LBUTTON Set if the left mouse button is down.

- MK_MBUTTON Set if the middle mouse button is down.

- MK_RBUTTON Set if the right mouse button is down.

- MK_SHIFT Set if the SHIFT key is down.

*point*<br/>
Specifies the x- and y-coordinate of the cursor. These coordinates are always relative to the upper-left corner of the window.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onlbuttonup"></a> CWnd::OnLButtonUp

The framework calls this member function when the user releases the left mouse button.

```
afx_msg void OnLButtonUp(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if the CTRL key is down.

- MK_MBUTTON Set if the middle mouse button is down.

- MK_RBUTTON Set if the right mouse button is down.

- MK_SHIFT Set if the SHIFT key is down.

*point*<br/>
Specifies the x- and y-coordinate of the cursor. These coordinates are always relative to the upper-left corner of the window.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmbuttondblclk"></a> CWnd::OnMButtonDblClk

The framework calls this member function when the user double-clicks the middle mouse button.

```
afx_msg void OnMButtonDblClk(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if the CTRL key is down.

- MK_LBUTTON Set if the left mouse button is down.

- MK_MBUTTON Set if the middle mouse button is down.

- MK_RBUTTON Set if the right mouse button is down.

- MK_SHIFT Set if the SHIFT key is down.

*point*<br/>
Specifies the x- and y-coordinate of the cursor. These coordinates are always relative to the upper-left corner of the window.

### Remarks

Only windows that have the CS_DBLCLKS [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) style will receive `OnMButtonDblClk` calls. This is the default for all Microsoft Foundation Class windows. Windows generates an `OnMButtonDblClk` call when the user presses, releases, and then presses the middle mouse button again within the system's double-click time limit. Double-clicking the middle mouse button actually generates four events: [WM_MBUTTONDOWN](#onmbuttondown) and [WM_MBUTTONUP](#onmbuttonup) messages, the WM_MBUTTONDBLCLK call, and another WM_MBUTTONUP message.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmbuttondown"></a> CWnd::OnMButtonDown

The framework calls this member function when the user presses the middle mouse button.

```
afx_msg void OnMButtonDown(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if the CTRL key is down.

- MK_LBUTTON Set if the left mouse button is down.

- MK_MBUTTON Set if the middle mouse button is down.

- MK_RBUTTON Set if the right mouse button is down.

- MK_SHIFT Set if the SHIFT key is down.

*point*<br/>
Specifies the x- and y-coordinate of the cursor. These coordinates are always relative to the upper-left corner of the window.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmbuttonup"></a> CWnd::OnMButtonUp

The framework calls this member function when the user releases the middle mouse button.

```
afx_msg void OnMButtonUp(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if the CTRL key is down.

- MK_LBUTTON Set if the left mouse button is down.

- MK_RBUTTON Set if the right mouse button is down.

- MK_SHIFT Set if the SHIFT key is down.

*point*<br/>
Specifies the x- and y-coordinate of the cursor. These coordinates are always relative to the upper-left corner of the window.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmdiactivate"></a> CWnd::OnMDIActivate

The framework calls this member function for the child window being deactivated and the child window being activated.

```
afx_msg void OnMDIActivate(
    BOOL bActivate,
    CWnd* pActivateWnd,
    CWnd* pDeactivateWnd);
```

### Parameters

*bActivate*<br/>
TRUE if the child is being activated and FALSE if it is being deactivated.

*pActivateWnd*<br/>
Contains a pointer to the MDI child window to be activated. When received by an MDI child window, *pActivateWnd* contains a pointer to the child window being activated. This pointer may be temporary and should not be stored for later use.

*pDeactivateWnd*<br/>
Contains a pointer to the MDI child window being deactivated. This pointer may be temporary and should not be stored for later use.

### Remarks

An MDI child window is activated independently of the MDI frame window. When the frame becomes active, the child window that was last activated with a `OnMDIActivate` call receives an [WM_NCACTIVATE](#onncactivate) message to draw an active window frame and caption bar, but it does not receive another `OnMDIActivate` call.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmeasureitem"></a> CWnd::OnMeasureItem

The framework calls this member function by the framework for the owner of an owner-draw button, combo box, list box, or menu item when the control is created.

```
afx_msg void OnMeasureItem(
    int nIDCtl, LPMEASUREITEMSTRUCT lpMeasureItemStruct);
```

### Parameters

*nIDCtl*<br/>
The ID of the control.

*lpMeasureItemStruct*<br/>
Points to a [MEASUREITEMSTRUCT](/windows/win32/api/winuser/ns-winuser-measureitemstruct) data structure that contains the dimensions of the owner-draw control.

### Remarks

Override this member function and fill in the `MEASUREITEMSTRUCT` data structure pointed to by *lpMeasureItemStruct* and return; this informs Windows of the dimensions of the control and allows Windows to process user interaction with the control correctly.

If a list box or combo box is created with the [LBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) or [CBS_OWNERDRAWVARIABLE](../../mfc/reference/styles-used-by-mfc.md#combo-box-styles) style, the framework calls this function for the owner for each item in the control; otherwise this function is called once.

Windows initiates the call to `OnMeasureItem` for the owner of combo boxes and list boxes created with the OWNERDRAWFIXED style before sending the [WM_INITDIALOG](/windows/win32/dlgbox/wm-initdialog) message. As a result, when the owner receives this call, Windows has not yet determined the height and width of the font used in the control; function calls and calculations that require these values should occur in the main function of the application or library.

If the item being measured is a `CMenu`, `CListBox` or `CComboBox` object, then the `MeasureItem` virtual function of the appropriate class is called. Override the `MeasureItem` member function of the appropriate control's class to calculate and set the size of each item.

`OnMeasureItem` will be called only if the control's class is created at run time, or it is created with the LBS_OWNERDRAWVARIABLE or CBS_OWNERDRAWVARIABLE style. If the control is created by the dialog editor, `OnMeasureItem` will not be called. This is because the [WM_MEASUREITEM](/windows/win32/Controls/wm-measureitem) message is sent early in the creation process of the control. If you subclass by using `DDX_Control`, `SubclassDlgItem`, or `SubclassWindow`, the subclassing usually occurs after the creation process. Therefore, there is no way to handle the [WM_MEASUREITEM](/windows/win32/Controls/wm-measureitem) message in the control's `OnChildNotify` function, which is the mechanism MFC uses to implement ON_WM_MEASUREITEM_REFLECT.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmenuchar"></a> CWnd::OnMenuChar

The framework calls this member function when the user presses a menu mnemonic character that doesn't match any of the predefined mnemonics in the current menu.

```
afx_msg LRESULT OnMenuChar(
    UINT nChar,
    UINT nFlags,
    CMenu* pMenu);
```

### Parameters

*nChar*<br/>
Depending on the build settings, specifies the ANSI or Unicode character that the user pressed.

*nFlags*<br/>
Contains the MF_POPUP flag if the menu is a pop-up menu. It contains the MF_SYSMENU flag if the menu is a Control menu.

*pMenu*<br/>
Contains a pointer to the selected `CMenu`. The pointer may be temporary and should not be stored.

### Return Value

The high-order word of the return value should contain one of the following command codes:

|Value|Description|
|-----------|-----------------|
|0|Tells Windows to discard the character that the user pressed and creates a short beep on the system speaker.|
|1|Tells Windows to close the current menu.|
|2|Informs Windows that the low-order word of the return value contains the item number for a specific item. This item is selected by Windows.|

The low-order word is ignored if the high-order word contains 0 or 1. Applications should process this message when accelerator (shortcut) keys are used to select bitmaps placed in a menu.

### Remarks

It is sent to the `CWnd` that owns the menu. `OnMenuChar` is also called when the user presses ALT and any other key, even if the key does not correspond to a mnemonic character. In this case, *pMenu* points to the menu owned by the `CWnd`, and *nFlags* is 0.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmenudrag"></a> CWnd::OnMenuDrag

The framework calls this member function of the current drag-and-drop menu when the user begins to drag a menu item.

```
afx_msg UINT OnMenuDrag(
    UINT nPos,
    CMenu* pMenu);
```

### Parameters

*nPos*\
[in] The index position of the menu item when the drag operation begins.

*pMenu*\
[in] Pointer to the [CMenu](../../mfc/reference/cmenu-class.md) object that contains the menu item.

### Return Value

|Return Value|Meaning|
|------------------|-------------|
|MND_CONTINUE|The menu should remain active. If the mouse is released, it should be ignored.|
|MND_ENDMENU|The menu should be ended.|

### Remarks

This method receives the [WM_MENUDRAG](/windows/win32/menurc/wm-menudrag) notification, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmenugetobject"></a> CWnd::OnMenuGetObject

The framework calls this member function of the current drag-and-drop menu when the mouse cursor enters a menu item or moves from the center of the item to the top or bottom of the item.

```
afx_msg UINT OnMenuGetObject(MENUGETOBJECTINFO* pMenuGetObjectInfo);
```

### Parameters

*pMenu*\
[in] Pointer to a [MENUGETOBJECTINFO](/windows/win32/api/winuser/ns-winuser-menugetobjectinfo) structure that contains information about the drag-and-drop menu the mouse cursor is on.

### Return Value

|Return Value|Meaning|
|------------------|-------------|
|MNGO_NOERROR|An interface pointer that supports drop-and-drag operations is returned in the `pvObj` member of the [MENUGETOBJECTINFO](/windows/win32/api/winuser/ns-winuser-menugetobjectinfo) structure. Currently, only the [IDropTarget](/windows/win32/api/oleidl/nn-oleidl-idroptarget) interface is supported.|
|MNGO_NOINTERFACE|No drop-and-drag interface is supported.|

### Remarks

This method receives the [WM_MENUGETOBJECT](/windows/win32/menurc/wm-menugetobject) notification, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmenurbuttonup"></a> CWnd::OnMenuRButtonUp

The framework calls this member function when the user releases the right mouse button while the cursor is on a menu item.

```
afx_msg void OnMenuRButtonUp(
    UINT nPos,
    CMenu* pMenu);
```

### Parameters

*nPos*\
[in] The index position of the menu item when the right mouse button was released.

*pMenu*\
[in] Pointer to the [CMenu](../../mfc/reference/cmenu-class.md) object that contains the menu item.

### Remarks

This method receives the [WM_MENURBUTTONUP](/windows/win32/menurc/wm-menurbuttonup) notification, which is described in the Windows SDK. The [WM_MENURBUTTONUP](/windows/win32/menurc/wm-menurbuttonup) message enables an application to provide a context-sensitive menu for the menu item specified in the message.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmenuselect"></a> CWnd::OnMenuSelect

If the `CWnd` object is associated with a menu, `OnMenuSelect` is called by the framework when the user selects a menu item.

```
afx_msg void OnMenuSelect(
    UINT nItemID,
    UINT nFlags,
    HMENU hSysMenu);
```

### Parameters

*nItemID*<br/>
Identifies the item selected. If the selected item is a menu item, *nItemID* contains the menu-item ID. If the selected item contains a pop-up menu, *nItemID* contains the pop-up menu index, and *hSysMenu* contains the handle of the main (clicked-on) menu.

*nFlags*<br/>
Contains a combination of the following menu flags:

- MF_BITMAP Item is a bitmap.

- MF_CHECKED Item is checked.

- MF_DISABLED Item is disabled.

- MF_GRAYED Item is dimmed.

- MF_MOUSESELECT Item was selected with a mouse.

- MF_OWNERDRAW Item is an owner-draw item.

- MF_POPUP Item contains a pop-up menu.

- MF_SEPARATOR Item is a menu-item separator.

- MF_SYSMENU Item is contained in the Control menu.

*hSysMenu*<br/>
If *nFlags* contains MF_SYSMENU, identifies the menu associated with the message. If *nFlags* contains MF_POPUP, identifies the handle of the main menu. If *nFlags* contains neither MF_SYSMENU nor MF_POPUP, it is unused.

### Remarks

If *nFlags* contains 0xFFFF and *hSysMenu* contains 0, Windows has closed the menu because the user pressed the ESC key or clicked outside the menu.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmouseactivate"></a> CWnd::OnMouseActivate

The framework calls this member function when the cursor is in an inactive window and the user presses a mouse button.

```
afx_msg int OnMouseActivate(
    CWnd* pDesktopWnd,
    UINT nHitTest,
    UINT message);
```

### Parameters

*pDesktopWnd*<br/>
Specifies a pointer to the top-level parent window of the window being activated. The pointer may be temporary and should not be stored.

*nHitTest*<br/>
Specifies the [hit-test](#onnchittest) area code. A hit test is a test that determines the location of the cursor.

*message*<br/>
Specifies the mouse message number.

### Return Value

Specifies whether to activate the `CWnd` and whether to discard the mouse event. It must be one of the following values:

- MA_ACTIVATE Activate `CWnd` object.

- MA_NOACTIVATE Do not activate `CWnd` object.

- MA_ACTIVATEANDEAT Activate `CWnd` object and discard the mouse event.

- MA_NOACTIVATEANDEAT Do not activate `CWnd` object and discard the mouse event.

### Remarks

The default implementation passes this message to the parent window before any processing occurs. If the parent window returns TRUE, processing is halted.

For a description of the individual hit-test area codes, see the [OnNcHitTest](#onnchittest) member function

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

### Example

[!code-cpp[NVC_MFCAxCtl#9](../../mfc/reference/codesnippet/cpp/cwnd-class_49.cpp)]

## <a name="onmousehover"></a> CWnd::OnMouseHover

The framework calls this member function when the cursor hovers over the client area of the window for the period of time specified in a prior call to [TrackMouseEvent](/windows/win32/api/winuser/nf-winuser-trackmouseevent).

```
afx_msg void OnMouseHover(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*\
[in] A bitwise combination (OR) of flags that indicate which modifier keys are pressed. For example, the MK_CONTROL flag indicates that the CTRL key is pressed.

*point*\
[in] A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that specifies the *x* and *y* coordinates of the cursor relative to the upper-left corner of the client area.

### Remarks

This method receives the [WM_MOUSEHOVER](/windows/win32/inputdev/wm-mousehover) notification, which is described in the Windows SDK.

The *nFlags* parameter can be a combination of modifier keys listed in the following table. For more information, see [About Mouse Input](/windows/win32/inputdev/about-mouse-input).

|Modifier Key|Description|
|------------------|-----------------|
|MK_CONTROL|The CTRL key is pressed.|
|MK_LBUTTON|The left mouse button is pressed.|
|MK_MBUTTON|The middle mouse button is pressed.|
|MK_RBUTTON|The right mouse button is pressed.|
|MK_SHIFT|The SHIFT key is pressed.|
|MK_XBUTTON1|The XBUTTON1 mouse button of the Microsoft IntelliMouse is pressed.|
|MK_XBUTTON2|The XBUTTON2 mouse button of the Microsoft IntelliMouse is pressed.|

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmousehwheel"></a> CWnd::OnMouseHWheel

The framework calls this member when the current window is composed by the Desktop Window Manager (DWM), and that window is maximized.

```
afx_msg void OnMouseHWheel(
    UINT nFlags,
    short zDelta,
    CPoint pt);
```

### Parameters

*nFlags*\
[in] A bitwise combination (OR) of flags that indicate which modifier keys are pressed. For example, the MK_CONTROL flag indicates that the CTRL key is pressed. For a list of flags, see the "Message Parameters" subheading in [About Mouse Input](/windows/win32/inputdev/about-mouse-input).

*zDelta*\
[in] Indicates the distance the wheel is rotated, expressed in multiples or divisions of WHEEL_DELTA, which is 120. A positive value indicates that the wheel was rotated to the right; a negative value indicates that the wheel was rotated to the left.

*pt*\
[in] A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that specifies the *x* and *y* coordinates of the cursor relative to the upper-left corner of the client area.

### Remarks

This method receives the [WM_MOUSEHWHEEL](/windows/win32/inputdev/wm-mousehwheel) notification message, which is described in the Windows SDK. This message is sent to the window that has the focus when the mouse's horizontal scroll wheel is tilted or rotated.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmouseleave"></a> CWnd::OnMouseLeave

The framework calls this member function when the cursor leaves the client area of the window specified in a prior call to [TrackMouseEvent](/windows/win32/api/winuser/nf-winuser-trackmouseevent).

```
afx_msg void OnMouseLeave();
```

### Remarks

This method receives the [WM_MOUSELEAVE](/windows/win32/inputdev/wm-mouseleave) notification, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmousemove"></a> CWnd::OnMouseMove

The framework calls this member function when the mouse cursor moves.

```
afx_msg void OnMouseMove(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if the CTRL key is down.

- MK_LBUTTON Set if the left mouse button is down.

- MK_MBUTTON Set if the middle mouse button is down.

- MK_RBUTTON Set if the right mouse button is down.

- MK_SHIFT Set if the SHIFT key is down.

*point*<br/>
Specifies the x- and y-coordinate of the cursor. These coordinates are always relative to the upper-left corner of the window.

### Remarks

If the mouse is not captured, the WM_MOUSEMOVE message is received by the `CWnd` object beneath the mouse cursor; otherwise, the message goes to the window that has captured the mouse.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmousewheel"></a> CWnd::OnMouseWheel

The framework calls this member function as a user rotates the mouse wheel and encounters the wheel's next notch.

```
afx_msg BOOL OnMouseWheel(
    UINT nFlags,
    short zDelta,
    CPoint pt);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if the CTRL key is down.

- MK_LBUTTON Set if the left mouse button is down.

- MK_MBUTTON Set if the middle mouse button is down.

- MK_RBUTTON Set if the right mouse button is down.

- MK_SHIFT Set if the SHIFT key is down.

*zDelta*<br/>
Indicates distance rotated. The *zDelta* value is expressed in multiples or divisions of WHEEL_DELTA, which is 120. A value less than zero indicates rotating back (toward the user) while a value greater than zero indicates rotating forward (away from the user). The user can reverse this response by changing the Wheel setting in the mouse software. See the Remarks for more information about this parameter.

*pt*<br/>
Specifies the x- and y-coordinate of the cursor. These coordinates are always relative to the upper-left corner of the screen.

### Return Value

Nonzero if mouse wheel scrolling is enabled; otherwise 0.

### Remarks

Unless overridden, `OnMouseWheel` calls the default of [WM_MOUSEWHEEL](/windows/win32/inputdev/wm-mousewheel). Windows automatically routes the message to the control or child window that has the focus. The Win32 function [DefWindowProc](/windows/win32/api/winuser/nf-winuser-defwindowprocw) propagates the message up the parent chain to the window that processes it.

The *zDelta* parameter is a multiple of WHEEL_DELTA, which is set at 120. This value is the threshold for an action to be taken, and one such action (for example, scrolling forward one notch) should occur for each delta.

WHEEL_DELTA was set to 120 to allow for finer-resolution wheels, such as a freely-rotating wheel with no notches. A finer-resolution wheel sends more messages per rotation, but each message has a smaller delta value. To use such a wheel, either add the incoming *zDelta* values until WHEEL_DELTA is reached (so that you get the same response for a given delta-rotation), or scroll partial lines in response to the more frequent messages. You can also choose a scroll granularity and accumulate deltas until WHEEL_DELTA is reached.

Override this member function to provide your own mouse-wheel scrolling behavior.

> [!NOTE]
> `OnMouseWheel` handles messages for Windows NT 4.0 and later versions. For Windows 95/98 or Windows NT 3.51 message handling, use [OnRegisteredMouseWheel](#onregisteredmousewheel).

## <a name="onmove"></a> CWnd::OnMove

The framework calls this member function after the `CWnd` object has been moved.

```
afx_msg void OnMove(
    int x,
    int y);
```

### Parameters

*x*<br/>
Specifies the new x-coordinate location of the upper-left corner of the client area. This new location is given in screen coordinates for overlapped and pop-up windows, and parent-client coordinates for child windows.

*y*<br/>
Specifies the new y-coordinate location of the upper-left corner of the client area. This new location is given in screen coordinates for overlapped and pop-up windows, and parent-client coordinates for child windows.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onmoving"></a> CWnd::OnMoving

The framework calls this member function while a user is moving a `CWnd` object.

```
afx_msg void OnMoving(
    UINT nSide,
    LPRECT lpRect);
```

### Parameters

*nSide*<br/>
The edge of window to be moved.

*lpRect*<br/>
Address of the [CRect](../../atl-mfc-shared/reference/crect-class.md) or [RECT structure](/windows/win32/api/windef/ns-windef-rect) that will contain the item's coordinates.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncactivate"></a> CWnd::OnNcActivate

The framework calls this member function when the nonclient area needs to be changed to indicate an active or inactive state.

```
afx_msg BOOL OnNcActivate(BOOL bActive);
```

### Parameters

*bActive*<br/>
Specifies when a caption bar or icon needs to be changed to indicate an active or inactive state. The *bActive* parameter is TRUE if an active caption or icon is to be drawn. It is FALSE for an inactive caption or icon.

### Return Value

Nonzero if Windows should proceed with default processing; 0 to prevent the caption bar or icon from being deactivated.

### Remarks

The default implementation draws the title bar and title-bar text in their active colors if *bActive* is TRUE and in their inactive colors if *bActive* is FALSE.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onnccalcsize"></a> CWnd::OnNcCalcSize

The framework calls this member function when the size and position of the client area needs to be calculated.

```
afx_msg void OnNcCalcSize(
    BOOL bCalcValidRects,
    NCCALCSIZE_PARAMS* lpncsp);
```

### Parameters

*bCalcValidRects*<br/>
Specifies whether the application should specify which part of the client area contains valid information. Windows will copy the valid information to the specified area within the new client area. If this parameter is TRUE, the application should specify which part of the client area is valid.

*lpncsp*<br/>
Points to a [NCCALCSIZE_PARAMS](/windows/win32/api/winuser/ns-winuser-nccalcsize_params) data structure that contains information an application can use to calculate the new size and position of the `CWnd` rectangle (including client area, borders, caption, scroll bars, and so on).

### Remarks

By processing this message, an application can control the contents of the window's client area when the size or position of the window changes.

Regardless of the value of *bCalcValidRects*, the first rectangle in the array specified by the `rgrc` structure member of the `NCCALCSIZE_PARAMS` structure contains the coordinates of the window. For a child window, the coordinates are relative to the parent window's client area. For top-level windows, the coordinates are screen coordinates. An application should modify the `rgrc[0]` rectangle to reflect the size and position of the client area.

The `rgrc[1]` and `rgrc[2]` rectangles are valid only if *bCalcValidRects* is TRUE. In this case, the `rgrc[1]` rectangle contains the coordinates of the window before it was moved or resized. The `rgrc[2]` rectangle contains the coordinates of the window's client area before the window was moved. All coordinates are relative to the parent window or screen.

The default implementation calculates the size of the client area based on the window characteristics (presence of scroll bars, menu, and so on), and places the result in *lpncsp*.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onnccreate"></a> CWnd::OnNcCreate

The framework calls this member function prior to the [WM_CREATE](#oncreate) message when the `CWnd` object is first created.

```
afx_msg BOOL OnNcCreate(LPCREATESTRUCT lpCreateStruct);
```

### Parameters

*lpCreateStruct*<br/>
Points to the [CREATESTRUCT](/windows/win32/api/winuser/ns-winuser-createstructw) data structure for `CWnd`.

### Return Value

Nonzero if the nonclient area is created. It is 0 if an error occurs; the `Create` function will return **failure** in this case.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncdestroy"></a> CWnd::OnNcDestroy

Called by the framework when the nonclient area is being destroyed, and is the last member function called when the Windows window is destroyed.

```
afx_msg void OnNcDestroy();
```

### Remarks

The default implementation performs some cleanup, then calls the virtual member function [PostNcDestroy](#postncdestroy).

Override `PostNcDestroy` if you want to perform your own cleanup, such as a **delete this** operation. If you override `OnNcDestroy`, you must call `OnNcDestroy` in your base class to ensure that any memory internally allocated for the window is freed.

## <a name="onnchittest"></a> CWnd::OnNcHitTest

The framework calls this member function for the `CWnd` object that contains the cursor (or the `CWnd` object that used the [SetCapture](#setcapture) member function to capture the mouse input) every time the mouse is moved.

```
afx_msg LRESULT OnNcHitTest(CPoint point);
```

### Parameters

*point*<br/>
Contains the x- and y-coordinates of the cursor. These coordinates are always screen coordinates.

### Return Value

One of the mouse hit-test enumerated values. See [WM_NCHITTEST](/windows/win32/inputdev/wm-nchittest) for the list of values.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onnclbuttondblclk"></a> CWnd::OnNcLButtonDblClk

The framework calls this member function when the user double-clicks the left mouse button while the cursor is within a nonclient area of `CWnd`.

```
afx_msg void OnNcLButtonDblClk(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*<br/>
Specifies the [hit-test code](#onnchittest). A hit test is a test that determines the location of the cursor. See [WM_NCHITTEST](/windows/win32/inputdev/wm-nchittest) for the list of values.

*point*<br/>
Specifies a `CPoint` object that contains the x and y screen coordinates of the cursor position. These coordinates are always relative to the upper-left corner of the screen.

### Remarks

If appropriate, the [WM_SYSCOMMAND](#onsyscommand) message is sent.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onnclbuttondown"></a> CWnd::OnNcLButtonDown

The framework calls this member function when the user presses the left mouse button while the cursor is within a nonclient area of the `CWnd` object.

```
afx_msg void OnNcLButtonDown(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*<br/>
Specifies the [hit-test code](#onnchittest). A hit test is a test that determines the location of the cursor. See [WM_NCHITTEST](/windows/win32/inputdev/wm-nchittest) for the list of values.

*point*<br/>
Specifies a `CPoint` object that contains the x and y screen coordinates of the cursor position. These coordinates are always relative to the upper-left corner of the screen.

### Remarks

If appropriate, the [WM_SYSCOMMAND](#onsyscommand) is sent.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received.If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onnclbuttonup"></a> CWnd::OnNcLButtonUp

The framework calls this member function when the user releases the left mouse button while the cursor is within a nonclient area.

```
afx_msg void OnNcLButtonUp(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*<br/>
Specifies the [hit-test code](#onnchittest). A hit test is a test that determines the location of the cursor. See [WM_NCHITTEST](/windows/win32/inputdev/wm-nchittest) for the list of values.

*point*<br/>
Specifies a `CPoint` object that contains the x and y screen coordinates of the cursor position. These coordinates are always relative to the upper-left corner of the screen.

### Remarks

If appropriate, [WM_SYSCOMMAND](#onsyscommand) is sent.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncmbuttondblclk"></a> CWnd::OnNcMButtonDblClk

The framework calls this member function when the user double-clicks the middle mouse button while the cursor is within a nonclient area.

```
afx_msg void OnNcMButtonDblClk(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*<br/>
Specifies the [hit-test code](#onnchittest). A hit test is a test that determines the location of the cursor.

*point*<br/>
Specifies a `CPoint` object that contains the x and y screen coordinates of the cursor position. These coordinates are always relative to the upper-left corner of the screen.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncmbuttondown"></a> CWnd::OnNcMButtonDown

The framework calls this member function when the user presses the middle mouse button while the cursor is within a nonclient area.

```
afx_msg void OnNcMButtonDown(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*<br/>
Specifies the [hit-test code](#onnchittest). A hit test is a test that determines the location of the cursor.

*point*<br/>
Specifies a `CPoint` object that contains the x and y screen coordinates of the cursor position. These coordinates are always relative to the upper-left corner of the screen.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncmbuttonup"></a> CWnd::OnNcMButtonUp

The framework calls this member function when the user releases the middle mouse button while the cursor is within a nonclient area.

```
afx_msg void OnNcMButtonUp(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*<br/>
Specifies the [hit-test code](#onnchittest). A hit test is a test that determines the location of the cursor.

*point*<br/>
Specifies a `CPoint` object that contains the x and y screen coordinates of the cursor position. These coordinates are always relative to the upper-left corner of the screen.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncmousehover"></a> CWnd::OnNcMouseHover

The framework calls this member function when the cursor hovers over the nonclient area of the window for the period of time specified in a prior call to [TrackMouseEvent](/windows/win32/api/winuser/nf-winuser-trackmouseevent).

```
afx_msg void OnNcMouseHover(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*\
[in] The hit-test value returned by the [CWnd::DefWindowProc](#defwindowproc) function as a result of processing the [WM_NCHITTEST](/windows/win32/inputdev/wm-nchittest) message.

*point*\
[in] A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that specifies the *x* and *y* coordinates of the cursor relative to the upper-left corner of the screen.

### Remarks

This method receives the [WM_NCMOUSEHOVER](/windows/win32/inputdev/wm-ncmousehover) notification, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncmouseleave"></a> CWnd::OnNcMouseLeave

The framework calls this member function when the cursor leaves the nonclient area of the window specified in a prior call to [TrackMouseEvent](/windows/win32/api/winuser/nf-winuser-trackmouseevent).

```
afx_msg void OnNcMouseLeave();
```

### Remarks

This method receives the [WM_NCMOUSELEAVE](/windows/win32/inputdev/wm-ncmouseleave) notification, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncmousemove"></a> CWnd::OnNcMouseMove

The framework calls this member function when the cursor is moved within a nonclient area.

```
afx_msg void OnNcMouseMove(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*<br/>
Specifies the [hit-test code](#onnchittest). A hit test is a test that determines the location of the cursor.

*point*<br/>
Specifies a `CPoint` object that contains the x and y screen coordinates of the cursor position. These coordinates are always relative to the upper-left corner of the screen.

### Remarks

If appropriate, the [WM_SYSCOMMAND](#onsyscommand) message is sent.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncpaint"></a> CWnd::OnNcPaint

The framework calls this member function when the nonclient area needs to be painted.

```
afx_msg void OnNcPaint();
```

### Remarks

The default implementation paints the window frame.

An application can override this call and paint its own custom window frame. The clipping region is always rectangular, even if the shape of the frame is altered.

## <a name="onncrbuttondblclk"></a> CWnd::OnNcRButtonDblClk

The framework calls this member function when the user double-clicks the right mouse button while the cursor is within a nonclient area of `CWnd`.

```
afx_msg void OnNcRButtonDblClk(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*<br/>
Specifies the [hit-test code](#onnchittest). A hit test is a test that determines the location of the cursor.

*point*<br/>
Specifies a `CPoint` object that contains the x and y screen coordinates of the cursor position. These coordinates are always relative to the upper-left corner of the screen.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncrbuttondown"></a> CWnd::OnNcRButtonDown

The framework calls this member function when the user presses the right mouse button while the cursor is within a nonclient area.

```
afx_msg void OnNcRButtonDown(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*<br/>
Specifies the [hit-test code](#onnchittest). A hit test is a test that determines the location of the cursor.

*point*<br/>
Specifies a `CPoint` object that contains the x and y screen coordinates of the cursor position. These coordinates are always relative to the upper-left corner of the screen.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncrbuttonup"></a> CWnd::OnNcRButtonUp

The framework calls this member function when the user releases the right mouse button while the cursor is within a nonclient area.

```
afx_msg void OnNcRButtonUp(
    UINT nHitTest,
    CPoint point);
```

### Parameters

*nHitTest*<br/>
Specifies the [hit-test code](#onnchittest). A hit test is a test that determines the location of the cursor.

*point*<br/>
Specifies a `CPoint` object that contains the x and y screen coordinates of the cursor position. These coordinates are always relative to the upper-left corner of the screen.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncrenderingchanged"></a> CWnd::OnNcRenderingChanged

The framework calls this member when the rendering policy for the nonclient area has changed.

```
afx_msg void OnNcRenderingChanged(BOOL bIsRendering);
```

### Parameters

*bIsRendering*\
[in] TRUE if Desktop Window Manager (DWM) rendering is enabled for the nonclient area of the window; FALSE if rendering is disabled.

### Remarks

This method receives the [WM_DWMNCRENDERINGCHANGED](/windows/win32/dwm/wm-dwmncrenderingchanged) notification, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncxbuttondblclk"></a> CWnd::OnNcXButtonDblClk

The framework calls this member function when the user double-clicks XBUTTON1 or XBUTTON2 while the cursor is in the nonclient area of a window.

```cpp
void OnNcXButtonDblClk(
    short nHitTest,
    UINT nButton,
    CPoint point);
```

### Parameters

*nHitTest*\
[in] The hit-test value returned by the [CWnd::DefWindowProc](#defwindowproc) function as a result of processing the [WM_NCHITTEST](/windows/win32/inputdev/wm-nchittest) message.

*nButton*\
[in] A value of XBUTTON1 if the first Microsoft Intellimouse X button is double-clicked, or XBUTTON2 if the second X button is double-clicked.

*point*\
[in] A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that specifies the *x* and *y* coordinates of the cursor relative to the upper-left corner of the client area.

### Remarks

This method receives the [WM_XBUTTONDBLCLK](/windows/win32/inputdev/wm-xbuttondblclk) notification, which is described in the Windows SDK. This message is posted to the window that contains the cursor. If a window has captured the mouse, this message is not posted.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncxbuttondown"></a> CWnd::OnNcXButtonDown

The framework calls this member function when the user presses XBUTTON1 or XBUTTON2 of the mouse while the cursor is in the nonclient area of a window.

```
afx_msg void OnNcXButtonDown(
    short nHitTest,
    UINT nButton,
    CPoint point);
```

### Parameters

*nHitTest*\
[in] The hit-test value returned by the [CWnd::DefWindowProc](#defwindowproc) function as a result of processing the [WM_NCHITTEST](/windows/win32/inputdev/wm-nchittest) message.

*nButton*\
[in] A value of XBUTTON1 if the first mouse X button is pressed, or XBUTTON2 if the second X button is pressed.

*point*\
[in] A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that specifies the *x* and *y* coordinates of the cursor relative to the upper-left corner of the screen.

### Remarks

This method receives the [WM_NCXBUTTONDOWN](/windows/win32/inputdev/wm-ncxbuttondown) notification, which is described in the Windows SDK. This message is posted to the window that contains the cursor. If a window has captured the mouse, this message is not posted.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onncxbuttonup"></a> CWnd::OnNcXButtonUp

The framework calls this member function when the user releases XBUTTON1 or XBUTTON2 of the mouse while the cursor is in the nonclient area of a window.

```
afx_msg void OnNcXButtonUp(
    short nHitTest,
    UINT nButton,
    CPoint point);
```

### Parameters

*nHitTest*\
[in] The hit-test value returned by the [CWnd::DefWindowProc](#defwindowproc) function as a result of processing the [WM_NCHITTEST](/windows/win32/inputdev/wm-nchittest) message.

*nButton*\
[in] A value of XBUTTON1 if the first mouse X button is released, or XBUTTON2 if the second X button is released.

*point*\
[in] A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that specifies the *x* and *y* coordinates of the cursor relative to the upper-left corner of the screen.

### Remarks

This method receives the [WM_NCXBUTTONUP](/windows/win32/inputdev/wm-ncxbuttonup) notification, which is described in the Windows SDK. This message is posted to the window that contains the cursor. If a window has captured the mouse, this message is not posted.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onnextmenu"></a> CWnd::OnNextMenu

The framework calls this member function when the right or left arrow key is used to switch between the menu bar and the system menu.

```
afx_msg void OnNextMenu(
    UINT nKey,
    LPMDINEXTMENU lpMdiNextMenu);
```

### Parameters

*nKey*\
[in] A bitwise combination (OR) of flags that indicate which modifier keys are pressed. For example, the MK_CONTROL flag indicates that the CTRL key is pressed. For a list of flags, see the "Message Parameters" subheading in [About Mouse Input](/windows/win32/inputdev/about-mouse-input).

*lpMdiNextMenu*\
[in] Pointer to a [MDINEXTMENU](/windows/win32/api/winuser/ns-winuser-mdinextmenu) structure that contains information about the menu to be activated.

### Remarks

This method receives the [WM_UNINITMENUPOPUP](/windows/win32/menurc/wm-uninitmenupopup) notification, which is described in the Windows SDK. In response to this message, your application can set the `hmenuNext` member of the [MDINEXTMENU](/windows/win32/api/winuser/ns-winuser-mdinextmenu) structure to specify the menu to switch to, and the `hwndNext` member to specify the window to receive menu notification messages.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onnotify"></a> CWnd::OnNotify

The framework calls this member function to inform the parent window of a control that an event has occurred in the control or that the control requires some kind of information.

```
virtual BOOL OnNotify(
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* pResult);
```

### Parameters

*wParam*<br/>
Identifies the control that sends the message if the message is from a control. Otherwise, *wParam* is 0.

*lParam*<br/>
Pointer to a notification message (`NMHDR`) structure that contains the notification code and additional information. For some notification messages, this parameter points to a larger structure that has the `NMHDR` structure as its first member.

*pResult*<br/>
Pointer to an LRESULT variable in which to store the result code if the message is handled.

### Return Value

An application returns nonzero if it processes this message; otherwise 0.

### Remarks

`OnNotify` processes the message map for control notification.

Override this member function in your derived class to handle the WM_NOTIFY message. An override will not process the message map unless the base class `OnNotify` is called.

For more information on the WM_NOTIFY message, see Technical Note 61 (TN061), [ON_NOTIFY and WM_NOTIFY messages](../../mfc/tn061-on-notify-and-wm-notify-messages.md). You may also be interested the related topics described in [Control Topics](../../mfc/controls-mfc.md), and TN062, [Message Reflection for Windows Controls](../../mfc/tn062-message-reflection-for-windows-controls.md).

## <a name="onnotifyformat"></a> CWnd::OnNotifyFormat

The framework calls this member function to determine if the current window accepts ANSI or Unicode structures in the WM_NOTIFY notification message.

```
afx_msg UINT OnNotifyFormat(
    CWnd* pWnd,
    UINT nCommand);
```

### Parameters

*pWnd*\
[in] A pointer to a `CWnd` object that represents the window sending the [WM_NOTIFY](/windows/win32/controls/wm-notify) message. This parameter is the pointer to a control if the *nCommand* parameter is `NF_QUERY`, or the pointer to the parent window of a control if *nCommand* is `NF_REQUERY`.

*nCommand*\
[in] A command value that specializes the WM_NOTIFY message. The possible values are:

- `NF_QUERY` - The message is a query to determine whether ANSI or Unicode structures should be used in WM_NOTIFY messages. This message is sent from a control to its parent window during the creation of a control, and in response to the `NF_REQUERY` form of this message.
- `NF_REQUERY` - The message is a request for a control to send the `NF_QUERY` form of this message to its parent window. This request is sent from the parent window, and asks the control to requery the parent about the type of structure to use in WM_NOTIFY messages. If the *nCommand* parameter is `NF_REQUERY`, the return value is the result of the requery operation.

### Return Value

|Return value|Meaning|
|------------------|-------------|
|NFR_ANSI|ANSI structures should be used in WM_NOTIFY messages sent by the control.|
|NFR_UNICODE|Unicode structures should be used in WM_NOTIFY messages sent by the control.|
|0|An error occurred.|

### Remarks

This method receives the [WM_NOTIFYFORMAT](/windows/win32/Controls/wm-notifyformat) notification, which is described in the Windows SDK. WM_NOTIFY messages are sent from a common control to its parent window, and from the parent window to the common control.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onpaint"></a> CWnd::OnPaint

The framework calls this member function when Windows or an application makes a request to repaint a portion of an application's window.

```
afx_msg void OnPaint();
```

### Remarks

The [WM_PAINT](/windows/win32/gdi/the-wm-paint-message) message is sent when the [UpdateWindow](#updatewindow) or [RedrawWindow](#redrawwindow) member function is called.

A window may receive internal paint messages as a result of calling the `RedrawWindow` member function with the RDW_INTERNALPAINT flag set. In this case, the window may not have an update region. An application should call the [GetUpdateRect](#getupdaterect) member function to determine whether the window has an update region. If `GetUpdateRect` returns 0, the application should not call the [BeginPaint](#beginpaint) and [EndPaint](#endpaint) member functions.

It is an application's responsibility to check for any necessary internal repainting or updating by looking at its internal data structures for each WM_PAINT message because a WM_PAINT message may have been caused by both an invalid area and a call to the `RedrawWindow` member function with the RDW_INTERNALPAINT flag set.

An internal WM_PAINT message is sent only once by Windows. After an internal WM_PAINT message is sent to a window by the `UpdateWindow` member function, no further WM_PAINT messages will be sent or posted until the window is invalidated or until the `RedrawWindow` member function is called again with the RDW_INTERNALPAINT flag set.

For information on rendering an image in document/view applications, see [CView::OnDraw](../../mfc/reference/cview-class.md#ondraw).

For more information about using `WM_Paint`, see the following topics in the Windows SDK:

- [The WM_PAINT Message](/windows/win32/gdi/the-wm-paint-message)

- [Using the WM_PAINT Message](/windows/win32/gdi/using-the-wm-paint-message)

## <a name="onpaintclipboard"></a> CWnd::OnPaintClipboard

A Clipboard owner's `OnPaintClipboard` member function is called by a Clipboard viewer when the Clipboard owner has placed data on the Clipboard in the CF_OWNERDISPLAY format and the Clipboard viewer's client area needs repainting.

```
afx_msg void OnPaintClipboard(
    CWnd* pClipAppWnd,
    HGLOBAL hPaintStruct);
```

### Parameters

*pClipAppWnd*<br/>
Specifies a pointer to the Clipboard-application window. The pointer may be temporary and should not be stored for later use.

*hPaintStruct*<br/>
Identifies a [PAINTSTRUCT](/windows/win32/api/winuser/ns-winuser-paintstruct) data structure that defines what part of the client area to paint.

### Remarks

To determine whether the entire client area or just a portion of it needs repainting, the Clipboard owner must compare the dimensions of the drawing area given in the `rcpaint` member of the `PAINTSTRUCT` structure to the dimensions given in the most recent [OnSizeClipboard](#onsizeclipboard) member function call.

`OnPaintClipboard` should use the [GlobalLock](/windows/win32/api/winbase/nf-winbase-globallock) Windows function to lock the memory that contains the `PAINTSTRUCT` data structure and unlock that memory with the [GlobalUnlock](/windows/win32/api/winbase/nf-winbase-globalunlock) Windows function before it exits.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onpalettechanged"></a> CWnd::OnPaletteChanged

The framework calls this member function for all top-level windows after the window with input focus has realized its logical palette, thereby changing the system palette.

```
afx_msg void OnPaletteChanged(CWnd* pFocusWnd);
```

### Parameters

*pFocusWnd*<br/>
Specifies a pointer to the window that caused the system palette to change. The pointer may be temporary and should not be stored.

### Remarks

This call allows a window without the input focus that uses a color palette to realize its logical palettes and update its client area.

The `OnPaletteChanged` member function is called for all top-level and overlapped windows, including the one that changed the system palette and caused the WM_PALETTECHANGED message to be sent. If any child window uses a color palette, this message must be passed on to it.

To avoid an infinite loop, the window shouldn't realize its palette unless it determines that *pFocusWnd* does not contain a pointer to itself.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onpaletteischanging"></a> CWnd::OnPaletteIsChanging

The framework calls this member function to inform applications that an application is going to realize its logical palette.

```
afx_msg void OnPaletteIsChanging(CWnd* pRealizeWnd);
```

### Parameters

*pRealizeWnd*<br/>
Specifies the window that is about to realize its logical palette.

### Remarks

This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onparentnotify"></a> CWnd::OnParentNotify

A parent's `OnParentNotify` member function is called by the framework when its child window is created or destroyed, or when the user clicks a mouse button while the cursor is over the child window.

```
afx_msg void OnParentNotify(
    UINT message,
    LPARAM lParam);
```

### Parameters

*message*<br/>
Specifies the event for which the parent is being notified and the identifier of the child window. The event is the low-order word of *message*. If the event is WM_CREATE or WM_DESTROY, the high-order word of *message* is the identifier of the child window; otherwise, the high-order word is undefined. The event (low-order word of *message*) can be any of these values:

- WM_CREATE The child window is being created.

- WM_DESTROY The child window is being destroyed.

- WM_LBUTTONDOWN The user has placed the mouse cursor over the child window and clicked the left mouse button.

- WM_MBUTTONDOWN The user has placed the mouse cursor over the child window and clicked the middle mouse button.

- WM_RBUTTONDOWN The user has placed the mouse cursor over the child window and clicked the right mouse button.

*lParam*<br/>
If the event (low-order word) of *message* is WM_CREATE or WM_DESTROY, *lParam* specifies the window handle of the child window; otherwise *lParam* contains the x and y coordinates of the cursor. The x coordinate is in the low-order word and the y coordinate is in the high-order word.

### Remarks

When the child window is being created, the system calls `OnParentNotify` just before the [Create](#create) member function that creates the window returns. When the child window is being destroyed, the system calls `OnParentNotify` before any processing takes place to destroy the window.

`OnParentNotify` is called for all ancestor windows of the child window, including the top-level window.

All child windows except those that have the [WS_EX_NOPARENTNOTIFY](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) style send this message to their parent windows. By default, child windows in a dialog box have the WS_EX_NOPARENTNOTIFY style unless the child window was created without this style by calling the [CreateEx](#createex) member function.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onpowerbroadcast"></a> CWnd::OnPowerBroadcast

The framework calls this member function when a power-management event occurs.

```
afx_msg UINT OnPowerBroadcast(
    UINT nPowerEvent,
    UINT nEventData);
```

### Parameters

*nPowerEvent*\
[in] The power-management event.

*nEventData*\
[in] Event-specific data.

### Return Value

If the event is a request, return TRUE to grant the request, or BROADCAST_QUERY_DENY to deny the request.

### Remarks

This method receives the [WM_POWERBROADCAST](/windows/win32/Power/wm-powerbroadcast) message, which is described in the Windows SDK.

The *nPowerEvent* parameter specifies events such as battery power is low, the power status has changed, permission to suspend operation is requested or denied, an operation is resuming automatically after an event, the system is suspending operation, or an operation is resuming after suspension. The *nEventData* parameter is typically not used. For more information, see the *wParam* and *lParam* parameters of the [WM_POWERBROADCAST](/windows/win32/Power/wm-powerbroadcast) message.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onquerydragicon"></a> CWnd::OnQueryDragIcon

The framework calls this member function by a minimized (iconic) window that does not have an icon defined for its class.

```
afx_msg HCURSOR OnQueryDragIcon();
```

### Return Value

A doubleword value that contains a cursor or icon handle in the low-order word. The cursor or icon must be compatible with the display driver's resolution. If the application returns NULL, the system displays the default cursor. The default return value is NULL.

### Remarks

The system makes this call to obtain the cursor to display while the user drags the minimized window. If an application returns the handle of an icon or cursor, the system converts it to black-and-white. If an application returns a handle, the handle must identify a monochrome cursor or icon compatible with the display driver's resolution. The application can call the [CWinApp::LoadCursor](../../mfc/reference/cwinapp-class.md#loadcursor) or [CWinApp::LoadIcon](../../mfc/reference/cwinapp-class.md#loadicon) member functions to load a cursor or icon from the resources in its executable file and to obtain this handle.

## <a name="onqueryendsession"></a> CWnd::OnQueryEndSession

The framework calls this member function when the user chooses to end the Windows session or when an application calls the [ExitWindows](/windows/win32/api/winuser/nf-winuser-exitwindows) Windows function.

```
afx_msg BOOL OnQueryEndSession();
```

### Return Value

Nonzero if an application can be conveniently shut down; otherwise 0.

### Remarks

If any application returns 0, the Windows session is not ended. Windows stops calling `OnQueryEndSession` as soon as one application returns 0 and sends the [WM_ENDSESSION](#onendsession) message with a parameter value of FALSE for any application that has already returned nonzero.

## <a name="onquerynewpalette"></a> CWnd::OnQueryNewPalette

The framework calls this member function when the `CWnd` object is about to receive the input focus, giving the `CWnd` an opportunity to realize its logical palette when it receives the focus.

```
afx_msg BOOL OnQueryNewPalette();
```

### Return Value

Nonzero if the `CWnd` realizes its logical palette; otherwise 0.

## <a name="onqueryopen"></a> CWnd::OnQueryOpen

The framework calls this member function when the `CWnd` object is minimized and the user requests that the `CWnd` be restored to its preminimized size and position.

```
afx_msg BOOL OnQueryOpen();
```

### Return Value

Nonzero if the icon can be opened, or 0 to prevent the icon from being opened.

### Remarks

While in `OnQueryOpen`, `CWnd` should not perform any action that would cause an activation or focus change (for example, creating a dialog box).

## <a name="onqueryuistate"></a> CWnd::OnQueryUIState

Called to retrieve the user interface (UI) state for a window.

```
afx_msg UINT OnQueryUIState();
```

### Return Value

The return value is NULL if the focus indicators and the keyboard accelerators are visible. Otherwise, the return value can be one or more of the following values:

- UISF_HIDEFOCUS Focus indicators are hidden.

- UISF_HIDEACCEL Keyboard accelerators are hidden.

- UISF_ACTIVE Windows XP: A control should be drawn in the style used for active controls.

### Remarks

This member function emulates the functionality of the [WM_QUERYUISTATE](/windows/win32/menurc/wm-queryuistate) message, as described in the Windows SDK.

## <a name="onrawinput"></a> CWnd::OnRawInput

The framework calls this member function when the current window gets raw input.

```
afx_msg void OnRawInput(
    UINT nInputCode,
    HRAWINPUT hRawInput);
```

### Parameters

*nInputCode*\
[in] Input code that indicates whether the input occurred while the application was in the foreground or not. In either case, the application must call [CWnd::DefWindowProc](#defwindowproc) so the system can perform cleanup. This parameter can be one of the following values:

- `RIM_INPUT` - Input occurred while the application was in the foreground.
- `RIM_INPUTSINK` - Input occurred while the application was not in the foreground.

*hRawInput*\
[in] Handle to a [RAWINPUT](/windows/win32/api/winuser/ns-winuser-rawinput) structure that contains the raw input from the device.

### Remarks

This method receives the [WM_INPUT](/windows/win32/inputdev/wm-appcommand) notification, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onrbuttondblclk"></a> CWnd::OnRButtonDblClk

The framework calls this member function when the user double-clicks the right mouse button.

```
afx_msg void OnRButtonDblClk(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if CTRL key is down.

- MK_LBUTTON Set if left mouse button is down.

- MK_MBUTTON Set if middle mouse button is down.

- MK_RBUTTON Set if right mouse button is down.

- MK_SHIFT Set if SHIFT key is down.

*point*<br/>
Specifies the x and y coordinates of the cursor. These coordinates are always relative to the upper-left corner of the window.

### Remarks

Only windows that have the CS_DBLCLKS [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) style can receive `OnRButtonDblClk` calls. This is the default for windows within the Microsoft Foundation Class Library. Windows calls `OnRButtonDblClk` when the user presses, releases, and then again presses the right mouse button within the system's double-click time limit. Double-clicking the right mouse button actually generates four events: [WM_RBUTTONDOWN](#onrbuttondown) and [WM_RBUTTONUP](#onrbuttonup) messages, the `OnRButtonDblClk` call, and another WM_RBUTTONUP message when the button is released.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onrbuttondown"></a> CWnd::OnRButtonDown

The framework calls this member function when the user presses the right mouse button.

```
afx_msg void OnRButtonDown(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if CTRL key is down.

- MK_LBUTTON Set if left mouse button is down.

- MK_MBUTTON Set if middle mouse button is down.

- MK_RBUTTON Set if right mouse button is down.

- MK_SHIFT Set if SHIFT key is down.

*point*<br/>
Specifies the x and y coordinates of the cursor. These coordinates are always relative to the upper-left corner of the window.

### Remarks

This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onrbuttonup"></a> CWnd::OnRButtonUp

The framework calls this member function when the user releases the right mouse button.

```
afx_msg void OnRButtonUp(
    UINT nFlags,
    CPoint point);
```

### Parameters

*nFlags*<br/>
Indicates whether various virtual keys are down. This parameter can be any combination of the following values:

- MK_CONTROL Set if CTRL key is down.

- MK_LBUTTON Set if left mouse button is down.

- MK_MBUTTON Set if middle mouse button is down.

- MK_SHIFT Set if SHIFT key is down.

*point*<br/>
Specifies the x and y coordinates of the cursor. These coordinates are always relative to the upper-left corner of the window.

### Remarks

This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onregisteredmousewheel"></a> CWnd::OnRegisteredMouseWheel

The framework calls this member function as a user rotates the mouse wheel and encounters the wheel's next notch.

```
afx_msg LRESULT OnRegisteredMouseWheel(
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*wParam*<br/>
Horizontal position of the pointer.

*lParam*<br/>
Vertical position of the pointer.

### Return Value

Insignificant at this time. Always zero.

### Remarks

Unless overridden, `OnRegisteredMouseWheel` routes the message to the appropriate window (the parent window with focus), and calls the [WM_MOUSEWHEEL](/windows/win32/inputdev/wm-mousewheel) handler for that window.

Override this member function to provide your own message routing or to alter the mouse-wheel scrolling behavior.

> [!NOTE]
> `OnRegisteredMouseWheel` handles messages for Windows 95/98 and Windows NT 3.51. For Windows NT 4.0 message handling, use [OnMouseWheel](#onmousewheel).

## <a name="onrenderallformats"></a> CWnd::OnRenderAllFormats

The Clipboard owner's `OnRenderAllFormats` member function is called by the framework when the owner application is being destroyed.

```
afx_msg void OnRenderAllFormats();
```

### Remarks

The Clipboard owner should render the data in all the formats it is capable of generating and pass a data handle for each format to the Clipboard by calling the [SetClipboardData](/windows/win32/api/winuser/nf-winuser-setclipboarddata) Windows function. This ensures that the Clipboard contains valid data even though the application that rendered the data is destroyed. The application should call the [OpenClipboard](#openclipboard) member function before calling the [SetClipboardData](/windows/win32/api/winuser/nf-winuser-setclipboarddata) Windows function and call the [CloseClipboard](/windows/win32/api/winuser/nf-winuser-closeclipboard) Windows function afterward.

## <a name="onrenderformat"></a> CWnd::OnRenderFormat

The Clipboard owner's `OnRenderFormat` member function is called by the framework when a particular format with delayed rendering needs to be rendered.

```
afx_msg void OnRenderFormat(UINT nFormat);
```

### Parameters

*nFormat*<br/>
Specifies the Clipboard format.

### Remarks

The receiver should render the data in that format and pass it to the Clipboard by calling the [SetClipboardData](/windows/win32/api/winuser/nf-winuser-setclipboarddata) Windows function.

Do not call the `OpenClipboard` member function or the `CloseClipboard` Windows function from within `OnRenderFormat`.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsessionchange"></a> CWnd::OnSessionChange

The framework calls this member function to notify an application of a change in session state.

```
afx_msg void OnSessionChange(
    UINT nSessionState,
    UINT nId);
```

### Parameters

*nSessionState*\
[in] A status code describes the session state change.

*nId*\
[in] A session identifier.

### Remarks

This method receives the [WM_WTSSESSION_CHANGE](/windows/win32/TermServ/wm-wtssession-change) notification, which is described in the Windows SDK.

The *nSessionState* parameter specifies that a session is connected or disconnected from the console or a remote terminal, a user logged on or off, a session is locked or unlocked, or a session has changed to remote-controlled status. For more information, see the *wParam* parameter of the [WM_WTSSESSION_CHANGE](/windows/win32/TermServ/wm-wtssession-change) message.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsetcursor"></a> CWnd::OnSetCursor

The framework calls this member function if mouse input is not captured and the mouse causes cursor movement within the `CWnd` object.

```
afx_msg BOOL OnSetCursor(
    CWnd* pWnd,
    UINT nHitTest,
    UINT message);
```

### Parameters

*pWnd*<br/>
Specifies a pointer to the window that contains the cursor. The pointer may be temporary and should not be stored for later use.

*nHitTest*<br/>
Specifies the [hit-test](#onnchittest) area code. The hit test determines the cursor's location.

*message*<br/>
Specifies the mouse message number.

### Return Value

Nonzero to halt further processing, or 0 to continue.

### Remarks

The default implementation calls the parent window's `OnSetCursor` before processing. If the parent window returns TRUE, further processing is halted. Calling the parent window gives the parent window control over the cursor's setting in a child window.

The default implementation sets the cursor to an arrow if it is not in the client area or to the registered-class cursor if it is.

If *nHitTest* is HTERROR and *message* is a mouse button-down message, the `MessageBeep` member function is called.

The *message* parameter is 0 when `CWnd` enters menu mode.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsetfocus"></a> CWnd::OnSetFocus

The framework calls this member function after gaining the input focus.

```
afx_msg void OnSetFocus(CWnd* pOldWnd);
```

### Parameters

*pOldWnd*<br/>
Contains the `CWnd` object that loses the input focus (may be NULL). The pointer may be temporary and should not be stored for later use.

### Remarks

To display a caret, `CWnd` should call the appropriate caret functions at this point.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsettingchange"></a> CWnd::OnSettingChange

The framework calls `OnSettingChange` for all top-level windows when the Win32 SystemParametersInfo function changes a system-wide setting.

```
afx_msg void OnSettingChange(
    UINT uFlags,
    LPCTSTR lpszSection);
```

### Parameters

*uFlags*<br/>
When the system sends the message as a result of a `SystemParametersInfo` call, this parameter is a flag that indicates the system parameter that was changed. For a list of values, see [SystemParametersInfo](/windows/win32/api/winuser/nf-winuser-systemparametersinfow) in the Windows SDK. When an application sends the message, this parameter must be 0.

*lpszSection*<br/>
Points to a string that specifies the name of the section that has changed. (The string does not include the square brackets that enclose the section name.)

### Remarks

An application should send the message to all top-level windows when it makes changes to system parameters, and Windows will send the message if the user changes settings via the Control Panel.

The ON_WM_SETTINGCHANGE message is similar to the ON_WM_WININICHANGE message, with the following difference:

- Use ON_WM_SETTINGCHANGE when running Windows NT 4.0 or newer, or under Windows 95/98.

- Use ON_WININICHANGE when running Windows NT 3.51 or older. This message is now obsolete.

You should have only one of these macros in your message map. To write a program that works for both Windows 95/98 and Windows NT 4.0, write a handler for ON_WM_SETTINGCHANGE. Under Windows NT 3.51, your handler will be called by `OnSettingChange` and *uFlags* and will always be zero.

## <a name="onshowwindow"></a> CWnd::OnShowWindow

The framework calls this member function when the `CWnd` object is about to be hidden or shown.

```
afx_msg void OnShowWindow(
    BOOL bShow,
    UINT nStatus);
```

### Parameters

*bShow*<br/>
Specifies whether a window is being shown. It is TRUE if the window is being shown; it is FALSE if the window is being hidden.

*nStatus*<br/>
Specifies the status of the window being shown. It is 0 if the message is sent because of a `ShowWindow` member function call; otherwise *nStatus* is one of the following:

- SW_PARENTCLOSING Parent window is closing (being made iconic) or a pop-up window is being hidden.

- SW_PARENTOPENING Parent window is opening (being displayed) or a pop-up window is being shown.

### Remarks

A window is hidden or shown when the `ShowWindow` member function is called, when an overlapped window is maximized or restored, or when an overlapped or pop-up window is closed (made iconic) or opened (displayed on the screen). When an overlapped window is closed, all pop-up windows associated with that window are hidden.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsize"></a> CWnd::OnSize

The framework calls this member function after the window's size has changed.

```
afx_msg void OnSize(
    UINT nType,
    int cx,
    int cy);
```

### Parameters

*nType*<br/>
Specifies the type of resizing requested. This parameter can be one of the following values:

- SIZE_MAXIMIZED Window has been maximized.

- SIZE_MINIMIZED Window has been minimized.

- SIZE_RESTORED Window has been resized, but neither SIZE_MINIMIZED nor SIZE_MAXIMIZED applies.

- SIZE_MAXHIDE Message is sent to all pop-up windows when some other window is maximized.

- SIZE_MAXSHOW Message is sent to all pop-up windows when some other window has been restored to its former size.

*cx*<br/>
Specifies the new width of the client area.

*cy*<br/>
Specifies the new height of the client area.

### Remarks

If the [SetScrollPos](#setscrollpos) or [MoveWindow](#movewindow) member function is called for a child window from `OnSize`, the `bRedraw` parameter of `SetScrollPos` or `MoveWindow` should be nonzero to cause the `CWnd` to be repainted.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

### Example

[!code-cpp[NVC_MFCWindowing#109](../../mfc/reference/codesnippet/cpp/cwnd-class_50.cpp)]

## <a name="onsizeclipboard"></a> CWnd::OnSizeClipboard

The Clipboard owner's `OnSizeClipboard` member function is called by the Clipboard viewer when the Clipboard contains data with the `CF_OWNERDISPLAY` attribute and the size of the client area of the Clipboard-viewer window has changed.

```
afx_msg void OnSizeClipboard(
    CWnd* pClipAppWnd,
    HGLOBAL hRect);
```

### Parameters

*pClipAppWnd*<br/>
Identifies the Clipboard-application window. The pointer may be temporary and should not be stored.

*hRect*<br/>
Identifies a global memory object. The memory object contains a RECT data structure that specifies the area for the Clipboard owner to paint.

### Remarks

The `OnSizeClipboard` member function is called with a null rectangle (0,0,0,0) as the new size when the Clipboard application is about to be destroyed or minimized. This permits the Clipboard owner to free its display resources.

Within `OnSizeClipboard`, an application must use the [GlobalLock](/windows/win32/api/winbase/nf-winbase-globallock) Windows function to lock the memory that contains the RECT data structure. Have the application unlock that memory with the [GlobalUnlock](/windows/win32/api/winbase/nf-winbase-globalunlock) Windows function before it yields or returns control.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsizing"></a> CWnd::OnSizing

The framework calls this member function to indicate that the user is resizing the rectangle.

```
afx_msg void OnSizing(
    UINT nSide,
    LPRECT lpRect);
```

### Parameters

*nSide*<br/>
The edge of window to be moved.

*lpRect*<br/>
Address of the [CRect](../../atl-mfc-shared/reference/crect-class.md) or [RECT structure](/windows/win32/api/windef/ns-windef-rect) that will contain the item's coordinates.

### Remarks

By processing this message, an application can monitor the size and position of the drag rectangle and, if needed, change its size or position.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

### Example

[!code-cpp[NVC_MFCWindowing#110](../../mfc/reference/codesnippet/cpp/cwnd-class_51.cpp)]

## <a name="onspoolerstatus"></a> CWnd::OnSpoolerStatus

The framework calls this member function from Print Manager whenever a job is added to or removed from the Print Manager queue.

```
afx_msg void OnSpoolerStatus(
    UINT nStatus,
    UINT nJobs);
```

### Parameters

*nStatus*<br/>
Specifies the SP_JOBSTATUS flag.

*nJobs*<br/>
Specifies the number of jobs remaining in the Print Manager queue.

### Remarks

This call is for informational purposes only.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onstylechanged"></a> CWnd::OnStyleChanged

The framework calls this member function after the [SetWindowLong](/windows/win32/api/winuser/nf-winuser-setwindowlongw) function has changed one or more of the window's styles.

```
afx_msg void OnStyleChanged(
    int nStyleType,
    LPSTYLESTRUCT lpStyleStruct);
```

### Parameters

*nStyleType*<br/>
Specifies whether the window's extended or nonextended styles have changed. This parameter can be a combination of the following values:

- GWL_EXSTYLE The window's extended styles have changed.

- GWL_STYLE The window's nonextended styles have changed.

*lpStyleStruct*<br/>
Points to a [STYLESTRUCT](/windows/win32/api/winuser/ns-winuser-stylestruct) structure that contains the new styles for the window. An application can examine the styles, but it can not change them.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onstylechanging"></a> CWnd::OnStyleChanging

The framework calls this member function when the [SetWindowLong](/windows/win32/api/winuser/nf-winuser-setwindowlongw) function is about to change one or more of the window's styles.

```
afx_msg void OnStyleChanging(
    int nStyleType,
    LPSTYLESTRUCT lpStyleStruct);
```

### Parameters

*nStyleType*<br/>
Specifies whether the window's extended or nonextended styles have changed. This parameter can be a combination of the following values:

- GWL_EXSTYLE The window's extended styles have changed.

- GWL_STYLE The window's nonextended styles have changed.

*lpStyleStruct*<br/>
Points to a [STYLESTRUCT](/windows/win32/api/winuser/ns-winuser-stylestruct) structure that contains the new styles for the window. An application can examine the styles and change them.

### Remarks

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsyschar"></a> CWnd::OnSysChar

The framework calls this member function if `CWnd` has the input focus and the [WM_SYSKEYUP](#onsyskeyup) and [WM_SYSKEYDOWN](#onsyskeydown) messages are translated.

```
afx_msg void OnSysChar(
    UINT nChar,
    UINT nRepCnt,
    UINT nFlags);
```

### Parameters

*nChar*<br/>
Specifies the ASCII-character key code of a Control-menu key.

*nRepCnt*<br/>
Specifies the repeat count (the number of times the keystroke is repeated as a result of the user holding down the key).

*nFlags*<br/>
The *nFlags* parameter can have these values:

|Value|Meaning|
|-----------|-------------|
|0-15|Specifies the repeat count. The value is the number of times the keystroke is repeated as a result of the user holding down the key..|
|16-23|Specifies the scan code. The value depends on the original equipment manufacturer (OEM)|
|24|Specifies whether the key is an extended key, such as the right-hand ALT and CTRL keys that appear on an enhanced 101- or 102-key keyboard. The value is 1 if it is an extended key; otherwise, it is 0.|
|25-28|Used internally by Windows.|
|29|Specifies the context code. The value is 1 if the ALT key is held down while the key is pressed; otherwise, the value is 0.|
|30|Specifies the previous key state. The value is 1 if the key is down before the message is sent, or it is 0 if the key is up.|
|31|Specifies the transition state. The value is 1 if the key is being released, or it is 0 if the key is being pressed.|

### Remarks

It specifies the virtual key code of the Control-menu key. (For a list of standard virtual key codes, see Winuser.h)

When the context code is 0, WM_SYSCHAR can pass the [WM_SYSCHAR](/windows/win32/menurc/wm-syschar) message to the [TranslateAccelerator](/windows/win32/api/winuser/nf-winuser-translateacceleratorw) Windows function, which will handle it as though it were a normal key message instead of a system character-key. This allows accelerator keys to be used with the active window even if the active window does not have the input focus.

For IBM Enhanced 101- and 102-key keyboards, enhanced keys are the right ALT and the right CTRL keys on the main section of the keyboard; the INS, DEL, HOME, END, PAGE UP, PAGE DOWN, and arrow keys in the clusters to the left of the numeric keypad; and the slash (/) and ENTER keys in the numeric keypad. Some other keyboards may support the extended-key bit in *nFlags*.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsyscolorchange"></a> CWnd::OnSysColorChange

The framework calls this member function for all top-level windows when a change is made in the system color setting.

```
afx_msg void OnSysColorChange();
```

### Remarks

Windows calls `OnSysColorChange` for any window that is affected by a system color change.

Applications that have brushes that use the existing system colors should delete those brushes and re-create them with the new system colors.

## <a name="onsyscommand"></a> CWnd::OnSysCommand

The framework calls this member function when the user selects a command from the Control menu, or when the user selects the Maximize or the Minimize button.

```
afx_msg void OnSysCommand(
    UINT nID,
    LPARAM lParam);
```

### Parameters

*nID*<br/>
Specifies the type of system command requested. This parameter can be any one of the following values:

- SC_CLOSE Close the `CWnd` object.

- SC_HOTKEY Activate the `CWnd` object associated with the application-specified hot key. The low-order word of *lParam* identifies the HWND of the window to activate.

- SC_HSCROLL Scroll horizontally.

- SC_KEYMENU Retrieve a menu through a keystroke.

- SC_MAXIMIZE (or SC_ZOOM)   Maximize the `CWnd` object.

- SC_MINIMIZE (or SC_ICON)   Minimize the `CWnd` object.

- SC_MOUSEMENU Retrieve a menu through a mouse click.

- SC_MOVE Move the `CWnd` object.

- SC_NEXTWINDOW Move to the next window.

- SC_PREVWINDOW Move to the previous window.

- SC_RESTORE Restore window to normal position and size.

- SC_SCREENSAVE Executes the screen-saver application specified in the [boot] section of the SYSTEM.INI file.

- SC_SIZE Size the `CWnd` object.

- SC_TASKLIST Execute or activate the Windows Task Manager application.

- SC_VSCROLL Scroll vertically.

*lParam*<br/>
If a Control-menu command is chosen with the mouse, *lParam* contains the cursor coordinates. The low-order word contains the x coordinate, and the high-order word contains the y coordinate. Otherwise this parameter is not used.

- SC_HOTKEY Activate the window associated with the application-specified hot key. The low-order word of *lParam* identifies the window to activate.

- SC_SCREENSAVE Execute the screen-save application specified in the Desktop section of Control Panel.

### Remarks

By default, `OnSysCommand` carries out the Control-menu request for the predefined actions specified in the preceding table.

In WM_SYSCOMMAND messages, the four low-order bits of the *nID* parameter are used internally by Windows. When an application tests the value of *nID*, it must combine the value 0xFFF0 with the *nID* value by using the bitwise-AND operator to obtain the correct result.

The menu items in a Control menu can be modified with the `GetSystemMenu`, `AppendMenu`, `InsertMenu`, and `ModifyMenu` member functions. Applications that modify the Control menu must process WM_SYSCOMMAND messages, and any WM_SYSCOMMAND messages not handled by the application must be passed on to `OnSysCommand`. Any command values added by an application must be processed by the application and cannot be passed to `OnSysCommand`.

An application can carry out any system command at any time by passing a WM_SYSCOMMAND message to `OnSysCommand`.

Accelerator (shortcut) keystrokes that are defined to select items from the Control menu are translated into `OnSysCommand` calls; all other accelerator keystrokes are translated into [WM_COMMAND](#oncommand) messages.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsysdeadchar"></a> CWnd::OnSysDeadChar

The framework calls this member function if the `CWnd` object has the input focus when the [OnSysKeyUp](#onsyskeyup) or [OnSysKeyDown](#onsyskeydown) member function is called.

```
afx_msg void OnSysDeadChar(
    UINT nChar,
    UINT nRepCnt,
    UINT nFlags);
```

### Parameters

*nChar*<br/>
Specifies the dead-key character value.

*nRepCnt*<br/>
Specifies the repeat count.

*nFlags*<br/>
Specifies the scan code, key-transition code, previous key state, and context code, as shown in the following list:

|Value|Meaning|
|-----------|-------------|
|0-7|Scan code (OEM-dependent value). Low byte of high-order word.|
|8|Extended key, such as a function key or a key on the numeric keypad (1 if it is an extended key; otherwise 0).|
|9-10|Not used.|
|11-12|Used internally by Windows.|
|13|Context code (1 if the ALT key is held down while the key is pressed; otherwise 0).|
|14|Previous key state (1 if the key is down before the call, 0 if the key is up).|
|15|Transition state (1 if the key is being released, 0 if the key is being pressed).|

### Remarks

It specifies the character value of a dead key.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsyskeydown"></a> CWnd::OnSysKeyDown

If the `CWnd` object has the input focus, the `OnSysKeyDown` member function is called by the framework when the user holds down the ALT key and then presses another key.

```
afx_msg void OnSysKeyDown(
    UINT nChar,
    UINT nRepCnt,
    UINT nFlags);
```

### Parameters

*nChar*<br/>
Specifies the virtual key code of the key being pressed. For a list of standard virtual key codes, see Winuser.h

*nRepCnt*<br/>
Specifies the repeat count.

*nFlags*<br/>
Specifies the scan code, key-transition code, previous key state, and context code, as shown in the following list:

|Value|Meaning|
|-----------|-------------|
|0-7|Scan code (OEM-dependent value). Low byte of high-order word.|
|8|Extended key, such as a function key or a key on the numeric keypad (1 if it is an extended key; otherwise 0).|
|9-10|Not used.|
|11-12|Used internally by Windows.|
|13|Context code (1 if the ALT key is held down while the key is pressed, 0 otherwise).|
|14|Previous key state (1 if the key is down before the message is sent, 0 if the key is up).|
|15|Transition state (1 if the key is being released, 0 if the key is being pressed).|

For `OnSysKeyDown` calls, the key-transition bit (bit 15) is 0. The context-code bit (bit 13) is 1 if the ALT key is down while the key is pressed; it is 0 if the message is sent to the active window because no window has the input focus.

### Remarks

If no window currently has the input focus, the active window's `OnSysKeyDown` member function is called. The `CWnd` object that receives the message can distinguish between these two contexts by checking the context code in `nFlags`.

When the context code is 0, the WM_SYSKEYDOWN message received by `OnSysKeyDown` can be passed to the [TranslateAccelerator](/windows/win32/api/winuser/nf-winuser-translateacceleratorw) Windows function, which will handle it as though it were a normal key message instead of a system-key message. This allows accelerator keys to be used with the active window even if the active window does not have the input focus.

Because of auto-repeat, more than one `OnSysKeyDown` call may occur before the [WM_SYSKEYUP](#onsyskeyup) message is received. The previous key state (bit 14) can be used to determine whether the `OnSysKeyDown` call indicates the first down transition or a repeated down transition.

For IBM Enhanced 101- and 102-key keyboards, enhanced keys are the right ALT and the right CTRL keys on the main section of the keyboard; the INS, DEL, HOME, END, PAGE UP, PAGE DOWN, and arrow keys in the clusters to the left of the numeric keypad; and the slash (/) and ENTER keys in the numeric keypad. Some other keyboards may support the extended-key bit in *nFlags*.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onsyskeyup"></a> CWnd::OnSysKeyUp

If the `CWnd` object has the focus, the `OnSysKeyUp` member function is called by the framework when the user releases a key that was pressed while the ALT key was held down.

```
afx_msg void OnSysKeyUp(
    UINT nChar,
    UINT nRepCnt,
    UINT nFlags);
```

### Parameters

*nChar*<br/>
Specifies the virtual key code of the key being pressed. For a list of standard virtual key codes, see Winuser.h

*nRepCnt*<br/>
Specifies the repeat count.

*nFlags*<br/>
Specifies the scan code, key-transition code, previous key state, and context code, as shown in the following list:

|Value|Meaning|
|-----------|-------------|
|0-7|Scan code (OEM-dependent value). Low byte of high-order word.|
|8|Extended key, such as a function key or a key on the numeric keypad (1 if it is an extended key; otherwise 0).|
|9-10|Not used.|
|11-12|Used internally by Windows.|
|13|Context code (1 if the ALT key is held down while the key is pressed, 0 otherwise).|
|14|Previous key state (1 if the key is down before the message is sent, 0 if the key is up).|
|15|Transition state (1 if the key is being released, 0 if the key is being pressed).|

For `OnSysKeyUp` calls, the key-transition bit (bit 15) is 1. The context-code bit (bit 13) is 1 if the ALT key is down while the key is pressed; it is 0 if the message is sent to the active window because no window has the input focus.

### Remarks

If no window currently has the input focus, the active window's `OnSysKeyUp` member function is called. The `CWnd` object that receives the call can distinguish between these two contexts by checking the context code in *nFlags*.

When the context code is 0, the WM_SYSKEYUP message received by `OnSysKeyUp` can be passed to the [TranslateAccelerator](/windows/win32/api/winuser/nf-winuser-translateacceleratorw) Windows function, which will handle it as though it were a normal key message instead of a system-key message. This allows accelerator (shortcut) keys to be used with the active window even if the active window does not have the input focus.

For IBM Enhanced 101- and 102-key keyboards, enhanced keys are the right ALT and the right CTRL keys on the main section of the keyboard; the INS, DEL, HOME, END, PAGE UP, PAGE DOWN, and arrow keys in the clusters to the left of the numeric keypad; and the slash (/) and ENTER keys in the numeric keypad. Some other keyboards may support the extended-key bit in *nFlags*.

For non-U.S. Enhanced 102-key keyboards, the right ALT key is handled as the CTRL+ALT key combination. The following shows the sequence of messages and calls that result when the user presses and releases this key:

|Sequence|Function Accessed|Message Passed|
|--------------|-----------------------|--------------------|
|1.|[WM_KEYDOWN](#onkeydown)|VK_CONTROL|
|2.|[WM_KEYDOWN](#onkeydown)|VK_MENU|
|3.|[WM_KEYUP](#onkeyup)|VK_CONTROL|
|4.|[WM_SYSKEYUP](/windows/win32/inputdev/wm-syskeyup)|VK_MENU|

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="ontcard"></a> CWnd::OnTCard

The framework calls this member function when the user clicks an authorable button.

```
afx_msg void OnTCard(
    UINT idAction,
    DWORD dwActionData);
```

### Parameters

*idAction*<br/>
Indicates the action the user has taken. This parameter can be one of these values:

- IDABORT The user clicked an authorable Abort button.

- IDCANCEL The user clicked an authorable Cancel button.

- IDCLOSE The user closed the training card.

- IDHELP The user clicked an authorable Windows Help button.

- IDIGNORE The user clicked an authorable Ignore button.

- IDOK The user clicked an authorable OK button.

- IDNO The user clicked an authorable No button.

- IDRETRY The user clicked an authorable Retry button.

- HELP_TCARD_DATA The user clicked an authorable button. The *dwActionData* parameter contains a long integer specified by the help author.

- HELP_TCARD_NEXT The user clicked an authorable Next button.

- HELP_TCARD_OTHER_CALLER Another application has requested training cards.

- IDYES The user clicked an authorable Yes button.

*dwActionData*<br/>
If *idAction* specifies HELP_TCARD_DATA, this parameter is a long integer specified by the help author. Otherwise, this parameter is zero.

### Remarks

This function is called only when an application has initiated a training card with Windows Help. An application initiates a training card by specifying the HELP_TCARD command in a call to the [WinHelp](../../mfc/reference/cwinapp-class.md#winhelp) function.

## <a name="ontimechange"></a> CWnd::OnTimeChange

The framework calls this member function after the system time is changed.

```
afx_msg void OnTimeChange();
```

### Remarks

Have any application that changes the system time send this message to all top-level windows. To send the WM_TIMECHANGE message to all top-level windows, an application can use the [SendMessage](/windows/win32/api/winuser/nf-winuser-sendmessage) Windows function with its *hwnd* parameter set to HWND_BROADCAST.

## <a name="ontimer"></a> CWnd::OnTimer

The framework calls this member function after each interval specified in the [SetTimer](#settimer) member function used to install a timer.

```
afx_msg void OnTimer(UINT_PTR nIDEvent);
```

### Parameters

*nIDEvent*<br/>
Specifies the identifier of the timer.

### Remarks

The [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows function sends a [WM_TIMER](/windows/win32/winmsg/wm-timer) message when no other messages are in the application's message queue.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

### Example

  See the example in [CWnd::SetTimer](#settimer).

## <a name="ontoolhittest"></a> CWnd::OnToolHitTest

The framework calls this member function to determine whether a point is in the bounding rectangle of the specified tool.

```
virtual INT_PTR OnToolHitTest(
    CPoint point,
    TOOLINFO* pTI) const;
```

### Parameters

*point*<br/>
Specifies the x- and y-coordinate of the cursor. These coordinates are always relative to the upper-left corner of the window

*pTI*<br/>
A pointer to a [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa) structure. The following structure values are set by default:

- *hwnd* = `m_hWnd` Handle to a window

- *uId* = `(UINT)hWndChild` Handle to a child window

- *uFlags* &#124;= TTF_IDISHWND Handle of the tool

- *lpszText* = LPSTR_TEXTCALLBACK Pointer to the string that is to be displayed in the specified window

### Return Value

If the tooltip control was found, the window control ID. If the tooltip control was not found, -1.

### Remarks

If the point is in the rectangle, it retrieves information about the tool.

If the area with which the tooltip is associated is not a button, `OnToolHitTest` sets the structure flags to TTF_NOTBUTTON and TTF_CENTERTIP.

Override `OnToolHitTest` to provide different information than the default provides.

See [TOOLINFO](/windows/win32/api/commctrl/ns-commctrl-tttoolinfoa), in the Windows SDK, for more information about the structure.

## <a name="ontouchinput"></a> CWnd::OnTouchInput

Process single input from Windows touch.

```
virtual BOOL OnTouchInput(
    CPoint pt,
    int nInputNumber,
    int nInputsCount,
    PTOUCHINPUT pInput);
```

### Parameters

*pt*<br/>
Point where screen has been touched (in the client coordinates).

*nInputNumber*<br/>
Number of touch input.

*nInputsCount*<br/>
Total number of touch inputs.

*pInput*<br/>
Pointer to TOUCHINPUT structure.

### Return Value

TRUE if the application processes Windows touch input; otherwise FALSE.

### Remarks

## <a name="ontouchinputs"></a> CWnd::OnTouchInputs

Processes inputs from Windows touch.

```
virtual BOOL OnTouchInputs(
    UINT nInputsCount,
    PTOUCHINPUT pInputs);
```

### Parameters

*nInputsCount*<br/>
Total number of Windows touch inputs.

*pInputs*<br/>
Array of TOUCHINPUT.

### Return Value

TRUE if application processes Windows touch inputs; otherwise FALSE.

### Remarks

## <a name="onunichar"></a> CWnd::OnUniChar

The framework calls this member function when a key is pressed. That is, the current window has the keyboard focus and a [WM_KEYDOWN](/windows/win32/inputdev/wm-keydown) message is translated by the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) function.

```
afx_msg void OnUniChar(
    UINT nChar,
    UINT nRepCnt,
    UINT nFlags);
```

### Parameters

*nChar*\
[in] Specifies the character code of the pressed key.

*nRepCnt*\
[in] Specifies the repeat count for the current message. The value is the number of times the keystroke is autorepeated as a result of the user holding down the key. If the keystroke is held long enough, multiple messages are sent. However, the repeat count is not cumulative.

*nFlags*\
[in] Flags that specify the scan code, extended key, context code, previous key state, and transition state, as shown in the following table:

| Flag bits | Description |
|--|--|
| **0-7** | Specifies the scan code. The value depends on the original equipment manufacturer (OEM). |
| **8** | Specifies an extended key, such as the right-hand ALT and CTRL keys that appear on an enhanced 101 or 102-key keyboard. The flag is 1 if the key is an extended key; otherwise, it is 0. |
| **9-12** | Used internally by Windows. |
| **13** | Specifies the context code. The flag is 1 if the ALT key is held down while the key is pressed; otherwise, the value is 0. |
| **14**   Specifies the previous key state. The flag is 1 if the key is down before the message is sent, or 0 if the key is up. |
| **15** | Specifies the transition state. The flag is 1 if the key is being released, or 0 if the key is being pressed. |

### Remarks

This method receives the [WM_UNICHAR](/windows/win32/inputdev/wm-unichar) notification, which is described in the Windows SDK. The [WM_UNICHAR](/windows/win32/inputdev/wm-unichar) message is designed to send or post Unicode characters to ANSI windows. It is equivalent to the [WM_CHAR](/windows/win32/inputdev/wm-char) message, but uses Unicode Transformation Format-32 encoding (UTF-32), whereas the [WM_CHAR](/windows/win32/inputdev/wm-char) message uses UTF-16.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onuninitmenupopup"></a> CWnd::OnUnInitMenuPopup

The framework calls this member function when a drop-down menu or submenu has been destroyed.

```
afx_msg void OnUnInitMenuPopup(
    CMenu* pPopupMenu,
    UINT nFlags);
```

### Parameters

*pMenu*\
[in] Pointer to the [CMenu](../../mfc/reference/cmenu-class.md) object that represents the menu or submenu.

*nFlags*\
[in] The menu that was destroyed. Currently, it can only be the window menu, MF_SYSMENU.

### Remarks

This method receives the [WM_UNINITMENUPOPUP](/windows/win32/menurc/wm-uninitmenupopup) notification, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onupdateuistate"></a> CWnd::OnUpdateUIState

Called to change the user interface (UI) state for the specified window and all its child windows.

```
afx_msg void OnUpdateUIState(
    UINT nAction,
    UINT nUIElement);
```

### Parameters

*nAction*<br/>
Specifies the action to be performed. Can be one of the following values:

- UIS_CLEAR The UI state element (specified by *nUIElement*) should be hidden.

- UIS_INITIALIZE The UI state element (specified by *nUIElement*) should be changed based on the last input event. For more information, see the **Remarks** section of [WM_UPDATEISTATE](/windows/win32/menurc/wm-updateuistate).

- UIS_SET The UI state element (specified by *nUIElement*) should be visible.

*nUIElement*<br/>
Specifies which UI state elements are affected or the style of the control. Can be one of the following values:

- UISF_HIDEACCEL Keyboard accelerators.

- UISF_HIDEFOCUS Focus indicators.

- UISF_ACTIVE Windows XP: A control should be drawn in the style used for active controls.

### Remarks

This member function emulates the functionality of the [WM_UPDATEUISTATE](/windows/win32/menurc/wm-updateuistate) message, as described in the Windows SDK.

## <a name="onuserchanged"></a> CWnd::OnUserChanged

The framework calls this member for all windows after the user has logged on or off.

```
afx_msg void OnUserChanged();
```

### Remarks

This method receives the [WM_USERCHANGED](/windows/win32/winmsg/wm-userchanged) notification message, which is described in the Windows SDK. When the user logs on or off, the operating system updates user-specific settings. The system sends this message immediately after updating the settings.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onvkeytoitem"></a> CWnd::OnVKeyToItem

If the `CWnd` object owns a list box with the [LBS_WANTKEYBOARDINPUT](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style, the list box will send the WM_VKEYTOITEM message in response to a WM_KEYDOWN message.

```
afx_msg int OnVKeyToItem(
    UINT nKey,
    CListBox* pListBox,
    UINT nIndex);
```

### Parameters

*nKey*<br/>
Specifies the virtual key code of the key that the user pressed. For a list of standard virtual key codes, see Winuser.h

*pListBox*<br/>
Specifies a pointer to the list box. The pointer may be temporary and should not be stored for later use.

*nIndex*<br/>
Specifies the current caret position.

### Return Value

Specifies the action that the application performed in response to the message. A return value of -2 indicates that the application handled all aspects of selecting the item and requires no further action by the list box. A return value of -1 indicates that the list box should perform the default action in response to the keystroke. A return value of 0 or greater specifies the zero-based index of an item in the list box and indicates that the list box should perform the default action for the keystroke on the given item.

### Remarks

This member function is called by the framework only for list boxes that have the [LBS_HASSTRINGS](../../mfc/reference/styles-used-by-mfc.md#list-box-styles) style.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onvscroll"></a> CWnd::OnVScroll

The framework calls this member function when the user clicks the window's vertical scroll bar.

```
afx_msg void OnVScroll(
    UINT nSBCode,
    UINT nPos,
    CScrollBar* pScrollBar);
```

### Parameters

*nSBCode*<br/>
Specifies a scroll-bar code that indicates the user's scrolling request. This parameter can be one of the following:

- SB_BOTTOM Scroll to bottom.

- SB_ENDSCROLL End scroll.

- SB_LINEDOWN Scroll one line down.

- SB_LINEUP Scroll one line up.

- SB_PAGEDOWN Scroll one page down.

- SB_PAGEUP Scroll one page up.

- SB_THUMBPOSITION Scroll to the absolute position. The current position is provided in *nPos*.

- SB_THUMBTRACK Drag scroll box to specified position. The current position is provided in *nPos*.

- SB_TOP Scroll to top.

*nPos*<br/>
Contains the current scroll-box position if the scroll-bar code is SB_THUMBPOSITION or SB_THUMBTRACK; otherwise not used. Depending on the initial scroll range, *nPos* may be negative and should be cast to an **`int`** if necessary.

*pScrollBar*<br/>
If the scroll message came from a scroll-bar control, contains a pointer to the control. If the user clicked a window's scroll bar, this parameter is NULL. The pointer may be temporary and should not be stored for later use.

### Remarks

`OnVScroll` typically is used by applications that give some feedback while the scroll box is being dragged.

If `OnVScroll` scrolls the contents of the `CWnd` object, it must also reset the position of the scroll box with the [SetScrollPos](#setscrollpos) member function.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onvscrollclipboard"></a> CWnd::OnVScrollClipboard

The Clipboard owner's `OnVScrollClipboard` member function is called by the Clipboard viewer when the Clipboard data has the CF_OWNERDISPLAY format and there is an event in the Clipboard viewer's vertical scroll bar.

```
afx_msg void OnVScrollClipboard(
    CWnd* pClipAppWnd,
    UINT nSBCode,
    UINT nPos);
```

### Parameters

*pClipAppWnd*<br/>
Specifies a pointer to a Clipboard-viewer window. The pointer may be temporary and should not be stored for later use.

*nSBCode*<br/>
Specifies one of the following scroll-bar values:

- SB_BOTTOM Scroll to bottom.

- SB_ENDSCROLL End scroll.

- SB_LINEDOWN Scroll one line down.

- SB_LINEUP Scroll one line up.

- SB_PAGEDOWN Scroll one page down.

- SB_PAGEUP Scroll one page up.

- SB_THUMBPOSITION Scroll to the absolute position. The current position is provided in *nPos*.

- SB_TOP Scroll to top.

*nPos*<br/>
Contains the scroll-box position if the scroll-bar code is SB_THUMBPOSITION; otherwise *nPos* is not used.

### Remarks

The owner should scroll the Clipboard image, invalidate the appropriate section, and update the scroll-bar values.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onwindowmaximizedchanged"></a> CWnd::OnWindowMaximizedChanged

The framework calls this member when the current window is maximized, and the window is composed by the Desktop Window Manager (DWM).

```
afx_msg void OnWindowMaximizedChanged(BOOL bIsMaximized);
```

### Parameters

*bIsMaximized*\
[in] TRUE if the current window is maximized, and FALSE if it is not.

### Remarks

This method receives the [WM_DWMWINDOWMAXIMIZEDCHANGE](/windows/win32/dwm/wm-dwmwindowmaximizedchange) notification message, which is described in the Windows SDK.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onwindowposchanged"></a> CWnd::OnWindowPosChanged

The framework calls this member function when the size, position, or Z-order has changed as a result of a call to the [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) member function or another window-management function.

```
afx_msg void OnWindowPosChanged(WINDOWPOS* lpwndpos);
```

### Parameters

*lpwndpos*<br/>
Points to a [WINDOWPOS](/windows/win32/api/winuser/ns-winuser-windowpos) data structure that contains information about the window's new size and position.

### Remarks

The default implementation sends the [WM_SIZE](/windows/win32/winmsg/wm-size) and [WM_MOVE](/windows/win32/winmsg/wm-move) messages to the window. These messages are not sent if an application handles the `OnWindowPosChanged` call without calling its base class. It is more efficient to perform any move or size change processing during the call to `OnWindowPosChanged` without calling its base class.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onwindowposchanging"></a> CWnd::OnWindowPosChanging

The framework calls this member function when the size, position, or Z-order is about to change as a result of a call to the [SetWindowPos](/windows/win32/api/winuser/nf-winuser-setwindowpos) member function or another window-management function.

```
afx_msg void OnWindowPosChanging(WINDOWPOS* lpwndpos);
```

### Parameters

*lpwndpos*<br/>
Points to a `WINDOWPOS` data structure that contains information about the window's new size and position.

### Remarks

An application can prevent changes to the window by setting or clearing the appropriate bits in the **flags** member of the [WINDOWPOS](/windows/win32/api/winuser/ns-winuser-windowpos) structure.

For a window with the [WS_OVERLAPPED](styles-used-by-mfc.md#window-styles) or [WS_THICKFRAME](styles-used-by-mfc.md#window-styles) style, the default implementation sends a [WM_GETMINMAXINFO](/windows/win32/winmsg/wm-getminmaxinfo) message to the window. This is done to validate the new size and position of the window and to enforce the CS_BYTEALIGNCLIENT and CS_BYTEALIGN client styles. An application can override this functionality by not calling its base class.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onwininichange"></a> CWnd::OnWinIniChange

The framework calls this member function after a change has been made to the Windows initialization file, WIN.INI.

```
afx_msg void OnWinIniChange(LPCTSTR lpszSection);
```

### Parameters

*lpszSection*<br/>
Points to a string that specifies the name of the section that has changed. (The string does not include the square brackets that enclose the section name.)

### Remarks

The [SystemParametersInfo](/windows/win32/api/winuser/nf-winuser-systemparametersinfow) Windows function calls `OnWinIniChange` after an application uses the function to change a setting in the WIN.INI file.

To send the WM_WININICHANGE message to all top-level windows, an application can use the [SendMessage](/windows/win32/api/winuser/nf-winuser-sendmessage) Windows function with its *hwnd* parameter set to HWND_BROADCAST.

If an application changes many different sections in WIN.INI at the same time, the application should send one WM_WININICHANGE message with *lpszSection* set to NULL. Otherwise, an application should send WM_WININICHANGE each time it makes a change to WIN.INI.

If an application receives an `OnWinIniChange` call with *lpszSection* set to NULL, the application should check all sections in WIN.INI that affect the application.

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onwndmsg"></a> CWnd::OnWndMsg

This member function is called by `WindowProc`, or is called during message reflection.

```
virtual BOOL OnWndMsg(
    UINT message,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* pResult);
```

### Parameters

*message*<br/>
Specifies the message to be sent.

*wParam*<br/>
Specifies additional message-dependent information.

*lParam*<br/>
Specifies additional message-dependent information.

*pResult*<br/>
The return value of [WindowProc](#windowproc). Depends on the message; may be NULL.

### Return Value

TRUE if message was handled; otherwise FALSE.

### Remarks

`OnWndMsg` determines the message type and either calls the appropriate framework function (for example, [OnCommand](#oncommand) for WM_COMMAND) or finds the appropriate message in the message map.

For more information about message reflection, see [Handling Reflected Messages](../../mfc/handling-reflected-messages.md).

## <a name="onxbuttondblclk"></a> CWnd::OnXButtonDblClk

The framework calls this member function when the user double-clicks XBUTTON1 or XBUTTON2 while the cursor is in the client area of a window.

```
afx_msg void OnXButtonDblClk(
    UINT nFlags,
    UINT nButton,
    CPoint point);
```

### Parameters

*nFlags*\
[in] A bitwise combination (OR) of flags that indicate which modifier keys are pressed. For example, the MK_CONTROL flag indicates that the CTRL key is pressed.

*nButton*\
[in] A value of XBUTTON1 if the first Microsoft Intellimouse X button is double-clicked, or XBUTTON2 if the second X button is double-clicked.

*point*\
[in] A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that specifies the *x* and *y* coordinates of the cursor relative to the upper-left corner of the client area.

### Remarks

This method receives the [WM_XBUTTONDBLCLK](/windows/win32/inputdev/wm-xbuttondblclk) notification, which is described in the Windows SDK. If the mouse is not captured, the message is posted to the window beneath the cursor. Otherwise, the message is posted to the window that has captured the mouse.

The *nFlags* parameter can be a combination of modifier keys listed in the following table. For more information, see [About Mouse Input](/windows/win32/inputdev/about-mouse-input).

|Modifier Key|Description|
|------------------|-----------------|
|MK_CONTROL|The CTRL key is pressed.|
|MK_LBUTTON|The left mouse button is pressed.|
|MK_MBUTTON|The middle mouse button is pressed.|
|MK_RBUTTON|The right mouse button is pressed.|
|MK_SHIFT|The SHIFT key is pressed.|
|MK_XBUTTON1|The XBUTTON1 mouse button of the Microsoft IntelliMouse is pressed.|
|MK_XBUTTON2|The XBUTTON2 mouse button of the Microsoft IntelliMouse is pressed.|

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onxbuttondown"></a> CWnd::OnXButtonDown

The framework calls this member function when the user presses XBUTTON1 or XBUTTON2 while the cursor is in the client area of a window.

```
afx_msg void OnXButtonDown(
    UINT nFlags,
    UINT nButton,
    CPoint point);
```

### Parameters

*nFlags*\
[in] A bitwise combination (OR) of flags that indicate which modifier keys are pressed. For example, the MK_CONTROL flag indicates that the CTRL key is pressed.

*nButton*\
[in] A value of XBUTTON1 if the first Microsoft Intellimouse X button was clicked, or XBUTTON2 if the second X button was clicked.

*point*\
[in] A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that specifies the *x* and *y* coordinates of the cursor relative to the upper-left corner of the client area.

### Remarks

This method receives the [WM_XBUTTONDOWN](/windows/win32/inputdev/wm-xbuttondown) notification, which is described in the Windows SDK. If the mouse is not captured, the message is posted to the window beneath the cursor. Otherwise, the message is posted to the window that has captured the mouse.

The *nFlags* parameter can be a combination of modifier keys listed in the following table. For more information, see [About Mouse Input](/windows/win32/inputdev/about-mouse-input).

|Modifier Key|Description|
|------------------|-----------------|
|MK_CONTROL|The CTRL key is pressed.|
|MK_LBUTTON|The left mouse button is pressed.|
|MK_MBUTTON|The middle mouse button is pressed.|
|MK_RBUTTON|The right mouse button is pressed.|
|MK_SHIFT|The SHIFT key is pressed.|
|MK_XBUTTON1|The XBUTTON1 mouse button of the Microsoft IntelliMouse is pressed.|
|MK_XBUTTON2|The XBUTTON2 mouse button of the Microsoft IntelliMouse is pressed.|

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="onxbuttonup"></a> CWnd::OnXButtonUp

The framework calls this member function when the user releases XBUTTON1 or XBUTTON2 while the cursor is in the client area of a window.

```
afx_msg void OnXButtonUp(
    UINT nFlags,
    UINT nButton,
    CPoint point);
```

### Parameters

*nFlags*\
[in] A bitwise combination (OR) of flags that indicate which modifier keys are pressed. For example, the MK_CONTROL flag indicates that the CTRL key is pressed.

*nButton*\
[in] A value of XBUTTON1 if the first Microsoft Intellimouse X button was double-clicked, or XBUTTON2 if the second X button was double-clicked.

*point*\
[in] A [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object that specifies the *x* and *y* coordinates of the cursor relative to the upper-left corner of the client area.

### Remarks

This method receives the [WM_XBUTTONUP](/windows/win32/inputdev/wm-xbuttonup) notification, which is described in the Windows SDK. If the mouse is not captured, the message is posted to the window beneath the cursor. Otherwise, the message is posted to the window that has captured the mouse.

The *nFlags* parameter can be a combination of modifier keys listed in the following table. For more information, see [About Mouse Input](/windows/win32/inputdev/about-mouse-input).

|Modifier Key|Description|
|------------------|-----------------|
|MK_CONTROL|The CTRL key is pressed.|
|MK_LBUTTON|The left mouse button is pressed.|
|MK_MBUTTON|The middle mouse button is pressed.|
|MK_RBUTTON|The right mouse button is pressed.|
|MK_SHIFT|The SHIFT key is pressed.|
|MK_XBUTTON1|The XBUTTON1 mouse button of the Microsoft IntelliMouse is pressed.|
|MK_XBUTTON2|The XBUTTON2 mouse button of the Microsoft IntelliMouse is pressed.|

> [!NOTE]
> This member function is called by the framework to allow your application to handle a Windows message. The parameters passed to your function reflect the parameters received by the framework when the message was received. If you call the base-class implementation of this function, that implementation will use the parameters originally passed with the message and not the parameters you supply to the function.

## <a name="openclipboard"></a> CWnd::OpenClipboard

Opens the Clipboard.

```
BOOL OpenClipboard();
```

### Return Value

Nonzero if the Clipboard is opened via `CWnd`, or 0 if another application or window has the Clipboard open.

### Remarks

Other applications will not be able to modify the Clipboard until the [CloseClipboard](/windows/win32/api/winuser/nf-winuser-closeclipboard) Windows function is called.

The current `CWnd` object will not become the owner of the Clipboard until the [EmptyClipboard](/windows/win32/api/winuser/nf-winuser-emptyclipboard) Windows function is called.

### Example

[!code-cpp[NVC_MFCWindowing#111](../../mfc/reference/codesnippet/cpp/cwnd-class_52.cpp)]

## <a name="operator_hwnd"></a> CWnd::operator HWND

Use this operator to get the handle to the `CWnd` object.

```
operator HWND() const;
```

## <a name="operator_neq"></a> CWnd::operator !=

Compares two `CWnd` objects to determine if they do not have the same [m_hWnd](#m_hwnd).

```
BOOL operator!=(const CWnd& wnd) const;
```

### Parameters

*wnd*<br/>
A reference to a `CWnd` object.

### Return Value

Nonzero if equal; otherwise 0.

## <a name="operator_eq_eq"></a> CWnd::operator ==

Compares two `CWnd` objects to determine if they have the same [m_hWnd](#m_hwnd).

```
BOOL operator==(const CWnd& wnd) const;
```

### Parameters

*wnd*<br/>
A reference to a `CWnd` object.

### Return Value

Nonzero if equal; otherwise 0.

## <a name="paintwindowlesscontrols"></a> CWnd::PaintWindowlessControls

Draws windowless controls on the control container.

```
BOOL PaintWindowlessControls(CDC* pDC);
```

### Parameters

*pDC*<br/>
The device context on which to draw the windowless controls.

### Return Value

Returns TRUE if there is a control container and the windowless controls are drawn successfully, otherwise FALSE.

## <a name="postmessage"></a> CWnd::PostMessage

Places a message in the window's message queue and then returns without waiting for the corresponding window to process the message.

```
BOOL PostMessage(
    UINT message,
    WPARAM wParam = 0,
    LPARAM lParam = 0);
```

### Parameters

*message*<br/>
Specifies the message to be posted.

*wParam*<br/>
Specifies additional message information. The content of this parameter depends on the message being posted.

*lParam*<br/>
Specifies additional message information. The content of this parameter depends on the message being posted.

### Return Value

Nonzero if the message is posted; otherwise 0.

### Remarks

Messages in a message queue are retrieved by calls to the [GetMessage](/windows/win32/api/winuser/nf-winuser-getmessage) or [PeekMessage](/windows/win32/api/winuser/nf-winuser-peekmessagew) Windows function.

The Windows [PostMessage](/windows/win32/api/winuser/nf-winuser-postmessagew) function can be used to access another application.

### Example

  See the example for [AfxGetMainWnd](../../mfc/reference/application-information-and-management.md#afxgetmainwnd).

## <a name="postncdestroy"></a> CWnd::PostNcDestroy

Called by the default [OnNcDestroy](#onncdestroy) member function after the window has been destroyed.

```
virtual void PostNcDestroy();
```

### Remarks

Derived classes can use this function for custom cleanup such as the deletion of the **`this`** pointer.

## <a name="precreatewindow"></a> CWnd::PreCreateWindow

Called by the framework before the creation of the Windows window attached to this `CWnd` object.

```
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
```

### Parameters

*cs*<br/>
A [CREATESTRUCT](/windows/win32/api/winuser/ns-winuser-createstructw) structure.

### Return Value

Nonzero if the window creation should continue; 0 to indicate creation failure.

### Remarks

> [!WARNING]
> `CWnd::PreCreateWindow` now assigns the hMenu member of *cs* to the **`this`** pointer if the menu is NULL and the style contains WS_CHILD. For proper functionality, ensure that your dialog control has an ID that is not NULL.
>
> This change fixes a crash in managed/native interop scenarios. A TRACE statement in `CWnd::Create` alerts the developer of the problem.

Never call this function directly.

The default implementation of this function checks for a NULL window class name and substitutes an appropriate default. Override this member function to modify the `CREATESTRUCT` structure before the window is created.

Each class derived from `CWnd` adds its own functionality to its override of `PreCreateWindow`. By design, these derivations of `PreCreateWindow` are not documented. To determine the styles appropriate to each class and the interdependencies between the styles, you can examine the MFC source code for your application's base class. If you choose to override `PreCreateWindow,` you can determine whether the styles used in your application's base class provide the functionality you need by using information gathered from the MFC source code.

For more information on changing window styles, see the [Changing the Styles of a Window Created by MFC](../../mfc/changing-the-styles-of-a-window-created-by-mfc.md).

### Example

[!code-cpp[NVC_MFCWindowing#112](../../mfc/reference/codesnippet/cpp/cwnd-class_53.cpp)]

## <a name="presubclasswindow"></a> CWnd::PreSubclassWindow

This member function is called by the framework to allow other necessary subclassing to occur before the window is subclassed.

```
virtual void PreSubclassWindow();
```

### Remarks

Overriding this member function allows for dynamic subclassing of controls. It is an advanced overridable.

## <a name="pretranslatemessage"></a> CWnd::PreTranslateMessage

Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) and [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows functions.

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### Parameters

*pMsg*<br/>
Points to a [MSG](/windows/win32/api/winuser/ns-winuser-msg) structure that contains the message to process.

### Return Value

Nonzero if the message was translated and should not be dispatched; 0 if the message was not translated and should be dispatched.

## <a name="print"></a> CWnd::Print

Call this member function to draw the current window in the specified device context, which is most commonly in a printer device context.

```cpp
void Print(
    CDC* pDC,
    DWORD dwFlags) const;
```

### Parameters

*pDC*<br/>
A pointer to a device context.

*dwFlags*<br/>
Specifies the drawing options. This parameter can be one or more of these flags:

- PRF_CHECKVISIBLE Draw the window only if it is visible.

- PRF_CHILDREN Draw all visible children windows.

- PRF_CLIENT Draw the client area of the window.

- PRF_ERASEBKGND Erase the background before drawing the window.

- PRF_NONCLIENT Draw the nonclient area of the window.

- PRF_OWNED Draw all owned windows.

### Remarks

[CWnd::DefWindowProc](#defwindowproc) function processes this message based on which drawing option is specified:

- If PRF_CHECKVISIBLE is specified and the window is not visible, do nothing.

- If PRF_NONCLIENT is specified, draw the nonclient area in the given device context.

- If PRF_ERASEBKGND is specified, send the window a [WM_ERASEBKGND](/windows/win32/winmsg/wm-erasebkgnd) message.

- If PRF_CLIENT is specified, send the window a [WM_PRINTCLIENT](/windows/win32/gdi/wm-printclient) message.

- If PRF_CHILDREN is set, send each visible child window a [WM_PRINT](/windows/win32/gdi/wm-print) message.

- If PRF_OWNED is set, send each visible owned window a WM_PRINT message.

## <a name="printclient"></a> CWnd::PrintClient

Call this member function to draw any window in the specified device context (usually a printer device context).

```cpp
void PrintClient(
    CDC* pDC,
    DWORD dwFlags) const;
```

### Parameters

*pDC*<br/>
A pointer to a device context.

*dwFlags*<br/>
Specifies drawing options. This parameter can be one or more of these flags:

- PRF_CHECKVISIBLE Draw the window only if it is visible.

- PRF_CHILDREN Draw all visible children windows.

- PRF_CLIENT Draw the client area of the window.

- PRF_ERASEBKGND Erase the background before drawing the window.

- PRF_NONCLIENT Draw the nonclient area of the window.

- PRF_OWNED Draw all owned windows.

## <a name="printwindow"></a> CWnd::PrintWindow

Copies a visual window into the specified device context, typically a printer DC.

```
BOOL PrintWindow(
    CDC* pDC,
    UINT nFlags) const;
```

### Parameters

*pDC*<br/>
A pointer to the device context to be printed to.

*nFlags*<br/>
Specifies the drawing options. For a list of possible values, see [PrintWindow](/windows/win32/api/winuser/nf-winuser-printwindow).

### Return Value

Nonzero if the function succeeds; otherwise 0.

### Remarks

This member function emulates the functionality of the function [PrintWindow](/windows/win32/api/winuser/nf-winuser-printwindow), as described in the Windows SDK.

## <a name="redrawwindow"></a> CWnd::RedrawWindow

Updates the specified rectangle or region in the given window's client area.

```
BOOL RedrawWindow(
    LPCRECT lpRectUpdate = NULL,
    CRgn* prgnUpdate = NULL,
    UINT flags = RDW_INVALIDATE | RDW_UPDATENOW | RDW_ERASE);
```

### Parameters

*lpRectUpdate*<br/>
Points to a [RECT structure](/windows/win32/api/windef/ns-windef-rect) containing the coordinates of the update rectangle. This parameter is ignored if *prgnUpdate* contains a valid region handle.

*prgnUpdate*<br/>
Identifies the update region. If both *prgnUpdate* and *lpRectUpdate* are NULL, the entire client area is added to the update region.

*flags*<br/>
The following flags are used to invalidate the window:

- RDW_ERASE Causes the window to receive a [WM_ERASEBKGND](/windows/win32/winmsg/wm-erasebkgnd) message when the window is repainted. The RDW_INVALIDATE flag must also be specified; otherwise RDW_ERASE has no effect.

- RDW_FRAME Causes any part of the nonclient area of the window that intersects the update region to receive a [WM_NCPAINT](/windows/win32/gdi/wm-ncpaint) message. The RDW_INVALIDATE flag must also be specified; otherwise RDW_FRAME has no effect.

- RDW_INTERNALPAINT Causes a [WM_PAINT](/windows/win32/gdi/wm-paint) message to be posted to the window regardless of whether the window contains an invalid region.

- RDW_INVALIDATE Invalidate *lpRectUpdate* or *prgnUpdate* (only one may be not NULL). If both are NULL, the entire window is invalidated.

The following flags are used to validate the window:

- RDW_NOERASE Suppresses any pending WM_ERASEBKGND messages.

- RDW_NOFRAME Suppresses any pending WM_NCPAINT messages. This flag must be used with RDW_VALIDATE and is typically used with RDW_NOCHILDREN. This option should be used with care, as it could prevent parts of a window from painting properly.

- RDW_NOINTERNALPAINT Suppresses any pending internal WM_PAINT messages. This flag does not affect WM_PAINT messages resulting from invalid areas.

- RDW_VALIDATE Validates *lpRectUpdate* or *prgnUpdate* (only one may be not NULL). If both are NULL, the entire window is validated. This flag does not affect internal WM_PAINT messages.

The following flags control when repainting occurs. Painting is not performed by the `RedrawWindow` function unless one of these bits is specified.

- RDW_ERASENOW Causes the affected windows (as specified by the RDW_ALLCHILDREN and RDW_NOCHILDREN flags) to receive WM_NCPAINT and WM_ERASEBKGND messages, if necessary, before the function returns. WM_PAINT messages are deferred.

- RDW_UPDATENOW Causes the affected windows (as specified by the RDW_ALLCHILDREN and RDW_NOCHILDREN flags) to receive WM_NCPAINT, WM_ERASEBKGND, and WM_PAINT messages, if necessary, before the function returns.

By default, the windows affected by the `RedrawWindow` function depend on whether the specified window has the WS_CLIPCHILDREN style. The child windows of WS_CLIPCHILDREN windows are not affected. However, those windows that are not WS_CLIPCHILDREN windows are recursively validated or invalidated until a WS_CLIPCHILDREN window is encountered. The following flags control which windows are affected by the `RedrawWindow` function:

- RDW_ALLCHILDREN Includes child windows, if any, in the repainting operation.

- RDW_NOCHILDREN Excludes child windows, if any, from the repainting operation.

### Return Value

Nonzero if the window was redrawn successfully; otherwise 0.

### Remarks

When the `RedrawWindow` member function is used to invalidate part of the desktop window, that window does not receive a [WM_PAINT](/windows/win32/gdi/wm-paint) message. To repaint the desktop, an application should use [CWnd::ValidateRgn](#validatergn), [CWnd::InvalidateRgn](#invalidatergn), [CWnd::UpdateWindow](#updatewindow), or [RedrawWindow](/windows/win32/api/winuser/nf-winuser-redrawwindow)

## <a name="reflectchildnotify"></a> CWnd::ReflectChildNotify

This message function is called by the framework from [OnChildNotify](#onchildnotify).

```
BOOL ReflectChildNotify(
    UINT message,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* pResult);
```

### Parameters

*message*<br/>
Specifies the message to be reflected.

*wParam*<br/>
Specifies additional message-dependent information.

*lParam*<br/>
Specifies additional message-dependent information.

*pResult*<br/>
The result generated by the child window to be returned by the parent window. Can be NULL.

### Return Value

TRUE if message was reflected; otherwise FALSE.

### Remarks

It is a helper function which reflects *message* to its source.

Reflected messages are sent directly to [CWnd::OnWndMsg](#onwndmsg) or [CCmdTarget::OnCmdMsg](../../mfc/reference/ccmdtarget-class.md#oncmdmsg).

For more information about message reflection, see [Handling Reflected Messages](../../mfc/handling-reflected-messages.md).

## <a name="reflectlastmsg"></a> CWnd::ReflectLastMsg

This member function is called by the framework to reflect the last message to the child window.

```
static BOOL PASCAL ReflectLastMsg(
    HWND hWndChild,
    LRESULT* pResult = NULL);
```

### Parameters

*hWndChild*<br/>
A handle to a child window.

*pResult*<br/>
The result generated by the child window to be returned by the parent window. Can be NULL.

### Return Value

Nonzero if the message was handled; otherwise 0.

### Remarks

This member function calls [SendChildNotifyLastMsg](#sendchildnotifylastmsg) if the window identified by *hWndChild* is an OLE control or a window in the permanent map.

For more information about message reflection, see [Handling Reflected Messages](../../mfc/handling-reflected-messages.md).

## <a name="releasedc"></a> CWnd::ReleaseDC

Releases a device context, freeing it for use by other applications.

```
int ReleaseDC(CDC* pDC);
```

### Parameters

*pDC*<br/>
Identifies the device context to be released.

### Return Value

Nonzero if successful; otherwise 0.

### Remarks

The effect of the `ReleaseDC` member function depends on the device-context type.

The application must call the `ReleaseDC` member function for each call to the [GetWindowDC](#getwindowdc) member function and for each call to the [GetDC](#getdc) member function.

## <a name="repositionbars"></a> CWnd::RepositionBars

Called to reposition and resize control bars in the client area of a window.

```cpp
void RepositionBars(UINT nIDFirst,
    UINT nIDLast,
    UINT nIDLeftOver,
    UINT nFlag = reposDefault,
    LPRECT lpRectParam = NULL,
    LPCRECT lpRectClient = NULL,
    BOOL bStretch = TRUE) ;
```

### Parameters

*nIDFirst*<br/>
The ID of the first in a range of control bars to reposition and resize.

*nIDLast*<br/>
The ID of the last in a range of control bars to reposition and resize.

*nIDLeftOver*<br/>
Specifies ID of pane that fills the rest of the client area.

*nFlag*<br/>
Can have one of the following values:

- `CWnd::reposDefault` Performs the layout of the control bars. *lpRectParam* is not used and can be NULL.

- `CWnd::reposQuery` The layout of the control bars is not done; instead *lpRectParam* is initialized with the size of the client area, as if the layout had actually been done.

- `CWnd::reposExtra` Adds the values of *lpRectParam* to the client area of *nIDLast* and also performs the layout.

*lpRectParam*<br/>
Points to a [RECT structure](/windows/win32/api/windef/ns-windef-rect); the usage of which depends on the value of *nFlag*.

*lpRectClient*<br/>
Points to a [RECT structure](/windows/win32/api/windef/ns-windef-rect) containing the available client area. If NULL, the window's client area will be used.

*bStretch*<br/>
Indicates whether the bar should be stretched to the size of the frame.

### Remarks

The *nIDFirst* and *nIDLast* parameters define a range of control-bar IDs to be repositioned in the client area. The *nIDLeftOver* parameter specifies the ID of the child window (normally the view) which is repositioned and resized to fill the rest of the client area not filled by control bars.

## <a name="runmodalloop"></a> CWnd::RunModalLoop

Call this member function to retrieve, translate, or dispatch messages until [ContinueModal](#continuemodal) returns FALSE.

```
int RunModalLoop(DWORD dwFlags = 0);
```

### Parameters

*dwFlags*<br/>
Specifies the Windows message to be sent. Can be one of the following values:

- MLF_NOIDLEMSG Don't send [WM_ENTERIDLE](/windows/win32/dlgbox/wm-enteridle) messages to the parent.

- MLF_NOKICKIDLE Don't send WM_KICKIDLE messages to the window.

- MLF_SHOWONIDLE Show the window when message queue goes idle.

### Return Value

Specifies the value of the *nResult* parameter passed to the [EndModalLoop](#endmodalloop) member function, which is then used to end the modal loop.

### Remarks

By default, `ContinueModal` returns FALSE after `EndModalLoop` is called. Returns the value provided as *nResult* to `EndModalLoop`.

## <a name="screentoclient"></a> CWnd::ScreenToClient

Converts the screen coordinates of a given point or rectangle on the display to client coordinates.

```cpp
void ScreenToClient(LPPOINT lpPoint) const;  void ScreenToClient(LPRECT lpRect) const;
```

### Parameters

*lpPoint*<br/>
Points to a [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object or [POINT structure](/windows/win32/api/windef/ns-windef-point) that contains the screen coordinates to be converted.

*lpRect*<br/>
Points to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or [RECT structure](/windows/win32/api/windef/ns-windef-rect) that contains the screen coordinates to be converted.

### Remarks

The `ScreenToClient` member function replaces the screen coordinates given in *lpPoint* or *lpRect* with client coordinates. The new coordinates are relative to the upper-left corner of the `CWnd` client area.

### Example

  See the example for [CListCtrl::GetItemRect](../../mfc/reference/clistctrl-class.md#getitemrect).

## <a name="scrollwindow"></a> CWnd::ScrollWindow

Scrolls the contents of the client area of the current `CWnd` object.

```cpp
void ScrollWindow(
    int xAmount,
    int yAmount,
    LPCRECT lpRect = NULL,
    LPCRECT lpClipRect = NULL);
```

### Parameters

*xAmount*<br/>
Specifies the amount, in device units, of horizontal scrolling. This parameter must be a negative value to scroll to the left.

*yAmount*<br/>
Specifies the amount, in device units, of vertical scrolling. This parameter must be a negative value to scroll up.

*lpRect*<br/>
Points to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or [RECT structure](/windows/win32/api/windef/ns-windef-rect) that specifies the portion of the client area to be scrolled. If *lpRect* is NULL, the entire client area is scrolled. The caret is repositioned if the cursor rectangle intersects the scroll rectangle.

*lpClipRect*<br/>
Points to a `CRect` object or `RECT` structure that specifies the clipping rectangle to scroll. Only bits inside this rectangle are scrolled. Bits outside this rectangle are not affected even if they are in the *lpRect* rectangle. If *lpClipRect* is NULL, no clipping is performed on the scroll rectangle.

### Remarks

If the caret is in the `CWnd` being scrolled, `ScrollWindow` automatically hides the caret to prevent it from being erased and then restores the caret after the scroll is finished. The caret position is adjusted accordingly.

The area uncovered by the `ScrollWindow` member function is not repainted but is combined into the current `CWnd` object's update region. The application will eventually receive a [WM_PAINT](/windows/win32/gdi/wm-paint) message notifying it that the region needs repainting. To repaint the uncovered area at the same time the scrolling is done, call the [UpdateWindow](#updatewindow) member function immediately after calling `ScrollWindow`.

If *lpRect* is NULL, the positions of any child windows in the window are offset by the amount specified by *xAmount* and *yAmount*, and any invalid (unpainted) areas in the `CWnd` are also offset. `ScrollWindow` is faster when *lpRect* is NULL.

If *lpRect* is not NULL, the positions of child windows are not changed, and invalid areas in `CWnd` are not offset. To prevent updating problems when *lpRect* is not NULL, call the `UpdateWindow` member function to repaint `CWnd` before calling `ScrollWindow`.

## <a name="scrollwindowex"></a> CWnd::ScrollWindowEx

Scrolls the contents of a window's client area.

```
int ScrollWindowEx(
    int dx,
    int dy,
    LPCRECT lpRectScroll,
    LPCRECT lpRectClip,
    CRgn* prgnUpdate,
    LPRECT lpRectUpdate,
    UINT flags);
```

### Parameters

*dx*<br/>
Specifies the amount, in device units, of horizontal scrolling. This parameter must have a negative value to scroll to the left.

*dy*<br/>
Specifies the amount, in device units, of vertical scrolling. This parameter must have a negative value to scroll up.

*lpRectScroll*<br/>
Points to a [RECT structure](/windows/win32/api/windef/ns-windef-rect) that specifies the portion of the client area to be scrolled. If this parameter is NULL, the entire client area is scrolled.

*lpRectClip*<br/>
Points to a `RECT` structure that specifies the clipping rectangle to scroll. This structure takes precedence over the rectangle pointed to by *lpRectScroll*. Only bits inside this rectangle are scrolled. Bits outside this rectangle are not affected even if they are in the *lpRectScroll* rectangle. If this parameter is NULL, no clipping is performed on the scroll rectangle.

*prgnUpdate*<br/>
Identifies the region that is modified to hold the region invalidated by scrolling. This parameter may be NULL.

*lpRectUpdate*<br/>
Points to a `RECT` structure that will receive the boundaries of the rectangle invalidated by scrolling. This parameter may be NULL.

*flags*<br/>
Can have one of the following values:

- SW_ERASE When specified with SW_INVALIDATE, erases the newly invalidated region by sending a [WM_ERASEBKGND](/windows/win32/winmsg/wm-erasebkgnd) message to the window.

- SW_INVALIDATE Invalidates the region identified by *prgnUpdate* after scrolling.

- SW_SCROLLCHILDREN Scrolls all child windows that intersect the rectangle pointed to by *lpRectScroll* by the number of pixels specified in *dx* and *dy*. Windows sends a [WM_MOVE](/windows/win32/winmsg/wm-move) message to all child windows that intersect *lpRectScroll*, even if they do not move. The caret is repositioned when a child window is scrolled and the cursor rectangle intersects the scroll rectangle.

### Return Value

The return value is SIMPLEREGION (rectangular invalidated region), COMPLEXREGION (nonrectangular invalidated region; overlapping rectangles), or NULLREGION (no invalidated region), if the function is successful; otherwise the return value is ERROR.

### Remarks

This function is similar to the [ScrollWindow](/windows/win32/api/winuser/nf-winuser-scrollwindow) function, with some additional features.

If [SW_INVALIDATE](/windows/win32/api/winuser/nf-winuser-scrollwindowex) and [SW_ERASE](/windows/win32/api/winuser/nf-winuser-scrollwindowex) are not specified, the `ScrollWindowEx` member function does not invalidate the area that is scrolled away from. If either of these flags is set, `ScrollWindowEx` invalidates this area. The area is not updated until the application calls the [UpdateWindow](/windows/win32/api/winuser/nf-winuser-updatewindow) member function, calls the [RedrawWindow](/windows/win32/api/winuser/nf-winuser-redrawwindow) member function (specifying [RDW_UPDATENOW](/windows/win32/api/winuser/nf-winuser-redrawwindow) or [RDW_ERASENOW](/windows/win32/api/winuser/nf-winuser-redrawwindow)), or retrieves the [WM_PAINT](/windows/win32/gdi/wm-paint) message from the application queue.

If the window has the [WS_CLIPCHILDREN](/windows/win32/api/winuser/nf-winuser-createwindoww) style, the returned areas specified by *prgnUpdate* and *lpRectUpdate* represent the total area of the scrolled window that must be updated, including any areas in child windows that need updating.

If the [SW_SCROLLCHILDREN](/windows/win32/api/winuser/nf-winuser-scrollwindowex) flag is specified, Windows will not properly update the screen if part of a child window is scrolled. The part of the scrolled child window that lies outside the source rectangle will not be erased and will not be redrawn properly in its new destination. Use the [DeferWindowPos](/windows/win32/api/winuser/nf-winuser-deferwindowpos) Windows function to move child windows that do not lie completely within the *lpRectScroll* rectangle. The cursor is repositioned if the SW_SCROLLCHILDREN flag is set and the caret rectangle intersects the scroll rectangle.

All input and output coordinates (for *lpRectScroll*, *lpRectClip*, *lpRectUpdate*, and *prgnUpdate*) are assumed to be in client coordinates, regardless of whether the window has the CS_OWNDC or CS_CLASSDC class style. Use the [LPtoDP](/windows/win32/api/wingdi/nf-wingdi-lptodp) and [DPtoLP](/windows/win32/api/wingdi/nf-wingdi-dptolp) Windows functions to convert to and from logical coordinates, if necessary.

## <a name="sendchildnotifylastmsg"></a> CWnd::SendChildNotifyLastMsg

This member function is called by the framework to provide a notification message to a child window, from the parent window, so the child window can handle a task.

```
BOOL SendChildNotifyLastMsg(LRESULT* pResult = NULL);
```

### Parameters

*pResult*<br/>
The result generated by the child window to be returned by the parent window.

### Return Value

Nonzero if the child window has handled the message sent to its parent; otherwise 0.

### Remarks

`SendChildNotifyLastMsg` send the current message to the source if it is a message that is reflected.

For more information about message reflection, see [Handling Reflected Messages](../../mfc/handling-reflected-messages.md).

## <a name="senddlgitemmessage"></a> CWnd::SendDlgItemMessage

Sends a message to a control.

```
LRESULT SendDlgItemMessage(
    int nID,
    UINT message,
    WPARAM wParam = 0,
    LPARAM lParam = 0);
```

### Parameters

*nID*<br/>
Specifies the identifier of the dialog control that will receive the message.

*message*<br/>
Specifies the message to be sent.

*wParam*<br/>
Specifies additional message-dependent information.

*lParam*<br/>
Specifies additional message-dependent information.

### Return Value

Specifies the value returned by the control's window procedure, or 0 if the control was not found.

### Remarks

The `SendDlgItemMessage` member function does not return until the message has been processed.

Using `SendDlgItemMessage` is identical to obtaining a `CWnd`* to the given control and calling the [SendMessage](#sendmessage) member function.

### Example

[!code-cpp[NVC_MFCWindowing#113](../../mfc/reference/codesnippet/cpp/cwnd-class_54.cpp)]

## <a name="sendmessage"></a> CWnd::SendMessage

Sends the specified message to this window.

```
LRESULT SendMessage(
    UINT message,
    WPARAM wParam = 0,
    LPARAM lParam = 0);
```

### Parameters

*message*<br/>
Specifies the message to be sent.

*wParam*<br/>
Specifies additional message-dependent information.

*lParam*<br/>
Specifies additional message-dependent information.

### Return Value

The result of the message processing; its value depends on the message sent.

### Remarks

The `SendMessage` member function calls the window procedure directly and does not return until that window procedure has processed the message. This is in contrast to the [PostMessage](#postmessage) member function, which places the message into the window's message queue and returns immediately.

### Example

[!code-cpp[NVC_MFCWindowing#101](../../mfc/reference/codesnippet/cpp/cwnd-class_41.cpp)]

## <a name="sendmessagetodescendants"></a> CWnd::SendMessageToDescendants

Call this member function to send the specified Windows message to all descendant windows.

```cpp
void SendMessageToDescendants(
    UINT message,
    WPARAM wParam = 0,
    LPARAM lParam = 0,
    BOOL bDeep = TRUE,
    BOOL bOnlyPerm = FALSE);
```

### Parameters

*message*<br/>
Specifies the message to be sent.

*wParam*<br/>
Specifies additional message-dependent information.

*lParam*<br/>
Specifies additional message-dependent information.

*bDeep*<br/>
Specifies the level to which to search. If TRUE, recursively search all children; if FALSE, search only immediate children.

*bOnlyPerm*<br/>
Specifies whether the message will be received by temporary windows. If TRUE, temporary windows can receive the message; if FALSE, only permanent windows receive the message. For more information on temporary windows see [Technical Note 3](../../mfc/tn003-mapping-of-windows-handles-to-objects.md).

### Remarks

If *bDeep* is FALSE, the message is sent just to the immediate children of the window; otherwise the message is sent to all descendant windows.

If *bDeep* and *bOnlyPerm* are TRUE, the search continues below temporary windows. In this case, only permanent windows encountered during the search receive the message. If *bDeep* is FALSE, the message is sent only to the immediate children of the window.

### Example

[!code-cpp[NVC_MFCWindowing#114](../../mfc/reference/codesnippet/cpp/cwnd-class_55.cpp)]

## <a name="sendnotifymessage"></a> CWnd::SendNotifyMessage

Sends the specified message to the window.

```
BOOL SendNotifyMessage(
    UINT message,
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*message*<br/>
Specifies the message to be sent.

*wParam*<br/>
Specifies additional message-dependent information.

*lParam*<br/>
Specifies additional message-dependent information.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

If the window was created by the calling thread, `SendNotifyMessage` calls the window procedure for the window and does not return until the window procedure has processed the message. If the window was created by a different thread, `SendNotifyMessage` passes the message to the window procedure and returns immediately; it does not wait for the window procedure to finish processing the message.

## <a name="setactivewindow"></a> CWnd::SetActiveWindow

Makes `CWnd` the active window.

```
CWnd* SetActiveWindow();
```

### Return Value

The window that was previously active.

The returned pointer may be temporary and should not be stored for later use.

### Remarks

The `SetActiveWindow` member function should be used with care since it allows an application to arbitrarily take over the active window and input focus. Normally, Windows takes care of all activation.

## <a name="setcapture"></a> CWnd::SetCapture

Causes all subsequent mouse input to be sent to the current `CWnd` object regardless of the position of the cursor.

```
CWnd* SetCapture();
```

### Return Value

A pointer to the window object that previously received all mouse input. It is NULL if there is no such window. The returned pointer may be temporary and should not be stored for later use.

### Remarks

When `CWnd` no longer requires all mouse input, the application should call the [ReleaseCapture](/windows/win32/api/winuser/nf-winuser-releasecapture) function so that other windows can receive mouse input.

While mouse input is captured, no WM_NCHITTEST or WM_SETCURSOR messages are sent to the active window.

## <a name="setcaretpos"></a> CWnd::SetCaretPos

Sets the position of the caret.

```
static void PASCAL SetCaretPos(POINT point);
```

### Parameters

*point*<br/>
Specifies the new x and y coordinates (in client coordinates) of the caret.

### Remarks

The `SetCaretPos` member function moves the caret only if it is owned by a window in the current task. `SetCaretPos` moves the caret whether or not the caret is hidden.

The caret is a shared resource. A window should not move the caret if it does not own the caret.

### Example

[!code-cpp[NVC_MFCWindowing#115](../../mfc/reference/codesnippet/cpp/cwnd-class_56.cpp)]

## <a name="setclipboardviewer"></a> CWnd::SetClipboardViewer

Adds this window to the chain of windows that are notified (by means of the WM_DRAWCLIPBOARD message) whenever the content of the Clipboard is changed.

```
HWND SetClipboardViewer();
```

### Return Value

A handle to the next window in the Clipboard-viewer chain if successful. Applications should save this handle (it can be stored as a member variable) and use it when responding to Clipboard-viewer chain messages.

### Remarks

A window that is part of the Clipboard-viewer chain must respond to [WM_DRAWCLIPBOARD](#ondrawclipboard), [WM_CHANGECBCHAIN](#onchangecbchain), and [WM_DESTROY](#ondestroy) messages and pass the message to the next window in the chain.

This member function sends a WM_DRAWCLIPBOARD message to the window. Since the handle to the next window in the Clipboard-viewer chain has not yet been returned, the application should not pass on the WM_DRAWCLIPBOARD message that it receives during the call to `SetClipboardViewer`.

To remove itself from the Clipboard-viewer chain, an application must call the [ChangeClipboardChain](#changeclipboardchain) member function.

## <a name="setdlgctrlid"></a> CWnd::SetDlgCtrlID

Sets the window ID or control ID for the window to a new value.

```
int SetDlgCtrlID(int nID);
```

### Parameters

*nID*<br/>
The new value to set for the control's identifier.

### Return Value

The previous identifier of the window, if successful; otherwise 0.

### Remarks

The window can be any child window, not only a control in a dialog box. The window cannot be a top-level window.

## <a name="setdlgitemint"></a> CWnd::SetDlgItemInt

Sets the text of a given control in a dialog box to the string representation of a specified integer value.

```cpp
void SetDlgItemInt(
    int nID,
    UINT nValue,
    BOOL bSigned = TRUE);
```

### Parameters

*nID*<br/>
Specifies the integer ID of the control to be changed.

*nValue*<br/>
Specifies the integer value used to generate the item text.

*bSigned*<br/>
Specifies whether the integer value is signed or unsigned. If this parameter is TRUE, *nValue* is signed. If this parameter is TRUE and *nValue* is less than 0, a minus sign is placed before the first digit in the string. If this parameter is FALSE, *nValue* is unsigned.

### Remarks

`SetDlgItemInt` sends a [WM_SETTEXT](/windows/win32/winmsg/wm-settext) message to the given control.

### Example

  See the example for [CWnd::SetDlgItemText](#setdlgitemtext).

## <a name="setdlgitemtext"></a> CWnd::SetDlgItemText

Sets the caption or text of a control owned by a window or dialog box.

```cpp
void SetDlgItemText(
    int nID,
    LPCTSTR lpszString);
```

### Parameters

*nID*<br/>
Identifies the control whose text is to be set.

*lpszString*<br/>
Points to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object or null-terminated string that contains the text to be copied to the control.

### Remarks

`SetDlgItemText` sends a [WM_SETTEXT](/windows/win32/winmsg/wm-settext) message to the given control.

### Example

[!code-cpp[NVC_MFCWindowing#116](../../mfc/reference/codesnippet/cpp/cwnd-class_57.cpp)]

## <a name="setforegroundwindow"></a> CWnd::SetForegroundWindow

Puts the thread that created the window into the foreground and activates the window.

```
BOOL SetForegroundWindow();
```

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

Keyboard input is directed to the window, and various visual cues are changed for the user. The foreground window is the window with which the user is currently working. The foreground window applies only to top-level windows (frame windows or dialogs boxes).

### Example

  See the example for [CWnd::FindWindow](#findwindow).

## <a name="setfocus"></a> CWnd::SetFocus

Claims the input focus.

```
CWnd* SetFocus();
```

### Return Value

A pointer to the window object that previously had the input focus. It is NULL if there is no such window. The returned pointer may be temporary and should not be stored.

### Remarks

The input focus directs all subsequent keyboard input to this window. Any window that previously had the input focus loses it.

The `SetFocus` member function sends a [WM_KILLFOCUS](/windows/win32/inputdev/wm-killfocus) message to the window that loses the input focus and a [WM_SETFOCUS](/windows/win32/inputdev/wm-setfocus) message to the window that receives the input focus. It also activates either the window or its parent.

If the current window is active but does not have the focus (that is, no window has the focus), any key pressed will produce the messages [WM_SYSCHAR](#onsyschar), [WM_SYSKEYDOWN](#onsyskeydown), or [WM_SYSKEYUP](#onsyskeyup).

## <a name="setfont"></a> CWnd::SetFont

Sends the WM_SETFONT message to the window to use the specified font.

```cpp
void SetFont(
    CFont* pFont,
    BOOL bRedraw = TRUE);
```

### Parameters

*pFont*<br/>
Pointer to a `CFont` object.

*bRedraw*<br/>
TRUE for the window to redraw immediately after it processes the WM_SETFONT message; otherwise FALSE.

### Remarks

This method has no effect unless the window processes the WM_SETFONT message. Many MFC classes that derive from `CWnd` process this message because they are attached to a predefined window class that includes a message handler for the WM_SETFONT message. To use this method, classes that you derive from `CWnd` must define a method handler for the WM_SETFONT message.

## <a name="seticon"></a> CWnd::SetIcon

Call this member function to set the handle to a specific icon, as identified by *hIcon*.

```
HICON SetIcon(
    HICON hIcon,
    BOOL bBigIcon);
```

### Parameters

*hIcon*<br/>
A handle to a previous icon.

*bBigIcon*<br/>
Specifies a 32 pixel by 32 pixel icon if TRUE; specifies a 16 pixel by 16 pixel icon if FALSE.

### Return Value

A handle to an icon.

### Remarks

When the window class is registered, it selects an icon.

### Example

  See the example for [CWnd::GetSystemMenu](#getsystemmenu).

## <a name="setlayeredwindowattributes"></a> CWnd::SetLayeredWindowAttributes

Sets the opacity and transparency color key of a layered window.

```
BOOL SetLayeredWindowAttributes(
    COLORREF crKey,
    BYTE bAlpha,
    DWORD dwFlags);
```

### Parameters

*crKey*<br/>
Pointer to a COLORREF value that specifies the transparency color key to be used when composing the layered window. All pixels painted by the window in this color will be transparent. To generate a COLORREF, use the RGB macro.

*bAlpha*<br/>
Alpha value used to describe the opacity of the layered window. For more information, see the `SourceConstantAlpha` member of the [BLENDFUNCTION](/windows/win32/api/wingdi/ns-wingdi-blendfunction) structure. When *bAlpha* is 0, the window is completely transparent. When *bAlpha* is 255, the window is opaque.

*dwFlags*<br/>
Specifies an action to take. This parameter can be one or more of the following values. For a list of possible values, see [SetLayeredWindowAttributes](/windows/win32/api/winuser/nf-winuser-setlayeredwindowattributes).

### Return Value

Nonzero if the function succeeds; otherwise 0.

### Remarks

This member function emulates the functionality of the function [SetLayeredWindowAttributes](/windows/win32/api/winuser/nf-winuser-setlayeredwindowattributes), as described in the Windows SDK.

## <a name="setmenu"></a> CWnd::SetMenu

Sets the current menu to the specified menu.

```
BOOL SetMenu(CMenu* pMenu);
```

### Parameters

*pMenu*<br/>
Identifies the new menu. If this parameter is NULL, the current menu is removed.

### Return Value

Nonzero if the menu is changed; otherwise 0.

### Remarks

Causes the window to be redrawn to reflect the menu change.

`SetMenu` will not destroy a previous menu. An application should call the [CMenu::DestroyMenu](../../mfc/reference/cmenu-class.md#destroymenu) member function to accomplish this task.

### Example

  See the example for [CMenu::LoadMenu](../../mfc/reference/cmenu-class.md#loadmenu).

## <a name="setowner"></a> CWnd::SetOwner

Sets the current window's owner to the specified window object.

```cpp
void SetOwner(CWnd* pOwnerWnd);
```

### Parameters

*pOwnerWnd*<br/>
Identifies the new owner of the window object. If this parameter is NULL, the window object has no owner.

### Remarks

This owner can then receive command messages from the current window object. By default, the parent of the current window is its owner.

It is often useful to establish connections between window objects that are unrelated to the window hierarchy. For example, [CToolBar](../../mfc/reference/ctoolbar-class.md) sends notifications to its owner instead of to its parent. This allows the toolbar to become the child of one window (such as an OLE container application window) while sending notifications to another window (such as the in-place frame window). Furthermore, when a server window is deactivated or activated during in-place editing, any window owned by the frame window is hidden or shown. This ownership is explicitly set with a call to `SetOwner`.

The ownership concept of this function is different from the ownership concept of [GetWindow](/windows/win32/api/winuser/nf-winuser-getwindow).

## <a name="setparent"></a> CWnd::SetParent

Changes the parent window of a child window.

```
CWnd* SetParent(CWnd* pWndNewParent);
```

### Parameters

*pWndNewParent*<br/>
Identifies the new parent window.

### Return Value

A pointer to the previous parent window object if successful. The returned pointer may be temporary and should not be stored for later use.

### Remarks

If the child window is visible, Windows performs the appropriate redrawing and repainting.

## <a name="setproperty"></a> CWnd::SetProperty

Call this member function to set the OLE control property specified by *dwDispID*.

```cpp
void AFX_CDECL SetProperty(
    DISPID dwDispID,
    VARTYPE vtProp, ...);
```

### Parameters

*dwDispID*<br/>
Identifies the property to be set.

*vtProp*<br/>
Specifies the type of the property to be set. For possible values, see the Remarks section for [COleDispatchDriver::InvokeHelper](../../mfc/reference/coledispatchdriver-class.md#invokehelper).

*...*<br/>
A single parameter of the type specified by *vtProp*.

### Remarks

> [!NOTE]
> This function should be called only on a `CWnd` object that represents an OLE control.

For more information about using this member function with OLE Control Containers, see the article [ActiveX Control Containers: Programming ActiveX Controls in an ActiveX Control Container](../../mfc/programming-activex-controls-in-a-activex-control-container.md).

## <a name="setredraw"></a> CWnd::SetRedraw

An application calls `SetRedraw` to allow changes to be redrawn or to prevent changes from being redrawn.

```cpp
void SetRedraw(BOOL bRedraw = TRUE);
```

### Parameters

*bRedraw*<br/>
Specifies the state of the redraw flag. If this parameter is TRUE, the redraw flag is set; if FALSE, the flag is cleared.

### Remarks

This member function sets or clears the redraw flag. While the redraw flag is cleared, the contents will not be updated after each change and will not be repainted until the redraw flag is set. For example, an application that needs to add several items to a list box can clear the redraw flag, add the items, and then set the redraw flag. Finally, the application can call the [Invalidate](#invalidate) or [InvalidateRect](#invalidaterect) member function to cause the list box to be repainted.

### Example

[!code-cpp[NVC_MFCWindowing#117](../../mfc/reference/codesnippet/cpp/cwnd-class_58.cpp)]

## <a name="setscrollinfo"></a> CWnd::SetScrollInfo

Call this member function to set the information that the `SCROLLINFO` structure maintains about a scroll bar.

```
BOOL SetScrollInfo(
    int nBar,
    LPSCROLLINFO lpScrollInfo,
    BOOL bRedraw = TRUE);
```

### Parameters

*nBar*<br/>
Specifies whether the scroll bar is a control or part of a window's nonclient area. If it is part of the nonclient area, nBar also indicates whether the scroll bar is positioned horizontally, vertically, or both. It must be one of the following:

- SB_CTL Contains the parameters for a scroll bar control. The `m_hWnd` data member must be the handle of the scroll bar control.

- SB_HORZ Specifies that the window is a horizontal scroll bar.

- SB_VERT Specifies that the window is a vertical scroll bar.

*lpScrollInfo*<br/>
A pointer to a [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) structure. See the Windows SDK for more information about this structure.

*bRedraw*<br/>
Specifies whether the scroll bar should be redrawn to reflect the new position. If *bRedraw* is TRUE, the scroll bar is redrawn. If it is FALSE, it is not redrawn. The scroll bar is redrawn by default.

### Return Value

If successful, the return is TRUE. Otherwise, it is FALSE.

### Remarks

The [SCROLLINFO](/windows/win32/api/winuser/ns-winuser-scrollinfo) structure contains information about a scroll bar, including the minimum and maximum scrolling positions, the page size, and the position of the scroll box (the thumb). See the `SCROLLINFO` structure topic in the Windows SDK for more information about changing the structure defaults.

The MFC Windows message handlers that indicate scroll-bar position, [CWnd::OnHScroll](#onhscroll) and [CWnd::OnVScroll](#onvscroll), provide only 16 bits of position data. [GetScrollInfo](#getscrollinfo) and `SetScrollInfo` provide 32 bits of scroll-bar position data. Thus, an application can call `GetScrollInfo` while processing either `CWnd::OnHScroll` or `CWnd::OnVScroll` to obtain 32-bit scroll-bar position data.

> [!NOTE]
> [CWnd::GetScrollInfo](#getscrollinfo) enables applications to use 32-bit scroll-bar positions.

## <a name="setscrollpos"></a> CWnd::SetScrollPos

Sets the current position of a scroll box and, if requested, redraws the scroll bar to reflect the new position of the scroll box.

```
int SetScrollPos(
    int nBar,
    int nPos,
    BOOL bRedraw = TRUE);
```

### Parameters

*nBar*<br/>
Specifies the scroll bar to be set. This parameter can be either of the following:

- SB_HORZ Sets the position of the scroll box in the horizontal scroll bar of the window.

- SB_VERT Sets the position of the scroll box in the vertical scroll bar of the window.

*nPos*<br/>
Specifies the new position of the scroll box. It must be within the scrolling range.

*bRedraw*<br/>
Specifies whether the scroll bar should be repainted to reflect the new scroll-box position. If this parameter is TRUE, the scroll bar is repainted; if FALSE, the scroll bar is not repainted.

### Return Value

The previous position of the scroll box.

### Remarks

Setting *bRedraw* to FALSE is useful whenever the scroll bar will be redrawn by a subsequent call to another function.

## <a name="setscrollrange"></a> CWnd::SetScrollRange

Sets minimum and maximum position values for the given scroll bar.

```cpp
void SetScrollRange(
    int nBar,
    int nMinPos,
    int nMaxPos,
    BOOL bRedraw = TRUE);
```

### Parameters

*nBar*<br/>
Specifies the scroll bar to be set. This parameter can be either of the following values:

- SB_HORZ Sets the range of the horizontal scroll bar of the window.

- SB_VERT Sets the range of the vertical scroll bar of the window.

*nMinPos*<br/>
Specifies the minimum scrolling position.

*nMaxPos*<br/>
Specifies the maximum scrolling position.

*bRedraw*<br/>
Specifies whether the scroll bar should be redrawn to reflect the change. If *bRedraw* is TRUE, the scroll bar is redrawn; if FALSE, the scroll bar is not redrawn.

### Remarks

It can also be used to hide or show standard scroll bars.

An application should not call this function to hide a scroll bar while processing a scroll-bar notification message.

If the call to `SetScrollRange` immediately follows a call to the [SetScrollPos](#setscrollpos) member function, the *bRedraw* parameter in the `SetScrollPos` member function should be 0 to prevent the scroll bar from being drawn twice.

The default range for a standard scroll bar is 0 through 100. The default range for a scroll bar control is empty (both the *nMinPos* and *nMaxPos* values are 0). The difference between the values specified by *nMinPos* and *nMaxPos* must not be greater than INT_MAX.

## <a name="settimer"></a> CWnd::SetTimer

Installs a system timer.

```
UINT_PTR SetTimer(
    UINT_PTR nIDEvent,
    UINT nElapse,
    void (CALLBACK* lpfnTimer)(HWND,
    UINT,
    UINT_PTR,
    DWORD));
```

### Parameters

*nIDEvent*<br/>
Specifies a nonzero timer identifier. If the timer identifier is unique, this same value is returned by `SetTimer`. Otherwise, `SetTimer` determines a new unique value and returns that. For a window timer (which has a NULL callback function), the value must be unique only for other windows timers that are associated with the current window. For a callback timer, the value must be unique for all timers in all processes. Therefore, when you create a callback timer, it is more likely that the returned value might differ from the value you specify.

*nElapse*<br/>
Specifies the time-out value, or interval, in milliseconds.

*lpfnTimer*<br/>
Specifies the address of the application-supplied `TimerProc` callback function that processes the [WM_TIMER](/windows/win32/winmsg/wm-timer) messages. If this parameter is NULL, the WM_TIMER messages are placed in the message queue of the application and handled by the `CWnd` object.

### Return Value

The timer identifier of the new timer if the function is successful. This value may or may not be equal to the value passed in through the *nIDEvent* parameter. An application should always pass the return value to the [KillTimer](#killtimer) member function to kill the timer. Nonzero if successful; otherwise, 0.

### Remarks

An interval value is specified, and every time the interval elapses, the system posts a WM_TIMER message to the installing message queue of the installing application or passes the message to an application-defined `TimerProc` callback function.

The *lpfnTimer* callback function need not be named `TimerProc`, but it must be declared as static and defined as follows.

```cpp
void CALLBACK TimerProc(
    HWND hWnd,   // handle of CWnd that called SetTimer
    UINT nMsg,   // WM_TIMER
    UINT_PTR nIDEvent,   // timer identification
    DWORD dwTime    // system time);
```

### Example

This example uses `CWnd::SetTimer`, `CWnd::OnTimer`, and `CWnd::KillTimer` to handle WM_TIMER messages. The first timer is set up to send a WM_TIMER message to the main frame window every 2 seconds in `OnStartTimer`. The `OnTimer` event handler handles WM_TIMER messages for the main frame window. This method causes the PC speaker to beep every 2 seconds. The second timer sends a message to the callback function every 3.75 seconds. `OnStopTimer` will stop both timers by calling `CWnd::KillTimer` for each timer ID.

[!code-cpp[NVC_MFCWindowing#118](../../mfc/reference/codesnippet/cpp/cwnd-class_59.cpp)]

## <a name="setwindowcontexthelpid"></a> CWnd::SetWindowContextHelpId

Call this member function to associate a help context identifier with the specified window.

```
BOOL SetWindowContextHelpId(DWORD dwContextHelpId);
```

### Parameters

*dwContextHelpId*<br/>
The help context identifier.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

If a child window does not have a help context identifier, it inherits the identifier of its parent window. Likewise, if an owned window does not have a help context identifier, it inherits the identifier of its owner window. This inheritance of help context identifiers allows an application to set just one identifier for a dialog box and all of its controls.

### Example

[!code-cpp[NVC_MFCWindowing#119](../../mfc/reference/codesnippet/cpp/cwnd-class_60.cpp)]

## <a name="setwindowplacement"></a> CWnd::SetWindowPlacement

Sets the show state and the normal (restored), minimized, and maximized positions for a window.

```
BOOL SetWindowPlacement(const WINDOWPLACEMENT* lpwndpl);
```

### Parameters

*lpwndpl*<br/>
Points to a [WINDOWPLACEMENT](/windows/win32/api/winuser/ns-winuser-windowplacement) structure that specifies the new show state and positions.

### Return Value

Nonzero if the function is successful; otherwise 0.

## <a name="setwindowpos"></a> CWnd::SetWindowPos

Changes the size, position, and Z-order of child, pop-up, and top-level windows.

```
BOOL SetWindowPos(
    const CWnd* pWndInsertAfter,
    int x,
    int y,
    int cx,
    int cy,
    UINT nFlags);
```

### Parameters

*pWndInsertAfter*<br/>
Identifies the `CWnd` object that will precede (be higher than) this `CWnd` object in the Z-order. This parameter can be a pointer to a `CWnd` or a pointer to one of the following values:

- `wndBottom` Places the window at the bottom of the Z-order. If this `CWnd` is a topmost window, the window loses its topmost status; the system places the window at the bottom of all other windows.

- `wndTop` Places the window at the top of the Z-order.

- `wndTopMost` Places the window above all non-topmost windows. The window maintains its topmost position even when it is deactivated.

- `wndNoTopMost` Repositions the window to the top of all non-topmost windows (that is, behind all topmost windows). This flag has no effect if the window is already a non-topmost window.

For rules about how to use this parameter, see the "Remarks" section of this topic.

*x*<br/>
Specifies the new position of the left side of the window.

*y*<br/>
Specifies the new position of the top of the window.

*cx*<br/>
Specifies the new width of the window.

*cy*<br/>
Specifies the new height of the window.

*nFlags*<br/>
Specifies sizing and positioning options. This parameter can be a combination of the following flags:

- SWP_DRAWFRAME Draws a frame (defined when the window was created) around the window.

- SWP_FRAMECHANGED Sends a WM_NCCALCSIZE message to the window, even if the window's size is not being changed. If this flag is not specified, WM_NCCALCSIZE is sent only when the window's size is being changed.

- SWP_HIDEWINDOW Hides the window.

- SWP_NOACTIVATE Does not activate the window. If this flag is not set, the window is activated and moved to the top of either the topmost or the non-topmost group (depending on the setting of the *pWndInsertAfter* parameter).

- SWP_NOCOPYBITS Discards the entire contents of the client area. If this flag is not specified, the valid contents of the client area are saved and copied back into the client area after the window is sized or repositioned.

- SWP_NOMOVE Retains current position (ignores the *x* and *y* parameters).

- SWP_NOOWNERZORDER Does not change the owner window's position in the Z-order.

- SWP_NOREDRAW Does not redraw changes. If this flag is set, no repainting of any kind occurs. This applies to the client area, the nonclient area (including the title and scroll bars), and any part of the parent window uncovered as a result of the moved window. When this flag is set, the application must explicitly invalidate or redraw any parts of the window and parent window that must be redrawn.

- SWP_NOREPOSITION Same as SWP_NOOWNERZORDER.

- SWP_NOSENDCHANGING Prevents the window from receiving the WM_WINDOWPOSCHANGING message.

- SWP_NOSIZE Retains current size (ignores the *cx* and *cy* parameters).

- SWP_NOZORDER Retains current ordering (ignores *pWndInsertAfter*).

- SWP_SHOWWINDOW Displays the window.

### Return Value

Nonzero if the function is successful; otherwise, 0.

### Remarks

Windows are ordered on the screen according to their Z-order; the window at the top of the Z-order appears on top of all other windows in the order.

All coordinates for child windows are client coordinates (relative to the upper-left corner of the parent window's client area).

A window can be moved to the top of the Z-order either by setting the *pWndInsertAfter* parameter to **&wndTopMost** and ensuring that the SWP_NOZORDER flag is not set or by setting a window's Z-order so that it is above any existing topmost windows. When a non-topmost window is made topmost, its owned windows are also made topmost. Its owners are not changed.

A topmost window is no longer topmost if it is repositioned to the bottom ( **&wndBottom**) of the Z-order or after any non-topmost window. When a topmost window is made non-topmost, all of its owners and its owned windows are also made non-topmost windows.

If neither SWP_NOACTIVATE nor SWP_NOZORDER is specified (that is, when the application requests that a window be simultaneously activated and placed in the specified Z-order), the value specified in *pWndInsertAfter* is used only in the following circumstances:

- Neither **&wndTopMost** nor **&wndNoTopMost** is specified in the *pWndInsertAfter* parameter.

- This window is not the active window.

An application cannot activate an inactive window without also bringing it to the top of the Z-order. Applications can change the Z-order of an activated window without restrictions.

A non-topmost window may own a topmost window, but not vice versa. Any window (for example, a dialog box) owned by a topmost window is itself made a topmost window to ensure that all owned windows stay above their owner.

With Windows versions 3.1 and later, windows can be moved to the top of the Z-order and locked there by setting their WS_EX_TOPMOST styles. Such a topmost window maintains its topmost position even when deactivated. For example, selecting the WinHelp Always On Top command makes the Help window topmost, and it then remains visible when you return to your application.

To create a topmost window, call `SetWindowPos` with the *pWndInsertAfter* parameter equal to **&wndTopMost**, or set the WS_EX_TOPMOST style when you create the window.

If the Z-order contains any windows with the WS_EX_TOPMOST style, a window moved with the **&wndTopMost** value is placed at the top of all non-topmost windows, but below any topmost windows. When an application activates an inactive window without the WS_EX_TOPMOST bit, the window is moved above all non-topmost windows but below any topmost windows.

If `SetWindowPos` is called when the *pWndInsertAfter* parameter is **&wndBottom** and `CWnd` is a topmost window, the window loses its topmost status ( WS_EX_TOPMOST is cleared), and the system places the window at the bottom of the Z-order.

### Example

[!code-cpp[NVC_MFCWindowing#120](../../mfc/reference/codesnippet/cpp/cwnd-class_61.cpp)]

## <a name="setwindowrgn"></a> CWnd::SetWindowRgn

Call this member function to set a window's region.

```
int SetWindowRgn(
    HRGN hRgn,
    BOOL bRedraw);
```

### Parameters

*hRgn*<br/>
A handle to a region.

*bRedraw*<br/>
If TRUE, the operating system redraws the window after setting the region; otherwise, it does not. Typically, set *bRedraw* to TRUE if the window is visible. If set to TRUE, the system sends the WM_WINDOWPOSCHANGING and WM_WINDOWPOSCHANGED messages to the window.

### Return Value

If the function succeeds, the return value is nonzero. If the function fails, the return value is zero.

### Remarks

The coordinates of a window's window region are relative to the upper-left corner of the window, not the client area of the window.

After a successful call to `SetWindowRgn`, the operating system owns the region specified by the region handle *hRgn*. The operating system does not make a copy of the region, so do not make any further function calls with this region handle, and do not close this region handle.

## <a name="setwindowtext"></a> CWnd::SetWindowText

Sets the window's title to the specified text.

```cpp
void SetWindowText(LPCTSTR lpszString);
```

### Parameters

*lpszString*<br/>
Points to a [CString](../../atl-mfc-shared/reference/cstringt-class.md) object or null-terminated string to be used as the new title or control text.

### Remarks

If the window is a control, the text within the control is set.

This function causes a [WM_SETTEXT](/windows/win32/winmsg/wm-settext) message to be sent to this window.

### Example

[!code-cpp[NVC_MFCWindowing#121](../../mfc/reference/codesnippet/cpp/cwnd-class_62.cpp)]

## <a name="showcaret"></a> CWnd::ShowCaret

Shows the caret on the screen at the caret's current position.

```cpp
void ShowCaret();
```

### Remarks

Once shown, the caret begins flashing automatically.

The `ShowCaret` member function shows the caret only if it has a current shape and has not been hidden two or more times consecutively. If the caret is not owned by this window, the caret is not shown.

Hiding the caret is cumulative. If the [HideCaret](#hidecaret) member function has been called five times consecutively, `ShowCaret` must be called five times to show the caret.

The caret is a shared resource. The window should show the caret only when it has the input focus or is active.

### Example

  See the example for [CWnd::CreateCaret](#createcaret).

## <a name="showownedpopups"></a> CWnd::ShowOwnedPopups

Shows or hides all pop-up windows owned by this window.

```cpp
void ShowOwnedPopups(BOOL bShow = TRUE);
```

### Parameters

*bShow*<br/>
Specifies whether pop-up windows are to be shown or hidden. If this parameter is TRUE, all hidden pop-up windows are shown. If this parameter is FALSE, all visible pop-up windows are hidden.

### Example

  See the example for [CWnd::SetWindowPos](#setwindowpos).

## <a name="showscrollbar"></a> CWnd::ShowScrollBar

Shows or hides a scroll bar.

```cpp
void ShowScrollBar(
    UINT nBar,
    BOOL bShow = TRUE);
```

### Parameters

*nBar*<br/>
Specifies whether the scroll bar is a control or part of a window's nonclient area. If it is part of the nonclient area, *nBar* also indicates whether the scroll bar is positioned horizontally, vertically, or both. It must be one of the following:

- SB_BOTH Specifies the horizontal and vertical scroll bars of the window.

- SB_HORZ Specifies that the window is a horizontal scroll bar.

- SB_VERT Specifies that the window is a vertical scroll bar.

*bShow*<br/>
Specifies whether Windows shows or hides the scroll bar. If this parameter is TRUE, the scroll bar is shown; otherwise the scroll bar is hidden.

### Remarks

An application should not call `ShowScrollBar` to hide a scroll bar while processing a scroll-bar notification message.

## <a name="showwindow"></a> CWnd::ShowWindow

Sets the visibility state of the window.

```
BOOL ShowWindow(int nCmdShow);
```

### Parameters

*nCmdShow*<br/>
Specifies how the `CWnd` is to be shown. It must be one of the following values:

- SW_HIDE Hides this window and passes activation to another window.

- SW_MINIMIZE Minimizes the window and activates the top-level window in the system's list.

- SW_RESTORE Activates and displays the window. If the window is minimized or maximized, Windows restores it to its original size and position.

- SW_SHOW Activates the window and displays it in its current size and position.

- SW_SHOWMAXIMIZED Activates the window and displays it as a maximized window.

- SW_SHOWMINIMIZED Activates the window and displays it as an icon.

- SW_SHOWMINNOACTIVE Displays the window as an icon. The window that is currently active remains active.

- SW_SHOWNA Displays the window in its current state. The window that is currently active remains active.

- SW_SHOWNOACTIVATE Displays the window in its most recent size and position. The window that is currently active remains active.

- SW_SHOWNORMAL Activates and displays the window. If the window is minimized or maximized, Windows restores it to its original size and position.

### Return Value

Nonzero if the window was previously visible; 0 if the `CWnd` was previously hidden.

### Remarks

`ShowWindow` must be called only once per application for the main window with [CWinApp::m_nCmdShow](../../mfc/reference/cwinapp-class.md#m_ncmdshow). Subsequent calls to `ShowWindow` must use one of the values listed above instead of the one specified by `CWinApp::m_nCmdShow`.

### Example

  See the example for [CWnd::CalcWindowRect](#calcwindowrect).

## <a name="subclassdlgitem"></a> CWnd::SubclassDlgItem

Call this member function to "dynamically subclass" a control created from a dialog template and attach it to this `CWnd` object.

```
BOOL SubclassDlgItem(
    UINT nID,
    CWnd* pParent);
```

### Parameters

*nID*<br/>
The control's ID.

*pParent*<br/>
The control's parent (usually a dialog box).

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

When a control is dynamically subclassed, windows messages will route through the `CWnd`'s message map and call message handlers in the `CWnd`'s class first. Messages that are passed to the base class will be passed to the default message handler in the control.

This member function attaches the Windows control to a `CWnd` object and replaces the control's `WndProc` and `AfxWndProc` functions. The function stores the old `WndProc` in the location returned by the `GetSuperWndProcAddr` member function.

### Example

[!code-cpp[NVC_MFCWindowing#122](../../mfc/reference/codesnippet/cpp/cwnd-class_63.cpp)]

## <a name="subclasswindow"></a> CWnd::SubclassWindow

Call this member function to "dynamically subclass" a window and attach it to this `CWnd` object.

```
BOOL SubclassWindow(HWND hWnd);
```

### Parameters

*hWnd*<br/>
A handle to the window.

### Return Value

Nonzero if the function is successful; otherwise 0.

### Remarks

When a window is dynamically subclassed, windows messages will route through the `CWnd`'s message map and call message handlers in the `CWnd`'s class first. Messages that are passed to the base class will be passed to the default message handler in the window.

This member function attaches the Windows control to a `CWnd` object and replaces the window's `WndProc` and `AfxWndProc` functions. The function stores a pointer to the old `WndProc` in the `CWnd` object.

> [!NOTE]
> The window must not already be attached to an MFC object when this function is called.

### Example

[!code-cpp[NVC_MFCWindowing#123](../../mfc/reference/codesnippet/cpp/cwnd-class_64.cpp)]

## <a name="unlockwindowupdate"></a> CWnd::UnlockWindowUpdate

Call this member function to unlock a window that was locked with `CWnd::LockWindowUpdate`.

```cpp
void UnlockWindowUpdate();
```

### Remarks

Only one window at a time can be locked using `LockWindowUpdate`. See [CWnd::LockWindowUpdate](#lockwindowupdate) or the Win32 function [LockWindowUpdate](/windows/win32/api/winuser/nf-winuser-lockwindowupdate) for more information on locking windows.

## <a name="unsubclasswindow"></a> CWnd::UnsubclassWindow

Call this member function to set `WndProc` back to its original value and detach the window identified by HWND from the `CWnd` object.

```
HWND UnsubclassWindow();
```

### Return Value

A handle to the unsubclassed window.

### Example

  See the example for [CWnd::SubclassWindow](#subclasswindow).

## <a name="updatedata"></a> CWnd::UpdateData

Call this member function to initialize data in a dialog box, or to retrieve and validate dialog data.

```
BOOL UpdateData(BOOL bSaveAndValidate = TRUE);
```

### Parameters

*bSaveAndValidate*<br/>
Flag that indicates whether dialog box is being initialized (FALSE) or data is being retrieved (TRUE).

### Return Value

Nonzero if the operation is successful; otherwise 0. If *bSaveAndValidat*e is TRUE, then a return value of nonzero means that the data is successfully validated.

### Remarks

The framework automatically calls `UpdateData` with *bSaveAndValidate* set to FALSE when a modal dialog box is created in the default implementation of [CDialog::OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog). The call occurs before the dialog box is visible. The default implementation of [CDialog::OnOK](../../mfc/reference/cdialog-class.md#onok) calls this member function with *bSaveAndValidate* set to TRUE to retrieve the data, and if successful, will close the dialog box. (If the Cancel button is clicked in the dialog box, the dialog box is closed without the data being retrieved.)

## <a name="updatedialogcontrols"></a> CWnd::UpdateDialogControls

Call this member function to update the state of dialog buttons and other controls in a dialog box or window that uses the [ON_UPDATE_COMMAND_UI](message-map-macros-mfc.md#on_update_command_ui) callback mechanism.

```cpp
void UpdateDialogControls(
    CCmdTarget* pTarget,
    BOOL bDisableIfNoHndler);
```

### Parameters

*pTarget*<br/>
Points to the main frame window of the application, and is used for routing update messages.

*bDisableIfNoHndler*<br/>
Flag that indicates whether a control that has no update handler should be automatically displayed as disabled.

### Remarks

If a child control does not have a handler and *bDisableIfNoHndler* is TRUE, then the child control will be disabled.

The framework calls this member function for controls in dialog bars or toolbars as part of the application's idle processing.

## <a name="updatelayeredwindow"></a> CWnd::UpdateLayeredWindow

Updates the position, size, shape, content, and translucency of a layered window.

```
BOOL UpdateLayeredWindow(
    CDC* pDCDst,
    POINT* pptDst,
    SIZE* psize,
    CDC* pDCSrc,
    POINT* pptSrc,
    COLORREF crKey,
    BLENDFUNCTION* pblend,
    DWORD dwFlags);
```

### Parameters

*pDCDst*<br/>
A pointer to a device context for the screen. It is used for palette color matching when the window contents are updated. If *pDCDst* is NULL, the default palette will be used.

If *pDCSrc* is NULL, *pDCDst* must be NULL.

*pptDst*<br/>
A pointer to a `POINT` structure specifying the new screen position of the layered window. If the current position is not changing, *pptDst* can be NULL.

*psize*<br/>
Pointer to a `SIZE` structure that specifies the new size of the layered window. If the size of the window is not changing, *psize* can be NULL.

If *pDCSrc* is NULL, *psize* must be NULL.

*pDCSrc*<br/>
A pointer to a DC for the surface that defines the layered window. If the shape and visual context of the window are not changing, *pDCSrc* can be NULL.

*pptSrc*<br/>
Pointer to a `POINT` structure that specifies the location of the layer in the device context.

If *pDCSrc* is NULL, *pptSrc* should be NULL.

*crKey*<br/>
Pointer to a COLORREF value that specifies the transparency color key to be used when composing the layered window. All pixels painted by the window in this color will be transparent. To generate a COLORREF, use the RGB macro.

*pblend*<br/>
Pointer to a [BLENDFUNCTION](/windows/win32/api/wingdi/ns-wingdi-blendfunction) structure that specifies the transparency value to be used when composing the layered window.

*dwFlags*<br/>
Specifies an action to take. This parameter can be one or more of the following values. For a list of possible values, see [UpdateLayeredWindow](/windows/win32/api/winuser/nf-winuser-updatelayeredwindow).

### Return Value

Nonzero if the function succeeds; otherwise 0.

### Remarks

This member function emulates the functionality of the function [UpdateLayeredWindow](/windows/win32/api/winuser/nf-winuser-updatelayeredwindow), as described in the Windows SDK.

## <a name="updatewindow"></a> CWnd::UpdateWindow

Updates the client area by sending a [WM_PAINT](/windows/win32/gdi/wm-paint) message if the update region is not empty.

```cpp
void UpdateWindow();
```

### Remarks

The `UpdateWindow` member function sends a WM_PAINT message directly, bypassing the application queue. If the update region is empty, WM_PAINT is not sent.

### Example

[!code-cpp[NVC_MFCWindowing#124](../../mfc/reference/codesnippet/cpp/cwnd-class_65.cpp)]

## <a name="validaterect"></a> CWnd::ValidateRect

Validates the client area within the given rectangle by removing the rectangle from the update region of the window.

```cpp
void ValidateRect(LPCRECT lpRect);
```

### Parameters

*lpRect*<br/>
Points to a [CRect](../../atl-mfc-shared/reference/crect-class.md) object or [RECT structure](/windows/win32/api/windef/ns-windef-rect) that contains client coordinates of the rectangle to be removed from the update region. If *lpRect* is NULL, the entire window is validated.

### Remarks

The [BeginPaint](#beginpaint) member function automatically validates the entire client area. Neither the `ValidateRect` nor the [ValidateRgn](#validatergn) member function should be called if a portion of the update region needs to be validated before [WM_PAINT](/windows/win32/gdi/wm-paint) is next generated.

Windows continues to generate WM_PAINT messages until the current update region is validated.

## <a name="validatergn"></a> CWnd::ValidateRgn

Validates the client area within the given region by removing the region from the current update region of the window.

```cpp
void ValidateRgn(CRgn* pRgn);
```

### Parameters

*pRgn*<br/>
A pointer to a [CRgn](../../mfc/reference/crgn-class.md) object that identifies a region that defines the area to be removed from the update region. If this parameter is NULL, the entire client area is removed.

### Remarks

The given region must have been created previously by a region function. The region coordinates are assumed to be client coordinates.

The [BeginPaint](#beginpaint) member function automatically validates the entire client area. Neither the [ValidateRect](#validaterect) nor the `ValidateRgn` member function should be called if a portion of the update region must be validated before the next [WM_PAINT](/windows/win32/gdi/wm-paint) message is generated.

## <a name="windowfrompoint"></a> CWnd::WindowFromPoint

Retrieves the window that contains the specified point; *point* must specify the screen coordinates of a point on the screen.

```
static CWnd* PASCAL WindowFromPoint(POINT point);
```

### Parameters

*point*<br/>
Specifies a [CPoint](../../atl-mfc-shared/reference/cpoint-class.md) object or [POINT](/windows/win32/api/windef/ns-windef-point) data structure that defines the point to be checked.

### Return Value

A pointer to the window object in which the point lies. It is NULL if no window exists at the given point. The returned pointer may be temporary and should not be stored for later use.

### Remarks

`WindowFromPoint` does not retrieve a hidden or disabled window, even if the point is within the window. An application should use the [ChildWindowFromPoint](#childwindowfrompoint) member function for a nonrestrictive search.

## <a name="windowproc"></a> CWnd::WindowProc

Provides a Windows procedure ( `WindowProc`) for a `CWnd` object.

```
virtual LRESULT WindowProc(
    UINT message,
    WPARAM wParam,
    LPARAM lParam);
```

### Parameters

*message*<br/>
Specifies the Windows message to be processed.

*wParam*<br/>
Provides additional information used in processing the message. The parameter value depends on the message.

*lParam*<br/>
Provides additional information used in processing the message. The parameter value depends on the message.

### Return Value

The return value depends on the message.

### Remarks

It dispatches messages through the window's message map.

## <a name="winhelp"></a> CWnd::WinHelp

Called to initiate the WinHelp application.

```
virtual void WinHelp(
    DWORD_PTR dwData,
    UINT nCmd = HELP_CONTEXT);
```

### Parameters

*dwData*<br/>
Specifies additional data. The value used depends on the value of the *nCmd* parameter.

*nCmd*<br/>
Specifies the type of help requested. For a list of possible values and how they affect the *dwData* parameter, see the [WinHelp](/windows/win32/api/winuser/nf-winuser-winhelpw) Windows function in the Windows SDK.

### Remarks

See [CWinApp::WinHelp](../../mfc/reference/cwinapp-class.md#winhelp) for more information.

## <a name="registertouchwindow"></a> CWnd::RegisterTouchWindow

Registers or unregisters Windows touch support.

```
BOOL RegisterTouchWindow(
    BOOL bRegister = TRUE,
    ULONG ulFlags = 0);
```

### Parameters

*bRegister*<br/>
TRUE indicates register Windows touch support; FALSE otherwise.

*ulFlags*<br/>
A set of bit flags that specify optional modifications. This field may contain 0 or one of the following values: TWF_FINETOUCH, TWF_WANTPALM.

### Return Value

TRUE if successful; otherwise FALSE.

### Remarks

## <a name="resizedynamiclayout"></a> CWnd::ResizeDynamicLayout

Called by the framework when the window size changes to adjust the layout of child windows, if dynamic layout is enabled for the window.

```
virtual void ResizeDynamicLayout();
```

### Remarks

## See also

[CCmdTarget Class](../../mfc/reference/ccmdtarget-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CFrameWnd Class](../../mfc/reference/cframewnd-class.md)<br/>
[CView Class](../../mfc/reference/cview-class.md)
