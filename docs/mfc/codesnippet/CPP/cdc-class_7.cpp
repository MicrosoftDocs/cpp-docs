// print some info about a pen we're ready to enumerate
BOOL CALLBACK EnumObjectHandler(LPVOID lpLogObject, LPARAM /* lpData */)
{
   LOGPEN *pPen = (LOGPEN *)lpLogObject;

   switch (pPen->lopnStyle)
   {
   case PS_SOLID:
      TRACE0("PS_SOLID:      ");
      break;
   case PS_DASH:
      TRACE0("PS_DASH:       ");
      break;
   case PS_DOT:
      TRACE0("PS_DOT:        ");
      break;
   case PS_DASHDOT:
      TRACE0("PS_DASHDOT:    ");
      break;
   case PS_DASHDOTDOT:
      TRACE0("PS_DASHDOTDOT: ");
      break;
   case PS_NULL:
      TRACE0("PS_NULL:       ");
      break;
   case PS_INSIDEFRAME:
      TRACE0("PS_INSIDEFRAME:");
      break;
   default:
      TRACE0("unk style:");
   }

   TRACE2("Color: 0x%8.8X, Width: %d\n", pPen->lopnColor, pPen->lopnWidth);
   return TRUE;
}

// get the default printer and enumerate the pens it has
void CDCView::OnEnumPens()
{
   CPrintDialog dlg(FALSE);
   dlg.GetDefaults();
   HDC hdc = dlg.GetPrinterDC();

   if (hdc != NULL)
   {
      CDC dc;
      dc.Attach(hdc);
      VERIFY(dc.EnumObjects(OBJ_PEN, EnumObjectHandler, 0));
   }
}