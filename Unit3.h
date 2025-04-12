//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class Tcppbuilderfeng37 : public TForm
{
__published:	// IDE-managed Components
	TComboBox *ComboBox1;
	TEdit *Edit1;
	TEdit *Edit2;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TLabel  *Label2;
	TLabel  *Label3;
	TLabel  *Label4;
	TLabel *Label5;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall Tcppbuilderfeng37(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tcppbuilderfeng37 *cppbuilderfeng37;
//---------------------------------------------------------------------------
#endif
