// This CMainFrame class extends the CFrameWndEx class.
// GetPane is a method in the CFrameWndEx class which
// Returns a pointer to the pane that has the specified ID.
CBasePane *pBar = GetPane(ID_VIEW_FORMATBAR);
if (pBar != NULL)
{
    // Set the docking mode, the pane alignment, and the pane style.
    pBar->SetDockingMode(DT_STANDARD);
    pBar->SetPaneAlignment(CBRS_ALIGN_LEFT);
    pBar->SetPaneStyle(pBar->GetCurrentAlignment() | CBRS_TOOLTIPS);
    pBar->ShowPane(TRUE, FALSE, FALSE);
}