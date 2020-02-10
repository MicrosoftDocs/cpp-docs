    if (!CView::OnPreparePrinting(pInfo))
        return FALSE;

    if (!COleDocObjectItem::OnPreparePrinting(this, pInfo))
        return FALSE;

    return TRUE;