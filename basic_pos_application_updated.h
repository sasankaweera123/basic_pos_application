//---------------------------------------------------------------------------

#ifndef basic_pos_application_updatedH
#define basic_pos_application_updatedH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPanel *pos_num;
	TPanel *item_details;
	TPanel *shop;
	TPanel *Panel4;
	TPanel *Panel5;
	TPanel *Panel6;
	TImage *Image1;
	TImage *Image2;
	TImage *Image3;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image7;
	TImage *Image8;
	TImage *Image9;
	TImage *Image10;
	TImage *Image11;
	TImage *Image12;
	TListBox *lstPrice;
	TButton *btn0;
	TButton *btn1;
	TButton *btn2;
	TButton *btn3;
	TButton *btn4;
	TButton *btn5;
	TButton *btn6;
	TButton *btn7;
	TButton *btn8;
	TButton *btn9;
	TButton *btnC;
	TButton *btnDot;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit_tax;
	TEdit *Edit_sub_total;
	TEdit *Edit_total;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *Edit_cost;
	TEdit *Edit_change;
	TButton *btn_total;
	TImage *Image13;
	TImage *Image14;
	TImage *Image15;
	TButton *btn_save;
	TButton *btn_reset;
	TButton *btn_remove;
	TButton *btn_open;
	TButton *btn_exit;
	TImage *Image16;
	TComboBox *selection_box;
	TSaveDialog *SaveDialog1;
	TOpenDialog *OpenDialog1;
	void __fastcall NumberClick(TObject *Sender);
	void __fastcall btnDotClick(TObject *Sender);
	void __fastcall btnCClick(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall Image7Click(TObject *Sender);
	void __fastcall Image10Click(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Image8Click(TObject *Sender);
	void __fastcall Image11Click(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall Image9Click(TObject *Sender);
	void __fastcall Image12Click(TObject *Sender);
	void __fastcall Image13Click(TObject *Sender);
	void __fastcall Image14Click(TObject *Sender);
	void __fastcall Image15Click(TObject *Sender);
	void __fastcall Image16Click(TObject *Sender);
	void __fastcall btn_resetClick(TObject *Sender);
	void __fastcall btn_exitClick(TObject *Sender);
	void __fastcall btn_saveClick(TObject *Sender);
	void __fastcall btn_openClick(TObject *Sender);
	void __fastcall btn_totalClick(TObject *Sender);
	void __fastcall btn_removeClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
