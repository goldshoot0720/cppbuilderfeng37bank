//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

#include <fstream>
#include <string>
using namespace std;

Tcppbuilderfeng37 *cppbuilderfeng37;
int bank_savings[10] = {};

int Calc_Sum_Saving()
{
	int sum_saving = 0;
	for (int i = 0; i < 10; i++)
	{
		sum_saving += bank_savings[i];
	}
	return sum_saving;
}
//---------------------------------------------------------------------------
__fastcall Tcppbuilderfeng37::Tcppbuilderfeng37(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tcppbuilderfeng37::FormCreate(TObject *Sender)
{
	ifstream myfile ("bank_savings.txt");
	string line;
	int i = 0;
	if (myfile.is_open())
	{
		while ( getline (myfile,line) )
		{
			bank_savings[i] = stoi(line);
			i++;
		}
		myfile.close();
	}
	ComboBox1->Items->Add("(006)合作金庫(5880)");
	ComboBox1->Items->Add("(012)台北富邦(2881)");
	ComboBox1->Items->Add("(013)國泰世華(2882)");
	ComboBox1->Items->Add("(017)兆豐銀行(2886)");
	ComboBox1->Items->Add("(048)王道銀行(2897)");
	ComboBox1->Items->Add("(103)新光銀行(2888)");
	ComboBox1->Items->Add("(700)中華郵政");
	ComboBox1->Items->Add("(808)玉山銀行(2884)");
	ComboBox1->Items->Add("(812)台新銀行(2887)");
	ComboBox1->Items->Add("(822)中國信託(2891)");
	ComboBox1->ItemIndex = 0;
	Edit1->Text = bank_savings[0];
	Edit2->Text = Calc_Sum_Saving();
}
//---------------------------------------------------------------------------
void __fastcall Tcppbuilderfeng37::Button3Click(TObject *Sender)
{
	ShowMessage("㊣高考三級資訊處理榜首㊣\n委任第五職等\n簡任第十二職等\n第12屆臺北市長\n第23任總統\n中央銀行鋒兄分行");
}
//---------------------------------------------------------------------------



void __fastcall Tcppbuilderfeng37::Button1Click(TObject *Sender)
{
	bank_savings[ComboBox1->ItemIndex] = StrToInt(Edit1->Text);
	Edit2->Text = Calc_Sum_Saving();
}
//---------------------------------------------------------------------------

void __fastcall Tcppbuilderfeng37::ComboBox1Change(TObject *Sender)
{
	Edit1->Text = bank_savings[ComboBox1->ItemIndex];
}
//---------------------------------------------------------------------------

void __fastcall Tcppbuilderfeng37::Button2Click(TObject *Sender)
{
	ofstream myfile;
	myfile.open ("bank_savings.txt");
	for (int i = 0; i < 10; i++)
	{
		myfile << bank_savings[i] << "\n";
	}
	myfile.close();
}
//---------------------------------------------------------------------------

