CFont* pOldFont;
TEXTMETRIC tm;
const CString& strCaption = InternalGetText();

pOldFont = SelectStockFont(pdc);
pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
pdc->Ellipse(rcBounds);
pdc->GetTextMetrics(&tm);
pdc->SetTextAlign(TA_CENTER | TA_TOP);
pdc->ExtTextOut((rcBounds.left + rcBounds.right) / 2,
(rcBounds.top + rcBounds.bottom - tm.tmHeight) / 2,
ETO_CLIPPED, rcBounds, strCaption, strCaption.GetLength(), NULL);

pdc->SelectObject(pOldFont);