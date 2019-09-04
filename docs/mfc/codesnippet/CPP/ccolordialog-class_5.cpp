// Override OnColorOK to validate the color entered to the
// Red, Green, and Blue edit controls. If the color
// is BLACK (i.e. RGB(0, 0,0)), then force the current color
// selection to be the color initially selected when the
// dialog box is created. The color dialog won't close so
// user can enter a new color.
BOOL CMyColorDlg::OnColorOK()
{
   // Value in Red edit control.
   COLORREF clrref = GetColor();
   if (RGB(0, 0, 0) == clrref)
   {
      AfxMessageBox(_T("BLACK is not an acceptable color. ")
                    _T("Please enter a color again"));

      // GetColor() returns initially selected color.
      SetCurrentColor(GetColor());

      // Won't dismiss color dialog.
      return TRUE;
   }

   // OK to dismiss color dialog.
   return FALSE;
}