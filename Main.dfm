object FormPrincipal: TFormPrincipal
  Left = 354
  Top = 312
  Width = 560
  Height = 562
  Caption = 
    'Trabajo Especial de Dise'#241'o de Compiladores I - Analizador Sint'#225'c' +
    'tico'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  Position = poScreenCenter
  WindowState = wsMaximized
  PixelsPerInch = 96
  TextHeight = 13
  object Memo: TMemo
    Left = 0
    Top = 0
    Width = 544
    Height = 504
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    OEMConvert = True
    ParentFont = False
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 0
    WantTabs = True
  end
  object MainMenu: TMainMenu
    Left = 16
    Top = 48
    object Archivo: TMenuItem
      Caption = 'Archivo'
      object Abrir1: TMenuItem
        Caption = '&Abrir C'#243'digo Fuente'
        ImageIndex = 0
        OnClick = Abrir1Click
      end
      object Salir: TMenuItem
        Caption = '&Salir'
        OnClick = SalirClick
      end
    end
    object Ver: TMenuItem
      Caption = '&Ver'
      object Errores: TMenuItem
        AutoCheck = True
        Caption = '&Errores'
        OnClick = ErroresClick
      end
      object Tokens: TMenuItem
        AutoCheck = True
        Caption = '&Tokens'
        OnClick = TokensClick
      end
      object TablaSimbolos: TMenuItem
        AutoCheck = True
        Caption = 'Tabla de &Simbolos'
        OnClick = TablaSimbolosClick
      end
      object Sentencias1: TMenuItem
        Caption = '&Estructuras'
        OnClick = Sentencias1Click
      end
    end
    object Ejecutar: TMenuItem
      Caption = '&Ejecutar (F9)'
      Enabled = False
      ShortCut = 120
      OnClick = EjecutarClick
    end
    object Acercade: TMenuItem
      Caption = 'Acerca &de...'
      OnClick = AcercadeClick
    end
  end
  object AbrirFuente: TOpenDialog
    Filter = 'Todos los Archivos (*.*)|*.*'
    Title = 'Abrir Programa Fuente'
    OnCanClose = AbrirFuenteCanClose
    Left = 48
    Top = 48
  end
end
