object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'Project MP by Krip4yk'
  ClientHeight = 588
  ClientWidth = 650
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
    Width = 635
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
    OnChange = Memo3Change
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
    Top = 35
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
    Left = 89
    Top = 62
    Width = 75
    Height = 38
    Cursor = crHandPoint
    Caption = 'Add'
    Enabled = False
    TabOrder = 5
    OnClick = Button1Clic
  end
  object Button3: TButton
    Left = 8
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Add from file:'
    Enabled = False
    TabOrder = 6
    OnClick = Button3Click
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
    TabOrder = 7
    OnChange = Memo4Change
  end
  object Edit3: TEdit
    Left = 89
    Top = 116
    Width = 172
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
    TabOrder = 8
    OnChange = Edit3Change
  end
  object Button5: TButton
    Left = 160
    Top = 174
    Width = 89
    Height = 83
    Caption = 'Start'
    TabOrder = 9
    OnClick = Button5Click
  end
  object Edit5: TEdit
    Left = 89
    Top = 174
    Width = 41
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
    TabOrder = 10
    OnChange = Edit5Change
  end
  object Button8: TButton
    Left = 8
    Top = 172
    Width = 75
    Height = 25
    Caption = 'Delete at :'
    Enabled = False
    TabOrder = 11
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 8
    Top = 203
    Width = 75
    Height = 25
    Caption = 'Delete last'
    TabOrder = 12
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 8
    Top = 232
    Width = 75
    Height = 25
    Caption = 'Clear all'
    TabOrder = 13
    OnClick = Button10Click
  end
  object Memo5: TMemo
    Left = 649
    Top = 35
    Width = 185
    Height = 126
    TabOrder = 14
    Visible = False
  end
end
