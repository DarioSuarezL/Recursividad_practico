//---------------------------------------------------------------------------

#ifndef Práctico_1H
#define Práctico_1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *Numeros1;
	TMenuItem *Cadenas1;
	TMenuItem *DigitoMayorEj11;
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label1;
	TLabel *Label2;
	TMenuItem *SumaM3Ej21;
	TMenuItem *MovermayorEj31;
	TMenuItem *EstordenadoEj41;
	TMenuItem *Serie1;
	TMenuItem *PalabramaslargaEj11;
	TMenuItem *CantidadvocalesEj21;
	TMenuItem *EliminarletraEjercicio21;
	TMenuItem *PalindromoEj31;
	TMenuItem *ConjuntoEj51;
	TPanel *Panel1;
	TPanel *Panel2;
	TStringGrid *StringGrid1;
	TEdit *Edit3;
	TPanel *Panel3;
	TStringGrid *StringGrid2;
	TEdit *Edit4;
	TEdit *Edit5;
	TMenuItem *Vectores1;
	TMenuItem *Serienumrica11;
	TMenuItem *Serienumrica21;
	TMenuItem *Matrices1;
	TMenuItem *PiramideEj11;
	TMenuItem *EscaleraEj21;
	TMenuItem *InvertirvectorEj31;
	TMenuItem *SumaTrianguloSupEj31;
	TEdit *Edit6;
	TMenuItem *Matriz1Ej411;
	TMenuItem *Matriz2Ej421;
	TMenuItem *MatrizEj431;
	TMenuItem *Limpieza1;
	TMenuItem *LimpiarEdits1;
	TMenuItem *Limpiarvector1;
	TMenuItem *LimpiarMatriz1;
	TMenuItem *Malainterpretacin1;
	TMenuItem *OrdendescendenteEj31;
	TMenuItem *Numeroavector1;
	TMenuItem *Ordenacin1;
	TMenuItem *Bubblesort1;
	TMenuItem *Parcial31;
	TMenuItem *Parcial11;
	TMenuItem *SerieVictor1;
	TMenuItem *Esprimo1;
	TMenuItem *Factorial1;
	TMenuItem *Combinatoria1;
	TMenuItem *MatrizIv11;
	TMenuItem *CantDigitos1;
	TMenuItem *Eliminardesdep1;
	TMenuItem *Palabramascorta1;
	TMenuItem *Matrizrelleno1;
	TMenuItem *PigLatn220211;
	TMenuItem *SerieContreras1;
	TLabel *Label3;
	TLabel *Label4;
	TMenuItem *IvanaExamen11;
	void __fastcall DigitoMayorEj11Click(TObject *Sender);
	void __fastcall SumaM3Ej21Click(TObject *Sender);
	void __fastcall MovermayorEj31Click(TObject *Sender);
	void __fastcall EstordenadoEj41Click(TObject *Sender);
	void __fastcall Serie1Click(TObject *Sender);
	void __fastcall PalabramaslargaEj11Click(TObject *Sender);
	void __fastcall CantidadvocalesEj21Click(TObject *Sender);
	void __fastcall EliminarletraEjercicio21Click(TObject *Sender);
	void __fastcall PalindromoEj31Click(TObject *Sender);
	void __fastcall ConjuntoEj51Click(TObject *Sender);
	void __fastcall Edit3Change(TObject *Sender);
	void __fastcall Edit4Change(TObject *Sender);
	void __fastcall Edit5Change(TObject *Sender);
	void __fastcall Serienumrica11Click(TObject *Sender);
	void __fastcall Serienumrica21Click(TObject *Sender);
	void __fastcall PiramideEj11Click(TObject *Sender);
	void __fastcall EscaleraEj21Click(TObject *Sender);
	void __fastcall InvertirvectorEj31Click(TObject *Sender);
	void __fastcall SumaTrianguloSupEj31Click(TObject *Sender);
	void __fastcall Edit6Change(TObject *Sender);
	void __fastcall Edit6KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit4KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit5KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Edit3KeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall Matriz1Ej411Click(TObject *Sender);
	void __fastcall Matriz2Ej421Click(TObject *Sender);
	void __fastcall MatrizEj431Click(TObject *Sender);
	void __fastcall LimpiarEdits1Click(TObject *Sender);
	void __fastcall Limpiarvector1Click(TObject *Sender);
	void __fastcall LimpiarMatriz1Click(TObject *Sender);
	void __fastcall OrdendescendenteEj31Click(TObject *Sender);
	void __fastcall Numeroavector1Click(TObject *Sender);
	void __fastcall Bubblesort1Click(TObject *Sender);
	void __fastcall Parcial31Click(TObject *Sender);
	void __fastcall Parcial11Click(TObject *Sender);
	void __fastcall SerieVictor1Click(TObject *Sender);
	void __fastcall Esprimo1Click(TObject *Sender);
	void __fastcall Factorial1Click(TObject *Sender);
	void __fastcall Combinatoria1Click(TObject *Sender);
	void __fastcall MatrizIv11Click(TObject *Sender);
	void __fastcall CantDigitos1Click(TObject *Sender);
	void __fastcall Eliminardesdep1Click(TObject *Sender);
	void __fastcall Palabramascorta1Click(TObject *Sender);
	void __fastcall Matrizrelleno1Click(TObject *Sender);
	void __fastcall PigLatn220211Click(TObject *Sender);
	void __fastcall SerieContreras1Click(TObject *Sender);
	void __fastcall IvanaExamen11Click(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
