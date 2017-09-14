//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TMemo *Memo2;
	TMemo *Memo3;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Button1;
	TButton *Button3;
	TMemo *Memo4;
	TEdit *Edit3;
	TButton *Button5;
	TEdit *Edit5;
	TButton *Button8;
	TButton *Button9;
	TButton *Button10;
	TMemo *Memo5;
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall Edit2Change(TObject *Sender);
	void __fastcall Edit3Change(TObject *Sender);
	void __fastcall Button1Clic(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Edit5Change(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
	void __fastcall Button10Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Memo3Change(TObject *Sender);
	void __fastcall Memo4Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
