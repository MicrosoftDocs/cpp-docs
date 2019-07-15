// Reverse the order of the items in the header control.
// (i.e. make the first item the last one, the last item
// the first one, and so on ...).
int nCount = m_myHeaderCtrl.GetItemCount();
LPINT pnOrder = (LPINT)malloc(nCount * sizeof(int));
ASSERT(pnOrder != NULL);
if (NULL != pnOrder)
{
   m_myHeaderCtrl.GetOrderArray(pnOrder, nCount);

   int i, j, nTemp;
   for (i = 0, j = nCount - 1; i < j; i++, j--)
   {
      nTemp = pnOrder[i];
      pnOrder[i] = pnOrder[j];
      pnOrder[j] = nTemp;
   }

   m_myHeaderCtrl.SetOrderArray(nCount, pnOrder);
   free(pnOrder);
}
