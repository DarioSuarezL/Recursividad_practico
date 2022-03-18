//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Práctico_1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
			/* *****************************
					Numeros: #1
			   ***************************** */
	unsigned int DigMayor(int _valor){
		if (_valor<10) {
			return _valor;
		}else{
			unsigned int pdt=DigMayor(_valor/10);
			unsigned int Mayor=_valor%10;
				if (Mayor>pdt) {
					return(Mayor);
				}else{
					return pdt;
				}
		}
	}
void __fastcall TForm1::DigitoMayorEj11Click(TObject *Sender)
{
	unsigned int valor=DigMayor(StrToInt(Edit1->Text));
	Edit2->Text=valor;
}
//---------------------------------------------------------------------------
			/* *****************************
					Numeros: #2
			   ***************************** */
	unsigned int SDM3(unsigned int _valor){
		int sum;
		if (_valor<10) {
			if (_valor%3==0) {
				sum=_valor;
			}else{
				sum=0;
			}
		}else{
			sum=SDM3(_valor/10);
			unsigned int dig=_valor%10;
			if (dig%3==0) {
				sum=sum+dig;
			}
		}
		return sum;
	}
void __fastcall TForm1::SumaM3Ej21Click(TObject *Sender)
{
	unsigned int valor=SDM3(StrToInt(Edit1->Text));
	Edit2->Text=valor;
}
//---------------------------------------------------------------------------
			/* *****************************
					Numeros: #3
			   ***************************** */
	void MMayor(unsigned int &_valor){
		if (_valor>9) {
			byte d=_valor%10;
			_valor/=10;
			MMayor(_valor);
			if (_valor%10>d) {
				_valor=(_valor/10)*100+d*10+_valor%10;
			}else{
				_valor=_valor*10+d;
			}
		}
	}
void __fastcall TForm1::MovermayorEj31Click(TObject *Sender)
{
	unsigned int valor=StrToInt(Edit1->Text);
	MMayor(valor);
	Edit2->Text=valor;
}
//---------------------------------------------------------------------------
			/* *****************************
					Numeros: #4
			   ***************************** */
	bool Ordenado(unsigned int _valor){
		byte digit,udigit;
		bool paco;
		if (_valor<10){
			paco=true;
		}else{
			digit=_valor%10;
			_valor=_valor/10;
			paco=Ordenado(_valor);
			udigit=_valor%10;
			if (udigit>digit) {
				paco=false;
			}
		}
		return paco;
	}
void __fastcall TForm1::EstordenadoEj41Click(TObject *Sender)
{
	unsigned int valor=StrToInt(Edit1->Text);
	bool sem=Ordenado(valor);
	if (sem) {
		ShowMessage("Está ordenado");
	}else{
		ShowMessage("No está ordenado");
    }
}
//---------------------------------------------------------------------------
			/* *****************************
					Numeros: #5
			   ***************************** */
	void Serie(int _valor,int p,double &sum){
		String val;
		if (p==_valor) {
			return;
		}else{
			if (p==0) {
				val="1";
                sum=1;
			}else{
				int num=pow(2.0,p+1);
				double x=num;
				double y=num-1;
				x=x/y;
				sum=sum+x;
				val=String(num)+"/"+String(num-1);
			}
			ShowMessage(val);
			Serie(_valor,p+1,sum);
		}
	}
void __fastcall TForm1::Serie1Click(TObject *Sender)
{
	double sum=0;
	String v=InputBox("Serie 1+4/3+8/7+16/15","Numero de elemento:",0);
	Serie(StrToInt(v),0,sum);
	String res=String(sum);
	res="El sumatoria es: "+res;
	ShowMessage(res);
}
//---------------------------------------------------------------------------
			/* *****************************
					Cadenas: #1
			   ***************************** */
	String LongCad(String cad) {
		int length;
		String b,c;
		cad=cad.Trim();
		length=cad.Length();
		cad=cad+' ';
		if (length==0) {
			return ("");
		}else {
			int pos=cad.Pos(' '); // "padre madre hija"
			c=cad.SubString(1,pos-1);
			cad.Delete(1, pos);
			b=LongCad(cad);
			if (c.Length()>=b.Length()){
				b=c;
			}
		}
	  return (b);
	}
