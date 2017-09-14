//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#include <fstream.h>
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
	if (Edit1->Text.Length() != 0 && Edit2->Text.Length() != 0) {
		Button1->Enabled = true; 
	} else {
		Button1->Enabled = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit2Change(TObject *Sender)
{
	if (Edit1->Text.Length() != 0 && Edit2->Text.Length() != 0) {
		Button1->Enabled = true;
	} else {
		Button1->Enabled = false;
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
	int len_text2 = 5;
	String *str_text2 = new String[len_text2];
	str_text2[0] = "gmail";
	str_text2[1] = "hotmail";
	str_text2[2] = "yahoo";
	str_text2[3] = "aol";
	str_text2[4] = "zoho";
	//----------------------------------------------
	int len_text3 = 1;
	String *str_text3 = new String[len_text3];
	str_text3[0] = "com";
	//str_text3[1] = "org";
	//str_text3[2] = "net";
	//----------------------------------------------
	int indsob = 0, inddot = 0;
	//----------------------------------------------
	for (int i = 1; i <= Edit1->Text.Length(); i++) {
		if (Edit1->Text[i] == '@') {
			sobaka = true;
			indsob = i;
			if (i == 1) {
				break;
			} else {
                text1 = true;
			}
		}
		if (Edit1->Text[i] == '.') {
			dot = true;
			inddot = i;
			if (i == 0) {
                break;
			} else {
				if (Edit1->Text[i-1] == '@') {
					break;
				} else {
					text2 = true;
					for (int j = 0; j < len_text2; j++) {
						if (Edit1->Text.SubString(indsob+1, inddot-indsob-1) == str_text2[j]) {
							break;
						}
						if (j == len_text2-1) {
							text2 = false;
						}
					}
				}
			}
			if (i == Edit1->Text.Length()) {
				break;
			} else {
				text3 = true;
				for (int j = 0; j < len_text3; j++) {
					if (Edit1->Text.SubString(inddot+1, Edit1->Text.Length()-1) == str_text3[j]) {
                        break;
					} else {
                        text3 = false;
                    }
				}
				break;
			}
		}
	}
	if (sobaka && dot && text1 && text2 && text3) {    
		Memo1->Lines->Add(Edit1->Text);
		Edit1->Text = "";
		Memo2->Lines->Add(Edit2->Text);
		Edit2->Text = "";
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
			Memo3->Lines->Add("	no text after '@' or incorrect mail");
			Memo3->Lines->Add("		correct mails:");
			for (int i = 0; i < len_text2; i++) {
				Memo3->Lines->Add("			" + str_text2[i]);
			}
		}
		if (!text3) {
			Memo3->Lines->Add("	no text after '.' or incorrect domain");
			Memo3->Lines->Add("		correct domais:");
			for (int i = 0; i < len_text3; i++) {
				Memo3->Lines->Add("			" + str_text3[i]);
			}
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
	if (Memo1->Lines->Count != 0 && Memo2->Lines->Count != 0) {
		for (int i = 0; i < Memo1->Lines->Count; i++) {
		   	Memo3->Lines->Add("Trying mail: " + Memo1->Lines->Strings[i] + " password: " + Memo2->Lines->Strings[i]);
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

void __fastcall TForm1::Button8Click(TObject *Sender)
{
	if (Edit5->Text.ToInt() > 0) {
		if (Memo1->Lines->Count != 0) {
			Memo1->Lines->Delete(Edit5->Text.ToInt()-1);
		} else {
			Memo3->Lines->Add("Error 2. Mail list is clear.");
		}
		if (Memo2->Lines->Count != 0) {
			Memo2->Lines->Delete(Edit5->Text.ToInt()-1);
		} else {
			Memo3->Lines->Add("Error 2. Password list is clear.");
		}
	} else {
        Memo3->Lines->Add("Error 3. Index incorrect. Index must be > 0.");
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button9Click(TObject *Sender)
{
	if (Memo1->Lines->Count != 0) {
		Memo1->Lines->Delete(Memo1->Lines->Count-1);
	} else {
		Memo3->Lines->Add("Error 2. Mail list is clear.");
	}
	if (Memo2->Lines->Count != 0) {
		Memo2->Lines->Delete(Memo1->Lines->Count-1);
	} else {
		Memo3->Lines->Add("Error 2. Password list is clear.");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button10Click(TObject *Sender)
{
	Memo1->Lines->Clear();
	Memo3->Lines->Add("Mail list is clear.");
	Memo2->Lines->Clear();
	Memo3->Lines->Add("Password list is clear.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	ifstream fi(Edit3->Text.c_str());
	if (fi.is_open()) {
		fi.close();
		Memo5->Lines->LoadFromFile(Edit3->Text);
		for (int i = 0; i < Memo5->Lines->Count; i++) {
			bool fatr = false;
			String mail = "", password = "";
			for (int j = 1; j <= Memo5->Lines->Strings[i].Length(); j++) {
				if (Memo5->Lines->Strings[i][j] == ':') {
					fatr = true;
					continue;
				}
				if (!fatr) {
                	mail += Memo5->Lines->Strings[i][j];    
				} else {
                	password += Memo5->Lines->Strings[i][j];
                }
			}
			Memo1->Lines->Add(mail);
			Memo2->Lines->Add(password);
		}
	} else {
        Memo3->Lines->Add("Error 4. Can't open file. Please check file or path file");
		fi.close();
	}
	Memo5->Lines->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Memo3Change(TObject *Sender)
{
	Memo3->Lines->SaveToFile("Log.txt");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Memo4Change(TObject *Sender)
{
	Memo4->Lines->SaveToFile("Valid.txt");
}
//---------------------------------------------------------------------------

