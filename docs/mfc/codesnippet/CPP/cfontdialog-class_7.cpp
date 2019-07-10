// Get the weight of the selected font, if any.
CFontDialog dlg;
if (dlg.DoModal() == IDOK)
{
   int weight = dlg.GetWeight();
   TRACE(_T("Weight of the selected font = %d\n"), weight);
}