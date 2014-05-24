object Form1: TForm1
  Left = 357
  Top = 182
  Width = 754
  Height = 471
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -23
  Font.Name = 'Arial'
  Font.Style = []
  OldCreateOrder = False
  OnKeyUp = OnKeyUp
  PixelsPerInch = 120
  TextHeight = 26
  object Label1: TLabel
    Left = 24
    Top = 88
    Width = 110
    Height = 26
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090':'
  end
  object Lbl_result: TLabel
    Left = 144
    Top = 88
    Width = 6
    Height = 26
  end
  object Edit1: TEdit
    Left = 24
    Top = 24
    Width = 265
    Height = 34
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 432
    Top = 24
    Width = 289
    Height = 34
    TabOrder = 1
    OnKeyUp = OnKeyUp
  end
  object Btn_change: TButton
    Left = 24
    Top = 136
    Width = 697
    Height = 33
    Caption = #1055#1086#1084#1077#1085#1103#1090#1100' '#1084#1077#1089#1090#1072#1084#1080
    TabOrder = 2
    OnClick = Btn_changeClick
  end
  object Btn_add: TButton
    Left = 24
    Top = 184
    Width = 697
    Height = 33
    Caption = #1057#1083#1086#1078#1080#1090#1100
    TabOrder = 3
    OnClick = Btn_addClick
  end
  object Btn_sub: TButton
    Left = 24
    Top = 232
    Width = 697
    Height = 33
    Caption = #1042#1099#1095#1077#1089#1090#1100
    TabOrder = 4
    OnClick = Btn_subClick
  end
  object Btn_mult: TButton
    Left = 24
    Top = 280
    Width = 697
    Height = 33
    Caption = #1059#1084#1085#1086#1078#1080#1090#1100
    TabOrder = 5
    OnClick = Btn_multClick
  end
  object Btn_devide: TButton
    Left = 24
    Top = 328
    Width = 697
    Height = 33
    Caption = #1056#1072#1079#1076#1077#1083#1080#1090#1100
    TabOrder = 6
    OnClick = Btn_devideClick
  end
  object Btn_pow: TButton
    Left = 24
    Top = 376
    Width = 697
    Height = 33
    Caption = #1042#1086#1079#1074#1077#1089#1090#1080' '#1074' '#1089#1090#1077#1087#1077#1085#1100
    TabOrder = 7
    OnClick = Btn_powClick
  end
end