void __fastcall TForm1::PalabramaslargaEj11Click(TObject *Sender)
{
	String cad=LongCad(Edit1->Text);
	Edit2->Text=cad;
}
//---------------------------------------------------------------------------
			/* *****************************
					Cadenas: #2
			   ***************************** */
	void ElimPrimLet(String &cad){
		unsigned int Largo=cad.Length();
			if (Largo>0) {
				unsigned int p=cad.LastDelimiter(' ');
				String pal=cad.SubString(p+1,Largo-p);
				cad.SetLength(p-1);
				ElimPrimLet(cad);
				cad=cad+pal.SubString(2,pal.Length()-1)+' ';

			}
	}
void __fastcall TForm1::EliminarletraEjercicio21Click(TObject *Sender)
{
	String cad=Edit1->Text;
	ElimPrimLet(cad);
	Edit2->Text=cad;
}
//---------------------------------------------------------------------------
			/* *****************************
					Cadenas: #3
			   ***************************** */
		char uchar(String c){
			unsigned int L=c.Length();
		return c[L];
		}
		char ichar(String c){
			return c[1];
		}
	bool palindromo(String cad){
		if (cad.Length()<=1) {
			return true;
		}else{
			if (uchar(cad)!=ichar(cad)) {
				return false;
			}else{
				unsigned int L=cad.Length();
				cad.Delete(L,1);
				cad.Delete(1,1);
				return palindromo(cad);
			}
		}
	}
