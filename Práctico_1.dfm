object Form1: TForm1
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Pr'#225'ctico1 (Recursividad)'
  ClientHeight = 612
  ClientWidth = 582
  Color = clBackground
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Panel3: TPanel
    Left = 8
    Top = 242
    Width = 562
    Height = 359
    TabOrder = 2
    object Label3: TLabel
      Left = 27
      Top = 304
      Width = 4
      Height = 16
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 27
      Top = 326
      Width = 4
      Height = 16
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object StringGrid2: TStringGrid
      Left = 11
      Top = 51
      Width = 542
      Height = 238
      ColCount = 8
      FixedCols = 0
      RowCount = 8
      FixedRows = 0
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
      TabOrder = 0
    end
    object Edit4: TEdit
      Left = 56
      Top = 16
      Width = 102
      Height = 21
      TabOrder = 1
      TextHint = 'Columnas:'
      OnChange = Edit4Change
      OnKeyPress = Edit4KeyPress
    end
    object Edit5: TEdit
      Left = 399
      Top = 16
      Width = 102
      Height = 21
      TabOrder = 2
      TextHint = 'Filas:'
      OnChange = Edit5Change
      OnKeyPress = Edit5KeyPress
    end
  end
  object Panel1: TPanel
    Left = 8
    Top = 17
    Width = 562
    Height = 65
    TabOrder = 0
    object Label1: TLabel
      Left = 27
      Top = 17
      Width = 63
      Height = 16
      Caption = 'Entradas:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 351
      Top = 17
      Width = 50
      Height = 16
      Caption = 'Salidas:'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -13
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 96
      Top = 20
      Width = 121
      Height = 21
      TabOrder = 0
    end
    object Edit2: TEdit
      Left = 407
      Top = 16
      Width = 121
      Height = 21
      TabOrder = 1
    end
  end
  object Panel2: TPanel
    Left = 8
    Top = 104
    Width = 562
    Height = 113
    TabOrder = 1
    object StringGrid1: TStringGrid
      Left = 11
      Top = 43
      Width = 542
      Height = 48
      ColCount = 8
      FixedCols = 0
      RowCount = 1
      FixedRows = 0
      Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing]
      TabOrder = 0
    end
    object Edit3: TEdit
      Left = 192
      Top = 16
      Width = 161
      Height = 21
      TabOrder = 1
      TextHint = 'Longitud de vector:'
      OnChange = Edit3Change
      OnKeyPress = Edit3KeyPress
    end
  end
  object Edit6: TEdit
    Left = 224
    Top = 256
    Width = 121
    Height = 21
    TabOrder = 3
    TextHint = 'Matriz Cuadrada:'
    OnChange = Edit6Change
    OnKeyPress = Edit6KeyPress
  end
  object MainMenu1: TMainMenu
    Left = 24
    Top = 8
    object Numeros1: TMenuItem
      Caption = 'Numeros:'
      object DigitoMayorEj11: TMenuItem
        Caption = 'Digito Mayor (Ej 1)'
        OnClick = DigitoMayorEj11Click
      end
      object SumaM3Ej21: TMenuItem
        Caption = 'Suma M3 (Ej 2)'
        OnClick = SumaM3Ej21Click
      end
      object MovermayorEj31: TMenuItem
        Caption = 'Mover mayor (Ej 3)'
        OnClick = MovermayorEj31Click
      end
      object EstordenadoEj41: TMenuItem
        Caption = 'Est'#225' ordenado? (Ej 4)'
        OnClick = EstordenadoEj41Click
      end
      object Serie1: TMenuItem
        Caption = 'Serie (Ej 5)'
        OnClick = Serie1Click
      end
      object Esprimo1: TMenuItem
        Caption = 'Es primo?'
        OnClick = Esprimo1Click
      end
      object Factorial1: TMenuItem
        Caption = 'Factorial'
        OnClick = Factorial1Click
      end
      object Combinatoria1: TMenuItem
        Caption = 'Combinatoria'
        OnClick = Combinatoria1Click
      end
    end
    object Cadenas1: TMenuItem
      Caption = 'Cadenas:'
      object PalabramaslargaEj11: TMenuItem
        Caption = 'Palabra mas larga (Ej 1)'
        OnClick = PalabramaslargaEj11Click
      end
      object EliminarletraEjercicio21: TMenuItem
        Caption = 'Eliminar letra (Ej 2)'
        OnClick = EliminarletraEjercicio21Click
      end
      object PalindromoEj31: TMenuItem
        Caption = 'Palindromo (Ej 3)'
        OnClick = PalindromoEj31Click
      end
      object CantidadvocalesEj21: TMenuItem
        Caption = 'Cantidad vocales (Ej 4)'
        OnClick = CantidadvocalesEj21Click
      end
      object ConjuntoEj51: TMenuItem
        Caption = 'Conjunto (Ej 5)'
        OnClick = ConjuntoEj51Click
      end
      object CantDigitos1: TMenuItem
        Caption = 'Cant. Digitos'
        OnClick = CantDigitos1Click
      end
      object Palabramascorta1: TMenuItem
        Caption = 'Palabra mas corta'
        OnClick = Palabramascorta1Click
      end
      object PigLatn220211: TMenuItem
        Caption = 'Pig Lat'#237'n (2-2021)'
        OnClick = PigLatn220211Click
      end
    end
    object Vectores1: TMenuItem
      Caption = 'Vectores:'
      object Serienumrica11: TMenuItem
        Caption = 'Serie num'#233'rica 1'
        OnClick = Serienumrica11Click
      end
      object Serienumrica21: TMenuItem
        Caption = 'Serie num'#233'rica 2'
        OnClick = Serienumrica21Click
      end
      object OrdendescendenteEj31: TMenuItem
        Caption = 'Orden descendente (Ej 3)'
        OnClick = OrdendescendenteEj31Click
      end
      object SerieVictor1: TMenuItem
        Caption = 'Serie Victor'
        OnClick = SerieVictor1Click
      end
      object Eliminardesdep1: TMenuItem
        Caption = 'Eliminar desde p'
        OnClick = Eliminardesdep1Click
      end
    end
    object Matrices1: TMenuItem
      Caption = 'Matrices: '
      object PiramideEj11: TMenuItem
        Caption = 'Piramide (Ej 1)'
        OnClick = PiramideEj11Click
      end
      object EscaleraEj21: TMenuItem
        Caption = 'Escalera (Ej 2)'
        OnClick = EscaleraEj21Click
      end
      object SumaTrianguloSupEj31: TMenuItem
        Caption = 'SumaTrianguloSup (Ej 3)'
        OnClick = SumaTrianguloSupEj31Click
      end
      object Matriz1Ej411: TMenuItem
        Caption = 'Matriz 1 (Ej 4.1)'
        OnClick = Matriz1Ej411Click
      end
      object Matriz2Ej421: TMenuItem
        Caption = 'Matriz 2 (Ej 4.2)'
        OnClick = Matriz2Ej421Click
      end
      object MatrizEj431: TMenuItem
        Caption = 'Matriz (Ej 4.3)'
        OnClick = MatrizEj431Click
      end
      object MatrizIv11: TMenuItem
        Caption = 'Matriz Iv 1'
        OnClick = MatrizIv11Click
      end
      object Matrizrelleno1: TMenuItem
        Caption = 'Matriz relleno'
        OnClick = Matrizrelleno1Click
      end
      object SerieContreras1: TMenuItem
        Caption = 'Examen Contreras'
        OnClick = SerieContreras1Click
      end
    end
    object Limpieza1: TMenuItem
      Caption = 'Limpieza:'
      object LimpiarEdits1: TMenuItem
        Caption = 'Limpiar Edit'#39's'
        OnClick = LimpiarEdits1Click
      end
      object Limpiarvector1: TMenuItem
        Caption = 'Limpiar vector'
        OnClick = Limpiarvector1Click
      end
      object LimpiarMatriz1: TMenuItem
        Caption = 'Limpiar Matriz'
        OnClick = LimpiarMatriz1Click
      end
      object IvanaExamen11: TMenuItem
        Caption = 'IvanaExamen1'
        OnClick = IvanaExamen11Click
      end
    end
    object Malainterpretacin1: TMenuItem
      Caption = 'Extras'
      object InvertirvectorEj31: TMenuItem
        Caption = 'Invertir vector (Ej 3)'
        OnClick = InvertirvectorEj31Click
      end
      object Numeroavector1: TMenuItem
        Caption = 'Numero a vector'
        OnClick = Numeroavector1Click
      end
      object Parcial31: TMenuItem
        Caption = 'Parcial (3)'
        OnClick = Parcial31Click
      end
      object Parcial11: TMenuItem
        Caption = 'Parcial (1)'
        OnClick = Parcial11Click
      end
    end
    object Ordenacin1: TMenuItem
      Caption = 'Ordenaci'#243'n'
      object Bubblesort1: TMenuItem
        Caption = 'Bubble sort'
        OnClick = Bubblesort1Click
      end
    end
  end
end
