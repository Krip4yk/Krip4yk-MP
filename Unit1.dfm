object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'Project MP by Krip4yk'
  ClientHeight = 588
  ClientWidth = 837
  Color = clNavy
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 173
    Width = 45
    Height = 13
    Caption = 'From file:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 88
    Top = 173
    Width = 26
    Height = 13
    Caption = 'Path:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Memo1: TMemo
    Left = 267
    Top = 8
    Width = 185
    Height = 409
    Hint = 'Add mail like (some@somemail.com)'
    Color = clHotLight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ReadOnly = True
    ScrollBars = ssBoth
    ShowHint = True
    TabOrder = 0
  end
  object Memo2: TMemo
    Left = 458
    Top = 8
    Width = 185
    Height = 409
    Hint = 'Add password'
    Color = clHotLight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ReadOnly = True
    ScrollBars = ssBoth
    ShowHint = True
    TabOrder = 1
  end
  object Memo3: TMemo
    Left = 8
    Top = 423
    Width = 821
    Height = 157
    Hint = 'Log'
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clGreen
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ReadOnly = True
    ScrollBars = ssBoth
    ShowHint = True
    TabOrder = 2
  end
  object Edit1: TEdit
    Left = 40
    Top = 8
    Width = 185
    Height = 21
    Hint = 'sometext@somemail.domen'
    Color = clHotLight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    OnChange = Edit1Change
  end
  object Edit2: TEdit
    Left = 40
    Top = 79
    Width = 185
    Height = 21
    Color = clHotLight
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 4
    OnChange = Edit2Change
  end
  object Button1: TButton
    Left = 88
    Top = 35
    Width = 75
    Height = 38
    Cursor = crHandPoint
    Caption = 'Add mail'
    Enabled = False
    TabOrder = 5
    OnClick = Button1Clic
  end
  object Button2: TButton
    Left = 88
    Top = 106
    Width = 75
    Height = 38
    Caption = 'Add password'
    Enabled = False
    TabOrder = 6
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 8
    Top = 192
    Width = 75
    Height = 25
    Caption = 'Add mail'
    Enabled = False
    TabOrder = 7
  end
  object Button4: TButton
    Left = 8
    Top = 223
    Width = 75
    Height = 25
    Caption = 'Ass password'
    Enabled = False
    TabOrder = 8
  end
  object Memo4: TMemo
    Left = 8
    Top = 270
    Width = 253
    Height = 147
    Hint = 'Result'
    Color = 4194432
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ReadOnly = True
    ScrollBars = ssBoth
    ShowHint = True
    TabOrder = 9
  end
  object Edit3: TEdit
    Left = 89
    Top = 196
    Width = 172
    Height = 21
    Hint = 'sometext@somemail.domen'
    Color = clHotLight
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 10
    OnChange = Edit3Change
  end
  object Edit4: TEdit
    Left = 89
    Top = 227
    Width = 172
    Height = 21
    Hint = 'sometext@somemail.domen'
    Color = clHotLight
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 11
    OnChange = Edit4Change
  end
  object Button5: TButton
    Left = 664
    Top = 351
    Width = 145
    Height = 58
    Caption = 'Start'
    TabOrder = 12
    OnClick = Button5Click
  end
  object Edit5: TEdit
    Left = 760
    Top = 54
    Width = 41
    Height = 21
    Hint = 'sometext@somemail.domen'
    Color = clHotLight
    Enabled = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 13
    OnChange = Edit5Change
  end
  object Button8: TButton
    Left = 664
    Top = 52
    Width = 75
    Height = 25
    Caption = 'Delete at :'
    Enabled = False
    TabOrder = 14
    OnClick = Button8Click
  end
  object Button6: TButton
    Left = 664
    Top = 21
    Width = 75
    Height = 25
    Caption = 'Mail'
    TabOrder = 15
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 745
    Top = 21
    Width = 75
    Height = 25
    Caption = 'Password'
    TabOrder = 16
    OnClick = Button7Click
  end
  object Button9: TButton
    Left = 664
    Top = 83
    Width = 75
    Height = 25
    Caption = 'Delete last'
    Enabled = False
    TabOrder = 17
    OnClick = Button9Click
  end
  object Panel1: TPanel
    Left = 649
    Top = 147
    Width = 180
    Height = 113
    Caption = 'Working...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 18
  end
  object Panel2: TPanel
    Left = 8
    Top = 192
    Width = 253
    Height = 72
    Caption = 'Working...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 19
  end
  object Button10: TButton
    Left = 664
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Clear all'
    Enabled = False
    TabOrder = 20
    OnClick = Button10Click
  end
end