void __fastcall TForm1::PalindromoEj31Click(TObject *Sender)
{
	bool v=palindromo(Edit1->Text);
	if (v) {
		ShowMessage("Si es un palíndromo");
	}else{
		ShowMessage("No es un palindromo");
    }
}
//---------------------------------------------------------------------------
			/* *****************************
					Cadenas: #4
			   ***************************** */
		bool esVocal(char x){
		  bool sw=false ;
		  if ((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u')||(x=='A')||(x=='E')||(x=='I')||(x=='O')||(x=='U')||(x=='á')||(x=='é')||(x=='í')||(x=='ó')||(x=='ú'))
			   sw=true;
		  return (sw);
		}
	int contVocales(String s) {
	  int a=0;
	  int n=s.Length();
	  if (n>0) {
		char ch = s[n];
		s.Delete(n,1);
		a=contVocales(s);
		if (esVocal(ch))
		  a++;
	  }
	  return (a);
	}
void __fastcall TForm1::CantidadvocalesEj21Click(TObject *Sender)
{
	String cad=LongCad(Edit1->Text);
	Edit2->Text=cad;
}
//---------------------------------------------------------------------------
			/* *****************************
					Cadenas: #5
			   ***************************** */
	String PerteneceC(String cad, String cto){
		unsigned int L=cad.Length();
		if(L<=1){
			if (!cto.Pos(cad[1])>0) {
				return ("");
			}else{
				return cad[1];
			}
		}else{
			char let=cad[L];
			cad.Delete(L,1);
			if (cto.Pos(let)>0) {
				return PerteneceC(cad,cto)+let;
			}else{
				return PerteneceC(cad,cto);
			}
		}
	}
void __fastcall TForm1::ConjuntoEj51Click(TObject *Sender)
{
	String cto=InputBox("Conjunto","INGRESE EL CONJUNTO DE LETRAS","");
	String cad=Edit1->Text;
	String c=PerteneceC(cad,cto);
	ShowMessage(c);
}
//---------------------------------------------------------------------------
			/* *****************************
			AJUSTES PARA AL REDIMENSIÓN Y LIMPIEZA DE
					LOS VECTORES Y MATRICES
			   ***************************** */

void __fastcall TForm1::Edit3Change(TObject *Sender)
{
	if (Edit3->Text!="") {
		StringGrid1->ColCount=StrToInt(Edit3->Text);
	}
}
void __fastcall TForm1::Edit3KeyPress(TObject *Sender, System::WideChar &Key)
{
if (!((Key >= '0' && Key <= '9') || Key == '\b'))
	 Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit4Change(TObject *Sender)
{
	if (Edit4->Text!="") {
		StringGrid2->ColCount=StrToInt(Edit4->Text);
	}
}
void __fastcall TForm1::Edit4KeyPress(TObject *Sender, System::WideChar &Key)
{
if (!((Key >= '0' && Key <= '9') || Key == '\b'))
	 Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit6Change(TObject *Sender)
{
	if (Edit6->Text!="") {
		StringGrid2->ColCount=StrToInt(Edit6->Text);
		StringGrid2->RowCount=StrToInt(Edit6->Text);
	}
}
void __fastcall TForm1::Edit6KeyPress(TObject *Sender, System::WideChar &Key)
{
if (!((Key >= '0' && Key <= '9') || Key == '\b'))
	 Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit5Change(TObject *Sender)
{
	if (Edit5->Text!="") {
		StringGrid2->RowCount=StrToInt(Edit5->Text);
	}
}
void __fastcall TForm1::Edit5KeyPress(TObject *Sender, System::WideChar &Key)
{
if (!((Key >= '0' && Key <= '9') || Key == '\b'))
	 Key = 0;
}
//---------------------------------------------------------------------------
			/* *****************************
			  EXTRAS DE LIMPIEZA DE FORMULARIO
						(RECURSIVAS)
			   ***************************** */
	void Limpieza_matriz(TStringGrid *mat,unsigned int cc,unsigned int cf){
		if (cc==mat->ColCount) {
			cc=0;
			cf++;
		}
		if(cf==mat->RowCount) {
			return;
		}else{
			Limpieza_matriz(mat,cc+1,cf);
			mat->Cells[cc][cf]="";
		}
	}
	void Limpieza_vector(TStringGrid *vec,unsigned int i){
		if (i==vec->ColCount-1) {
			vec->Cells[i][0]="";
		}else{
			vec->Cells[i][0]="";
			Limpieza_vector(vec,i+1);
		}
	}
//---------------------------------------------------------------------------
			/* *****************************
					Vectores: #1
			   ***************************** */
	void ser_vec1(TStringGrid *vec, unsigned int n, unsigned int &ter, unsigned int &raz, bool &paco){
		if (n==1) {
			vec->Cells[n-1][0]=2;
		}else{
			ser_vec1(vec,n-1,ter,raz,paco);
				if (paco) {
					ter=ter+raz;
					raz=raz+2;
					vec->Cells[n-1][0]=ter;
					paco=false;
				}else{
					ter=ter*raz;
					raz=raz+2;
					vec->Cells[n-1][0]=ter;
					paco=true;
				}
		}
	}
void __fastcall TForm1::Serienumrica11Click(TObject *Sender)
{
	unsigned int ini=2,t=2;
	bool flag=true;
	ser_vec1(StringGrid1,StringGrid1->ColCount,t,ini,flag);
}
//---------------------------------------------------------------------------
			/* *****************************
					Vectores: #2
			   ***************************** */
	void ser_vec2(TStringGrid *vec, unsigned int n, unsigned int ter){
		if (n==1) {
			vec->Cells[n-1][0]=ter;
		}else{
			vec->Cells[n-1][0]=ter;
			ser_vec2(vec,n-1,ter*2+1); //no cumple con el desapilado
		}
	}
void __fastcall TForm1::Serienumrica21Click(TObject *Sender)
{
	ser_vec2(StringGrid1,StringGrid1->ColCount,2);
}
//---------------------------------------------------------------------------
			/* *****************************
					Vectores: #3
			   ***************************** */
	void quick_sort_inv(TStringGrid *vec,int ini,int fin){
		int piv,izq,der;
		if (ini<fin) {
			piv=StrToInt(vec->Cells[ini][0]);
			izq=ini;
			der=fin;
			while (izq<der){
				while (der>izq && StrToInt(vec->Cells[der][0])<=piv)der--;
				if (der>izq) {
					vec->Cells[izq][0]=vec->Cells[der][0];
					izq++;
				}
				while (izq<der && StrToInt(vec->Cells[izq][0])>=piv)izq++;
				if (izq<der) {
					vec->Cells[der][0]=vec->Cells[izq][0];
					der--;
				}
			}
			vec->Cells[izq][0]=piv;
			quick_sort_inv(vec,ini,izq-1);
			quick_sort_inv(vec,der+1,fin);
		}
	}
void __fastcall TForm1::OrdendescendenteEj31Click(TObject *Sender)
{
	quick_sort_inv(StringGrid1,0,StringGrid1->ColCount-1);
}
//---------------------------------------------------------------------------
			/* *****************************
					Matrices: #1
			   ***************************** */
		void Llenar_vec(TStringGrid *vec,byte izq,byte der,byte lvl,byte mark){
			if (izq==der) {
				vec->Cells[izq][lvl]=mark;
			}else{
				vec->Cells[izq][lvl]=mark;
				Llenar_vec(vec,izq+1,der,lvl,mark);
			}
		}
	void Piramid(TStringGrid *mat, byte inic, byte inif, unsigned int col, unsigned int fil, byte mark){
		if (inif==fil-1) {
			Llenar_vec(mat,inic,col-1,fil-1,mark);
		}else{
			Llenar_vec(mat,inic,col-1,inif,mark);
			Piramid(mat,inic+1,inif+1,col-1,fil,mark+1);
		}
	}
void __fastcall TForm1::PiramideEj11Click(TObject *Sender)
{
	StringGrid2->ColCount=StrToInt(InputBox("Piramide","Ingrese la cantidad de Columnas (Tiene que ser una cantidad impar):",0));
	if (StringGrid2->ColCount%2!=0) {
		Limpieza_matriz(StringGrid2,0,0);
		Limpieza_matriz(StringGrid2,0,0);
		StringGrid2->RowCount=(StringGrid2->ColCount/2)+1;
		byte colu=StringGrid2->ColCount;
		byte fila=StringGrid2->RowCount;
		Piramid(StringGrid2,0,0,colu,fila,0);
	}else{
		ShowMessage("ERROR: El numero de columnas no es impar");
	}
}
//---------------------------------------------------------------------------
			/* *****************************
					Matrices: #2
			   ***************************** */
		void Llenar_vech(TStringGrid *vec,byte ini,byte lim,byte lvl,byte &mark){
			if (ini==lim) {
				vec->Cells[lvl][ini]=mark;
			}else{
				vec->Cells[lvl][ini]=mark;
				mark++;
				Llenar_vech(vec,ini+1,lim,lvl,mark);
			}
		}
	void Escalera(TStringGrid *mat,byte inic,byte inif,byte col,byte fil,byte mark){
		if (inic==col-1) {
			Llenar_vech(mat,inif,fil-1,col-1,mark);
		}else{
			Llenar_vech(mat,inif,fil-1,inic,mark);
			Escalera(mat,inic+1,inif+1,col,fil,mark+1);
		}
	}
void __fastcall TForm1::EscaleraEj21Click(TObject *Sender)
{
	StringGrid2->ColCount=StrToInt(InputBox("Escalera","Ingrese la dimensión de su matriz cuadrada (debe ser impar):",0));
	if (StringGrid2->ColCount%2!=0) {
		Limpieza_matriz(StringGrid2,0,0);
		StringGrid2->RowCount=StringGrid2->ColCount;
		byte colu=StringGrid2->ColCount;
		byte fila=StringGrid2->RowCount;
		byte marca=1;
		Escalera(StringGrid2,0,0,colu,fila,marca);
	}else{
		ShowMessage("ERROR: La longitud no es impar");
	}
}
//---------------------------------------------------------------------------
			/* *****************************
					Matrices: #3
			   ***************************** */
	int SumaTS(TStringGrid *mat,byte indf,byte indc,byte lim){
		int sum;
		if (indc==lim-1) {
			if (indc==indf+1) {
				sum= StrToInt(mat->Cells[indc][indf]);
			}else{
				sum= StrToInt(mat->Cells[indc][indf])+SumaTS(mat,indf+1,indf+2,lim);
			}
		}else{
			sum=StrToInt(mat->Cells[indc][indf])+SumaTS(mat,indf,indc+1,lim);
		}
		return sum;
	}
void __fastcall TForm1::SumaTrianguloSupEj31Click(TObject *Sender)
{
	if (StringGrid2->ColCount==StringGrid2->RowCount) {
		unsigned int dim=StringGrid2->RowCount;
		String res=IntToStr(SumaTS(StringGrid2,0,1,dim));
		ShowMessage("La suma del triangulo es: "+res);
	}else{
		ShowMessage("ERROR: La matriz no es cuadrada, no existe un triangulo superior");
	}
}
//---------------------------------------------------------------------------
			/* *****************************
					Matrices: #4.1
			   ***************************** */
	void GenMat1(TStringGrid *mat,byte fil,byte col,unsigned int &mark){
		if (col==mat->ColCount) {
			col=0;
			fil++;
		}
		if(fil==mat->RowCount) {
			return;
		}else{
			GenMat1(mat,fil,col+1,mark);
			mat->Cells[col][fil]=mark;
			mark++;
		}
	}
void __fastcall TForm1::Matriz1Ej411Click(TObject *Sender)
{
	Limpieza_matriz(StringGrid2,0,0);
	unsigned int pas=1;
	GenMat1(StringGrid2,0,0,pas);
}
//---------------------------------------------------------------------------
			/* *****************************
					Matrices: #4.2
			   ***************************** */
	void GenMat2(TStringGrid *mat,int inif,int inic,unsigned int mark){
		int val=mark*mark;
		if (inic==mat->ColCount) {
			return;
		}else{
			mat->Cells[inic][inif]=val;
			if (inic%2==0) {
				inif++;
				if (inif==mat->RowCount) {
					inic++;
					inif--;
				}
			}else{
				inif--;
				if (inif<0) {
					inic++;
					inif=0;
				}
			}
		}
		GenMat2(mat,inif,inic,mark+1);
	}
void __fastcall TForm1::Matriz2Ej421Click(TObject *Sender)
{
	Limpieza_matriz(StringGrid2,0,0);
	GenMat2(StringGrid2,0,0,1);
}
//---------------------------------------------------------------------------
			/* *****************************
					Matrices: #4.3
			   ***************************** */
	void GenMat3(TStringGrid *mat,int cf,int cc,byte mark,byte mark2){
		if (cf==1 && cc==0) {
			mat->Cells[cc][cf]=mark2;
		}else{
			if (cc==0 && (cf==mat->RowCount-1 || cf>1)) {
				mat->Cells[cc][cf]=mark2;
				GenMat3(mat,cf-1,cc,mark,mark2+1);
			}else{
				if (cf==mat->RowCount-1) {
					if (cc<mat->ColCount-1) {
						mat->Cells[cc][cf]=mark2;
						GenMat3(mat,cf,cc-1,mark,mark2+1);
					}else{
						mat->Cells[cc][cf]=mark;
						GenMat3(mat,cf,cc-1,mark+1,mark2);
					}
				}else{
					if (cc==mat->ColCount-1) {
						mat->Cells[cc][cf]=mark;
						GenMat3(mat,cf+1,cc,mark+1,mark2);
					}else{
						if (cc<mat->ColCount-1) {
							mat->Cells[cc][cf]=mark;
							GenMat3(mat,cf,cc+1,mark+1,mark2);
						}
					}
				}
			}
		}
	}
void __fastcall TForm1::MatrizEj431Click(TObject *Sender)
{
	Limpieza_matriz(StringGrid2,0,0);
	byte mark=1;
	byte mark2=1;
	GenMat3(StringGrid2,0,0,mark,mark2);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::LimpiarEdits1Click(TObject *Sender)
{
	Edit1->Text="";
    Edit2->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Limpiarvector1Click(TObject *Sender)
{
	Limpieza_vector(StringGrid1,0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::LimpiarMatriz1Click(TObject *Sender)
{
	Limpieza_matriz(StringGrid2,0,0);
}
//---------------------------------------------------------------------------
//Error de interpretación del ejercicio 3 de la saga de vectores
		void Intercambiar(TStringGrid *vec,unsigned int c1,unsigned int c2){
			String n;
			n=vec->Cells[c1][0];
			vec->Cells[c1][0]=vec->Cells[c2][0];
			vec->Cells[c2][0]=n;
		}
	void InvVector(TStringGrid *vec,unsigned int mid,unsigned int izq,unsigned int der){    //[1,2,3,4,5,6]
		if (mid<3) {                                                                        // p0 p1 p2 p3 p4 p5
			if (mid%2==0) {
				Intercambiar(vec,izq,der);
			}else{
				return;
			}
		}else{
			Intercambiar(vec,izq,der);
			InvVector(vec,mid-2,izq+1,der-1);
		}
	}
void __fastcall TForm1::InvertirvectorEj31Click(TObject *Sender)
{
	InvVector(StringGrid1,StringGrid1->ColCount,0,StringGrid1->ColCount-1);
}
//---------------------------------------------------------------------------
	void CargarVectornum(TStringGrid *vec, unsigned int &num, unsigned int i){
		if (num<10) {
			vec->Cells[i][0]=num;
		}else{
			unsigned int dig=num%10;
			num=num/10;
			i=log10(float(num))+1;
			vec->Cells[i][0]=dig;
			CargarVectornum(vec,num,i-1);
		}
	}
void __fastcall TForm1::Numeroavector1Click(TObject *Sender)
{
	unsigned int n=StrToInt(InputBox("Ejercicio","Ingrese el numero:",0));
	 CargarVectornum(StringGrid1,n,0);
}
//---------------------------------------------------------------------------
		void Bsort(TStringGrid *vec,byte j,byte i){
			if (j==i-1) {
			if (vec->Cells[j][0] > vec->Cells[j+1][0])
				Intercambiar(vec,j,j+1);
			}else{
			if (StrToInt(vec->Cells[j][0]) > StrToInt(vec->Cells[j+1][0]))
				Intercambiar(vec,j,j+1);
				Bsort(vec,j+1,i);
			}
		}
	void BubbleSort(TStringGrid *vec,unsigned int i){
		if (i==0) return;
		Bsort(vec,0,i);
		BubbleSort(vec,i-1);
	}
void __fastcall TForm1::Bubblesort1Click(TObject *Sender)
{
	BubbleSort(StringGrid1,StringGrid1->ColCount-1);
}
//---------------------------------------------------------------------------
		void VectorExamen(TStringGrid *vec,int cc,int uc, int lvl, int cor){
			if (cc==uc) {
				vec->Cells[cc][lvl]=cor;
			}else{
				vec->Cells[cc][lvl]=cor;
				VectorExamen(vec,cc+1,uc,lvl,cor+1);
			}
		}
	void MatrizExamen(TStringGrid *mat,int cc,int cf,int uc, int uf,int cor){
		if (cf==uf) {
			VectorExamen(mat,cc,uc,cf,cor);
		}else{
			VectorExamen(mat,cc,uc,cf,cor);
			MatrizExamen(mat,cc,cf+1,uc,uf,cor+1);
		}
	}
void __fastcall TForm1::Parcial31Click(TObject *Sender)
{
MatrizExamen(StringGrid2,0,0,StringGrid2->ColCount-1,StringGrid2->RowCount-1,1);
}
//---------------------------------------------------------------------------
		String Repetido(Cardinal n, Cardinal v){
			String r;
			if (n==0) {
				r="";
			}else{
				r=Repetido(n-1,v);
				r+=String(v);
			}
			return r;
		}
	String EjercicioExamen(int num){
	String auxcad;
		if (num<10) {
			auxcad=Repetido(num,num);
		}else{
			unsigned int digact=num%10;
			auxcad=EjercicioExamen((num/10));
			auxcad+=Repetido(digact,digact);
		}
		return auxcad;
	}
void __fastcall TForm1::Parcial11Click(TObject *Sender)
{
Edit2->Text=EjercicioExamen(StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------
	void SerieV(TStringGrid *vec,int val, int i, int n, bool sem){
		if (i==n) {
			vec->Cells[i][0]=IntToStr(val);
		}else{
			vec->Cells[i][0]=IntToStr(val);
			i++;
			if (sem) {
				SerieV(vec,val*2,i,n,false);
			}else{
				SerieV(vec,val+1,i,n,true);
			}
		}
	}
void __fastcall TForm1::SerieVictor1Click(TObject *Sender)
{
String num=InputBox("Seleccione la cantidad de terminos","n=",0);
StringGrid1->ColCount=StrToInt(num);
SerieV(StringGrid1,1,0,StringGrid1->ColCount,true);
}
//---------------------------------------------------------------------------
	bool Primo(int num, int div){
		if(num/2 < div){
			return true;
		}else{
			if (num%div==0) {
				return false;
			}else{
				return Primo(num, div+1);
			}
		}
	}
void __fastcall TForm1::Esprimo1Click(TObject *Sender)
{
String n= InputBox("Ingrese el numero", "n= ", 0);
	if (Primo(StrToInt(n),2)) {
		Edit2->Text= "Es primo";
	}else{
		Edit2->Text= "No es primo";
	}
}
//---------------------------------------------------------------------------
	int Factorial (int num){
		if (num == 0){ //caso base
			return 1;
		}else{ //caso general
			return num*Factorial(num-1);
		}
	}
void __fastcall TForm1::Factorial1Click(TObject *Sender)
{
int n = Edit1->Text.ToInt();
int res=Factorial(n);
Edit2->Text= IntToStr(res);
}
//---------------------------------------------------------------------------
	int Combinatoria(int n, int m){
		if (m<n){
			return (Factorial(n)/(Factorial(m)*Factorial(n-m)));
		}
	}
void __fastcall TForm1::Combinatoria1Click(TObject *Sender)
{
String n= InputBox("Ingrese los numeros para la combinatoria (m<n)", "n= ", 0);
String m= InputBox("Ingrese el termino m", "m= ", 0);
int num1=StrToInt(n);
int num2=StrToInt(m);
int Res=Combinatoria(num1,num2);
Edit2->Text=IntToStr(Res);
}
//---------------------------------------------------------------------------
	void Matriz_Con1(TStringGrid *matriz,unsigned int cf,unsigned int cc, unsigned int ff, unsigned int fc,unsigned int valor){
	//Examen modelo del docente Contreras
		if (cf==ff && cc==fc){
			matriz->Cells[cc][cf]=String(valor);   //IntToStr(valor), valor.ToString, String(valor)
		}else{
			matriz->Cells[cc][cf]=String(valor);
			if (cf==ff){
				Matriz_Con1(matriz,0,cc+1,ff,fc,valor-(matriz->ColCount-2));
				//razon de resta va a se igual a la cantidad de col de la matriz -2
			}else{
				Matriz_Con1(matriz,cf+1,cc,ff,fc,valor+1);
			}
		}
	}
void __fastcall TForm1::MatrizIv11Click(TObject *Sender)
{
int x= StrToInt(InputBox("Ingrese la longitud de la matriz cuadrada","longitud = ",0));
StringGrid2->RowCount=x;
StringGrid2->ColCount=x;
Matriz_Con1(StringGrid2,0,0,StringGrid2->RowCount-1,StringGrid2->ColCount-1,1);
}
//---------------------------------------------------------------------------
		String Repetidor(unsigned int vcs, String cad){   //modelo de examen de Contreras
			if (cad.Length()==vcs){		//	0 = ""
				return cad;
			}else{
				return Repetidor(vcs,String(vcs)+cad);
			}
		}
	String Digitos(unsigned int entero, String acum){
		if (entero<10){
			acum=Repetidor(entero,"") + acum;
			return acum;
		}else{
			int cant=entero%10;
			return Digitos(int(entero/10),Repetidor(cant,"") + acum);
		}
	}
void __fastcall TForm1::CantDigitos1Click(TObject *Sender)
{
String x= Digitos(abs(StrToInt(Edit1->Text)),"");
Edit2->Text=x;
}
//---------------------------------------------------------------------------
		void ElimPos(TStringGrid *vec, unsigned int vcs,unsigned int p_inic,unsigned int p_fin){
			if (p_inic==p_fin+vcs+1){//caso base
				vec->Cells[p_inic][0]=vec->Cells[p_inic+vcs][0];
			}else{
				vec->Cells[p_inic][0]=vec->Cells[p_inic+vcs][0];
				ElimPos(vec,vcs,p_inic+1,p_fin);
			}
		}
void __fastcall TForm1::Eliminardesdep1Click(TObject *Sender)
{
int p=StrToInt(InputBox("Ingrese la posición inicial","p = ",0));
int m=StrToInt(InputBox("Ingrese la cantidad de valores a eliminar","m = ",0));

 if (StringGrid1->ColCount < p+m){
	ShowMessage("ERROR: FUERA DE RANGO");
 }else{
	ElimPos(StringGrid1,m,p,p+m);
	StringGrid1->ColCount=StringGrid1->ColCount-m;
 }
}
//---------------------------------------------------------------------------
	String ShortCad(String cad) { //modelo de examen de Dunnia
		int length;
		String b,c;
		cad=cad.Trim();
		length=cad.Length();
		cad=cad+' ';
		if (length==0) {
			return (cad+" ");
		}else {
			int pos=cad.Pos(' ');
			c=cad.SubString(1,pos-1);
			cad.Delete(1, pos);
			b=ShortCad(cad);
			if (c.Length()<=b.Length()){
				b=c;
			}
		}
	  return (b);
	}
void __fastcall TForm1::Palabramascorta1Click(TObject *Sender)
{
	String cad=ShortCad(Edit1->Text);
	Edit2->Text=cad;
}
//---------------------------------------------------------------------------
		void Rellenar(TStringGrid *matriz, unsigned int c, unsigned int f, unsigned int lim, unsigned int valor,unsigned int limIz){
			if (c==lim && f==lim){
				matriz->Cells[c][f]=valor;
			}else{
				if (c==lim){
					matriz->Cells[c][f]=valor;
					Rellenar(matriz,limIz,f+1,lim,valor,limIz);
				}else{
					matriz->Cells[c][f]=valor;
					Rellenar(matriz,c+1,f,lim,valor,limIz);
				}
			}
		}
	void MatrizR(TStringGrid *matriz, unsigned int valor, unsigned int c, unsigned int f,unsigned int lim){
			if (lim-c==1 || c==lim){
				Rellenar(matriz,c,f,lim,valor,c);
			}else{
				Rellenar(matriz,c,f,lim,valor,c);
				MatrizR(matriz,valor+1,c+1,f+1,lim-1);
			}
	}
void __fastcall TForm1::Matrizrelleno1Click(TObject *Sender)
{
 MatrizR(StringGrid2,1,0,0,StringGrid2->ColCount-1);
}
//---------------------------------------------------------------------------
		 //Pendiente
/*



int BuscaCaracter (String cadena, char caracter)
{
bool x= false;
	for (int i=0; i<cadena.Length() ;i++)
	{
		if (cadena[i]==caracter){
			return i;
			x=true;
		}
	}
	if (!x){
    	return (0);
	}
}
		bool ChoqueConsonantes(String cad, unsigned int i,bool x){
			String Vocales="AaEeIiOoUu";
			 if (i==cad.Length()){
				return x;
			 }else{
				if (BuscaCaracter(Vocales,cad[i])==0 && BuscaCaracter(Vocales,cad[i+1])==0){
					return true;
				}else{
					x=false;
					cad.Delete(i,2);
					return ChoqueConsonantes(cad,i,x);
				}
			 }
		}
	String PigLatin(String cad){
		if (cad == ""){ //Caso Base
			return "";
		}else{  //Caso General o Paso Recursivo
			byte pos = cad.Length()-1;
			String x = cad[pos] + cad[pos+1];
			String acum = "";
			if (ChoqueConsonantes(cad.SubString(pos,4),0,false)){
				acum = acum + cad.SubString(pos,3);
			}else{
				acum = acum + cad.SubString(pos,2);
			}
			cad = cad.Delete(pos,2);
			return acum + PigLatin(cad);
		}
	}





	*/
void __fastcall TForm1::PigLatn220211Click(TObject *Sender)
{
 /*String x = PigLatin(Edit1->Text);
 Edit2->Text = x;*/
}
//---------------------------------------------------------------------------

	void Mayormenor(TStringGrid *matriz, int &May, int &men, unsigned int cc, unsigned int cf, unsigned int fc, unsigned int ff){
		 int actual = StrToInt(matriz->Cells[cc][cf]);
		 if(cc>=fc && cf>=ff){  //Caso base
				if (actual >= May){
					May = actual;
				}
				if (actual <= men){
					men = actual;
				}


		 }else{ //Caso general
				if (actual >= May){
					May = actual;
				}
				if (actual <= men){
					men = actual;
				}

			if (cc>=fc){
				Mayormenor(matriz,May,men,0,cf+1,fc,ff);
			}else{
				Mayormenor(matriz,May,men,cc+1,cf,fc,ff);
			}

		 }
	}

void __fastcall TForm1::SerieContreras1Click(TObject *Sender)
{ // Algoritmo que saca el menor y mayor de una grilla bidimensional
int M=-32768;
int n=32768;
	Mayormenor(StringGrid2,M,n,0,0,StringGrid2->ColCount-1,StringGrid2->RowCount-1);
 Label3->Caption="El numero mayor es: "+String(M);
 Label4->Caption="El numero menor es: "+String(n);
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

