// gain a reference to the edit control
CEdit &theEdit = GetEditCtrl();

// get the font the control is using
CFont *pFont = theEdit.GetFont();
TEXTMETRIC tm;

// get the control's DC, too
CDC *pDC = theEdit.GetDC();

// Select the font that the control uses by default into the DC.
// We must do this because the control may or may not be using
// that font at this exact moment
CFont *pOldFont = pDC->SelectObject(pFont);

// Retrieve text metrics for that font and return the previously
// selected font.
pDC->GetTextMetrics(&tm);
pDC->SelectObject(pOldFont);

// Get an identity rectangle and map it to dialog units
CRect rect(0, 0, 100, 1);
::MapDialogRect((HWND)this, rect);

// We now know that 100 dialog units are rect.Width() screen units,
// so we can multiply screen units by 100 and divide by rect.Width()
// to find dialog units from screen units. tm.tmAveCharWidth is
// the width of _one_ character, so setting the tabs at every
// four characters means we also multiply by four.
SetTabStops((4 * tm.tmAveCharWidth * 100) / rect.Width());