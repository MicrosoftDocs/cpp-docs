CBrush bkBrush(TranslateColor(GetBackColor()));
COLORREF clrFore = TranslateColor(GetForeColor());
pdc->FillRect(rcBounds, &bkBrush);
pdc->SetTextColor(clrFore);
pdc->DrawText(InternalGetText(), -1, rcBounds, DT_SINGLELINE | DT_CENTER | DT_VCENTER);