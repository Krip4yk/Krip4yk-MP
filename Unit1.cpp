//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
/*
 * Project MP
 *		Created by Krip4yk
 *		Not copyright! Not comercial!
 *
 * Need add:             
 * - Get from files
 * - Open files
 * - Deleting elements
 * - API connection
 * - 
 * Done:
 * - Add elements
 * - Log
 * - Email/Password pairs
 * - Interface
 * -
 *
*/
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Change(TObject *Sender)
{
	if (Edit1->Text.Length() != 0) {
		Button1->Enabled = true; 
	} else {
		Button1->Enabled = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit2Change(TObject *Sender)
{
	if (Edit2->Text.Length() != 0) {
		Button2->Enabled = true; 
	} else {
		Button2->Enabled = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit3Change(TObject *Sender)
{
	if (Edit3->Text.Length() != 0) {
		Button3->Enabled = true;
	} else {
		Button3->Enabled = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit4Change(TObject *Sender)
{
	if (Edit4->Text.Length() != 0) {
		Button4->Enabled = true;
	} else {
		Button4->Enabled = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Clic(TObject *Sender)
{
	for (int i = 1; i <= Edit1->Text.Length(); i++) {
		if (Edit1->Text[i] == ' '){
			Edit1->Text = Edit1->Text.SubString(1, i-1) + Edit1->Text.SubString(i+1, Edit1->Text.Length()-i);
			i--;
		}
	}
	//----------------------------------------------
	bool sobaka = false, dot = false;
	bool text1 = false, text2 = false, text3 = false;
	//----------------------------------------------
	int len_text2 = 4;
	String *str_text2 = new String[len_text2];
	str_text2[0] = "gmail";
	str_text2[1] = "mail";
	str_text2[2] = "yandex";
	str_text2[3] = "rambler";
	//----------------------------------------------
	int len_text3 = 4;
	String *str_text3 = new String[len_text3];
	str_text3[0] = "ru";
	str_text3[1] = "ua";
	str_text3[2] = "com";
	str_text3[3] = "hu";
	//----------------------------------------------
	for (int i = 1; i <= Edit1->Text.Length(); i++) {
		if (Edit1->Text[i] == '@') {
			sobaka = true;
			if (i == 1) {
				break;
			} else {
                text1 = true;
			}
		}
		if (Edit1->Text[i] == '.') {
			dot = true;
			if (i == 0) {
                break;
			} else {
				if (Edit1->Text[i-1] == '@') {
					break;
				} else {
                	text2 = true;
				}
			}
			if (i == Edit1->Text.Length()) {
				break;
			} else {
				text3 = true;
				break;
			}
		}
	}
	if (sobaka && dot && text1 && text2 && text3) {    
		Memo1->Lines->Add(Edit1->Text);
		Edit1->Text = "";              
	} else {
		Memo3->Lines->Add("Error 0. Incorrect mail");
		if (!sobaka) {
			Memo3->Lines->Add("	no '@'");
		}
		if (!dot) {
			Memo3->Lines->Add("	no '.'");
		}
		if (!text1) {
			Memo3->Lines->Add("	no text before '@'");
		}
		if (!text2) {
			Memo3->Lines->Add("	no text after '@'");
		}
		if (!text3) {
			Memo3->Lines->Add("	no text after '.'");
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	Memo2->Lines->Add(Edit2->Text);
	Edit2->Text = "";	
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	if (Memo1->Lines->Count != 0 && Memo2->Lines->Count != 0) {
		for (int i = 0; i < Memo1->Lines->Count; i++) {
			for (int j = 0; j < Memo2->Lines->Count; j++) {
				Memo3->Lines->Add("Trying mail: " + Memo1->Lines->Strings[i] + " password: " + Memo2->Lines->Strings[j]);
			}
		}
	} else {
		if (Memo1->Lines->Count == 0) {
			Memo3->Lines->Add("Error 1. Empty Mail's text");
		}
		if (Memo2->Lines->Count == 0) {
			Memo3->Lines->Add("Error 1. Empty Password's text");
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit5Change(TObject *Sender)
{
	String text = Edit5->Text;
	for (int i = 1; i <= text.Length(); i++){
		if (!text.IsDelimiter("0123456789", i)) {
			Edit5->Text = text.SubString(1, i-1) + text.SubString(i+1, text.Length()-i);
			text = Edit5->Text;
			i--;
			Edit5->SelStart = i;
		}
	}
	if (text.Length() != 0) {
        Button8->Enabled = true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	Button7->Enabled = true;
	Button6->Enabled = false;
	Button9->Enabled = true;
	Button10->Enabled = true;
	Edit5->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{
	Button7->Enabled = false;
	Button6->Enabled = true;
	Button9->Enabled = true;
	Button10->Enabled = true;
	Edit5->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	//
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	if (!Button6->Enabled) {
		if (Memo1->Lines->Count != 0) {
	        Memo1->Lines->Delete(Memo1->Lines->Count);
		} else {
			Memo3->Lines->Add("Error 2. Mail list is clear.");
        }
	} else {
		if (Memo2->Lines->Count != 0) {
	        Memo2->Lines->Delete(Memo1->Lines->Count);
		} else {
			Memo3->Lines->Add("Error 2. Password list is clear.");
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
	if (!Button6->Enabled) {
		Memo1->Lines->Clear();
		Memo3->Lines->Add("Mail list is clear.");
	} else {
		Memo2->Lines->Clear();
		Memo3->Lines->Add("Password list is clear.");
    }
}
//---------------------------------------------------------------------------

