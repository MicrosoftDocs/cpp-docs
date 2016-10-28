// CMyEdit inherits from CEdit
void CMyEdit::OnLButtonDown(UINT nFlags, CPoint point)
{
   int n = CharFromPos(point);
   int nLineIndex = HIWORD(n);
   int nCharIndex = LOWORD(n);
   TRACE(_T("nLineIndex = %d, nCharIndex = %d\r\n"), nLineIndex, nCharIndex);

   CEdit::OnLButtonDown(nFlags, point);
}