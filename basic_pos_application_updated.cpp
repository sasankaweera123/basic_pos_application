//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "basic_pos_application_updated.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

	Double itemCost, sum, i, tax = 18.00, change;
	Double p,q,a;
    String items;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::NumberClick(TObject *Sender)
{
	TButton* btn = ((TButton*)Sender);

	if(Edit_cost->Text == "0")
	{
		Edit_cost->Text = btn->Caption;
	}
	else
	{
        Edit_cost->Text = Edit_cost->Text + btn->Caption;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnDotClick(TObject *Sender)
{
	if (! Edit_cost->Text.Pos ("."))
	{
		Edit_cost->Text = Edit_cost->Text + ".";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btnCClick(TObject *Sender)
{
	Edit_cost->Text = "0";
	Edit_change->Text = "0";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image1Click(TObject *Sender)
{
    itemCost =0;
	itemCost = itemCost+ 100;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 01   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image6Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 120;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 02   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image7Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 70;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 03   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image10Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 110;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 04   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image2Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 150;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 05   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image5Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 190;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 06   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image8Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 108;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 07   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image11Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 10;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 08   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image3Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 180;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 09   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image4Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 140;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 10   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image9Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 80;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 11   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image12Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 30;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 12   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image13Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 100;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 13   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image14Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 10;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 14   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image15Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 50;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 15   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Image16Click(TObject *Sender)
{
	itemCost =0;
	itemCost = itemCost+ 90;
	items = FloatToStr(itemCost);
	lstPrice->Items->AddStrings("item 16   " + items);

	q = StrToFloat(Edit_sub_total->Text);
	p = q + itemCost;
	Edit_sub_total->Text = FloatToStr(p);

	Edit_tax->Text = FloatToStr(round(p*tax)/100);
	a = StrToFloat(Edit_tax->Text);
	Edit_total->Text = FloatToStr(a+p);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn_resetClick(TObject *Sender)
{
	lstPrice->Items->Clear();
	Edit_tax->Text="0";
	Edit_total->Text="0";
	Edit_sub_total->Text="0";
	Edit_cost->Text="0";
	Edit_change->Text="0";
    selection_box->Text="";

}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn_exitClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn_saveClick(TObject *Sender)
{
	if(SaveDialog1->Execute() == True)
	{
		lstPrice->Items->SaveToFile(SaveDialog1->FileName);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn_openClick(TObject *Sender)
{
	if(OpenDialog1->Execute() == True)
	{
		lstPrice->Items->LoadFromFile(OpenDialog1->FileName);
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn_totalClick(TObject *Sender)
{
	Double total,change,cost;
	total = StrToFloat(Edit_total->Text);
	cost = StrToFloat(Edit_cost->Text);
	change = cost - total;
	Edit_change->Text = "$" + FloatToStr(change);
    Edit_cost->Text = Edit_cost->Text;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn_removeClick(TObject *Sender)
{
	if(lstPrice->ItemIndex >=0)
	{
		lstPrice->Items->Delete(lstPrice->ItemIndex);
        q = StrToFloat(Edit_sub_total->Text);
		p = q - itemCost;
		Edit_sub_total->Text = FloatToStr(p);

		Edit_tax->Text = FloatToStr(round(p*tax)/100);
		a = StrToFloat(Edit_tax->Text);
		Edit_total->Text = FloatToStr(a+p);
	}


}
//---------------------------------------------------------------------------
