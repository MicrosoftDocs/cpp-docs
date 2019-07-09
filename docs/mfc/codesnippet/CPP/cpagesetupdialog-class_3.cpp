switch (nMessage)
{
case WM_PSD_GREEKTEXTRECT:
   DrawMyImage(pDC, lpRect);    //draws my special graphic
   return 1;
default:
   return CPageSetupDialog::OnDrawPage(pDC, nMessage, lpRect);
}