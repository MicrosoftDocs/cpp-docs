// Override MeasureItem() to return the size of the menu item.
// CColorMenu is a CMenu-derived class.

#define COLOR_BOX_WIDTH 20
#define COLOR_BOX_HEIGHT 20

void CColorMenu::MeasureItem(LPMEASUREITEMSTRUCT lpMIS)
{
   // all items are of fixed size
   lpMIS->itemWidth = COLOR_BOX_WIDTH;
   lpMIS->itemHeight = COLOR_BOX_HEIGHT;
}